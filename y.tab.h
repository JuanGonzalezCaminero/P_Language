/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    EOL = 259,
    NUMBER = 260,
    STRING = 261,
    IF = 262,
    WHILE = 263,
    ELSE = 264,
    SIN = 265,
    COS = 266,
    TAN = 267,
    ASIN = 268,
    ACOS = 269,
    ATAN = 270,
    LOG = 271,
    LOG10 = 272,
    EXP = 273,
    WRITE = 274,
    READ = 275,
    EQ = 276,
    NEQ = 277,
    NOT = 278,
    LESS = 279,
    LEQ = 280,
    GREATER = 281,
    GEQ = 282,
    AND = 283,
    OR = 284,
    FOR = 285
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define EOL 259
#define NUMBER 260
#define STRING 261
#define IF 262
#define WHILE 263
#define ELSE 264
#define SIN 265
#define COS 266
#define TAN 267
#define ASIN 268
#define ACOS 269
#define ATAN 270
#define LOG 271
#define LOG10 272
#define EXP 273
#define WRITE 274
#define READ 275
#define EQ 276
#define NEQ 277
#define NOT 278
#define LESS 279
#define LEQ 280
#define GREATER 281
#define GEQ 282
#define AND 283
#define OR 284
#define FOR 285

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 20 "pcc.y" /* yacc.c:1921  */

    struct sStackType {
    unsigned char   flag;
        union {
        double         vNumber;
        char          *vStr;
        struct ast_s  *ast;
        }   u;
    }   s;

#line 129 "y.tab.h" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
