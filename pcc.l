%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
#include "stduse.h"
#include "astree.h"
#include "token.h"

#define KWLEN  14
char *keywords[KWLEN] = {
	"if",
	"while",
	"else",
	"sin",
	"cos",
	"tan",
	"asin",
	"acos",
	"atan",
	"log",
	"log10",
	"exp",
	"read",
	"write",
};

unsigned keycodes[KWLEN] = {
    IF,
    WHILE,
    ELSE,
    SIN,
    COS,
    TAN,
    ASIN,
    ACOS,
    ATAN,
    LOG,
    LOG10,
    EXP,
    READ,
    WRITE,
};

static void lower(char *s);
static char *readStr(void);

int yywrap(void) { return 1; }

%}
WSPC      ([ \t\f\r])

LETTER    ([_a-zA-Z])
DIGIT     ([0-9])
IDENT     ({LETTER}({LETTER}|{DIGIT})*)

DIGITS    ({DIGIT}+)

IDENTIFIER	({LETTER}({LETTER}|{DIGIT})*)

EXP       ([eE][-+]?{DIGITS})

FLOAT1    ({DIGITS}"."{DIGITS})
FLOAT2    ({DIGITS}{EXP})
FLOAT3    ({DIGITS}"."{DIGITS}{EXP})

STRSTART  (["])

STREND (["])

EOL	  ([';'])

NL	  (['\n'])

BLOCKS		  ([(){}])

OPLOGIC       (">"|"<"|">="|"<="|"=="|"!="|"!"|"&&"|"||")
OPARITHMETIC  ([+-/%^*])
EQUALS		  ("=")

%%
{EOL}				{return yytext[0];}

{WSPC}              ;

{IDENTIFIER}	{
				//printf("IDENTIFIER\n");
				unsigned i = 0;
                int r=-1;
                char *res;

                //If the identifier is a keyword, return the appropiate token
                while (i<KWLEN) {
                    if ((r=strcmp(keywords[i],yytext))==0){return keycodes[i];}
                    ++i;
                }

                //Assign the name of the identifier to the yylval variable
                yylval.s.u.vStr =strdup(yytext);
                return IDENTIFIER;
				}

{NL}			{
				yylineno++;
				//printf("EOL\n");
				//return EOL;
				}

{STRSTART}      {
	              yyStr(yylval) = readStr();
	              yyFlag(yylval) = fSTR;
	              
	              return STRING;
	            }

{BLOCKS}		{
				return yytext[0];
				}

{OPLOGIC}		{
				//printf("LOGIC\n");
				//return OPLOGIC;
					if (strcmp(yytext, "==") == 0) 
					{
					  return EQ;
					} else if (strcmp(yytext, "!=") == 0) 
					{
					  return NEQ;
					} else if (strcmp(yytext, "!") == 0) 
					{
					  return NOT;
					} else if (strcmp(yytext, "<") == 0) 
					{
					  return LESS;
					} else if (strcmp(yytext, "<=") == 0) 
					{
					  return LEQ;
					} else if (strcmp(yytext, ">") == 0) 
					{
					  return GREATER;
					} else if (strcmp(yytext, ">=") == 0) 
					{
					  return GEQ;
					} else if (strcmp(yytext, "&&") == 0) 
					{
					  return AND;
					} else if (strcmp(yytext, "||") == 0) 
					{
					  return OR;
					}
				}

{OPARITHMETIC}	{
				//printf("ARITHMETIC\n");
				//return OPARITHMETIC;
				return yytext[0];
				}

{EQUALS}		{
				//printf("EQUALS\n");
				return yytext[0];
				}

{DIGITS}|{FLOAT1}|{FLOAT2}|{FLOAT3}		{
										//printf("NUMBER\n");
										//Asignamos a yylval el valor leído
										sscanf(yytext,"%lf",&( yyFloat(yylval) ));
										return NUMBER;
										}

.			{}
%%

static void lower(char *s) {
    unsigned l = strlen(s);
    while (l>0) {
        --l;
        if (s[l]>='A' && s[l]<='Z') s[l] = s[l]+'a'-'A';
    }
}

static void addStr(char **s, unsigned long *len, char c) {
  char buf[2];
  buf[0] = c;
  buf[1] = '\0';

  if (strlen(*s) >= *len) {
    char *ss;
    ss=malloc(*len+1025);
    strcpy(ss,*s);
    free(*s);
    *s=ss;
    *len = *len+1024;
  }
  
  strcat(*s,buf);
}


static char *readStr(void) {
  int c;
  char *buff;
  unsigned long len = 256;

  buff=malloc(257);
  buff[0]='\0';

  do {
    c = input();

    if (c < ' ') prError(yylineno,"Unexpected symbol in string literal [%d]\n",c,NULL);
    if (c == '"') break;

    if (c=='\\') {
      c == input();
      if (c!='\\' && c !='"') {
        unput(c);
        c = '\\';
      }
    }

    addStr(&buff,&len,c);
    
  } while (1);

  return buff;
}