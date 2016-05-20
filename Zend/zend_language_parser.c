/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse zendparse
#define yylex   zendlex
#define yyerror zenderror
#define yylval  zendlval
#define yychar  zendchar
#define yydebug zenddebug
#define yynerrs zendnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     END = 0,
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_SR_EQUAL = 267,
     T_SL_EQUAL = 268,
     T_XOR_EQUAL = 269,
     T_OR_EQUAL = 270,
     T_AND_EQUAL = 271,
     T_MOD_EQUAL = 272,
     T_CONCAT_EQUAL = 273,
     T_DIV_EQUAL = 274,
     T_MUL_EQUAL = 275,
     T_MINUS_EQUAL = 276,
     T_PLUS_EQUAL = 277,
     T_BOOLEAN_OR = 278,
     T_BOOLEAN_AND = 279,
     T_IS_NOT_IDENTICAL = 280,
     T_IS_IDENTICAL = 281,
     T_IS_NOT_EQUAL = 282,
     T_IS_EQUAL = 283,
     T_IS_GREATER_OR_EQUAL = 284,
     T_IS_SMALLER_OR_EQUAL = 285,
     T_SR = 286,
     T_SL = 287,
     T_INSTANCEOF = 288,
     T_UNSET_CAST = 289,
     T_BOOL_CAST = 290,
     T_OBJECT_CAST = 291,
     T_ARRAY_CAST = 292,
     T_STRING_CAST = 293,
     T_DOUBLE_CAST = 294,
     T_INT_CAST = 295,
     T_DEC = 296,
     T_INC = 297,
     T_CLONE = 298,
     T_NEW = 299,
     T_EXIT = 300,
     T_IF = 301,
     T_ELSEIF = 302,
     T_ELSE = 303,
     T_ENDIF = 304,
     T_LNUMBER = 305,
     T_DNUMBER = 306,
     T_STRING = 307,
     T_STRING_VARNAME = 308,
     T_VARIABLE = 309,
     T_NUM_STRING = 310,
     T_INLINE_HTML = 311,
     T_CHARACTER = 312,
     T_BAD_CHARACTER = 313,
     T_ENCAPSED_AND_WHITESPACE = 314,
     T_CONSTANT_ENCAPSED_STRING = 315,
     T_ECHO = 316,
     T_DO = 317,
     T_WHILE = 318,
     T_ENDWHILE = 319,
     T_FOR = 320,
     T_ENDFOR = 321,
     T_FOREACH = 322,
     T_ENDFOREACH = 323,
     T_DECLARE = 324,
     T_ENDDECLARE = 325,
     T_AS = 326,
     T_SWITCH = 327,
     T_ENDSWITCH = 328,
     T_CASE = 329,
     T_DEFAULT = 330,
     T_BREAK = 331,
     T_CONTINUE = 332,
     T_GOTO = 333,
     T_FUNCTION = 334,
     T_CONST = 335,
     T_RETURN = 336,
     T_TRY = 337,
     T_CATCH = 338,
     T_THROW = 339,
     T_USE = 340,
     T_INSTEADOF = 341,
     T_GLOBAL = 342,
     T_PUBLIC = 343,
     T_PROTECTED = 344,
     T_PRIVATE = 345,
     T_FINAL = 346,
     T_ABSTRACT = 347,
     T_STATIC = 348,
     T_VAR = 349,
     T_UNSET = 350,
     T_ISSET = 351,
     T_EMPTY = 352,
     T_HALT_COMPILER = 353,
     T_CLASS = 354,
     T_TRAIT = 355,
     T_INTERFACE = 356,
     T_EXTENDS = 357,
     T_IMPLEMENTS = 358,
     T_OBJECT_OPERATOR = 359,
     T_DOUBLE_ARROW = 360,
     T_LIST = 361,
     T_ARRAY = 362,
     T_CALLABLE = 363,
     T_CLASS_C = 364,
     T_TRAIT_C = 365,
     T_METHOD_C = 366,
     T_FUNC_C = 367,
     T_LINE = 368,
     T_FILE = 369,
     T_COMMENT = 370,
     T_DOC_COMMENT = 371,
     T_OPEN_TAG = 372,
     T_OPEN_TAG_WITH_ECHO = 373,
     T_CLOSE_TAG = 374,
     T_WHITESPACE = 375,
     T_START_HEREDOC = 376,
     T_END_HEREDOC = 377,
     T_DOLLAR_OPEN_CURLY_BRACES = 378,
     T_CURLY_OPEN = 379,
     T_PAAMAYIM_NEKUDOTAYIM = 380,
     T_NAMESPACE = 381,
     T_NS_C = 382,
     T_DIR = 383,
     T_NS_SEPARATOR = 384
   };
#endif
/* Tokens.  */
#define END 0
#define T_REQUIRE_ONCE 258
#define T_REQUIRE 259
#define T_EVAL 260
#define T_INCLUDE_ONCE 261
#define T_INCLUDE 262
#define T_LOGICAL_OR 263
#define T_LOGICAL_XOR 264
#define T_LOGICAL_AND 265
#define T_PRINT 266
#define T_SR_EQUAL 267
#define T_SL_EQUAL 268
#define T_XOR_EQUAL 269
#define T_OR_EQUAL 270
#define T_AND_EQUAL 271
#define T_MOD_EQUAL 272
#define T_CONCAT_EQUAL 273
#define T_DIV_EQUAL 274
#define T_MUL_EQUAL 275
#define T_MINUS_EQUAL 276
#define T_PLUS_EQUAL 277
#define T_BOOLEAN_OR 278
#define T_BOOLEAN_AND 279
#define T_IS_NOT_IDENTICAL 280
#define T_IS_IDENTICAL 281
#define T_IS_NOT_EQUAL 282
#define T_IS_EQUAL 283
#define T_IS_GREATER_OR_EQUAL 284
#define T_IS_SMALLER_OR_EQUAL 285
#define T_SR 286
#define T_SL 287
#define T_INSTANCEOF 288
#define T_UNSET_CAST 289
#define T_BOOL_CAST 290
#define T_OBJECT_CAST 291
#define T_ARRAY_CAST 292
#define T_STRING_CAST 293
#define T_DOUBLE_CAST 294
#define T_INT_CAST 295
#define T_DEC 296
#define T_INC 297
#define T_CLONE 298
#define T_NEW 299
#define T_EXIT 300
#define T_IF 301
#define T_ELSEIF 302
#define T_ELSE 303
#define T_ENDIF 304
#define T_LNUMBER 305
#define T_DNUMBER 306
#define T_STRING 307
#define T_STRING_VARNAME 308
#define T_VARIABLE 309
#define T_NUM_STRING 310
#define T_INLINE_HTML 311
#define T_CHARACTER 312
#define T_BAD_CHARACTER 313
#define T_ENCAPSED_AND_WHITESPACE 314
#define T_CONSTANT_ENCAPSED_STRING 315
#define T_ECHO 316
#define T_DO 317
#define T_WHILE 318
#define T_ENDWHILE 319
#define T_FOR 320
#define T_ENDFOR 321
#define T_FOREACH 322
#define T_ENDFOREACH 323
#define T_DECLARE 324
#define T_ENDDECLARE 325
#define T_AS 326
#define T_SWITCH 327
#define T_ENDSWITCH 328
#define T_CASE 329
#define T_DEFAULT 330
#define T_BREAK 331
#define T_CONTINUE 332
#define T_GOTO 333
#define T_FUNCTION 334
#define T_CONST 335
#define T_RETURN 336
#define T_TRY 337
#define T_CATCH 338
#define T_THROW 339
#define T_USE 340
#define T_INSTEADOF 341
#define T_GLOBAL 342
#define T_PUBLIC 343
#define T_PROTECTED 344
#define T_PRIVATE 345
#define T_FINAL 346
#define T_ABSTRACT 347
#define T_STATIC 348
#define T_VAR 349
#define T_UNSET 350
#define T_ISSET 351
#define T_EMPTY 352
#define T_HALT_COMPILER 353
#define T_CLASS 354
#define T_TRAIT 355
#define T_INTERFACE 356
#define T_EXTENDS 357
#define T_IMPLEMENTS 358
#define T_OBJECT_OPERATOR 359
#define T_DOUBLE_ARROW 360
#define T_LIST 361
#define T_ARRAY 362
#define T_CALLABLE 363
#define T_CLASS_C 364
#define T_TRAIT_C 365
#define T_METHOD_C 366
#define T_FUNC_C 367
#define T_LINE 368
#define T_FILE 369
#define T_COMMENT 370
#define T_DOC_COMMENT 371
#define T_OPEN_TAG 372
#define T_OPEN_TAG_WITH_ECHO 373
#define T_CLOSE_TAG 374
#define T_WHITESPACE 375
#define T_START_HEREDOC 376
#define T_END_HEREDOC 377
#define T_DOLLAR_OPEN_CURLY_BRACES 378
#define T_CURLY_OPEN 379
#define T_PAAMAYIM_NEKUDOTAYIM 380
#define T_NAMESPACE 381
#define T_NS_C 382
#define T_DIR 383
#define T_NS_SEPARATOR 384




/* Copy the first part of user declarations.  */


/*
   +----------------------------------------------------------------------+
   | Zend Engine                                                          |
   +----------------------------------------------------------------------+
   | Copyright (c) 1998-2013 Zend Technologies Ltd. (http://www.zend.com) |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.00 of the Zend license,     |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.zend.com/license/2_00.txt.                                |
   | If you did not receive a copy of the Zend license and are unable to  |
   | obtain it through the world-wide-web, please send a note to          |
   | license@zend.com so we can mail you a copy immediately.              |
   +----------------------------------------------------------------------+
   | Authors: Andi Gutmans <andi@zend.com>                                |
   |          Zeev Suraski <zeev@zend.com>                                |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

/*
 * LALR shift/reduce conflicts and how they are resolved:
 *
 * - 2 shift/reduce conflicts due to the dangling elseif/else ambiguity. Solved by shift.
 *
 */


#include "zend_compile.h"
#include "zend.h"
#include "zend_list.h"
#include "zend_globals.h"
#include "zend_API.h"
#include "zend_constants.h"

#define YYSIZE_T size_t
#define yytnamerr zend_yytnamerr
static YYSIZE_T zend_yytnamerr(char*, const char*);

#define YYERROR_VERBOSE
#define YYSTYPE znode
#ifdef ZTS
# define YYPARSE_PARAM tsrm_ls
# define YYLEX_PARAM tsrm_ls
#endif




