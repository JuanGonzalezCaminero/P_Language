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
    OPLOGIC = 262,
    OPARITHMETIC = 263,
    EQUALS = 264,
    IF = 265,
    WHILE = 266,
    ELSE = 267,
    SIN = 268,
    COS = 269,
    TAN = 270,
    ASIN = 271,
    ACOS = 272,
    ATAN = 273,
    LOG = 274,
    LOG10 = 275,
    EXP = 276,
    WRITE = 277,
    READ = 278,
    EQ = 279,
    NEQ = 280,
    NOT = 281,
    LESS = 282,
    LEQ = 283,
    GREATER = 284,
    GEQ = 285,
    AND = 286,
    OR = 287
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define EOL 259
#define NUMBER 260
#define STRING 261
#define OPLOGIC 262
#define OPARITHMETIC 263
#define EQUALS 264
#define IF 265
#define WHILE 266
#define ELSE 267
#define SIN 268
#define COS 269
#define TAN 270
#define ASIN 271
#define ACOS 272
#define ATAN 273
#define LOG 274
#define LOG10 275
#define EXP 276
#define WRITE 277
#define READ 278
#define EQ 279
#define NEQ 280
#define NOT 281
#define LESS 282
#define LEQ 283
#define GREATER 284
#define GEQ 285
#define AND 286
#define OR 287

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "pcc.y" /* yacc.c:1921  */

    struct sStackType {
    unsigned char   flag;
        union {
        double         vNumber;
        char          *vStr;
        struct ast_s  *ast;
        }   u;
    }   s;

#line 133 "y.tab.h" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
