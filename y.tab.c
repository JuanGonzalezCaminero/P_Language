/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "pcc.y" /* yacc.c:337  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "token.h"
#include "astree.h"

int yylex(void);
extern int yylineno;
FILE *fIn;
int yyerror(char *str);

static ast_t *astRoot = NULL;

//Used to construct sub-trees associated to code blocks
static ast_t *blockRoot = NULL;


#line 89 "y.tab.c" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 20 "pcc.y" /* yacc.c:352  */

    struct sStackType {
    unsigned char   flag;
        union {
        double         vNumber;
        char          *vStr;
        struct ast_s  *ast;
        }   u;
    }   s;

#line 203 "y.tab.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   430

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  7
/* YYNRULES -- Number of rules.  */
#define YYNRULES  45
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  122

#define YYUNDEFTOK  2
#define YYMAXUTOK   285

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    37,     2,     2,
      30,    31,    35,    33,    43,    34,     2,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
       2,    42,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    38,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,    41,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    51,    51,    57,    65,    72,    78,    85,    96,   107,
     113,   124,   131,   138,   144,   149,   156,   163,   170,   175,
     183,   188,   195,   200,   205,   210,   215,   220,   225,   230,
     235,   240,   245,   250,   255,   260,   268,   273,   278,   283,
     288,   293,   298,   303,   309,   317
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "EOL", "NUMBER", "STRING",
  "IF", "WHILE", "ELSE", "SIN", "COS", "TAN", "ASIN", "ACOS", "ATAN",
  "LOG", "LOG10", "EXP", "WRITE", "READ", "EQ", "NEQ", "NOT", "LESS",
  "LEQ", "GREATER", "GEQ", "AND", "OR", "'('", "')'", "FOR", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'^'", "';'", "'{'", "'}'", "'='", "','", "$accept",
  "program", "progelement", "conditional_statement", "statement",
  "expression", "block", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
      40,    41,   285,    43,    45,    42,    47,    37,    94,    59,
     123,   125,    61,    44
};
# endif