/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */


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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5312

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  206
/* YYNRULES -- Number of rules.  */
#define YYNRULES  516
/* YYNRULES -- Number of states.  */
#define YYNSTATES  983

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   384

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,   157,     2,   154,    47,    31,     2,
     149,   150,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   151,
      36,    13,    37,    25,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,   155,    30,     2,   156,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   152,    29,   153,    50,     2,     2,     2,
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
       5,     6,     7,     9,    10,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    27,    28,
      32,    33,    34,    35,    38,    39,    40,    41,    49,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    11,    13,    17,    19,
      21,    23,    28,    32,    33,    40,    41,    47,    51,    54,
      58,    60,    62,    66,    69,    74,    80,    85,    86,    90,
      91,    93,    95,    97,   102,   104,   107,   111,   112,   113,
     123,   124,   125,   138,   139,   140,   148,   149,   150,   160,
     161,   162,   163,   176,   177,   184,   187,   191,   194,   198,
     201,   205,   209,   213,   217,   221,   223,   226,   232,   233,
     234,   245,   246,   247,   258,   259,   266,   268,   269,   270,
     271,   272,   273,   292,   296,   300,   302,   303,   305,   308,
     309,   310,   321,   323,   327,   329,   331,   333,   334,   336,
     337,   348,   349,   358,   359,   367,   369,   372,   374,   377,
     378,   381,   383,   384,   387,   388,   391,   393,   397,   398,
     401,   403,   406,   408,   413,   415,   420,   422,   427,   431,
     437,   441,   446,   451,   457,   458,   459,   466,   467,   473,
     475,   477,   479,   484,   485,   486,   494,   495,   496,   505,
     506,   509,   510,   514,   516,   517,   520,   524,   530,   535,
     540,   546,   554,   561,   562,   564,   566,   568,   570,   571,
     573,   575,   578,   582,   586,   591,   595,   597,   599,   602,
     607,   611,   617,   619,   623,   626,   627,   628,   633,   636,
     638,   639,   649,   653,   655,   659,   661,   665,   666,   668,
     670,   673,   676,   679,   683,   685,   689,   691,   693,   697,
     702,   706,   707,   709,   711,   715,   717,   719,   720,   722,
     724,   727,   729,   731,   733,   735,   737,   739,   743,   749,
     751,   755,   761,   766,   770,   772,   773,   775,   776,   781,
     783,   786,   788,   793,   797,   798,   802,   804,   806,   807,
     808,   811,   812,   817,   818,   826,   830,   835,   836,   844,
     847,   851,   855,   859,   863,   867,   871,   875,   879,   883,
     887,   891,   894,   897,   900,   903,   904,   909,   910,   915,
     916,   921,   922,   927,   931,   935,   939,   943,   947,   951,
     955,   959,   963,   967,   971,   975,   978,   981,   984,   987,
     991,   995,   999,  1003,  1007,  1011,  1015,  1019,  1023,  1027,
    1029,  1030,  1036,  1037,  1038,  1046,  1047,  1053,  1055,  1058,
    1061,  1064,  1067,  1070,  1073,  1076,  1079,  1080,  1084,  1086,
    1091,  1095,  1099,  1102,  1103,  1114,  1115,  1127,  1129,  1130,
    1135,  1139,  1144,  1146,  1149,  1150,  1156,  1157,  1165,  1166,
    1173,  1174,  1182,  1183,  1191,  1192,  1200,  1201,  1209,  1210,
    1216,  1218,  1220,  1224,  1227,  1229,  1233,  1236,  1238,  1240,
    1241,  1242,  1249,  1251,  1254,  1255,  1258,  1259,  1262,  1266,
    1267,  1269,  1271,  1272,  1276,  1278,  1280,  1282,  1284,  1286,
    1288,  1290,  1292,  1294,  1296,  1300,  1303,  1305,  1307,  1311,
    1314,  1317,  1320,  1325,  1329,  1331,  1333,  1337,  1339,  1341,
    1343,  1347,  1350,  1352,  1356,  1360,  1362,  1363,  1366,  1367,
    1369,  1375,  1379,  1383,  1385,  1387,  1389,  1391,  1393,  1395,
    1396,  1397,  1405,  1407,  1410,  1411,  1412,  1417,  1422,  1427,
    1428,  1433,  1435,  1437,  1438,  1440,  1443,  1447,  1451,  1453,
    1458,  1459,  1465,  1467,  1469,  1471,  1473,  1476,  1478,  1483,
    1488,  1490,  1492,  1497,  1498,  1500,  1502,  1503,  1506,  1511,
    1516,  1518,  1520,  1524,  1526,  1529,  1533,  1535,  1537,  1538,
    1544,  1545,  1546,  1549,  1555,  1559,  1563,  1565,  1572,  1577,
    1582,  1585,  1588,  1591,  1593,  1596,  1598,  1599,  1605,  1609,
    1613,  1620,  1624,  1626,  1628,  1630,  1635,  1640,  1643,  1646,
    1651,  1654,  1657,  1659,  1660,  1665,  1669
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     159,     0,    -1,   160,    -1,    -1,   160,   161,   163,    -1,
      -1,    71,    -1,   162,   148,    71,    -1,   172,    -1,   203,
      -1,   204,    -1,   117,   149,   150,   151,    -1,   145,   162,
     151,    -1,    -1,   145,   162,   152,   164,   160,   153,    -1,
      -1,   145,   152,   165,   160,   153,    -1,   104,   166,   151,
      -1,   168,   151,    -1,   166,     8,   167,    -1,   167,    -1,
     162,    -1,   162,    90,    71,    -1,   148,   162,    -1,   148,
     162,    90,    71,    -1,   168,     8,    71,    13,   316,    -1,
      99,    71,    13,   316,    -1,    -1,   169,   170,   171,    -1,
      -1,   172,    -1,   203,    -1,   204,    -1,   117,   149,   150,
     151,    -1,   173,    -1,    71,    26,    -1,   152,   169,   153,
      -1,    -1,    -1,    65,   149,   322,   150,   174,   172,   175,
     229,   233,    -1,    -1,    -1,    65,   149,   322,   150,    26,
     176,   169,   177,   231,   234,    68,   151,    -1,    -1,    -1,
      82,   149,   178,   322,   150,   179,   228,    -1,    -1,    -1,
      81,   180,   172,    82,   149,   181,   322,   150,   151,    -1,
      -1,    -1,    -1,    84,   149,   267,   151,   182,   267,   151,
     183,   267,   150,   184,   219,    -1,    -1,    91,   149,   322,
     150,   185,   223,    -1,    95,   151,    -1,    95,   322,   151,
      -1,    96,   151,    -1,    96,   322,   151,    -1,   100,   151,
      -1,   100,   278,   151,    -1,   100,   326,   151,    -1,   106,
     240,   151,    -1,   112,   242,   151,    -1,    80,   266,   151,
      -1,    75,    -1,   322,   151,    -1,   114,   149,   201,   150,
     151,    -1,    -1,    -1,    86,   149,   326,    90,   186,   218,
     217,   150,   187,   220,    -1,    -1,    -1,    86,   149,   278,
      90,   188,   326,   217,   150,   189,   220,    -1,    -1,    88,
     190,   149,   222,   150,   221,    -1,   151,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   191,   152,   169,   153,   102,   149,
     192,   305,   193,    73,   150,   194,   152,   169,   153,   195,
     196,    -1,   103,   322,   151,    -1,    97,    71,   151,    -1,
     197,    -1,    -1,   198,    -1,   197,   198,    -1,    -1,    -1,
     102,   149,   305,   199,    73,   150,   200,   152,   169,   153,
      -1,   202,    -1,   201,     8,   202,    -1,   326,    -1,   206,
      -1,   208,    -1,    -1,    31,    -1,    -1,   292,   205,    71,
     207,   149,   235,   150,   152,   169,   153,    -1,    -1,   211,
      71,   212,   209,   215,   152,   243,   153,    -1,    -1,   213,
      71,   210,   214,   152,   243,   153,    -1,   118,    -1,   111,
     118,    -1,   119,    -1,   110,   118,    -1,    -1,   121,   305,
      -1,   120,    -1,    -1,   121,   216,    -1,    -1,   122,   216,
      -1,   305,    -1,   216,     8,   305,    -1,    -1,   124,   218,
      -1,   326,    -1,    31,   326,    -1,   172,    -1,    26,   169,
      85,   151,    -1,   172,    -1,    26,   169,    87,   151,    -1,
     172,    -1,    26,   169,    89,   151,    -1,    71,    13,   316,
      -1,   222,     8,    71,    13,   316,    -1,   152,   224,   153,
      -1,   152,   151,   224,   153,    -1,    26,   224,    92,   151,
      -1,    26,   151,   224,    92,   151,    -1,    -1,    -1,   224,
      93,   322,   227,   225,   169,    -1,    -1,   224,    94,   227,
     226,   169,    -1,    26,    -1,   151,    -1,   172,    -1,    26,
     169,    83,   151,    -1,    -1,    -1,   229,    66,   149,   322,
     150,   230,   172,    -1,    -1,    -1,   231,    66,   149,   322,
     150,    26,   232,   169,    -1,    -1,    67,   172,    -1,    -1,
      67,    26,   169,    -1,   236,    -1,    -1,   237,    73,    -1,
     237,    31,    73,    -1,   237,    31,    73,    13,   316,    -1,
     237,    73,    13,   316,    -1,   236,     8,   237,    73,    -1,
     236,     8,   237,    31,    73,    -1,   236,     8,   237,    31,
      73,    13,   316,    -1,   236,     8,   237,    73,    13,   316,
      -1,    -1,   126,    -1,   127,    -1,   305,    -1,   239,    -1,
      -1,   278,    -1,   326,    -1,    31,   324,    -1,   239,     8,
     278,    -1,   239,     8,   326,    -1,   239,     8,    31,   324,
      -1,   240,     8,   241,    -1,   241,    -1,    73,    -1,   154,
     323,    -1,   154,   152,   322,   153,    -1,   242,     8,    73,
      -1,   242,     8,    73,    13,   316,    -1,    73,    -1,    73,
      13,   316,    -1,   243,   244,    -1,    -1,    -1,   260,   245,
     264,   151,    -1,   265,   151,    -1,   247,    -1,    -1,   261,
     292,   205,    71,   246,   149,   235,   150,   259,    -1,   104,
     248,   249,    -1,   305,    -1,   248,     8,   305,    -1,   151,
      -1,   152,   250,   153,    -1,    -1,   251,    -1,   252,    -1,
     251,   252,    -1,   253,   151,    -1,   257,   151,    -1,   256,
     105,   254,    -1,   305,    -1,   254,     8,   305,    -1,    71,
      -1,   256,    -1,   305,   144,    71,    -1,   255,    90,   258,
      71,    -1,   255,    90,   263,    -1,    -1,   263,    -1,   151,
      -1,   152,   169,   153,    -1,   262,    -1,   113,    -1,    -1,
     262,    -1,   263,    -1,   262,   263,    -1,   107,    -1,   108,
      -1,   109,    -1,   112,    -1,   111,    -1,   110,    -1,   264,
       8,    73,    -1,   264,     8,    73,    13,   316,    -1,    73,
      -1,    73,    13,   316,    -1,   265,     8,    71,    13,   316,
      -1,    99,    71,    13,   316,    -1,   266,     8,   322,    -1,
     322,    -1,    -1,   268,    -1,    -1,   268,     8,   269,   322,
      -1,   322,    -1,   270,   330,    -1,   330,    -1,   271,    61,
     345,   155,    -1,    61,   345,   155,    -1,    -1,   271,   273,
     270,    -1,   271,    -1,   270,    -1,    -1,    -1,   275,   272,
      -1,    -1,    63,   306,   277,   314,    -1,    -1,   125,   149,
     279,   351,   150,    13,   322,    -1,   326,    13,   322,    -1,
     326,    13,    31,   326,    -1,    -1,   326,    13,    31,    63,
     306,   280,   314,    -1,    62,   322,    -1,   326,    24,   322,
      -1,   326,    23,   322,    -1,   326,    22,   322,    -1,   326,
      21,   322,    -1,   326,    20,   322,    -1,   326,    19,   322,
      -1,   326,    18,   322,    -1,   326,    17,   322,    -1,   326,
      16,   322,    -1,   326,    15,   322,    -1,   326,    14,   322,
      -1,   325,    60,    -1,    60,   325,    -1,   325,    59,    -1,
      59,   325,    -1,    -1,   322,    27,   281,   322,    -1,    -1,
     322,    28,   282,   322,    -1,    -1,   322,     9,   283,   322,
      -1,    -1,   322,    11,   284,   322,    -1,   322,    10,   322,
      -1,   322,    29,   322,    -1,   322,    31,   322,    -1,   322,
      30,   322,    -1,   322,    44,   322,    -1,   322,    42,   322,
      -1,   322,    43,   322,    -1,   322,    45,   322,    -1,   322,
      46,   322,    -1,   322,    47,   322,    -1,   322,    41,   322,
      -1,   322,    40,   322,    -1,    42,   322,    -1,    43,   322,
      -1,    48,   322,    -1,    50,   322,    -1,   322,    33,   322,
      -1,   322,    32,   322,    -1,   322,    35,   322,    -1,   322,
      34,   322,    -1,   322,    36,   322,    -1,   322,    39,   322,
      -1,   322,    37,   322,    -1,   322,    38,   322,    -1,   322,
      49,   306,    -1,   149,   322,   150,    -1,   276,    -1,    -1,
     149,   276,   150,   285,   274,    -1,    -1,    -1,   322,    25,
     286,   322,    26,   287,   322,    -1,    -1,   322,    25,    26,
     288,   322,    -1,   360,    -1,    58,   322,    -1,    57,   322,
      -1,    56,   322,    -1,    55,   322,    -1,    54,   322,    -1,
      53,   322,    -1,    52,   322,    -1,    64,   312,    -1,    -1,
      51,   289,   322,    -1,   318,    -1,   126,   149,   354,   150,
      -1,    61,   354,   155,    -1,   156,   313,   156,    -1,    12,
     322,    -1,    -1,   292,   205,   149,   290,   235,   150,   293,
     152,   169,   153,    -1,    -1,   112,   292,   205,   149,   291,
     235,   150,   293,   152,   169,   153,    -1,    98,    -1,    -1,
     104,   149,   294,   150,    -1,   294,     8,    73,    -1,   294,
       8,    31,    73,    -1,    73,    -1,    31,    73,    -1,    -1,
     162,   149,   296,   238,   150,    -1,    -1,   145,   148,   162,
     149,   297,   238,   150,    -1,    -1,   148,   162,   149,   298,
     238,   150,    -1,    -1,   304,   144,   349,   149,   299,   238,
     150,    -1,    -1,   304,   144,   336,   149,   300,   238,   150,
      -1,    -1,   338,   144,   349,   149,   301,   238,   150,    -1,
      -1,   338,   144,   336,   149,   302,   238,   150,    -1,    -1,
     336,   149,   303,   238,   150,    -1,   112,    -1,   162,    -1,
     145,   148,   162,    -1,   148,   162,    -1,   162,    -1,   145,
     148,   162,    -1,   148,   162,    -1,   304,    -1,   307,    -1,
      -1,    -1,   342,   123,   308,   346,   309,   310,    -1,   342,
      -1,   310,   311,    -1,    -1,   123,   346,    -1,    -1,   149,
     150,    -1,   149,   322,   150,    -1,    -1,    78,    -1,   356,
      -1,    -1,   149,   238,   150,    -1,    69,    -1,    70,    -1,
      79,    -1,   132,    -1,   133,    -1,   147,    -1,   129,    -1,
     130,    -1,   131,    -1,   146,    -1,   140,    78,   141,    -1,
     140,   141,    -1,   315,    -1,   162,    -1,   145,   148,   162,
      -1,   148,   162,    -1,    42,   316,    -1,    43,   316,    -1,
     126,   149,   319,   150,    -1,    61,   319,   155,    -1,   317,
      -1,   128,    -1,   304,   144,    71,    -1,    72,    -1,   363,
      -1,   162,    -1,   145,   148,   162,    -1,   148,   162,    -1,
     315,    -1,   157,   356,   157,    -1,   140,   356,   141,    -1,
     128,    -1,    -1,   321,   320,    -1,    -1,     8,    -1,   321,
       8,   316,   124,   316,    -1,   321,     8,   316,    -1,   316,
     124,   316,    -1,   316,    -1,   323,    -1,   278,    -1,   326,
      -1,   326,    -1,   326,    -1,    -1,    -1,   341,   123,   327,
     346,   328,   335,   329,    -1,   341,    -1,   329,   330,    -1,
      -1,    -1,   123,   346,   331,   335,    -1,   332,    61,   345,
     155,    -1,   333,    61,   345,   155,    -1,    -1,   149,   334,
     238,   150,    -1,   333,    -1,   332,    -1,    -1,   343,    -1,
     350,   343,    -1,   304,   144,   336,    -1,   338,   144,   336,
      -1,   343,    -1,   339,    61,   345,   155,    -1,    -1,   295,
     340,    61,   345,   155,    -1,   342,    -1,   339,    -1,   295,
      -1,   343,    -1,   350,   343,    -1,   337,    -1,   343,    61,
     345,   155,    -1,   343,   152,   322,   153,    -1,   344,    -1,
      73,    -1,   154,   152,   322,   153,    -1,    -1,   322,    -1,
     348,    -1,    -1,   336,   347,    -1,   348,    61,   345,   155,
      -1,   348,   152,   322,   153,    -1,   349,    -1,    71,    -1,
     152,   322,   153,    -1,   154,    -1,   350,   154,    -1,   351,
       8,   352,    -1,   352,    -1,   326,    -1,    -1,   125,   149,
     353,   351,   150,    -1,    -1,    -1,   355,   320,    -1,   355,
       8,   322,   124,   322,    -1,   355,     8,   322,    -1,   322,
     124,   322,    -1,   322,    -1,   355,     8,   322,   124,    31,
     324,    -1,   355,     8,    31,   324,    -1,   322,   124,    31,
     324,    -1,    31,   324,    -1,   356,   357,    -1,   356,    78,
      -1,   357,    -1,    78,   357,    -1,    73,    -1,    -1,    73,
      61,   358,   359,   155,    -1,    73,   123,    71,    -1,   142,
     322,   153,    -1,   142,    72,    61,   322,   155,   153,    -1,
     143,   326,   153,    -1,    71,    -1,    74,    -1,    73,    -1,
     115,   149,   361,   150,    -1,   116,   149,   326,   150,    -1,
       7,   322,    -1,     6,   322,    -1,     5,   149,   322,   150,
      -1,     4,   322,    -1,     3,   322,    -1,   326,    -1,    -1,
     361,     8,   362,   326,    -1,   304,   144,    71,    -1,   338,
     144,    71,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   214,   214,   218,   218,   219,   223,   224,   228,   229,
     230,   231,   232,   233,   233,   235,   235,   237,   238,   242,
     243,   247,   248,   249,   250,   254,   255,   259,   259,   260,
     265,   266,   267,   268,   273,   274,   278,   279,   279,   279,
     280,   280,   280,   281,   281,   281,   282,   282,   282,   286,
     288,   290,   283,   292,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   307,   308,
     306,   311,   312,   310,   314,   314,   315,   316,   317,   318,
     319,   320,   316,   322,   323,   328,   329,   333,   334,   339,
     339,   339,   344,   345,   349,   353,   357,   362,   363,   368,
     368,   374,   373,   380,   379,   389,   390,   391,   392,   396,
     397,   401,   404,   406,   409,   411,   415,   416,   420,   421,
     426,   427,   431,   432,   437,   438,   443,   444,   449,   450,
     455,   456,   457,   458,   463,   464,   464,   465,   465,   470,
     471,   476,   477,   482,   484,   484,   488,   490,   490,   494,
     496,   500,   502,   507,   508,   513,   514,   515,   516,   517,
     518,   519,   520,   525,   526,   527,   528,   533,   534,   539,
     540,   541,   542,   543,   544,   548,   549,   554,   555,   556,
     561,   562,   563,   564,   570,   571,   576,   576,   577,   578,
     579,   579,   584,   588,   589,   593,   594,   597,   599,   603,
     604,   608,   609,   613,   617,   618,   622,   623,   627,   631,
     632,   636,   637,   641,   642,   646,   647,   651,   652,   656,
     657,   661,   662,   663,   664,   665,   666,   670,   671,   672,
     673,   677,   678,   682,   683,   688,   689,   693,   693,   694,
     698,   699,   703,   704,   708,   708,   709,   710,   714,   715,
     715,   720,   720,   724,   724,   725,   726,   727,   727,   728,
     729,   730,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   740,   741,   742,   743,   744,   744,   745,   745,   746,
     746,   747,   747,   748,   749,   750,   751,   752,   753,   754,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   775,   776,   777,   776,   779,   779,   781,   782,   783,
     784,   785,   786,   787,   788,   789,   790,   790,   791,   792,
     793,   794,   795,   796,   796,   798,   798,   803,   806,   808,
     812,   813,   814,   815,   819,   819,   822,   822,   825,   825,
     828,   828,   831,   831,   834,   834,   837,   837,   840,   840,
     846,   847,   848,   849,   853,   854,   855,   861,   862,   867,
     868,   867,   870,   875,   876,   881,   885,   886,   887,   891,
     892,   893,   898,   899,   904,   905,   906,   907,   908,   909,
     910,   911,   912,   913,   914,   915,   920,   921,   922,   923,
     924,   925,   926,   927,   928,   929,   933,   937,   938,   939,
     940,   941,   942,   943,   944,   945,   950,   951,   954,   956,
     960,   961,   962,   963,   967,   968,   973,   978,   983,   988,
     989,   988,   991,   995,   996,  1001,  1001,  1005,  1006,  1010,
    1010,  1016,  1017,  1018,  1022,  1023,  1027,  1028,  1033,  1037,
    1038,  1038,  1043,  1044,  1045,  1050,  1051,  1052,  1056,  1057,
    1058,  1063,  1064,  1068,  1069,  1074,  1075,  1075,  1079,  1080,
    1081,  1085,  1086,  1090,  1091,  1095,  1096,  1101,  1102,  1102,
    1103,  1108,  1109,  1113,  1114,  1115,  1116,  1117,  1118,  1119,
    1120,  1124,  1125,  1126,  1127,  1133,  1134,  1134,  1135,  1136,
    1137,  1138,  1143,  1144,  1145,  1150,  1151,  1152,  1153,  1154,
    1155,  1156,  1160,  1161,  1161,  1165,  1166
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined",
  "\"require_once (T_REQUIRE_ONCE)\"", "\"require (T_REQUIRE)\"",
  "\"eval (T_EVAL)\"", "\"include_once (T_INCLUDE_ONCE)\"",
  "\"include (T_INCLUDE)\"", "','", "\"or (T_LOGICAL_OR)\"",
  "\"xor (T_LOGICAL_XOR)\"", "\"and (T_LOGICAL_AND)\"",
  "\"print (T_PRINT)\"", "'='", "\">>= (T_SR_EQUAL)\"",
  "\"<<= (T_SL_EQUAL)\"", "\"^= (T_XOR_EQUAL)\"", "\"|= (T_OR_EQUAL)\"",
  "\"&= (T_AND_EQUAL)\"", "\"%= (T_MOD_EQUAL)\"",
  "\".= (T_CONCAT_EQUAL)\"", "\"/= (T_DIV_EQUAL)\"",
  "\"*= (T_MUL_EQUAL)\"", "\"-= (T_MINUS_EQUAL)\"",
  "\"+= (T_PLUS_EQUAL)\"", "'?'", "':'", "\"|| (T_BOOLEAN_OR)\"",
  "\"&& (T_BOOLEAN_AND)\"", "'|'", "'^'", "'&'",
  "\"!== (T_IS_NOT_IDENTICAL)\"", "\"=== (T_IS_IDENTICAL)\"",
  "\"!= (T_IS_NOT_EQUAL)\"", "\"== (T_IS_EQUAL)\"", "'<'", "'>'",
  "\">= (T_IS_GREATER_OR_EQUAL)\"", "\"<= (T_IS_SMALLER_OR_EQUAL)\"",
  "\">> (T_SR)\"", "\"<< (T_SL)\"", "'+'", "'-'", "'.'", "'*'", "'/'",
  "'%'", "'!'", "\"instanceof (T_INSTANCEOF)\"", "'~'", "'@'",
  "\"(unset) (T_UNSET_CAST)\"", "\"(bool) (T_BOOL_CAST)\"",
  "\"(object) (T_OBJECT_CAST)\"", "\"(array) (T_ARRAY_CAST)\"",
  "\"(string) (T_STRING_CAST)\"", "\"(double) (T_DOUBLE_CAST)\"",
  "\"(int) (T_INT_CAST)\"", "\"-- (T_DEC)\"", "\"++ (T_INC)\"", "'['",
  "\"clone (T_CLONE)\"", "\"new (T_NEW)\"", "\"exit (T_EXIT)\"",
  "\"if (T_IF)\"", "\"elseif (T_ELSEIF)\"", "\"else (T_ELSE)\"",
  "\"endif (T_ENDIF)\"", "\"integer number (T_LNUMBER)\"",
  "\"floating-point number (T_DNUMBER)\"", "\"identifier (T_STRING)\"",
  "\"variable name (T_STRING_VARNAME)\"", "\"variable (T_VARIABLE)\"",
  "\"number (T_NUM_STRING)\"", "T_INLINE_HTML", "T_CHARACTER",
  "T_BAD_CHARACTER",
  "\"quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)\"",
  "\"quoted-string (T_CONSTANT_ENCAPSED_STRING)\"", "\"echo (T_ECHO)\"",
  "\"do (T_DO)\"", "\"while (T_WHILE)\"", "\"endwhile (T_ENDWHILE)\"",
  "\"for (T_FOR)\"", "\"endfor (T_ENDFOR)\"", "\"foreach (T_FOREACH)\"",
  "\"endforeach (T_ENDFOREACH)\"", "\"declare (T_DECLARE)\"",
  "\"enddeclare (T_ENDDECLARE)\"", "\"as (T_AS)\"",
  "\"switch (T_SWITCH)\"", "\"endswitch (T_ENDSWITCH)\"",
  "\"case (T_CASE)\"", "\"default (T_DEFAULT)\"", "\"break (T_BREAK)\"",
  "\"continue (T_CONTINUE)\"", "\"goto (T_GOTO)\"",
  "\"function (T_FUNCTION)\"", "\"const (T_CONST)\"",
  "\"return (T_RETURN)\"", "\"try (T_TRY)\"", "\"catch (T_CATCH)\"",
  "\"throw (T_THROW)\"", "\"use (T_USE)\"", "\"insteadof (T_INSTEADOF)\"",
  "\"global (T_GLOBAL)\"", "\"public (T_PUBLIC)\"",
  "\"protected (T_PROTECTED)\"", "\"private (T_PRIVATE)\"",
  "\"final (T_FINAL)\"", "\"abstract (T_ABSTRACT)\"",
  "\"static (T_STATIC)\"", "\"var (T_VAR)\"", "\"unset (T_UNSET)\"",
  "\"isset (T_ISSET)\"", "\"empty (T_EMPTY)\"",
  "\"__halt_compiler (T_HALT_COMPILER)\"", "\"class (T_CLASS)\"",
  "\"trait (T_TRAIT)\"", "\"interface (T_INTERFACE)\"",
  "\"extends (T_EXTENDS)\"", "\"implements (T_IMPLEMENTS)\"",
  "\"-> (T_OBJECT_OPERATOR)\"", "\"=> (T_DOUBLE_ARROW)\"",
  "\"list (T_LIST)\"", "\"array (T_ARRAY)\"", "\"callable (T_CALLABLE)\"",
  "\"__CLASS__ (T_CLASS_C)\"", "\"__TRAIT__ (T_TRAIT_C)\"",
  "\"__METHOD__ (T_METHOD_C)\"", "\"__FUNCTION__ (T_FUNC_C)\"",
  "\"__LINE__ (T_LINE)\"", "\"__FILE__ (T_FILE)\"",
  "\"comment (T_COMMENT)\"", "\"doc comment (T_DOC_COMMENT)\"",
  "\"open tag (T_OPEN_TAG)\"",
  "\"open tag with echo (T_OPEN_TAG_WITH_ECHO)\"",
  "\"close tag (T_CLOSE_TAG)\"", "\"whitespace (T_WHITESPACE)\"",
  "\"heredoc start (T_START_HEREDOC)\"", "\"heredoc end (T_END_HEREDOC)\"",
  "\"${ (T_DOLLAR_OPEN_CURLY_BRACES)\"", "\"{$ (T_CURLY_OPEN)\"",
  "\":: (T_PAAMAYIM_NEKUDOTAYIM)\"", "\"namespace (T_NAMESPACE)\"",
  "\"__NAMESPACE__ (T_NS_C)\"", "\"__DIR__ (T_DIR)\"",
  "\"\\\\ (T_NS_SEPARATOR)\"", "'('", "')'", "';'", "'{'", "'}'", "'$'",
  "']'", "'`'", "'\"'", "$accept", "start", "top_statement_list", "@1",
  "namespace_name", "top_statement", "@2", "@3", "use_declarations",
  "use_declaration", "constant_declaration", "inner_statement_list", "@4",
  "inner_statement", "statement", "unticked_statement", "@5", "@6", "@7",
  "@8", "@9", "@10", "@11", "@12", "@13", "@14", "@15", "@16", "@17",
  "@18", "@19", "@20", "@21", "@22", "@23", "@24", "@25", "@26",
  "additional_catches", "non_empty_additional_catches", "additional_catch",
  "@27", "@28", "unset_variables", "unset_variable",
  "function_declaration_statement", "class_declaration_statement",
  "is_reference", "unticked_function_declaration_statement", "@29",
  "unticked_class_declaration_statement", "@30", "@31", "class_entry_type",
  "extends_from", "interface_entry", "interface_extends_list",
  "implements_list", "interface_list", "foreach_optional_arg",
  "foreach_variable", "for_statement", "foreach_statement",
  "declare_statement", "declare_list", "switch_case_list", "case_list",
  "@32", "@33", "case_separator", "while_statement", "elseif_list", "@34",
  "new_elseif_list", "@35", "else_single", "new_else_single",
  "parameter_list", "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "@36", "@37",
  "trait_use_statement", "trait_list", "trait_adaptations",
  "trait_adaptation_list", "non_empty_trait_adaptation_list",
  "trait_adaptation_statement", "trait_precedence", "trait_reference_list",
  "trait_method_reference", "trait_method_reference_fully_qualified",
  "trait_alias", "trait_modifiers", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr", "@38",
  "chaining_method_or_property", "chaining_dereference",
  "chaining_instance_call", "@39", "instance_call", "@40", "new_expr",
  "@41", "expr_without_variable", "@42", "@43", "@44", "@45", "@46", "@47",
  "@48", "@49", "@50", "@51", "@52", "@53", "@54", "function",
  "lexical_vars", "lexical_var_list", "function_call", "@55", "@56", "@57",
  "@58", "@59", "@60", "@61", "@62", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "@63", "@64",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "@65", "@66",
  "variable_properties", "variable_property", "@67",
  "array_method_dereference", "method", "@68", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
  "array_function_dereference", "@69", "base_variable_with_function_calls",
  "base_variable", "reference_variable", "compound_variable", "dim_offset",
  "object_property", "@70", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "@71", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "@72",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "@73", "class_constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,    61,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,    63,    58,   278,   279,   124,
      94,    38,   280,   281,   282,   283,    60,    62,   284,   285,
     286,   287,    43,    45,    46,    42,    47,    37,    33,   288,
     126,    64,   289,   290,   291,   292,   293,   294,   295,   296,
     297,    91,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,    40,
      41,    59,   123,   125,    36,    93,    96,    34
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   158,   159,   161,   160,   160,   162,   162,   163,   163,
     163,   163,   163,   164,   163,   165,   163,   163,   163,   166,
     166,   167,   167,   167,   167,   168,   168,   170,   169,   169,
     171,   171,   171,   171,   172,   172,   173,   174,   175,   173,
     176,   177,   173,   178,   179,   173,   180,   181,   173,   182,
     183,   184,   173,   185,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   186,   187,
     173,   188,   189,   173,   190,   173,   173,   191,   192,   193,
     194,   195,   173,   173,   173,   196,   196,   197,   197,   199,
     200,   198,   201,   201,   202,   203,   204,   205,   205,   207,
     206,   209,   208,   210,   208,   211,   211,   211,   211,   212,
     212,   213,   214,   214,   215,   215,   216,   216,   217,   217,
     218,   218,   219,   219,   220,   220,   221,   221,   222,   222,
     223,   223,   223,   223,   224,   225,   224,   226,   224,   227,
     227,   228,   228,   229,   230,   229,   231,   232,   231,   233,
     233,   234,   234,   235,   235,   236,   236,   236,   236,   236,
     236,   236,   236,   237,   237,   237,   237,   238,   238,   239,
     239,   239,   239,   239,   239,   240,   240,   241,   241,   241,
     242,   242,   242,   242,   243,   243,   245,   244,   244,   244,
     246,   244,   247,   248,   248,   249,   249,   250,   250,   251,
     251,   252,   252,   253,   254,   254,   255,   255,   256,   257,
     257,   258,   258,   259,   259,   260,   260,   261,   261,   262,
     262,   263,   263,   263,   263,   263,   263,   264,   264,   264,
     264,   265,   265,   266,   266,   267,   267,   269,   268,   268,
     270,   270,   271,   271,   273,   272,   272,   272,   274,   275,
     274,   277,   276,   279,   278,   278,   278,   280,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   281,   278,   282,   278,   283,
     278,   284,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     285,   278,   286,   287,   278,   288,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   289,   278,   278,   278,
     278,   278,   278,   290,   278,   291,   278,   292,   293,   293,
     294,   294,   294,   294,   296,   295,   297,   295,   298,   295,
     299,   295,   300,   295,   301,   295,   302,   295,   303,   295,
     304,   304,   304,   304,   305,   305,   305,   306,   306,   308,
     309,   307,   307,   310,   310,   311,   312,   312,   312,   313,
     313,   313,   314,   314,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   317,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   319,   319,   320,   320,
     321,   321,   321,   321,   322,   322,   323,   324,   325,   327,
     328,   326,   326,   329,   329,   331,   330,   332,   332,   334,
     333,   335,   335,   335,   336,   336,   337,   337,   338,   339,
     340,   339,   341,   341,   341,   342,   342,   342,   343,   343,
     343,   344,   344,   345,   345,   346,   347,   346,   348,   348,
     348,   349,   349,   350,   350,   351,   351,   352,   353,   352,
     352,   354,   354,   355,   355,   355,   355,   355,   355,   355,
     355,   356,   356,   356,   356,   357,   358,   357,   357,   357,
     357,   357,   359,   359,   359,   360,   360,   360,   360,   360,
     360,   360,   361,   362,   361,   363,   363
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     1,     3,     1,     1,
       1,     4,     3,     0,     6,     0,     5,     3,     2,     3,
       1,     1,     3,     2,     4,     5,     4,     0,     3,     0,
       1,     1,     1,     4,     1,     2,     3,     0,     0,     9,
       0,     0,    12,     0,     0,     7,     0,     0,     9,     0,
       0,     0,    12,     0,     6,     2,     3,     2,     3,     2,
       3,     3,     3,     3,     3,     1,     2,     5,     0,     0,
      10,     0,     0,    10,     0,     6,     1,     0,     0,     0,
       0,     0,    18,     3,     3,     1,     0,     1,     2,     0,
       0,    10,     1,     3,     1,     1,     1,     0,     1,     0,
      10,     0,     8,     0,     7,     1,     2,     1,     2,     0,
       2,     1,     0,     2,     0,     2,     1,     3,     0,     2,
       1,     2,     1,     4,     1,     4,     1,     4,     3,     5,
       3,     4,     4,     5,     0,     0,     6,     0,     5,     1,
       1,     1,     4,     0,     0,     7,     0,     0,     8,     0,
       2,     0,     3,     1,     0,     2,     3,     5,     4,     4,
       5,     7,     6,     0,     1,     1,     1,     1,     0,     1,
       1,     2,     3,     3,     4,     3,     1,     1,     2,     4,
       3,     5,     1,     3,     2,     0,     0,     4,     2,     1,
       0,     9,     3,     1,     3,     1,     3,     0,     1,     1,
       2,     2,     2,     3,     1,     3,     1,     1,     3,     4,
       3,     0,     1,     1,     3,     1,     1,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     5,     1,
       3,     5,     4,     3,     1,     0,     1,     0,     4,     1,
       2,     1,     4,     3,     0,     3,     1,     1,     0,     0,
       2,     0,     4,     0,     7,     3,     4,     0,     7,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     0,     4,     0,     4,     0,
       4,     0,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       0,     5,     0,     0,     7,     0,     5,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     0,     3,     1,     4,
       3,     3,     2,     0,    10,     0,    11,     1,     0,     4,
       3,     4,     1,     2,     0,     5,     0,     7,     0,     6,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     5,
       1,     1,     3,     2,     1,     3,     2,     1,     1,     0,
       0,     6,     1,     2,     0,     2,     0,     2,     3,     0,
       1,     1,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     1,     1,     3,     2,
       2,     2,     4,     3,     1,     1,     3,     1,     1,     1,
       3,     2,     1,     3,     3,     1,     0,     2,     0,     1,
       5,     3,     3,     1,     1,     1,     1,     1,     1,     0,
       0,     7,     1,     2,     0,     0,     4,     4,     4,     0,
       4,     1,     1,     0,     1,     2,     3,     3,     1,     4,
       0,     5,     1,     1,     1,     1,     2,     1,     4,     4,
       1,     1,     4,     0,     1,     1,     0,     2,     4,     4,
       1,     1,     3,     1,     2,     3,     1,     1,     0,     5,
       0,     0,     2,     5,     3,     3,     1,     6,     4,     4,
       2,     2,     2,     1,     2,     1,     0,     5,     3,     3,
       6,     3,     1,     1,     1,     4,     4,     2,     2,     4,
       2,     2,     1,     0,     4,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   326,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   481,     0,     0,   376,     0,
     384,   385,     6,   407,   461,    65,   386,     0,    46,     0,
       0,     0,    74,     0,     0,     0,     0,   337,     0,     0,
      77,     0,     0,     0,     0,     0,   360,     0,     0,     0,
       0,   105,   107,   111,     0,     0,   415,   390,   391,   392,
     387,   388,     0,     0,   393,   389,     0,     0,    76,    29,
     473,   379,     0,   409,     4,     0,     8,    34,     9,    10,
      95,    96,     0,     0,   309,   425,    97,   454,     0,   412,
     328,     0,   424,     0,   426,     0,   457,     0,   453,   432,
     452,   455,   460,     0,   317,   408,     6,   360,     0,    97,
     511,   510,     0,   508,   507,   332,   295,   296,   297,   298,
       0,   324,   323,   322,   321,   320,   319,   318,   360,     0,
       0,   361,     0,   274,   428,     0,   272,     0,   486,     0,
     418,   259,     0,     0,   361,   367,   251,   368,     0,   372,
     455,     0,     0,   325,     0,    35,     0,   234,     0,    43,
     235,     0,     0,     0,    55,     0,    57,     0,     0,     0,
      59,   425,     0,   426,     0,     0,     0,    21,     0,    20,
     177,     0,     0,   176,   108,   106,   182,     0,    97,     0,
       0,     0,     0,   253,   481,   495,     0,   395,     0,     0,
       0,   493,     0,    15,     0,   411,   309,     0,    27,     0,
     380,     0,   381,     0,     0,     0,   344,     0,    18,   109,
     103,    98,     0,     0,     0,   279,     0,   281,   312,   275,
     277,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    66,   273,   271,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   358,     0,   463,   429,
     463,     0,   474,   456,     0,     0,   327,     0,   363,     0,
       0,   490,   427,     0,   330,   419,   482,     0,   363,     0,
     382,     0,   369,   456,   377,     0,     0,     0,    64,     0,
       0,     0,   236,   239,   425,   426,     0,     0,    56,    58,
      84,     0,    60,    61,    29,    83,    23,     0,     0,    17,
       0,   178,   426,     0,    62,     0,     0,    63,     0,     0,
      92,    94,   512,     0,     0,     0,   480,     0,   496,     0,
     394,   494,   407,     0,     0,   492,   414,   491,   410,     5,
      12,    13,   348,   310,   308,    36,     0,     0,   331,   413,
       7,   168,     0,     0,   101,   112,    99,   333,   463,   515,
       0,   446,   444,     0,     0,     0,   283,     0,   315,     0,
       0,     0,   284,   286,   285,   300,   299,   302,   301,   303,
     305,   306,   304,   294,   293,   288,   289,   287,   290,   291,
     292,   307,     0,   255,   270,   269,   268,   267,   266,   265,
     264,   263,   262,   261,   260,   168,   516,   447,     0,   464,
       0,     0,     0,     0,   509,   362,   471,     0,   485,     0,
     484,   362,   446,   168,   252,   447,     0,   378,    37,   233,
       0,     0,    49,   237,    71,    68,     0,     0,    53,     0,
       0,   416,     0,   405,     0,     0,     0,   397,     0,   396,
      26,   404,    27,     0,    22,    19,     0,   175,   183,   180,
     335,     0,     0,   513,   505,   506,    11,     0,   477,     0,
     476,   329,     0,   498,     0,   499,   501,   346,     3,     5,
     168,   248,     0,    28,    30,    31,    32,   462,     0,     0,
     167,   425,   426,     0,     0,     0,   364,   110,   114,     0,
       0,     0,   163,     0,     0,   352,   350,   445,   280,   282,
       0,     0,   276,   278,     0,   256,     0,   356,   354,   449,
     466,   430,   465,   470,   458,   459,   489,   488,     0,     0,
     370,    40,     0,    47,    44,   235,     0,     0,     0,     0,
       0,     0,     0,   400,   401,   423,     0,   418,   416,     0,
       0,   399,     0,     0,    24,   179,     0,   163,    93,    67,
       0,   478,   480,     0,   502,   504,   503,     0,     0,   168,
      16,     3,     0,   311,     0,     0,   171,   345,     0,    25,
       0,   366,     0,     0,   113,   116,   185,   163,   164,   165,
       0,   153,     0,   166,   451,   472,   168,   168,   316,   313,
     257,   359,   168,   168,   467,   443,   463,     0,     0,   483,
     383,   374,    29,    38,     0,     0,     0,   238,   118,     0,
     118,   120,   128,     0,    29,   126,    75,   134,   134,    54,
       0,   403,   419,   417,     0,   398,   406,     0,   181,     0,
     514,   480,   475,     0,   497,     0,     0,    14,   349,   463,
       0,   247,   246,   250,   241,     0,     0,   425,   426,   365,
     115,   185,     0,   217,     0,   338,   163,     0,   155,     0,
       0,     0,   382,     0,     0,   439,   442,   441,   434,     0,
       0,   487,   371,    27,   143,     0,    29,   141,    45,    50,
       0,     0,   121,     0,     0,    27,   134,     0,   134,     0,
     422,   421,   402,    78,   338,     0,   254,   500,   347,     0,
     435,   240,   463,     0,    33,   174,   217,   117,     0,     0,
     221,   222,   223,   226,   225,   224,   216,   104,   184,   189,
     186,     0,   215,   219,     0,     0,     0,     0,     0,   156,
       0,   353,   351,   314,   258,   357,   355,   168,   463,   463,
     431,   468,   469,     0,   373,   146,   149,     0,    27,   235,
     119,    72,    69,   129,     0,     0,     0,     0,     0,     0,
     130,     0,     0,     0,   479,   243,   443,     0,   245,   102,
       0,     0,   193,     0,    97,   220,     0,   188,    29,     0,
      29,     0,   159,     0,   158,     0,     0,     0,   433,   375,
     151,     0,     0,    39,    48,     0,     0,     0,     0,   127,
       0,   132,     0,   139,   140,   137,   131,   420,    79,    29,
     436,   242,     0,     0,   195,   197,   192,   229,     0,     0,
       0,    27,     0,   342,     0,    27,   160,     0,   157,   440,
     437,   438,     0,     0,     0,     0,   150,   142,    51,    29,
     124,    73,    70,   133,   135,    29,     0,    27,   232,   194,
       6,     0,   198,   199,     0,     0,   207,     0,     0,     0,
       0,   187,   190,     0,   100,   343,     0,   339,   334,     0,
     162,     0,    29,     0,     0,     0,    27,    29,    27,     0,
     336,   196,   200,   201,   211,     0,   202,     0,   230,   227,
       0,   231,     0,   340,   161,     0,    27,    42,   144,    29,
     122,    52,     0,    27,    80,     0,   210,   203,   204,   208,
       0,   163,   341,     0,     0,    27,   125,     0,   209,     0,
     228,     0,   147,   145,     0,    29,   205,     0,    29,   123,
      27,   213,    29,   191,    27,    81,    27,    86,   214,     0,
      82,    85,    87,     0,    88,    89,     0,     0,    90,     0,
      29,    27,    91
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    83,    84,   499,   359,   188,   189,
      85,   218,   366,   503,   870,    87,   552,   704,   632,   775,
     310,   635,   168,   634,   555,   779,   905,   562,   558,   828,
     557,   827,   172,   184,   792,   876,   947,   967,   970,   971,
     972,   976,   979,   339,   340,    88,    89,   232,    90,   521,
      91,   518,   375,    92,   374,    93,   520,   603,   604,   711,
     640,   931,   871,   646,   457,   649,   717,   907,   875,   835,
     708,   776,   944,   820,   958,   823,   864,   610,   611,   612,
     509,   510,   192,   193,   197,   683,   748,   803,   920,   749,
     801,   846,   881,   882,   883,   884,   937,   885,   886,   887,
     935,   963,   750,   751,   752,   753,   848,   754,   166,   311,
     312,   556,   671,   672,   673,   733,   593,   594,    94,   300,
      95,   346,   692,   390,   391,   385,   387,   501,   389,   691,
     530,   130,   522,   577,   119,   757,   854,    97,   371,   589,
     500,   617,   616,   623,   622,   425,    98,   613,   156,   157,
     446,   631,   702,   774,   163,   221,   444,    99,   565,   471,
     100,   566,   296,   567,   182,   102,   291,   103,   104,   431,
     625,   770,   674,   796,   696,   697,   767,   698,   105,   106,
     107,   108,   233,   109,   110,   111,   112,   430,   541,   624,
     542,   543,   113,   489,   490,   661,   149,   150,   210,   211,
     492,   587,   114,   343,   580,   115
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -736
static const yytype_int16 yypact[] =
{
    -736,    64,    80,  -736,  1600,  3962,  3962,   -83,  3962,  3962,
    3962,  3962,  3962,  3962,  3962,  -736,  3962,  3962,  3962,  3962,
    3962,  3962,  3962,   171,   171,  2521,  3962,   187,   -54,   -52,
    -736,  -736,    76,  -736,  -736,  -736,  -736,  3962,  -736,   -44,
     -36,    68,  -736,    86,  2652,  2783,    57,  -736,    82,  2914,
    -736,  3962,   -15,   -13,   145,   153,   -11,   100,   124,   152,
     168,  -736,  -736,  -736,   185,   195,  -736,  -736,  -736,  -736,
    -736,  -736,   172,   127,  -736,  -736,   205,  3962,  -736,  -736,
     179,   178,   303,   -66,  -736,    11,  -736,  -736,  -736,  -736,
    -736,  -736,   282,   295,  -736,  -736,   338,   323,   252,  -736,
    -736,  4480,  -736,   341,  1199,   249,  -736,   261,   349,   292,
    -736,   -10,  -736,    27,  -736,  -736,  -736,   320,   287,   338,
    5120,  5120,  3962,  5120,  5120,  1452,  -736,  -736,   399,  -736,
    3962,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,   296,
     205,   -77,   306,  -736,  -736,   336,  -736,   171,  1506,   302,
     456,  -736,   334,   205,   340,   345,  -736,  -736,   347,   361,
     -17,    27,  3045,  -736,  3962,  -736,    14,  5120,  2390,  -736,
    3962,  3962,   346,  3962,  -736,  4521,  -736,  4562,   358,   485,
    -736,   359,  5120,  1056,   362,  4605,   205,    98,    16,  -736,
    -736,    -8,    18,  -736,  -736,  -736,   487,    19,   338,   171,
     171,   171,   365,  -736,  2521,   131,    63,  -736,  4093,   171,
     290,  -736,   205,  -736,   260,   -58,   366,  4646,   364,  3962,
     231,   367,   317,   231,    53,   450,  -736,   455,  -736,   416,
    -736,  -736,     5,   477,    45,  -736,  3962,  -736,   513,  -736,
    -736,  3962,  3962,  3962,  3962,  3962,  3962,  3962,  3962,  3962,
    3962,  3962,  3962,  3962,  3962,  3962,  3962,  3962,  3962,  3962,
     187,  -736,  -736,  -736,  3176,  3962,  3962,  3962,  3962,  3962,
    3962,  3962,  3962,  3962,  3962,  3962,  -736,   170,  3962,  -736,
    3962,  3962,   179,   -27,   391,  4687,  -736,   205,   281,   188,
     188,  -736,  -736,  3307,  -736,  3438,  -736,   205,   340,    39,
     392,    39,  -736,    -9,  -736,  4730,  4772,  3962,  -736,   461,
    3962,   393,   540,  5120,   460,  1219,   481,  4813,  -736,  -736,
    -736,  1020,  -736,  -736,  -736,  -736,   162,   484,   -15,  -736,
    3962,  -736,  -736,   -13,  -736,  1020,   488,  -736,   413,    30,
    -736,  -736,  -736,    32,   414,   415,   143,   417,  -736,   497,
    -736,  -736,   514,  1549,   425,  -736,  -736,  -736,   -50,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  1731,  4226,  -736,  -736,
    -736,  3569,   569,   148,  -736,   462,  -736,  -736,  3962,   432,
    3962,   437,    -9,   438,    27,  3962,  5197,  3962,  -736,  3962,
    3962,  3962,  2571,  1582,  1373,  2700,  2700,  2700,  2700,  1288,
    1288,  1288,  1288,   568,   568,    61,    61,    61,   399,   399,
     399,  -736,   -16,  1452,  1452,  1452,  1452,  1452,  1452,  1452,
    1452,  1452,  1452,  1452,  1452,  3569,   432,   444,   446,  5120,
     443,   188,   447,  4267,  -736,   319,  -736,   171,  5120,   171,
    5020,   340,  -736,  3569,  -736,  -736,   188,  -736,   573,  5120,
     452,  4854,  -736,  -736,  -736,  -736,   590,    33,  -736,  1020,
    1020,  1020,   457,  -736,    25,   459,   205,   -56,   464,  -736,
    -736,  -736,   451,   549,  -736,  -736,  4308,  -736,  -736,   608,
    -736,   171,   471,  -736,  -736,  -736,  -736,   475,  -736,    34,
    -736,  -736,   221,  -736,  3962,  -736,  -736,  -736,   473,  -736,
    3569,   159,   492,  -736,  -736,  -736,  -736,  -736,   171,   480,
     634,    35,   210,  1020,   495,   205,   340,  -736,   522,   148,
     494,   498,   235,   493,  4353,  -736,  -736,    -9,  5160,  1452,
    3962,  5063,  5242,  5263,   187,  -736,   499,  -736,  -736,  -736,
    -736,  -736,     0,  -736,  -736,  -736,  -736,  -736,  3700,   500,
    -736,  -736,  2390,  -736,  -736,  3962,  3962,   171,     2,  1020,
     583,  1863,    -1,  -736,  -736,   531,   501,   652,  1020,   520,
     205,   118,   601,   572,  -736,  -736,  1020,   235,  -736,  -736,
     171,  -736,   143,   662,  -736,  -736,  -736,   521,  1418,  3569,
    -736,   525,   530,  -736,   206,   532,  -736,  -736,  3831,  -736,
     205,   340,   148,   529,   675,  -736,  -736,   235,  -736,  -736,
     534,   677,    36,  -736,  -736,  -736,  3569,  3569,  5220,  -736,
    -736,  -736,  3569,  3569,  -736,   537,  3962,  3962,   171,  5120,
    -736,  -736,  -736,  -736,  3962,  1995,   541,  5120,   574,   171,
     574,  -736,  -736,   680,  -736,  -736,  -736,   545,   546,  -736,
    1020,  -736,  1020,  -736,   550,   163,  -736,   552,  -736,   554,
    -736,   143,  -736,  3962,  -736,   553,   557,  -736,  -736,  3962,
     188,   576,   225,  -736,  -736,   551,   171,    37,  1034,   340,
     675,  -736,   148,   420,   559,   606,   182,   638,   700,   564,
     565,  3962,   392,   570,   571,  -736,   657,   663,  -736,   577,
    4394,  -736,   600,   311,  -736,  4896,  -736,  -736,  -736,  -736,
       2,   575,  -736,   578,  1020,   640,  -736,   328,  -736,   310,
    -736,   603,  -736,  -736,   606,    40,  1452,  -736,  -736,   580,
    -736,  -736,  3962,   576,  -736,  -736,   524,  -736,   660,   148,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,   320,   396,  -736,    22,   581,   585,   605,    46,   745,
    1020,  -736,  -736,  5220,  -736,  -736,  -736,  3569,  3962,  3962,
     576,  -736,  -736,   188,  -736,  -736,   395,   611,   681,  3962,
    -736,  -736,  -736,  -736,   612,   348,   615,  3962,    43,   313,
    -736,  1020,   148,   618,  -736,  -736,   537,   619,   576,  -736,
     754,     6,  -736,   702,   338,  -736,   706,  -736,  -736,    48,
    -736,   707,   760,  1020,  -736,   631,   627,   628,  -736,  -736,
     403,   635,  2390,  -736,  -736,   636,   641,  2127,  2127,  -736,
     642,  -736,  4437,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  1020,   148,  -736,   209,  -736,   773,    24,   721,
     781,   643,   722,  -736,    41,   644,   786,  1020,  -736,  -736,
    -736,  -736,   651,   775,   736,  3962,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,   729,   653,  -736,  -736,
     715,   654,   209,  -736,   658,   718,   705,   661,   671,  1020,
     743,  -736,  -736,  1020,  -736,  -736,    50,  -736,  -736,  1020,
    -736,  3962,  -736,   666,  4937,  2259,   731,  -736,   294,   673,
    -736,  -736,  -736,  -736,   558,   148,  -736,   750,  -736,   811,
     682,  -736,   756,  -736,  -736,  4978,   762,  -736,  -736,  -736,
    -736,  -736,   684,   299,  -736,   761,   766,   825,  -736,  -736,
    1020,   235,  -736,   810,  2390,   753,  -736,   688,  -736,   148,
    -736,   691,  -736,  -736,   692,  -736,  -736,   324,  -736,  -736,
     689,  -736,  -736,  -736,   387,  -736,   693,   742,  -736,   696,
    -736,   742,  -736,   148,  -736,  -736,   776,   698,  -736,   699,
    -736,   697,  -736
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -736,  -736,  -328,  -736,   -23,  -736,  -736,  -736,  -736,   527,
    -736,  -250,  -736,  -736,     4,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -119,  -736,  -736,  -736,   372,   491,   496,  -114,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,   256,   220,
     151,  -736,    44,  -736,  -736,  -736,  -367,  -736,  -736,    31,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -570,  -736,   181,
    -415,  -736,  -736,   535,  -736,   184,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,    -7,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -735,  -736,  -736,  -736,  -539,
    -736,  -736,   138,  -736,  -736,  -736,  -736,  -736,   796,  -736,
     -26,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,    -2,   150,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,    12,  -364,  -249,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,   186,   579,   368,  -736,
    -736,   309,   312,  -736,   734,   694,  -419,   454,   765,  -736,
    -736,  -736,  -650,  -736,  -736,  -736,  -736,    84,  -231,  -736,
     137,  -736,  -736,  -736,   -21,   -12,  -736,  -267,  -434,  -736,
    -736,    13,    66,   222,   300,  -736,   683,  -736,   405,   203,
    -736,  -736,  -736,  -736,  -736,  -736
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -472
static const yytype_int16 yytable[] =
{
     141,   141,    96,   381,   154,   284,   159,   659,    86,   517,
     536,   411,   550,   432,   843,   160,   636,   805,   546,   227,
     547,   731,   307,   181,   328,   647,   333,   336,   549,   187,
     806,   498,   890,   639,   280,   142,   142,   684,   481,   155,
     483,   560,   582,  -169,   280,  -172,   427,   534,   582,   896,
     214,   280,   280,   215,   198,   116,   116,    34,   381,   427,
     190,   626,   196,   116,     3,    34,   122,   687,   442,   833,
     445,   225,   226,   116,   472,    34,   376,   811,  -361,   852,
      -2,   922,   225,   226,   338,   592,  -363,    47,  -361,   596,
     225,   362,   225,   161,  -362,   162,   138,   164,   225,   497,
      34,   283,   165,   569,   138,   169,   257,   258,   259,   688,
     260,   523,    34,   170,   138,   198,   379,   288,    34,   812,
     818,   853,  -445,   923,   141,   281,   205,  -448,   178,   139,
     298,   355,   140,   186,  -448,   281,   205,   139,    80,  -444,
     140,   191,   281,   281,   330,   314,    80,   139,   731,   303,
     140,   648,   627,   179,   377,   605,    80,   844,   845,   142,
     145,   145,   228,   326,   158,   308,   207,   329,   141,   334,
     337,   591,   309,   807,   666,   891,   141,   141,   141,   936,
     482,   282,   484,   561,   583,  -169,   141,  -172,   327,   358,
     794,   897,   348,    80,   834,   208,   209,   380,   116,    80,
     540,   689,   690,   142,   350,   208,   209,   693,   694,   701,
     369,   142,   142,   142,   116,   540,    34,   171,  -170,   116,
    -249,   142,   382,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   173,   730,   154,   605,   159,
     826,   426,   116,    34,    34,   205,   225,   383,   160,   199,
     206,   205,   473,   116,   349,   138,   220,   735,   116,   436,
      34,    34,  -363,   194,   435,   382,   225,   669,   487,  -428,
    -428,   195,   155,   200,   441,   212,   116,   382,   382,   213,
     880,   719,  -249,   138,   145,   620,   732,   382,   139,   382,
     428,   140,   584,   514,   585,   586,   515,    80,   467,   138,
     384,   201,   383,   428,   205,   187,   116,  -362,   608,   609,
     225,   225,   467,   207,   208,   209,   139,   202,   737,   140,
     208,   209,   380,   141,    80,    80,   161,   514,   145,   670,
     515,   219,   152,   468,   203,   153,   145,   145,   145,   819,
     380,    80,    80,   384,   204,   511,   145,   468,  -244,   785,
     516,   789,   815,   229,   514,   384,   384,   515,   142,   699,
    -170,   608,   609,   205,    96,   384,   230,   384,   355,   231,
     504,   951,   527,   208,   209,   802,   205,   -41,   -41,   -41,
     514,   223,   703,   515,  -450,  -154,  -138,  -138,  -138,   141,
     205,  -136,  -136,  -136,   715,   355,   234,   158,   276,   511,
     262,   263,   729,   787,   788,   277,   787,   788,   225,   351,
     278,   360,   361,   357,   141,   279,   141,   511,    47,   382,
     786,   787,   788,   351,   142,   357,   351,   357,   838,   225,
     362,   356,   208,   209,   382,   212,   467,   467,   467,   540,
     830,   787,   788,   571,   287,   208,   209,  -138,   260,   142,
     289,   142,  -136,  -148,  -148,  -148,   778,   294,   141,   208,
     209,   821,   822,   790,   295,   797,   836,   225,   497,   862,
     863,   468,   468,   468,   511,   961,   962,   143,   146,   879,
     290,   888,   297,   145,   302,   141,   222,   224,   225,   299,
     467,   301,   601,   142,  -218,   316,   516,   384,   321,   516,
     335,   816,   817,   740,   741,   742,   743,   744,   745,   320,
     322,   154,   384,   159,   324,   345,   363,   365,   888,   738,
     142,   370,   160,   368,   739,   468,   372,   740,   741,   742,
     743,   744,   745,   746,   141,   141,   467,   373,   378,   388,
     377,   443,   540,   450,   452,   467,   155,   655,   453,   145,
     454,   938,   456,   467,   516,   474,   633,   141,   851,   141,
     855,   479,   480,   511,   485,   645,   486,   491,   493,   142,
     142,   468,   677,   747,   145,   494,   145,   679,   496,   516,
     468,  -471,   513,   519,   516,   956,   525,   526,   468,   877,
     511,   511,   142,   537,   142,   538,   511,   511,   539,   551,
     161,   553,   544,   559,   573,   141,   568,   570,   572,   975,
     254,   255,   256,   257,   258,   259,   141,   260,   145,   906,
     574,   576,   579,   738,   581,   908,   590,   467,   739,   467,
     597,   740,   741,   742,   743,   744,   745,   746,   141,   707,
     142,   595,   598,   600,   602,   145,   606,   607,   614,   621,
     630,   142,   926,   141,   643,   650,   651,   933,   382,   516,
     652,   350,   468,   516,   468,   740,   741,   742,   743,   744,
     745,   158,   656,   142,   657,   663,   664,   799,   667,   945,
     668,   681,   675,   682,   685,   686,   695,   141,   142,   470,
     849,   467,   709,   714,   145,   145,   716,   718,   710,   670,
     722,   723,   734,   478,   724,   960,   727,   728,   964,   755,
     756,   759,   966,   760,   761,   762,   516,   145,   768,   145,
     765,   766,   142,   773,   769,   781,   468,   791,   782,   784,
     981,   800,   771,   808,   809,   795,   384,   467,   101,   120,
     121,   511,   123,   124,   125,   126,   127,   128,   129,   804,
     131,   132,   133,   134,   135,   136,   137,   810,   813,   148,
     151,   382,   824,   829,   825,   145,   831,   842,   467,   516,
     839,   167,   468,   857,   841,   847,   145,   850,   175,   177,
     856,   859,   860,   861,   865,   185,   889,   867,   144,   144,
     467,   868,   892,   873,   893,   895,   894,   898,   145,   899,
     901,   902,   909,   468,   903,  -206,   910,   911,   914,   913,
     915,   217,   916,   145,   183,   917,   919,   927,   932,   467,
     516,   939,   516,   934,   940,   468,   866,   563,   564,   942,
    -152,   941,   948,   949,   467,   946,   952,  -212,   954,   384,
     955,   957,   965,   959,   969,   973,   968,   145,   978,   977,
     982,   980,   974,   578,   468,   475,   285,   505,   680,   516,
     713,   780,   506,   874,   286,   736,   467,   758,   477,   468,
     467,   798,   872,   216,   793,   912,   467,   654,   764,   653,
     840,   599,   662,   725,     0,   331,     0,   347,     0,     0,
       0,     0,   516,     0,     0,     0,   305,     0,   306,     0,
     469,   468,   101,     0,   313,   468,     0,   317,     0,   930,
       0,   468,   292,     0,   469,     0,     0,   467,   516,     0,
       0,     0,     0,     0,     0,     0,   516,   642,     0,     0,
       0,     0,     0,     0,     0,     0,   315,     0,   148,     0,
       0,     0,   353,     0,   658,     0,     0,     0,   953,     0,
     516,     0,   468,   367,     0,     0,   332,     0,     0,     0,
       0,     0,     0,     0,   341,   342,   344,     0,     0,     0,
     386,     0,     0,     0,   354,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   410,     0,     0,     0,     0,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
       0,     0,   429,     0,   429,   433,     0,     0,   720,     0,
     721,     0,     0,     0,     0,     0,     0,   438,     0,   440,
       0,     0,     0,     0,     0,     0,     0,     0,   469,   469,
     469,   449,  -173,     0,   451,     0,     0,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,     0,
       0,     0,   459,   460,   476,     0,     0,     0,     0,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   461,   783,     0,     0,     0,     0,     0,     0,    30,
      31,   116,   469,  -428,  -428,     0,     0,     0,     0,    36,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   488,   429,     0,   524,  -428,  -428,     0,     0,   528,
       0,   529,     0,   531,   532,   533,     0,     0,   814,     0,
       0,     0,   138,     0,     0,     0,   512,     0,   469,     0,
       0,     0,     0,     0,     0,     0,   462,   469,   463,    67,
      68,    69,    70,    71,     0,   469,     0,     0,     0,   837,
     464,     0,     0,     0,     0,   465,    74,    75,   466,     0,
       0,     0,     0,     0,     0,     0,     0,   535,     0,     0,
       0,   858,     0,     0,  -173,     0,     0,     0,     0,     0,
     512,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   292,     0,   292,     0,     0,   323,   512,     0,
     878,     0,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,     0,   900,     0,     0,   588,   469,
       0,   469,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,     0,     0,   341,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   918,  -428,  -428,
       0,   921,     0,     0,   618,   512,     0,   924,     0,     0,
       0,     0,     0,   292,     0,     0,     0,     0,  -428,  -428,
       0,     0,   629,     0,     0,     0,   101,     0,     0,   313,
     637,     0,     0,   469,     0,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   950,   455,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   638,   641,  -472,  -472,  -472,  -472,   252,   253,
     254,   255,   256,   257,   258,   259,     0,   260,     0,   469,
       0,     0,     0,     0,     0,   660,     0,   488,     0,     0,
       0,     0,     0,     0,   512,     0,     0,     0,     0,     0,
     429,   700,     0,   678,     0,     0,     0,     0,   705,   101,
     469,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   512,   512,     0,     0,     0,     0,   512,   512,     0,
       0,     0,   469,   292,     0,     0,     0,   726,     0,     0,
       0,     0,     0,   429,   712,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   469,   260,     0,     0,   763,   488,   235,   236,   237,
       0,     0,     0,     0,     0,     0,   469,     0,     0,     0,
       0,   292,     0,   238,     0,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   429,   260,   469,     0,
       0,     0,   469,     0,     0,   641,     0,   238,   469,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
       0,   260,   429,   429,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   313,     0,   235,   236,   237,     0,   469,
       0,   832,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   238,   512,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,     0,   260,   101,     0,   235,   236,
     237,   101,   101,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   665,   238,     0,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,     0,   260,   904,
       0,     0,     0,     5,     6,     7,     8,     9,     0,     0,
       0,     0,    10,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     293,   260,     0,     0,     0,   925,     0,     0,     0,   101,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,     0,     0,    30,
      31,    32,    33,    34,     0,    35,     0,     0,   101,    36,
      37,    38,    39,     0,    40,     0,    41,     0,    42,     0,
       0,    43,     0,     0,     0,    44,    45,    46,    47,    48,
      49,    50,   495,    51,    52,     0,    53,     0,     0,     0,
      54,    55,    56,     0,    57,    58,    59,    60,    61,    62,
      63,     0,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,     5,     6,     7,     8,     9,     0,
      72,     0,     0,    10,     0,    73,    74,    75,    76,    77,
       0,    78,    79,     0,    80,     0,    81,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,     0,     0,
      30,    31,    32,    33,    34,     0,    35,     0,     0,     0,
      36,    37,    38,    39,     0,    40,     0,    41,     0,    42,
       0,     0,    43,     0,     0,     0,    44,    45,    46,    47,
       0,    49,    50,     0,    51,     0,     0,    53,     0,     0,
       0,    54,    55,    56,     0,    57,    58,    59,   502,    61,
      62,    63,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,     0,     5,     6,     7,     8,
       9,    72,     0,     0,     0,    10,   118,    74,    75,    76,
      77,     0,    78,    79,     0,    80,     0,    81,    82,   644,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
       0,     0,    30,    31,    32,    33,    34,     0,    35,     0,
       0,     0,    36,    37,    38,    39,     0,    40,     0,    41,
       0,    42,     0,     0,    43,     0,     0,     0,    44,    45,
      46,    47,     0,    49,    50,     0,    51,     0,     0,    53,
       0,     0,     0,     0,     0,    56,     0,    57,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,     0,     5,     6,
       7,     8,     9,    72,     0,     0,     0,    10,   118,    74,
      75,    76,    77,     0,    78,    79,     0,    80,     0,    81,
      82,   706,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,     0,     0,    30,    31,    32,    33,    34,     0,
      35,     0,     0,     0,    36,    37,    38,    39,     0,    40,
       0,    41,     0,    42,     0,     0,    43,     0,     0,     0,
      44,    45,    46,    47,     0,    49,    50,     0,    51,     0,
       0,    53,     0,     0,     0,     0,     0,    56,     0,    57,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,     0,
       5,     6,     7,     8,     9,    72,     0,     0,     0,    10,
     118,    74,    75,    76,    77,     0,    78,    79,     0,    80,
       0,    81,    82,   869,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,     0,     0,    30,    31,    32,    33,
      34,     0,    35,     0,     0,     0,    36,    37,    38,    39,
       0,    40,     0,    41,     0,    42,     0,     0,    43,     0,
       0,     0,    44,    45,    46,    47,     0,    49,    50,     0,
      51,     0,     0,    53,     0,     0,     0,     0,     0,    56,
       0,    57,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,     0,     5,     6,     7,     8,     9,    72,     0,     0,
       0,    10,   118,    74,    75,    76,    77,     0,    78,    79,
       0,    80,     0,    81,    82,   929,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,     0,     0,    30,    31,
      32,    33,    34,     0,    35,     0,     0,     0,    36,    37,
      38,    39,     0,    40,     0,    41,     0,    42,     0,     0,
      43,     0,     0,     0,    44,    45,    46,    47,     0,    49,
      50,     0,    51,     0,     0,    53,     0,     0,     0,     0,
       0,    56,     0,    57,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,     5,     6,     7,     8,     9,     0,    72,
       0,     0,    10,     0,   118,    74,    75,    76,    77,     0,
      78,    79,     0,    80,     0,    81,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,     0,     0,    30,
      31,    32,    33,    34,     0,    35,     0,     0,     0,    36,
      37,    38,    39,     0,    40,     0,    41,     0,    42,     0,
       0,    43,     0,     0,     0,    44,    45,    46,    47,     0,
      49,    50,     0,    51,     0,     0,    53,     0,     0,     0,
       0,     0,    56,     0,    57,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,     5,     6,     7,     8,     9,     0,
      72,     0,     0,    10,     0,   118,    74,    75,    76,    77,
       0,    78,    79,     0,    80,     0,    81,    82,     0,     0,
       0,     0,   147,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
      30,    31,   116,    33,    34,     0,     0,     0,     0,     0,
      36,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,    47,
     260,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,     0,     0,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,     5,     6,     7,     8,     9,
       0,    72,     0,     0,    10,     0,   118,    74,    75,    76,
      77,     0,     0,     0,     0,    80,     0,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,     0,     0,
       0,    30,    31,   116,    33,    34,     0,     0,     0,     0,
       0,    36,  -472,  -472,  -472,  -472,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,     0,   260,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   117,     0,     0,    58,    59,     0,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,     5,     6,     7,     8,
       9,     0,    72,     0,     0,    10,     0,   118,    74,    75,
      76,    77,     0,   174,     0,     0,    80,     0,    81,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,    30,    31,   116,    33,    34,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,     5,     6,     7,
       8,     9,     0,    72,     0,     0,    10,     0,   118,    74,
      75,    76,    77,     0,   176,     0,     0,    80,     0,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
       0,     0,     0,    30,    31,   116,    33,    34,     0,     0,
       0,     0,     0,    36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   117,     0,     0,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,    66,    67,    68,    69,    70,    71,     5,     6,
       7,     8,     9,     0,    72,     0,     0,    10,     0,   118,
      74,    75,    76,    77,     0,   180,     0,     0,    80,     0,
      81,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,    30,    31,   116,    33,    34,     0,
       0,     0,     0,     0,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,     0,     0,
      58,    59,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,    66,    67,    68,    69,    70,    71,     5,
       6,     7,     8,     9,     0,    72,     0,     0,    10,     0,
     118,    74,    75,    76,    77,   304,     0,     0,     0,    80,
       0,    81,    82,     0,     0,     0,     0,   412,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,     0,    30,    31,   116,    33,    34,
       0,     0,     0,     0,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   117,     0,
       0,    58,    59,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,     0,    66,    67,    68,    69,    70,    71,
       5,     6,     7,     8,     9,     0,    72,     0,     0,    10,
       0,   118,    74,    75,    76,    77,     0,     0,     0,     0,
      80,     0,    81,    82,     0,     0,     0,     0,   437,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,     0,     0,     0,     0,    30,    31,   116,    33,
      34,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
       0,     0,    58,    59,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,    66,    67,    68,    69,    70,
      71,     5,     6,     7,     8,     9,     0,    72,     0,     0,
      10,     0,   118,    74,    75,    76,    77,     0,     0,     0,
       0,    80,     0,    81,    82,     0,     0,     0,     0,   439,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,     0,     0,     0,    30,    31,   116,
      33,    34,     0,     0,     0,     0,     0,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     117,     0,     0,    58,    59,     0,     0,     0,     0,     0,
       0,     0,     0,    64,    65,     0,    66,    67,    68,    69,
      70,    71,     5,     6,     7,     8,     9,     0,    72,     0,
       0,    10,     0,   118,    74,    75,    76,    77,     0,     0,
       0,     0,    80,     0,    81,    82,     0,     0,     0,     0,
     508,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     0,    30,    31,
     116,    33,    34,     0,     0,     0,     0,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     0,     0,    58,    59,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,    66,    67,    68,
      69,    70,    71,     5,     6,     7,     8,     9,     0,    72,
       0,     0,    10,     0,   118,    74,    75,    76,    77,     0,
       0,     0,     0,    80,     0,    81,    82,     0,     0,     0,
       0,   628,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,    30,
      31,   116,    33,    34,     0,     0,     0,     0,     0,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,    66,    67,
      68,    69,    70,    71,     5,     6,     7,     8,     9,     0,
      72,     0,     0,    10,     0,   118,    74,    75,    76,    77,
       0,     0,     0,     0,    80,     0,    81,    82,     0,     0,
       0,     0,   676,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
      30,    31,   116,    33,    34,     0,     0,     0,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,     0,     0,    58,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    66,
      67,    68,    69,    70,    71,     5,     6,     7,     8,     9,
       0,    72,     0,     0,    10,     0,   118,    74,    75,    76,
      77,     0,     0,     0,     0,    80,     0,    81,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,     0,     0,
       0,    30,    31,   116,    33,    34,     0,     0,     0,     0,
       0,    36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   117,     0,     0,    58,    59,     0,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,    67,    68,    69,    70,    71,     5,     6,     7,     8,
       9,     0,    72,     0,     0,    10,     0,   118,    74,    75,
      76,    77,     0,     0,     0,     0,    80,     0,    81,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,     0,
       0,     0,    30,    31,   116,   352,    34,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,     0,     0,    58,    59,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,    66,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,    72,     0,   235,   236,   237,   118,    74,
      75,    76,    77,     0,     0,     0,     0,    80,     0,    81,
      82,   238,     0,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,     0,   260,   235,   236,   237,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   238,     0,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,     0,   260,   235,   236,   237,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   238,     0,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,     0,   260,     0,     0,
       0,     0,   235,   236,   237,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   238,   507,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,     0,   260,   235,   236,   237,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   238,
     545,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,     0,   260,     0,     0,   235,   236,   237,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   575,   238,   833,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,     0,   260,     0,     0,   235,
     236,   237,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   238,   615,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,     0,   260,
     235,   236,   237,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   238,   772,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,     0,
     260,   235,   236,   237,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   238,   834,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
       0,   260,     0,     0,   235,   236,   237,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     238,   261,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,     0,   260,   235,   236,   237,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   238,   318,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,     0,   260,   235,   236,   237,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   238,   319,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,     0,   260,     0,     0,   235,
     236,   237,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   238,   325,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,     0,   260,
       0,   235,   236,   237,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   364,   238,     0,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
       0,   260,   235,   236,   237,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   434,   238,     0,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,     0,   260,   235,   236,   237,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   238,
     447,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,     0,   260,     0,   235,   236,   237,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   238,   448,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,     0,   260,   235,   236,   237,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   238,   458,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,     0,   260,   235,   236,   237,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   238,   554,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,     0,   260,     0,   235,
     236,   237,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   238,   777,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,     0,   260,
       0,     0,   235,   236,   237,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   928,   238,   619,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,     0,   260,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   943,   235,
     236,   237,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   548,   238,     0,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,     0,   260,
     236,   237,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   238,     0,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   237,   260,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   238,     0,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,     0,   260,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,     0,   260,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
       0,   260,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,     0,   260
};

static const yytype_int16 yycheck[] =
{
      23,    24,     4,   234,    27,   119,    27,   577,     4,   373,
     425,   260,   446,   280,     8,    27,   555,   752,   437,     8,
     439,   671,     8,    49,     8,    26,     8,     8,   443,    52,
       8,   359,     8,    31,    61,    23,    24,   607,     8,    27,
       8,     8,     8,     8,    61,     8,   277,    63,     8,     8,
      73,    61,    61,    76,    56,    71,    71,    73,   289,   290,
      73,    61,    73,    71,     0,    73,   149,    31,   299,    26,
     301,   148,   149,    71,   324,    73,    71,    31,   144,    31,
       0,    31,   148,   149,   198,   500,   144,    98,   144,   508,
     148,   149,   148,    27,   144,   149,   112,   149,   148,   149,
      73,   113,    26,    78,   112,   149,    45,    46,    47,    73,
      49,   378,    73,   149,   112,   117,    71,   140,    73,    73,
     770,    73,   149,    73,   147,   152,    73,   144,    71,   145,
     153,    78,   148,   148,   144,   152,    73,   145,   154,   149,
     148,   154,   152,   152,   152,   171,   154,   145,   798,   161,
     148,   152,   152,    71,   149,   519,   154,   151,   152,   147,
      23,    24,   151,   186,    27,   151,   141,   151,   191,   151,
     151,   499,   168,   151,   589,   151,   199,   200,   201,   914,
     150,   154,   150,   150,   150,   150,   209,   150,    90,   212,
     150,   150,    61,   154,   151,   142,   143,   152,    71,   154,
     431,   616,   617,   191,   141,   142,   143,   622,   623,   628,
     157,   199,   200,   201,    71,   446,    73,   149,     8,    71,
      61,   209,   234,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   149,   670,   260,   602,   260,
     779,    71,    71,    73,    73,    73,   148,   234,   260,   149,
      78,    73,    90,    71,   123,   112,    78,   676,    71,    71,
      73,    73,   144,   118,   287,   277,   148,    61,   125,    59,
      60,   118,   260,   149,   297,   148,    71,   289,   290,   152,
      71,   648,   123,   112,   147,   534,    61,   299,   145,   301,
     277,   148,    71,   145,    73,    74,   148,   154,   321,   112,
     234,   149,   289,   290,    73,   328,    71,   144,   126,   127,
     148,   148,   335,   141,   142,   143,   145,   149,   682,   148,
     142,   143,   152,   346,   154,   154,   260,   145,   191,   123,
     148,   152,   145,   321,   149,   148,   199,   200,   201,   773,
     152,   154,   154,   277,   149,   371,   209,   335,   123,   716,
     373,   718,   767,    71,   145,   289,   290,   148,   346,   626,
     150,   126,   127,    73,   366,   299,    71,   301,    78,    31,
     366,   941,   384,   142,   143,   739,    73,    66,    67,    68,
     145,    78,   632,   148,    61,   150,    92,    93,    94,   412,
      73,    92,    93,    94,   644,    78,   144,   260,   149,   425,
      59,    60,   669,    93,    94,   144,    93,    94,   148,   206,
      61,   151,   152,   210,   437,   123,   439,   443,    98,   431,
      92,    93,    94,   220,   412,   222,   223,   224,   792,   148,
     149,   141,   142,   143,   446,   148,   459,   460,   461,   670,
      92,    93,    94,   466,   148,   142,   143,   153,    49,   437,
     144,   439,   153,    66,    67,    68,   706,   155,   481,   142,
     143,    66,    67,   153,     8,   732,   153,   148,   149,    66,
      67,   459,   460,   461,   500,   151,   152,    23,    24,   843,
     144,   845,   148,   346,   123,   508,    81,    82,   148,   144,
     513,   144,   515,   481,    98,   149,   519,   431,    13,   522,
      13,   768,   769,   107,   108,   109,   110,   111,   112,   151,
     151,   534,   446,   534,   152,   150,   150,   153,   882,    99,
     508,    71,   534,   156,   104,   513,    71,   107,   108,   109,
     110,   111,   112,   113,   557,   558,   559,   121,    61,    26,
     149,   149,   773,    82,   151,   568,   534,   570,     8,   412,
      90,   915,    71,   576,   577,    71,   552,   580,   808,   582,
     810,    73,   149,   589,   150,   561,   151,   150,    71,   557,
     558,   559,   598,   153,   437,    61,   439,   600,   153,   602,
     568,   149,    13,   121,   607,   949,   149,   149,   576,   839,
     616,   617,   580,   149,   582,   149,   622,   623,   155,    26,
     534,   149,   155,    13,   153,   628,   149,   148,   144,   973,
      42,    43,    44,    45,    46,    47,   639,    49,   481,   869,
      71,    13,   151,    99,   149,   875,   153,   650,   104,   652,
     150,   107,   108,   109,   110,   111,   112,   113,   661,   635,
     628,   149,     8,   148,   122,   508,   152,   149,   155,   150,
     150,   639,   902,   676,    71,   124,   155,   907,   670,   682,
       8,   141,   650,   686,   652,   107,   108,   109,   110,   111,
     112,   534,    71,   661,   102,    13,   155,   153,   153,   929,
     150,   152,   150,     8,   150,     8,   149,   710,   676,   321,
     804,   714,   151,    13,   557,   558,   151,   151,   124,   123,
     150,   149,   151,   335,   150,   955,   153,   150,   958,   150,
     104,    73,   962,    13,   150,   150,   739,   580,    61,   582,
     150,   150,   710,   123,    61,   150,   714,   124,   150,    89,
     980,    71,   155,   152,   149,   155,   670,   760,     4,     5,
       6,   767,     8,     9,    10,    11,    12,    13,    14,   751,
      16,    17,    18,    19,    20,    21,    22,   152,    13,    25,
      26,   773,   151,   151,    83,   628,   151,    13,   791,   792,
     152,    37,   760,    13,   155,    73,   639,    71,    44,    45,
      73,   150,   155,   155,   149,    51,    13,   151,    23,    24,
     813,   150,    71,   151,    13,    73,   153,   153,   661,    13,
     149,    26,    73,   791,    68,    90,   153,   153,    90,   151,
     105,    77,   151,   676,    49,   144,    73,   151,    87,   842,
     843,    71,   845,   150,    13,   813,   822,   459,   460,    73,
      68,   149,    71,     8,   857,   151,    26,    71,    85,   773,
     152,   150,   153,   151,   102,   149,   153,   710,   150,    73,
     153,   152,   971,   481,   842,   328,   122,   366,   602,   882,
     640,   710,   366,   832,   130,   681,   889,   686,   333,   857,
     893,   733,   828,    77,   724,   882,   899,   568,   692,   567,
     796,   513,   582,   661,    -1,   191,    -1,   204,    -1,    -1,
      -1,    -1,   915,    -1,    -1,    -1,   162,    -1,   164,    -1,
     321,   889,   168,    -1,   170,   893,    -1,   173,    -1,   905,
      -1,   899,   147,    -1,   335,    -1,    -1,   940,   941,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   949,   559,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,   204,    -1,
      -1,    -1,   208,    -1,   576,    -1,    -1,    -1,   944,    -1,
     973,    -1,   940,   219,    -1,    -1,   191,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   199,   200,   201,    -1,    -1,    -1,
     236,    -1,    -1,    -1,   209,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,    -1,    -1,    -1,    -1,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
      -1,    -1,   278,    -1,   280,   281,    -1,    -1,   650,    -1,
     652,    -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,   295,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   459,   460,
     461,   307,     8,    -1,   310,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    42,    43,   330,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    61,   714,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,   513,    59,    60,    -1,    -1,    -1,    -1,    79,
     366,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   346,   378,    -1,   380,    59,    60,    -1,    -1,   385,
      -1,   387,    -1,   389,   390,   391,    -1,    -1,   760,    -1,
      -1,    -1,   112,    -1,    -1,    -1,   371,    -1,   559,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   126,   568,   128,   129,
     130,   131,   132,   133,    -1,   576,    -1,    -1,    -1,   791,
     140,    -1,    -1,    -1,    -1,   145,   146,   147,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   412,    -1,    -1,
      -1,   813,    -1,    -1,   150,    -1,    -1,    -1,    -1,    -1,
     425,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   437,    -1,   439,    -1,    -1,   151,   443,    -1,
     842,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,   857,    -1,    -1,   494,   650,
      -1,   652,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,   481,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   889,    59,    60,
      -1,   893,    -1,    -1,   530,   500,    -1,   899,    -1,    -1,
      -1,    -1,    -1,   508,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,   548,    -1,    -1,    -1,   552,    -1,    -1,   555,
     556,    -1,    -1,   714,    -1,   561,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   940,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   557,   558,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,   760,
      -1,    -1,    -1,    -1,    -1,   580,    -1,   582,    -1,    -1,
      -1,    -1,    -1,    -1,   589,    -1,    -1,    -1,    -1,    -1,
     626,   627,    -1,   598,    -1,    -1,    -1,    -1,   634,   635,
     791,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   616,   617,    -1,    -1,    -1,    -1,   622,   623,    -1,
      -1,    -1,   813,   628,    -1,    -1,    -1,   663,    -1,    -1,
      -1,    -1,    -1,   669,   639,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,   842,    49,    -1,    -1,   691,   661,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,   857,    -1,    -1,    -1,
      -1,   676,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,   732,    49,   889,    -1,
      -1,    -1,   893,    -1,    -1,   710,    -1,    25,   899,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,   768,   769,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   779,    -1,     9,    10,    11,    -1,   940,
      -1,   787,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   767,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,   822,    -1,     9,    10,
      11,   827,   828,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   155,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,   865,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     124,    49,    -1,    -1,    -1,   901,    -1,    -1,    -1,   905,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    75,    -1,    -1,   944,    79,
      80,    81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,
      -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,   101,   153,   103,   104,    -1,   106,    -1,    -1,    -1,
     110,   111,   112,    -1,   114,   115,   116,   117,   118,   119,
     120,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,
     130,   131,   132,   133,     3,     4,     5,     6,     7,    -1,
     140,    -1,    -1,    12,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,    -1,   154,    -1,   156,   157,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      -1,   100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,
      -1,   110,   111,   112,    -1,   114,   115,   116,   117,   118,
     119,   120,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,
     129,   130,   131,   132,   133,    -1,     3,     4,     5,     6,
       7,   140,    -1,    -1,    -1,    12,   145,   146,   147,   148,
     149,    -1,   151,   152,    -1,   154,    -1,   156,   157,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,    86,
      -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,
      97,    98,    -1,   100,   101,    -1,   103,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,   112,    -1,   114,   115,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,
      -1,   128,   129,   130,   131,   132,   133,    -1,     3,     4,
       5,     6,     7,   140,    -1,    -1,    -1,    12,   145,   146,
     147,   148,   149,    -1,   151,   152,    -1,   154,    -1,   156,
     157,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,   103,    -1,
      -1,   106,    -1,    -1,    -1,    -1,    -1,   112,    -1,   114,
     115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,   126,    -1,   128,   129,   130,   131,   132,   133,    -1,
       3,     4,     5,     6,     7,   140,    -1,    -1,    -1,    12,
     145,   146,   147,   148,   149,    -1,   151,   152,    -1,   154,
      -1,   156,   157,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    -1,   100,   101,    -1,
     103,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,   112,
      -1,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,   126,    -1,   128,   129,   130,   131,   132,
     133,    -1,     3,     4,     5,     6,     7,   140,    -1,    -1,
      -1,    12,   145,   146,   147,   148,   149,    -1,   151,   152,
      -1,   154,    -1,   156,   157,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,
     101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,    -1,
      -1,   112,    -1,   114,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,     3,     4,     5,     6,     7,    -1,   140,
      -1,    -1,    12,    -1,   145,   146,   147,   148,   149,    -1,
     151,   152,    -1,   154,    -1,   156,   157,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,
      80,    81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,
      -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,
     100,   101,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,   112,    -1,   114,   115,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,
     130,   131,   132,   133,     3,     4,     5,     6,     7,    -1,
     140,    -1,    -1,    12,    -1,   145,   146,   147,   148,   149,
      -1,   151,   152,    -1,   154,    -1,   156,   157,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    98,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,   115,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,
     129,   130,   131,   132,   133,     3,     4,     5,     6,     7,
      -1,   140,    -1,    -1,    12,    -1,   145,   146,   147,   148,
     149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    79,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,   115,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,
     128,   129,   130,   131,   132,   133,     3,     4,     5,     6,
       7,    -1,   140,    -1,    -1,    12,    -1,   145,   146,   147,
     148,   149,    -1,   151,    -1,    -1,   154,    -1,   156,   157,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,
      -1,   128,   129,   130,   131,   132,   133,     3,     4,     5,
       6,     7,    -1,   140,    -1,    -1,    12,    -1,   145,   146,
     147,   148,   149,    -1,   151,    -1,    -1,   154,    -1,   156,
     157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
     126,    -1,   128,   129,   130,   131,   132,   133,     3,     4,
       5,     6,     7,    -1,   140,    -1,    -1,    12,    -1,   145,
     146,   147,   148,   149,    -1,   151,    -1,    -1,   154,    -1,
     156,   157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,
     115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,   126,    -1,   128,   129,   130,   131,   132,   133,     3,
       4,     5,     6,     7,    -1,   140,    -1,    -1,    12,    -1,
     145,   146,   147,   148,   149,   150,    -1,    -1,    -1,   154,
      -1,   156,   157,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   125,   126,    -1,   128,   129,   130,   131,   132,   133,
       3,     4,     5,     6,     7,    -1,   140,    -1,    -1,    12,
      -1,   145,   146,   147,   148,   149,    -1,    -1,    -1,    -1,
     154,    -1,   156,   157,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,   126,    -1,   128,   129,   130,   131,   132,
     133,     3,     4,     5,     6,     7,    -1,   140,    -1,    -1,
      12,    -1,   145,   146,   147,   148,   149,    -1,    -1,    -1,
      -1,   154,    -1,   156,   157,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,   131,
     132,   133,     3,     4,     5,     6,     7,    -1,   140,    -1,
      -1,    12,    -1,   145,   146,   147,   148,   149,    -1,    -1,
      -1,    -1,   154,    -1,   156,   157,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,     3,     4,     5,     6,     7,    -1,   140,
      -1,    -1,    12,    -1,   145,   146,   147,   148,   149,    -1,
      -1,    -1,    -1,   154,    -1,   156,   157,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,   115,   116,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,   129,
     130,   131,   132,   133,     3,     4,     5,     6,     7,    -1,
     140,    -1,    -1,    12,    -1,   145,   146,   147,   148,   149,
      -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,   115,   116,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,   128,
     129,   130,   131,   132,   133,     3,     4,     5,     6,     7,
      -1,   140,    -1,    -1,    12,    -1,   145,   146,   147,   148,
     149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,   115,   116,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,    -1,
     128,   129,   130,   131,   132,   133,     3,     4,     5,     6,
       7,    -1,   140,    -1,    -1,    12,    -1,   145,   146,   147,
     148,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,   157,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,
      -1,   128,   129,   130,   131,   132,   133,    -1,    -1,    -1,
      -1,    -1,    -1,   140,    -1,     9,    10,    11,   145,   146,
     147,   148,   149,    -1,    -1,    -1,    -1,   154,    -1,   156,
     157,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   153,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     153,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   153,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   153,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   151,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   151,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   151,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   151,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   151,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   150,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     150,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   150,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   150,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   150,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   150,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    11,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   159,   160,     0,   161,     3,     4,     5,     6,     7,
      12,    42,    43,    48,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      69,    70,    71,    72,    73,    75,    79,    80,    81,    82,
      84,    86,    88,    91,    95,    96,    97,    98,    99,   100,
     101,   103,   104,   106,   110,   111,   112,   114,   115,   116,
     117,   118,   119,   120,   125,   126,   128,   129,   130,   131,
     132,   133,   140,   145,   146,   147,   148,   149,   151,   152,
     154,   156,   157,   162,   163,   168,   172,   173,   203,   204,
     206,   208,   211,   213,   276,   278,   292,   295,   304,   315,
     318,   322,   323,   325,   326,   336,   337,   338,   339,   341,
     342,   343,   344,   350,   360,   363,    71,   112,   145,   292,
     322,   322,   149,   322,   322,   322,   322,   322,   322,   322,
     289,   322,   322,   322,   322,   322,   322,   322,   112,   145,
     148,   162,   304,   325,   326,   338,   325,    31,   322,   354,
     355,   322,   145,   148,   162,   304,   306,   307,   338,   342,
     343,   350,   149,   312,   149,    26,   266,   322,   180,   149,
     149,   149,   190,   149,   151,   322,   151,   322,    71,    71,
     151,   278,   322,   326,   191,   322,   148,   162,   166,   167,
      73,   154,   240,   241,   118,   118,    73,   242,   292,   149,
     149,   149,   149,   149,   149,    73,    78,   141,   142,   143,
     356,   357,   148,   152,   162,   162,   276,   322,   169,   152,
      78,   313,   356,    78,   356,   148,   149,     8,   151,    71,
      71,    31,   205,   340,   144,     9,    10,    11,    25,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      49,   151,    59,    60,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   149,   144,    61,   123,
      61,   152,   154,   343,   205,   322,   322,   148,   162,   144,
     144,   324,   326,   124,   155,     8,   320,   148,   162,   144,
     277,   144,   123,   343,   150,   322,   322,     8,   151,   172,
     178,   267,   268,   322,   278,   326,   149,   322,   151,   151,
     151,    13,   151,   151,   152,   151,   162,    90,     8,   151,
     152,   323,   326,     8,   151,    13,     8,   151,   205,   201,
     202,   326,   326,   361,   326,   150,   279,   354,    61,   123,
     141,   357,    72,   322,   326,    78,   141,   357,   162,   165,
     151,   152,   149,   150,   150,   153,   170,   322,   156,   157,
      71,   296,    71,   121,   212,   210,    71,   149,    61,    71,
     152,   336,   343,   349,   350,   283,   322,   284,    26,   286,
     281,   282,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   306,    31,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   303,    71,   336,   349,   322,
     345,   327,   345,   322,   150,   162,    71,    31,   322,    31,
     322,   162,   336,   149,   314,   336,   308,   150,   150,   322,
      82,   322,   151,     8,    90,    90,    71,   222,   150,    42,
      43,    61,   126,   128,   140,   145,   148,   162,   304,   315,
     316,   317,   169,    90,    71,   167,   322,   241,   316,    73,
     149,     8,   150,     8,   150,   150,   151,   125,   326,   351,
     352,   150,   358,    71,    61,   153,   153,   149,   160,   164,
     298,   285,   117,   171,   172,   203,   204,   153,    31,   238,
     239,   278,   326,    13,   145,   148,   162,   305,   209,   121,
     214,   207,   290,   345,   322,   149,   149,   343,   322,   322,
     288,   322,   322,   322,    63,   326,   238,   149,   149,   155,
     336,   346,   348,   349,   155,   153,   324,   324,   124,   238,
     346,    26,   174,   149,   150,   182,   269,   188,   186,    13,
       8,   150,   185,   316,   316,   316,   319,   321,   149,    78,
     148,   162,   144,   153,    71,   153,    13,   291,   202,   151,
     362,   149,     8,   150,    71,    73,    74,   359,   322,   297,
     153,   160,   238,   274,   275,   149,   324,   150,     8,   316,
     148,   162,   122,   215,   216,   305,   152,   149,   126,   127,
     235,   236,   237,   305,   155,   153,   300,   299,   322,    26,
     306,   150,   302,   301,   347,   328,    61,   152,    31,   322,
     150,   309,   176,   172,   181,   179,   267,   322,   326,    31,
     218,   326,   316,    71,    26,   172,   221,    26,   152,   223,
     124,   155,     8,   320,   319,   162,    71,   102,   316,   235,
     326,   353,   352,    13,   155,   155,   238,   153,   150,    61,
     123,   270,   271,   272,   330,   150,    31,   278,   326,   162,
     216,   152,     8,   243,   235,   150,     8,    31,    73,   238,
     238,   287,   280,   238,   238,   149,   332,   333,   335,   345,
     322,   324,   310,   169,   175,   322,    26,   172,   228,   151,
     124,   217,   326,   217,    13,   169,   151,   224,   151,   224,
     316,   316,   150,   149,   150,   351,   322,   153,   150,   345,
     346,   330,    61,   273,   151,   324,   243,   305,    99,   104,
     107,   108,   109,   110,   111,   112,   113,   153,   244,   247,
     260,   261,   262,   263,   265,   150,   104,   293,   237,    73,
      13,   150,   150,   322,   314,   150,   150,   334,    61,    61,
     329,   155,   153,   123,   311,   177,   229,   150,   169,   183,
     218,   150,   150,   316,    89,   224,    92,    93,    94,   224,
     153,   124,   192,   293,   150,   155,   331,   345,   270,   153,
      71,   248,   305,   245,   292,   263,     8,   151,   152,   149,
     152,    31,    73,    13,   316,   238,   345,   345,   330,   346,
     231,    66,    67,   233,   151,    83,   267,   189,   187,   151,
      92,   151,   322,    26,   151,   227,   153,   316,   305,   152,
     335,   155,    13,     8,   151,   152,   249,    73,   264,   205,
      71,   169,    31,    73,   294,   169,    73,    13,   316,   150,
     155,   155,    66,    67,   234,   149,   172,   151,   150,    26,
     172,   220,   220,   151,   227,   226,   193,   169,   316,   305,
      71,   250,   251,   252,   253,   255,   256,   257,   305,    13,
       8,   151,    71,    13,   153,    73,     8,   150,   153,    13,
     316,   149,    26,    68,   322,   184,   169,   225,   169,    73,
     153,   153,   252,   151,    90,   105,   151,   144,   316,    73,
     246,   316,    31,    73,   316,   322,   169,   151,   150,    26,
     172,   219,    87,   169,   150,   258,   263,   254,   305,    71,
      13,   149,    73,   150,   230,   169,   151,   194,    71,     8,
     316,   235,    26,   172,    85,   152,   305,   150,   232,   151,
     169,   151,   152,   259,   169,   153,   169,   195,   153,   102,
     196,   197,   198,   149,   198,   305,   199,    73,   150,   200,
     152,   169,   153
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
	    /* Fall through.  */
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

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
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
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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

    { zend_do_end_compilation(TSRMLS_C); }
    break;

  case 3:

    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 4:

    { HANDLE_INTERACTIVE(); }
    break;

  case 6:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 7:

    { zend_do_build_namespace_name(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 8:

    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 9:

    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 10:

    { zend_verify_namespace(TSRMLS_C); zend_do_early_binding(TSRMLS_C); }
    break;

  case 11:

    { zend_do_halt_compiler_register(TSRMLS_C); YYACCEPT; }
    break;

  case 12:

    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 13:

    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 14:

    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 15:

    { zend_do_begin_namespace(NULL, 1 TSRMLS_CC); }
    break;

  case 16:

    { zend_do_end_namespace(TSRMLS_C); }
    break;

  case 17:

    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 18:

    { zend_verify_namespace(TSRMLS_C); }
    break;

  case 21:

    { zend_do_use(&(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 22:

    { zend_do_use(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 23:

    { zend_do_use(&(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 24:

    { zend_do_use(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 25:

    { zend_do_declare_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 26:

    { zend_do_declare_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 27:

    { zend_do_extended_info(TSRMLS_C); }
    break;

  case 28:

    { HANDLE_INTERACTIVE(); }
    break;

  case 33:

    { zend_error(E_COMPILE_ERROR, "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 34:

    { DO_TICKS(); }
    break;

  case 35:

    { zend_do_label(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 37:

    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 38:

    { zend_do_if_after_statement(&(yyvsp[(4) - (6)]), 1 TSRMLS_CC); }
    break;

  case 39:

    { zend_do_if_end(TSRMLS_C); }
    break;

  case 40:

    { zend_do_if_cond(&(yyvsp[(3) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 41:

    { zend_do_if_after_statement(&(yyvsp[(4) - (7)]), 1 TSRMLS_CC); }
    break;

  case 42:

    { zend_do_if_end(TSRMLS_C); }
    break;

  case 43:

    { (yyvsp[(1) - (2)]).u.op.opline_num = get_next_op_number(CG(active_op_array));  }
    break;

  case 44:

    { zend_do_while_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 45:

    { zend_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 46:

    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array));  zend_do_do_while_begin(TSRMLS_C); }
    break;

  case 47:

    { (yyvsp[(5) - (5)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 48:

    { zend_do_do_while_end(&(yyvsp[(1) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 49:

    { zend_do_free(&(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 50:

    { zend_do_extended_info(TSRMLS_C); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 51:

    { zend_do_free(&(yyvsp[(9) - (10)]) TSRMLS_CC); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) TSRMLS_CC); }
    break;

  case 52:

    { zend_do_for_end(&(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 53:

    { zend_do_switch_cond(&(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 54:

    { zend_do_switch_end(&(yyvsp[(6) - (6)]) TSRMLS_CC); }
    break;

  case 55:

    { zend_do_brk_cont(ZEND_BRK, NULL TSRMLS_CC); }
    break;

  case 56:

    { zend_do_brk_cont(ZEND_BRK, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 57:

    { zend_do_brk_cont(ZEND_CONT, NULL TSRMLS_CC); }
    break;

  case 58:

    { zend_do_brk_cont(ZEND_CONT, &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 59:

    { zend_do_return(NULL, 0 TSRMLS_CC); }
    break;

  case 60:

    { zend_do_return(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 61:

    { zend_do_return(&(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 65:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 66:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 68:

    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 69:

    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 70:

    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 71:

    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 TSRMLS_CC); }
    break;

  case 72:

    { zend_check_writable_variable(&(yyvsp[(6) - (8)])); zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) TSRMLS_CC); }
    break;

  case 73:

    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) TSRMLS_CC); }
    break;

  case 74:

    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number(CG(active_op_array)); zend_do_declare_begin(TSRMLS_C); }
    break;

  case 75:

    { zend_do_declare_end(&(yyvsp[(1) - (6)]) TSRMLS_CC); }
    break;

  case 77:

    { zend_do_try(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 78:

    { zend_initialize_try_catch_element(&(yyvsp[(1) - (7)]) TSRMLS_CC); }
    break;

  case 79:

    { zend_do_first_catch(&(yyvsp[(7) - (9)]) TSRMLS_CC); }
    break;

  case 80:

    { zend_do_begin_catch(&(yyvsp[(1) - (12)]), &(yyvsp[(9) - (12)]), &(yyvsp[(11) - (12)]), &(yyvsp[(7) - (12)]) TSRMLS_CC); }
    break;

  case 81:

    { zend_do_end_catch(&(yyvsp[(1) - (16)]) TSRMLS_CC); }
    break;

  case 82:

    { zend_do_mark_last_catch(&(yyvsp[(7) - (18)]), &(yyvsp[(18) - (18)]) TSRMLS_CC); }
    break;

  case 83:

    { zend_do_throw(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 84:

    { zend_do_goto(&(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 85:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 86:

    { (yyval).u.op.opline_num = -1; }
    break;

  case 87:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 88:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 89:

    { (yyval).u.op.opline_num = get_next_op_number(CG(active_op_array)); }
    break;

  case 90:

    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), NULL TSRMLS_CC); }
    break;

  case 91:

    { zend_do_end_catch(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 94:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_UNSET, 0 TSRMLS_CC); zend_do_unset(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 95:

    { DO_TICKS(); }
    break;

  case 96:

    { DO_TICKS(); }
    break;

  case 97:

    { (yyval).op_type = ZEND_RETURN_VAL; }
    break;

  case 98:

    { (yyval).op_type = ZEND_RETURN_REF; }
    break;

  case 99:

    { zend_do_begin_function_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).op_type, NULL TSRMLS_CC); }
    break;

  case 100:

    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); }
    break;

  case 101:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 102:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(3) - (8)]) TSRMLS_CC); }
    break;

  case 103:

    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), NULL TSRMLS_CC); }
    break;

  case 104:

    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), NULL TSRMLS_CC); }
    break;

  case 105:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = 0; }
    break;

  case 106:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_EXPLICIT_ABSTRACT_CLASS; }
    break;

  case 107:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_TRAIT; }
    break;

  case 108:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_FINAL_CLASS; }
    break;

  case 109:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 110:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 111:

    { (yyval).u.op.opline_num = CG(zend_lineno); (yyval).EA = ZEND_ACC_INTERFACE; }
    break;

  case 116:

    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 117:

    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 118:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 119:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 120:

    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 121:

    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]);  (yyval).EA |= ZEND_PARSED_REFERENCE_VARIABLE; }
    break;

  case 128:

    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 129:

    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 130:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 131:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 132:

    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 133:

    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 134:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 135:

    { zend_do_extended_info(TSRMLS_C);  zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 136:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 137:

    { zend_do_extended_info(TSRMLS_C);  zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 138:

    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) TSRMLS_CC); (yyval).op_type = IS_CONST; }
    break;

  case 144:

    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 145:

    { zend_do_if_after_statement(&(yyvsp[(5) - (7)]), 0 TSRMLS_CC); }
    break;

  case 147:

    { zend_do_if_cond(&(yyvsp[(4) - (6)]), &(yyvsp[(5) - (6)]) TSRMLS_CC); }
    break;

  case 148:

    { zend_do_if_after_statement(&(yyvsp[(5) - (8)]), 0 TSRMLS_CC); }
    break;

  case 155:

    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(2) - (2)]), &(yyval), NULL, &(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 156:

    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(3) - (3)]), &(yyval), NULL, &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); }
    break;

  case 157:

    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), 1 TSRMLS_CC); }
    break;

  case 158:

    { (yyval).op_type = IS_UNUSED; (yyval).u.op.num=1; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(2) - (4)]), &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 159:

    { (yyval)=(yyvsp[(1) - (4)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(4) - (4)]), &(yyval), NULL, &(yyvsp[(3) - (4)]), 0 TSRMLS_CC); }
    break;

  case 160:

    { (yyval)=(yyvsp[(1) - (5)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV, &(yyvsp[(5) - (5)]), &(yyval), NULL, &(yyvsp[(3) - (5)]), 1 TSRMLS_CC); }
    break;

  case 161:

    { (yyval)=(yyvsp[(1) - (7)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(5) - (7)]), &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), 1 TSRMLS_CC); }
    break;

  case 162:

    { (yyval)=(yyvsp[(1) - (6)]); (yyval).u.op.num++; zend_do_receive_arg(ZEND_RECV_INIT, &(yyvsp[(4) - (6)]), &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 0 TSRMLS_CC); }
    break;

  case 163:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 164:

    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_ARRAY; }
    break;

  case 165:

    { (yyval).op_type = IS_CONST; Z_TYPE((yyval).u.constant)=IS_CALLABLE; }
    break;

  case 166:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 167:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 168:

    { Z_LVAL((yyval).u.constant) = 0; }
    break;

  case 169:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 170:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(1) - (1)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 171:

    { Z_LVAL((yyval).u.constant) = 1;  zend_do_pass_param(&(yyvsp[(2) - (2)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 172:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAL, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 173:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (3)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(3) - (3)]), ZEND_SEND_VAR, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 174:

    { Z_LVAL((yyval).u.constant)=Z_LVAL((yyvsp[(1) - (4)]).u.constant)+1;  zend_do_pass_param(&(yyvsp[(4) - (4)]), ZEND_SEND_REF, Z_LVAL((yyval).u.constant) TSRMLS_CC); }
    break;

  case 175:

    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 176:

    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_GLOBAL_LOCK TSRMLS_CC); }
    break;

  case 177:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 178:

    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 179:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 180:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 181:

    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 182:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), NULL, ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 183:

    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_FETCH_STATIC TSRMLS_CC); }
    break;

  case 186:

    { CG(access_type) = Z_LVAL((yyvsp[(1) - (1)]).u.constant); }
    break;

  case 190:

    { zend_do_begin_function_declaration(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1, (yyvsp[(3) - (4)]).op_type, &(yyvsp[(1) - (4)]) TSRMLS_CC); }
    break;

  case 191:

    { zend_do_abstract_method(&(yyvsp[(4) - (9)]), &(yyvsp[(1) - (9)]), &(yyvsp[(9) - (9)]) TSRMLS_CC); zend_do_end_function_declaration(&(yyvsp[(2) - (9)]) TSRMLS_CC); }
    break;

  case 193:

    { zend_do_use_trait(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 194:

    { zend_do_use_trait(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 203:

    { zend_add_trait_precedence(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 204:

    { zend_resolve_class_name(&(yyvsp[(1) - (1)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_init_list(&(yyval).u.op.ptr, Z_STRVAL((yyvsp[(1) - (1)]).u.constant) TSRMLS_CC); }
    break;

  case 205:

    { zend_resolve_class_name(&(yyvsp[(3) - (3)]), ZEND_FETCH_CLASS_GLOBAL, 1 TSRMLS_CC); zend_add_to_list(&(yyvsp[(1) - (3)]).u.op.ptr, Z_STRVAL((yyvsp[(3) - (3)]).u.constant) TSRMLS_CC); (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 206:

    { zend_prepare_reference(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 207:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 208:

    { zend_prepare_reference(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 209:

    { zend_add_trait_alias(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 210:

    { zend_add_trait_alias(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), NULL TSRMLS_CC); }
    break;

  case 211:

    { Z_LVAL((yyval).u.constant) = 0x0; }
    break;

  case 212:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 213:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 214:

    { Z_LVAL((yyval).u.constant) = 0;	}
    break;

  case 215:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 216:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 217:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 218:

    { (yyval) = (yyvsp[(1) - (1)]);  if (!(Z_LVAL((yyval).u.constant) & ZEND_ACC_PPP_MASK)) { Z_LVAL((yyval).u.constant) |= ZEND_ACC_PUBLIC; } }
    break;

  case 219:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 220:

    { Z_LVAL((yyval).u.constant) = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 221:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PUBLIC; }
    break;

  case 222:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PROTECTED; }
    break;

  case 223:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_PRIVATE; }
    break;

  case 224:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_STATIC; }
    break;

  case 225:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_ABSTRACT; }
    break;

  case 226:

    { Z_LVAL((yyval).u.constant) = ZEND_ACC_FINAL; }
    break;

  case 227:

    { zend_do_declare_property(&(yyvsp[(3) - (3)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 228:

    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), CG(access_type) TSRMLS_CC); }
    break;

  case 229:

    { zend_do_declare_property(&(yyvsp[(1) - (1)]), NULL, CG(access_type) TSRMLS_CC); }
    break;

  case 230:

    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), CG(access_type) TSRMLS_CC); }
    break;

  case 231:

    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 232:

    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 233:

    { zend_do_echo(&(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 234:

    { zend_do_echo(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 235:

    { (yyval).op_type = IS_CONST;  Z_TYPE((yyval).u.constant) = IS_BOOL;  Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 236:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 237:

    { zend_do_free(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 238:

    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 239:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 240:

    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 241:

    { (yyval).EA = (yyvsp[(1) - (1)]).EA; }
    break;

  case 242:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 243:

    { zend_do_pop_object(&(yyvsp[(1) - (3)]) TSRMLS_CC); fetch_array_dim(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 244:

    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 245:

    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 246:

    { zend_do_push_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 247:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 248:

    { (yyval) = (yyvsp[(0) - (0)]); }
    break;

  case 249:

    { zend_do_push_object(&(yyvsp[(0) - (0)]) TSRMLS_CC); zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 250:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 251:

    { zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 252:

    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 253:

    { zend_do_list_init(TSRMLS_C); }
    break;

  case 254:

    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) TSRMLS_CC); }
    break;

  case 255:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 256:

    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(&(yyvsp[(4) - (4)]), BP_VAR_W, 1 TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(1) - (4)]), BP_VAR_W, 0 TSRMLS_CC); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 257:

    { zend_error(E_DEPRECATED, "Assigning the return value of new by reference is deprecated");  zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(TSRMLS_C); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 258:

    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); zend_do_end_variable_parse(&(yyvsp[(1) - (7)]), BP_VAR_W, 0 TSRMLS_CC); (yyvsp[(3) - (7)]).EA = ZEND_PARSED_NEW; zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) TSRMLS_CC); }
    break;

  case 259:

    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 260:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 261:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 262:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 263:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 264:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 265:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 266:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 267:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 268:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 269:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 270:

    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), BP_VAR_RW, 0 TSRMLS_CC); zend_do_binary_assign_op(ZEND_ASSIGN_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 271:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_INC TSRMLS_CC); }
    break;

  case 272:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_INC TSRMLS_CC); }
    break;

  case 273:

    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), ZEND_POST_DEC TSRMLS_CC); }
    break;

  case 274:

    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), ZEND_PRE_DEC TSRMLS_CC); }
    break;

  case 275:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 276:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 277:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 278:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 279:

    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 280:

    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 281:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 282:

    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 283:

    { zend_do_binary_op(ZEND_BOOL_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 284:

    { zend_do_binary_op(ZEND_BW_OR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 285:

    { zend_do_binary_op(ZEND_BW_AND, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 286:

    { zend_do_binary_op(ZEND_BW_XOR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 287:

    { zend_do_binary_op(ZEND_CONCAT, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 288:

    { zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 289:

    { zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 290:

    { zend_do_binary_op(ZEND_MUL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 291:

    { zend_do_binary_op(ZEND_DIV, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 292:

    { zend_do_binary_op(ZEND_MOD, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 293:

    { zend_do_binary_op(ZEND_SL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 294:

    { zend_do_binary_op(ZEND_SR, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 295:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_ADD, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 296:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); if ((yyvsp[(2) - (2)]).op_type == IS_CONST) { sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = IS_CONST; INIT_PZVAL(&(yyvsp[(1) - (2)]).u.constant); zend_do_binary_op(ZEND_SUB, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); } }
    break;

  case 297:

    { zend_do_unary_op(ZEND_BOOL_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 298:

    { zend_do_unary_op(ZEND_BW_NOT, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 299:

    { zend_do_binary_op(ZEND_IS_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 300:

    { zend_do_binary_op(ZEND_IS_NOT_IDENTICAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 301:

    { zend_do_binary_op(ZEND_IS_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 302:

    { zend_do_binary_op(ZEND_IS_NOT_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 303:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 304:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 305:

    { zend_do_binary_op(ZEND_IS_SMALLER, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 306:

    { zend_do_binary_op(ZEND_IS_SMALLER_OR_EQUAL, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 307:

    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 308:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 309:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 310:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 311:

    { (yyval) = (yyvsp[(5) - (5)]); }
    break;

  case 312:

    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 313:

    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) TSRMLS_CC); }
    break;

  case 314:

    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) TSRMLS_CC); }
    break;

  case 315:

    { zend_do_jmp_set(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 316:

    { zend_do_jmp_set_else(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]) TSRMLS_CC); }
    break;

  case 317:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 318:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_LONG TSRMLS_CC); }
    break;

  case 319:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_DOUBLE TSRMLS_CC); }
    break;

  case 320:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_STRING TSRMLS_CC); }
    break;

  case 321:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_ARRAY TSRMLS_CC); }
    break;

  case 322:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_OBJECT TSRMLS_CC); }
    break;

  case 323:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_BOOL TSRMLS_CC); }
    break;

  case 324:

    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), IS_NULL TSRMLS_CC); }
    break;

  case 325:

    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 326:

    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 327:

    { zend_do_end_silence(&(yyvsp[(1) - (3)]) TSRMLS_CC); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 328:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 329:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 330:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 331:

    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) TSRMLS_CC); }
    break;

  case 332:

    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 333:

    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]).op_type, 0 TSRMLS_CC); }
    break;

  case 334:

    {  zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) TSRMLS_CC); (yyval) = (yyvsp[(4) - (10)]); }
    break;

  case 335:

    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]).op_type, 1 TSRMLS_CC); }
    break;

  case 336:

    {  zend_do_end_function_declaration(&(yyvsp[(2) - (11)]) TSRMLS_CC); (yyval) = (yyvsp[(5) - (11)]); }
    break;

  case 337:

    { (yyval).u.op.opline_num = CG(zend_lineno); }
    break;

  case 340:

    { zend_do_fetch_lexical_variable(&(yyvsp[(3) - (3)]), 0 TSRMLS_CC); }
    break;

  case 341:

    { zend_do_fetch_lexical_variable(&(yyvsp[(4) - (4)]), 1 TSRMLS_CC); }
    break;

  case 342:

    { zend_do_fetch_lexical_variable(&(yyvsp[(1) - (1)]), 0 TSRMLS_CC); }
    break;

  case 343:

    { zend_do_fetch_lexical_variable(&(yyvsp[(2) - (2)]), 1 TSRMLS_CC); }
    break;

  case 344:

    { (yyvsp[(2) - (2)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (2)]), 1 TSRMLS_CC); }
    break;

  case 345:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, (yyvsp[(2) - (5)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 346:

    { (yyvsp[(1) - (4)]).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyvsp[(1) - (4)]).u.constant);  zend_do_build_namespace_name(&(yyvsp[(1) - (4)]), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); (yyvsp[(4) - (4)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (4)]), 0 TSRMLS_CC); }
    break;

  case 347:

    { zend_do_end_function_call(&(yyvsp[(1) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), 0, (yyvsp[(4) - (7)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 348:

    { (yyvsp[(3) - (3)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(2) - (3)]), 0 TSRMLS_CC); }
    break;

  case 349:

    { zend_do_end_function_call(&(yyvsp[(2) - (6)]), &(yyval), &(yyvsp[(5) - (6)]), 0, (yyvsp[(3) - (6)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 350:

    { (yyvsp[(4) - (4)]).u.op.opline_num = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 351:

    { zend_do_end_function_call((yyvsp[(4) - (7)]).u.op.opline_num?NULL:&(yyvsp[(3) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), (yyvsp[(4) - (7)]).u.op.opline_num, (yyvsp[(4) - (7)]).u.op.opline_num TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 352:

    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 353:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 354:

    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 355:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 356:

    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 357:

    { zend_do_end_function_call(NULL, &(yyval), &(yyvsp[(6) - (7)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 358:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (2)]), 0 TSRMLS_CC); }
    break;

  case 359:

    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C);}
    break;

  case 360:

    { (yyval).op_type = IS_CONST; ZVAL_STRINGL(&(yyval).u.constant, "static", sizeof("static")-1, 1);}
    break;

  case 361:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 362:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 363:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 364:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 365:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 366:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 367:

    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 368:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 369:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 370:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 371:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 372:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 375:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 376:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 377:

    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = IS_UNUSED; }
    break;

  case 378:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 379:

    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; }
    break;

  case 380:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 381:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 382:

    { Z_LVAL((yyval).u.constant)=0; }
    break;

  case 383:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 384:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 385:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 386:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 387:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 388:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 389:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 390:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 391:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 392:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 393:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 394:

    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 395:

    { ZVAL_EMPTY_STRING(&(yyval).u.constant); INIT_PZVAL(&(yyval).u.constant); (yyval).op_type = IS_CONST; CG(heredoc) = Z_STRVAL((yyvsp[(1) - (2)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (2)]).u.constant); }
    break;

  case 396:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 397:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_CT, 1 TSRMLS_CC); }
    break;

  case 398:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 399:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 400:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 401:

    { ZVAL_LONG(&(yyvsp[(1) - (2)]).u.constant, 0); sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant TSRMLS_CC); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 402:

    { (yyval) = (yyvsp[(3) - (4)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 403:

    { (yyval) = (yyvsp[(2) - (3)]); Z_TYPE((yyval).u.constant) = IS_CONSTANT_ARRAY; }
    break;

  case 404:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 405:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 406:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_CT, 0 TSRMLS_CC); }
    break;

  case 407:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 408:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 409:

    { zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC); }
    break;

  case 410:

    { (yyval).op_type = IS_CONST; ZVAL_EMPTY_STRING(&(yyval).u.constant);  zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) TSRMLS_CC); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 411:

    { char *tmp = estrndup(Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); memcpy(&(tmp[1]), Z_STRVAL((yyvsp[(2) - (2)]).u.constant), Z_STRLEN((yyvsp[(2) - (2)]).u.constant)+1); tmp[0] = '\\'; efree(Z_STRVAL((yyvsp[(2) - (2)]).u.constant)); Z_STRVAL((yyvsp[(2) - (2)]).u.constant) = tmp; ++Z_STRLEN((yyvsp[(2) - (2)]).u.constant); zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(2) - (2)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 412:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 413:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 414:

    { (yyval) = (yyvsp[(2) - (3)]); CG(heredoc) = Z_STRVAL((yyvsp[(1) - (3)]).u.constant); CG(heredoc_len) = Z_STRLEN((yyvsp[(1) - (3)]).u.constant); }
    break;

  case 415:

    { if (Z_TYPE((yyvsp[(1) - (1)]).u.constant) == IS_CONSTANT) {zend_do_fetch_constant(&(yyval), NULL, &(yyvsp[(1) - (1)]), ZEND_RT, 1 TSRMLS_CC);} else {(yyval) = (yyvsp[(1) - (1)]);} }
    break;

  case 416:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); }
    break;

  case 417:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 420:

    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 421:

    { zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(3) - (3)])); }
    break;

  case 422:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 423:

    { (yyval).op_type = IS_CONST; INIT_PZVAL(&(yyval).u.constant); array_init(&(yyval).u.constant); zend_do_add_static_array_element(&(yyval), NULL, &(yyvsp[(1) - (1)])); }
    break;

  case 424:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 425:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 426:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 427:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_W, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 428:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_RW, 0 TSRMLS_CC); (yyval) = (yyvsp[(1) - (1)]);
				  zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 429:

    { zend_do_push_object(&(yyvsp[(1) - (2)]) TSRMLS_CC); }
    break;

  case 430:

    { zend_do_push_object(&(yyvsp[(4) - (4)]) TSRMLS_CC); }
    break;

  case 431:

    { zend_do_pop_object(&(yyval) TSRMLS_CC); (yyval).EA = (yyvsp[(1) - (7)]).EA | ((yyvsp[(7) - (7)]).EA ? (yyvsp[(7) - (7)]).EA : (yyvsp[(6) - (7)]).EA); }
    break;

  case 432:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 433:

    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 434:

    { (yyval).EA = 0; }
    break;

  case 435:

    { zend_do_push_object(&(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 436:

    { (yyval).EA = (yyvsp[(4) - (4)]).EA; }
    break;

  case 437:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 438:

    { (yyvsp[(1) - (4)]).EA = ZEND_PARSED_METHOD_CALL; fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 439:

    { zend_do_pop_object(&(yyvsp[(1) - (1)]) TSRMLS_CC); zend_do_begin_method_call(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 440:

    { zend_do_end_function_call(&(yyvsp[(1) - (4)]), &(yyval), &(yyvsp[(3) - (4)]), 1, 1 TSRMLS_CC); zend_do_extended_fcall_end(TSRMLS_C); }
    break;

  case 441:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_METHOD_CALL; zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 442:

    { (yyval) = (yyvsp[(1) - (1)]); zend_do_push_object(&(yyval) TSRMLS_CC); }
    break;

  case 443:

    { (yyval).EA = ZEND_PARSED_MEMBER; }
    break;

  case 444:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 445:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 446:

    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 447:

    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) TSRMLS_CC); }
    break;

  case 448:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); (yyval)=(yyvsp[(1) - (1)]);; }
    break;

  case 449:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 450:

    { zend_do_begin_variable_parse(TSRMLS_C); (yyvsp[(1) - (1)]).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 451:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 452:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 453:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 454:

    { zend_do_begin_variable_parse(TSRMLS_C); (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_FUNCTION_CALL; }
    break;

  case 455:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 456:

    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); (yyval).EA = ZEND_PARSED_VARIABLE; }
    break;

  case 457:

    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = ZEND_PARSED_STATIC_MEMBER; }
    break;

  case 458:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 459:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 460:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 461:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 462:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 463:

    { (yyval).op_type = IS_UNUSED; }
    break;

  case 464:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 465:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 466:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); }
    break;

  case 467:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) TSRMLS_CC);}
    break;

  case 468:

    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 469:

    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 470:

    { znode tmp_znode;  zend_do_pop_object(&tmp_znode TSRMLS_CC);  zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) TSRMLS_CC);}
    break;

  case 471:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 472:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 473:

    { Z_LVAL((yyval).u.constant) = 1; }
    break;

  case 474:

    { Z_LVAL((yyval).u.constant)++; }
    break;

  case 477:

    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 478:

    { zend_do_new_list_begin(TSRMLS_C); }
    break;

  case 479:

    { zend_do_new_list_end(TSRMLS_C); }
    break;

  case 480:

    { zend_do_add_list_element(NULL TSRMLS_CC); }
    break;

  case 481:

    { zend_do_init_array(&(yyval), NULL, NULL, 0 TSRMLS_CC); }
    break;

  case 482:

    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 483:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 TSRMLS_CC); }
    break;

  case 484:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), NULL, 0 TSRMLS_CC); }
    break;

  case 485:

    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 TSRMLS_CC); }
    break;

  case 486:

    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), NULL, 0 TSRMLS_CC); }
    break;

  case 487:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 TSRMLS_CC); }
    break;

  case 488:

    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), NULL, 1 TSRMLS_CC); }
    break;

  case 489:

    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 TSRMLS_CC); }
    break;

  case 490:

    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), NULL, 1 TSRMLS_CC); }
    break;

  case 491:

    { zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC);  zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 492:

    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 493:

    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), NULL, &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 494:

    { zend_do_add_string(&(yyval), NULL, &(yyvsp[(1) - (2)]) TSRMLS_CC); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), BP_VAR_R, 0 TSRMLS_CC); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 495:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 496:

    { zend_do_begin_variable_parse(TSRMLS_C); }
    break;

  case 497:

    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) TSRMLS_CC); }
    break;

  case 498:

    { zend_do_begin_variable_parse(TSRMLS_C); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 TSRMLS_CC); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) TSRMLS_CC); }
    break;

  case 499:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 TSRMLS_CC); }
    break;

  case 500:

    { zend_do_begin_variable_parse(TSRMLS_C);  fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) TSRMLS_CC); }
    break;

  case 501:

    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 502:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 503:

    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 504:

    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 TSRMLS_CC); }
    break;

  case 505:

    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 506:

    { zend_do_isset_or_isempty(ZEND_ISEMPTY, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 507:

    { zend_do_include_or_eval(ZEND_INCLUDE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 508:

    { zend_do_include_or_eval(ZEND_INCLUDE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 509:

    { zend_do_include_or_eval(ZEND_EVAL, &(yyval), &(yyvsp[(3) - (4)]) TSRMLS_CC); }
    break;

  case 510:

    { zend_do_include_or_eval(ZEND_REQUIRE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 511:

    { zend_do_include_or_eval(ZEND_REQUIRE_ONCE, &(yyval), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 512:

    { zend_do_isset_or_isempty(ZEND_ISSET, &(yyval), &(yyvsp[(1) - (1)]) TSRMLS_CC); }
    break;

  case 513:

    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) TSRMLS_CC); }
    break;

  case 514:

    { znode tmp; zend_do_isset_or_isempty(ZEND_ISSET, &tmp, &(yyvsp[(4) - (4)]) TSRMLS_CC); zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &tmp, &(yyvsp[(2) - (4)]) TSRMLS_CC); }
    break;

  case 515:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;

  case 516:

    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ZEND_RT, 0 TSRMLS_CC); }
    break;


/* Line 1267 of yacc.c.  */

      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}





/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T zend_yytnamerr(char *yyres, const char *yystr)
{
	if (!yyres) {
		return yystrlen(yystr);
	}
	{
		TSRMLS_FETCH();
		if (CG(parse_error) == 0) {
			char buffer[120];
			const unsigned char *end, *str, *tok1 = NULL, *tok2 = NULL;
			unsigned int len = 0, toklen = 0, yystr_len;
			
			CG(parse_error) = 1;

			if (LANG_SCNG(yy_text)[0] == 0 &&
				LANG_SCNG(yy_leng) == 1 &&
				memcmp(yystr, "\"end of file\"", sizeof("\"end of file\"") - 1) == 0) {
				yystpcpy(yyres, "end of file");
				return sizeof("end of file")-1;
			}
			
			str = LANG_SCNG(yy_text);
			end = memchr(str, '\n', LANG_SCNG(yy_leng));
			yystr_len = yystrlen(yystr);
			
			if ((tok1 = memchr(yystr, '(', yystr_len)) != NULL
				&& (tok2 = zend_memrchr(yystr, ')', yystr_len)) != NULL) {
				toklen = (tok2 - tok1) + 1;
			} else {
				tok1 = tok2 = NULL;
				toklen = 0;
			}
			
			if (end == NULL) {
				len = LANG_SCNG(yy_leng) > 30 ? 30 : LANG_SCNG(yy_leng);
			} else {
				len = (end - str) > 30 ? 30 : (end - str);
			}
			if (toklen) {
				snprintf(buffer, sizeof(buffer), "'%.*s' %.*s", len, str, toklen, tok1);
			} else {
				snprintf(buffer, sizeof(buffer), "'%.*s'", len, str);
			}
			yystpcpy(yyres, buffer);
			return len + (toklen ? toklen + 1 : 0) + 2;
		}		
	}	
	if (*yystr == '"') {
		YYSIZE_T yyn = 0;
		const char *yyp = yystr;

		for (; *++yyp != '"'; ++yyn) {
			yyres[yyn] = *yyp;
		}
		yyres[yyn] = '\0';
		return yyn;
	}
	yystpcpy(yyres, yystr);
	return strlen(yystr);
}

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * indent-tabs-mode: t
 * End:
 */