#define YYPACT_NINF -96

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-96)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      98,   -36,   -17,   -15,   -12,    -8,   -96,    55,   -96,   -96,
     -14,   111,   111,   111,     2,    11,   -96,   -96,   -96,   -96,
     -96,    -4,     8,    26,    27,    37,    38,    39,    42,    43,
     111,   111,   111,   338,   122,   140,    53,   -27,    62,    52,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   -96,
     158,   -26,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,    45,    46,   -96,   -96,
      94,   -96,    96,   176,   194,   212,   230,   248,   266,   284,
     302,   320,   -96,   374,   374,    54,    54,    54,    54,   392,
     356,   -26,   -26,    65,    65,    65,    65,    98,    98,    69,
      76,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,    20,    57,   -96,   -96,    99,   -96,   -96,    70,    98,
      63,   -96
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     6,     0,     3,     4,
       0,     0,     0,     0,     0,     0,     1,     2,     5,    16,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    13,    14,
       0,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,    30,    31,    27,    29,    26,    28,    33,
      34,    19,    20,    24,    22,    23,    25,     0,     0,     0,
       0,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      45,     0,     0,    15,    12,     7,    44,     9,     0,     0,
       0,     8
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -96,   -96,     0,   -96,   -96,   -11,   -95
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     7,   110,     9,    10,    33,   111
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       8,    34,    35,   112,    69,    36,    11,    17,    37,    62,
      63,    64,    65,    12,    38,    13,    70,    39,    14,    49,
      50,    51,    15,     1,   120,    18,    40,     2,     3,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    41,     4,
       5,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    16,    42,    43,     1,     6,
       1,   115,     2,     3,     2,     3,     1,    44,    45,    46,
       2,     3,    47,    48,     4,     5,     4,     5,    -1,    -1,
      -1,    -1,     4,     5,    68,    97,    98,    60,    61,    62,
      63,    64,    65,    71,     6,    72,     6,    99,   117,   100,
     113,     1,     6,    65,   121,     2,     3,   114,   118,     0,
     119,   116,   116,     0,    19,     0,    20,     4,     5,     0,
     116,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,     0,     0,     0,    30,     0,     0,     6,     0,     0,
       0,    31,     0,    52,    53,    32,    54,    55,    56,    57,
      58,    59,     0,    66,     0,    60,    61,    62,    63,    64,
      65,    52,    53,     0,    54,    55,    56,    57,    58,    59,
       0,    67,     0,    60,    61,    62,    63,    64,    65,    52,
      53,     0,    54,    55,    56,    57,    58,    59,     0,    82,
       0,    60,    61,    62,    63,    64,    65,    52,    53,     0,
      54,    55,    56,    57,    58,    59,     0,   101,     0,    60,
      61,    62,    63,    64,    65,    52,    53,     0,    54,    55,
      56,    57,    58,    59,     0,   102,     0,    60,    61,    62,
      63,    64,    65,    52,    53,     0,    54,    55,    56,    57,
      58,    59,     0,   103,     0,    60,    61,    62,    63,    64,
      65,    52,    53,     0,    54,    55,    56,    57,    58,    59,
       0,   104,     0,    60,    61,    62,    63,    64,    65,    52,
      53,     0,    54,    55,    56,    57,    58,    59,     0,   105,
       0,    60,    61,    62,    63,    64,    65,    52,    53,     0,
      54,    55,    56,    57,    58,    59,     0,   106,     0,    60,
      61,    62,    63,    64,    65,    52,    53,     0,    54,    55,
      56,    57,    58,    59,     0,   107,     0,    60,    61,    62,
      63,    64,    65,    52,    53,     0,    54,    55,    56,    57,
      58,    59,     0,   108,     0,    60,    61,    62,    63,    64,
      65,    52,    53,     0,    54,    55,    56,    57,    58,    59,
       0,   109,     0,    60,    61,    62,    63,    64,    65,    52,
      53,     0,    54,    55,    56,    57,    58,    59,     0,     0,
       0,    60,    61,    62,    63,    64,    65,    52,    53,     0,
      54,    55,    56,    57,    58,     0,     0,     0,     0,    60,
      61,    62,    63,    64,    65,    -1,    -1,     0,    54,    55,
      56,    57,     0,     0,     0,     0,     0,    60,    61,    62,
      63,    64,    65,    52,    53,     0,    54,    55,    56,    57,
       0,     0,     0,     0,     0,    60,    61,    62,    63,    64,
      65
};

static const yytype_int8 yycheck[] =
{
       0,    12,    13,    98,    31,     3,    42,     7,     6,    35,
      36,    37,    38,    30,     3,    30,    43,     6,    30,    30,
      31,    32,    30,     3,   119,    39,    30,     7,     8,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    30,    19,
      20,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,    30,    30,     3,    39,
       3,    41,     7,     8,     7,     8,     3,    30,    30,    30,
       7,     8,    30,    30,    19,    20,    19,    20,    24,    25,
      26,    27,    19,    20,    31,    40,    40,    33,    34,    35,
      36,    37,    38,    31,    39,    43,    39,     3,    41,     3,
      31,     3,    39,    38,    41,     7,     8,    31,     9,    -1,
      40,   111,   112,    -1,     3,    -1,     5,    19,    20,    -1,
     120,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    39,    -1,    -1,
      -1,    30,    -1,    21,    22,    34,    24,    25,    26,    27,
      28,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      38,    21,    22,    -1,    24,    25,    26,    27,    28,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    38,    21,
      22,    -1,    24,    25,    26,    27,    28,    29,    -1,    31,
      -1,    33,    34,    35,    36,    37,    38,    21,    22,    -1,
      24,    25,    26,    27,    28,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,    38,    21,    22,    -1,    24,    25,
      26,    27,    28,    29,    -1,    31,    -1,    33,    34,    35,
      36,    37,    38,    21,    22,    -1,    24,    25,    26,    27,
      28,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      38,    21,    22,    -1,    24,    25,    26,    27,    28,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    38,    21,
      22,    -1,    24,    25,    26,    27,    28,    29,    -1,    31,
      -1,    33,    34,    35,    36,    37,    38,    21,    22,    -1,
      24,    25,    26,    27,    28,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,    38,    21,    22,    -1,    24,    25,
      26,    27,    28,    29,    -1,    31,    -1,    33,    34,    35,
      36,    37,    38,    21,    22,    -1,    24,    25,    26,    27,
      28,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      38,    21,    22,    -1,    24,    25,    26,    27,    28,    29,
      -1,    31,    -1,    33,    34,    35,    36,    37,    38,    21,
      22,    -1,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    21,    22,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    21,    22,    -1,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    21,    22,    -1,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     7,     8,    19,    20,    39,    45,    46,    47,
      48,    42,    30,    30,    30,    30,     0,    46,    39,     3,
       5,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      23,    30,    34,    49,    49,    49,     3,     6,     3,     6,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    49,
      49,    49,    21,    22,    24,    25,    26,    27,    28,    29,
      33,    34,    35,    36,    37,    38,    31,    31,    31,    31,
      43,    31,    43,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    31,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    40,    40,     3,
       3,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      46,    50,    50,    31,    31,    41,    46,    41,     9,    40,
      50,    41
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    45,    46,    46,    46,    47,    47,    47,
      48,    48,    48,    48,    48,    48,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    50,    50
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     2,     1,     7,    11,     7,
       3,     4,     6,     4,     4,     6,     1,     1,     3,     3,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     2,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 52 "pcc.y" /* yacc.c:1652  */
    {
			 //Añadimos una línea al árbol, con etiqueta ";" y con hijos el nodo 
			 //correspondiente a esta línea y las líneas siguientes
			 astRoot = appR(';', astRoot, (yyvsp[0].s).u.ast);
		 }
#line 1433 "y.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 58 "pcc.y" /* yacc.c:1652  */
    {
			 //Añadimos al árbol la primera línea del programa, con la etiqueta
			 // ";" y con hijos el nodo correspondiente a esta línea y el resto 
			 // del programa
			 astRoot = appR(';', astRoot, (yyvsp[0].s).u.ast);
		 }
#line 1444 "y.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 66 "pcc.y" /* yacc.c:1652  */
    {
				 //No sabemos qué tipo de statement va a ser, por tanto toma el valor que 
				 //se le asigne más adelante
				 (yyval.s) = (yyvsp[0].s);
			 }
#line 1454 "y.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 73 "pcc.y" /* yacc.c:1652  */
    {
				 //No sabemos qué tipo de statement va a ser, por tanto toma el valor que 
				 //se le asigne más adelante
				 (yyval.s) = (yyvsp[-1].s);
			 }
#line 1464 "y.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 79 "pcc.y" /* yacc.c:1652  */
    {
				  //Línea vacía, no la añadimos al árbol de análisis
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = NULL;
		     }
#line 1474 "y.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 86 "pcc.y" /* yacc.c:1652  */
    {	
				//Creamos un nodo con etiqueta IF, con hijos el árbol asociado a una expresión,
				//cuyo valor será evaluado, y un nodo que contiene dos hijos, un subárbol asociado
				//al bloque, que contiene las sentencias dentro de él. Si la expresión evalúa a 
				//verdadero, se ejecutan las sentencias del bloque. Ocurre lo mismo con la
				//sentencia While
				//El otro hijo de ese nodo es NULL indicando que este if no tiene un else asociado
				(yyval.s).flag = fAST;
			    (yyval.s).u.ast = mkNd(IF, (yyvsp[-4].s).u.ast, mkNd('A', (yyvsp[-1].s).u.ast, NULL));
			}
#line 1489 "y.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 97 "pcc.y" /* yacc.c:1652  */
    {	
				//Creamos un nodo con etiqueta IF, con hijos el árbol asociado a una expresión,
				//cuyo valor será evaluado, y un nodo que contiene dos hijos, un subárbol asociado
				//al bloque, que contiene las sentencias dentro de él. Si la expresión evalúa a 
				//verdadero, se ejecutan las sentencias del bloque. Ocurre lo mismo con la
				//sentencia While
				//El otro hijo de ese nodo contiene un subárbol asociado al bloque del else
				(yyval.s).flag = fAST;
			    (yyval.s).u.ast = mkNd(IF, (yyvsp[-8].s).u.ast,  mkNd('A', (yyvsp[-5].s).u.ast, (yyvsp[-1].s).u.ast));
			}
#line 1504 "y.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 108 "pcc.y" /* yacc.c:1652  */
    {
				(yyval.s).flag = fAST;
			    (yyval.s).u.ast = mkNd(WHILE, (yyvsp[-4].s).u.ast, (yyvsp[-1].s).u.ast);
			}
#line 1513 "y.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 114 "pcc.y" /* yacc.c:1652  */
    {	
				  //Le asignamos a este statement un nodo del árbol de análisis con la etiqueta "="
				  //Y como hijos un nodo que sólo contiene el nombre del identificador y que no tiene
				  //más hijos y el árbol asociado a la expresión de la derecha, que puede tener más hijos
				  //o no tenerlos y contener símplemente el valor de la derecha, si es por ejemplo un
				  //número o un identificador 
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = mkNd('=', mkSlf(IDENTIFIER,(yyvsp[-2].s).u.vStr), (yyvsp[0].s).u.ast);
		    }
#line 1527 "y.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 125 "pcc.y" /* yacc.c:1652  */
    {
				  //Le asignamos a este statement un nodo con etiqueta READ y un sólo hijo, ya que sólo
				  //tiene un argumento. El hijo sólo contiene el nombre del identificador
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = mkNd(READ, NULL, mkSlf(IDENTIFIER,(yyvsp[-1].s).u.vStr));
		    }
#line 1538 "y.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 132 "pcc.y" /* yacc.c:1652  */
    {
				  //En la variante con dos argumentos, los hijos son el nodo con el nombre del identificador
				  //Y otro con el valor del String del primer argumento
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = mkNd(READ, mkSlf(STRING, (yyvsp[-3].s).u.vStr), mkSlf(IDENTIFIER,(yyvsp[-1].s).u.vStr));
		    }
#line 1549 "y.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 139 "pcc.y" /* yacc.c:1652  */
    {	
				  //Para la función write hacemos lo mismo que con READ
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = mkNd(WRITE, NULL, mkSlf(IDENTIFIER,(yyvsp[-1].s).u.vStr));
		    }
#line 1559 "y.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 145 "pcc.y" /* yacc.c:1652  */
    {
		    	(yyval.s).flag = fAST;
      			(yyval.s).u.ast = mkNd(WRITE, mkSlf(STRING,(yyvsp[-1].s).u.vStr), NULL);
		    }
#line 1568 "y.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 150 "pcc.y" /* yacc.c:1652  */
    {		
				  (yyval.s).flag = fAST;
				  (yyval.s).u.ast = mkNd(WRITE, mkSlf(STRING, (yyvsp[-3].s).u.vStr), mkSlf(IDENTIFIER,(yyvsp[-1].s).u.vStr));

			}
#line 1578 "y.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 157 "pcc.y" /* yacc.c:1652  */
    {	
				  //Asignamos a la expresión un nodo sin hijos que sólo contiene el 
				  //nombre del identificador
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = mkSlf(IDENTIFIER,(yyvsp[0].s).u.vStr);
		    }
#line 1589 "y.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 164 "pcc.y" /* yacc.c:1652  */
    {	
				  //Asignamos a la expresión un nodo sin hijos que sólo contiene el 
				  //valor del número
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = mkDlf(NUMBER,(yyvsp[0].s).u.vNumber);
		    }
#line 1600 "y.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 171 "pcc.y" /* yacc.c:1652  */
    {
				//Devolvemos el nodo asociado a la expresión entre paréntesis
				(yyval.s) = (yyvsp[-1].s);
			}
#line 1609 "y.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 176 "pcc.y" /* yacc.c:1652  */
    {	
				  //Añadimos un nodo con etiqueta "+" y como hijos los nodos asociados a cada
				  //expresión hija. Hacemos lo mismo con el resto de operadores, a excepción
				  //del NOT, que sólo tiene un hijo
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = mkNd('+', (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
		    }
#line 1621 "y.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 184 "pcc.y" /* yacc.c:1652  */
    {	
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = mkNd('-', (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
		    }
#line 1630 "y.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 189 "pcc.y" /* yacc.c:1652  */
    {
		    	//Creamos un nodo con etiqueta '-' y un sólo hijo, el valor de la expresión
		    	//que hay que negar
		    	(yyval.s).flag = fAST;
			    (yyval.s).u.ast = mkNd('-', NULL, (yyvsp[0].s).u.ast);
		    }
#line 1641 "y.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 196 "pcc.y" /* yacc.c:1652  */
    {	
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = mkNd('/', (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
		    }
#line 1650 "y.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 201 "pcc.y" /* yacc.c:1652  */
    {	
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = mkNd('%', (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
		    }
#line 1659 "y.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 206 "pcc.y" /* yacc.c:1652  */
    {	
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = mkNd('*', (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
		    }
#line 1668 "y.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 211 "pcc.y" /* yacc.c:1652  */
    {	
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = mkNd('^', (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
		    }
#line 1677 "y.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 216 "pcc.y" /* yacc.c:1652  */
    {	
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = mkNd(GREATER, (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
		    }
#line 1686 "y.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 221 "pcc.y" /* yacc.c:1652  */
    {	
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = mkNd(LESS, (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
		    }
#line 1695 "y.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 226 "pcc.y" /* yacc.c:1652  */
    {	
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = mkNd(GEQ, (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
		    }
#line 1704 "y.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 231 "pcc.y" /* yacc.c:1652  */
    {	
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = mkNd(LEQ, (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
		    }
#line 1713 "y.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 236 "pcc.y" /* yacc.c:1652  */
    {	
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = mkNd(EQ, (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
		    }
#line 1722 "y.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 241 "pcc.y" /* yacc.c:1652  */
    {	
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = mkNd(NEQ, (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
		    }
#line 1731 "y.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 246 "pcc.y" /* yacc.c:1652  */
    {	
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = mkNd(AND, NULL, (yyvsp[0].s).u.ast);
		    }
#line 1740 "y.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 251 "pcc.y" /* yacc.c:1652  */
    {	
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = mkNd(AND, (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
		    }
#line 1749 "y.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 256 "pcc.y" /* yacc.c:1652  */
    {	
			      (yyval.s).flag = fAST;
			      (yyval.s).u.ast = mkNd(OR, (yyvsp[-2].s).u.ast, (yyvsp[0].s).u.ast);
		    }
#line 1758 "y.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 261 "pcc.y" /* yacc.c:1652  */
    {
				  //Añadimos un nodo con etiqueta SIN y un sólo hijo, el nodo asociado a
				  //la expresión que es su único argumento. Hacemos esto para el resto de 
				  //funciones
				  (yyval.s).flag = fAST;
      			  (yyval.s).u.ast = mkNd(SIN,(yyvsp[-1].s).u.ast,NULL);
			}
#line 1770 "y.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 269 "pcc.y" /* yacc.c:1652  */
    {
				  (yyval.s).flag = fAST;
      			  (yyval.s).u.ast = mkNd(COS,(yyvsp[-1].s).u.ast,NULL);
			}
#line 1779 "y.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 274 "pcc.y" /* yacc.c:1652  */
    {
				  (yyval.s).flag = fAST;
      			  (yyval.s).u.ast = mkNd(TAN,(yyvsp[-1].s).u.ast,NULL);
			}
#line 1788 "y.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 279 "pcc.y" /* yacc.c:1652  */
    {
				  (yyval.s).flag = fAST;
      			  (yyval.s).u.ast = mkNd(ASIN,(yyvsp[-1].s).u.ast,NULL);
			}
#line 1797 "y.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 284 "pcc.y" /* yacc.c:1652  */
    {
				  (yyval.s).flag = fAST;
      			  (yyval.s).u.ast = mkNd(ACOS,(yyvsp[-1].s).u.ast,NULL);
			}
#line 1806 "y.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 289 "pcc.y" /* yacc.c:1652  */
    {
				  (yyval.s).flag = fAST;
      			  (yyval.s).u.ast = mkNd(ATAN,(yyvsp[-1].s).u.ast,NULL);
			}
#line 1815 "y.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 294 "pcc.y" /* yacc.c:1652  */
    {
				  (yyval.s).flag = fAST;
      			  (yyval.s).u.ast = mkNd(LOG,(yyvsp[-1].s).u.ast,NULL);
			}
#line 1824 "y.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 299 "pcc.y" /* yacc.c:1652  */
    {
				  (yyval.s).flag = fAST;
      			  (yyval.s).u.ast = mkNd(LOG10,(yyvsp[-1].s).u.ast,NULL);
			}
#line 1833 "y.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 304 "pcc.y" /* yacc.c:1652  */
    {
				  (yyval.s).flag = fAST;
      			  (yyval.s).u.ast = mkNd(EXP,(yyvsp[-1].s).u.ast,NULL);
			}
#line 1842 "y.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 310 "pcc.y" /* yacc.c:1652  */
    {
			 //Añadimos una línea al subárbol, con etiqueta ";" y con hijos el nodo 
			 //correspondiente a esta línea y las líneas siguientes
			 blockRoot = appR(';', blockRoot, (yyvsp[0].s).u.ast);
			 //$$.u.ast = blockRoot;
			 //blockRoot = NULL;
		}
#line 1854 "y.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 318 "pcc.y" /* yacc.c:1652  */
    {
			 //Añadimos al subárbol la primera línea del bloque, con etiqueta ";",
			 //Devolvemos esta raíz, que será uno de los hijos del if o while al que
			 //esté asociado este bloque
			 blockRoot = NULL;
			 blockRoot = appR(';', blockRoot, (yyvsp[0].s).u.ast);
			 (yyval.s).u.ast = blockRoot;
			 
			 //Hay que inicializar blockRoot para poder usarla con el siguiente bloque
			 //blockRoot = NULL;
		}
#line 1870 "y.tab.c" /* yacc.c:1652  */
    break;


#line 1874 "y.tab.c" /* yacc.c:1652  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 331 "pcc.y" /* yacc.c:1918  */

int yyerror(char *str) {
	printf("Syntax error\n");
	printf("Line: %d\n", yylineno);
  	//prError(yylineno,"%s\n",str,NULL);
  return 1;
}

extern FILE *yyin;

int main(int argc, char *argv[]) {
	/*

  if (argc!=2) {
    puts("\nUsage: program <filename>\n");
    fflush(stdout);
    return 1;
  }

  if ((fIn=fopen(argv[1],"rb"))==NULL) {
    fprintf(stderr,"\nCannot open file: %s\n\n",argv[1]);
    fflush(stderr);
    return 1;
  }

  yyin = fIn;

  //setFilename( argv[1] );

  if (yyparse() != 0) {
    fclose(fIn);
    printf("Parsing aborted due to errors in input\n");
    //prError(yylineno,"Parsing aborted due to errors in input\n",NULL);
  }

  fclose(fIn);
  evaluate(astRoot);
  return 0;
  */
  
  yyparse();
  evaluate(astRoot);
  return 0;
  
}
