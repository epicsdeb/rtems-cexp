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
#define yyparse cexpparse
#define yylex   cexplex
#define yyerror cexperror
#define yylval  cexplval
#define yychar  cexpchar
#define yydebug cexpdebug
#define yynerrs cexpnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     STR_CONST = 259,
     FUNC = 260,
     VAR = 261,
     UVAR = 262,
     IDENT = 263,
     KW_CHAR = 264,
     KW_SHORT = 265,
     KW_LONG = 266,
     KW_FLOAT = 267,
     KW_DOUBLE = 268,
     MODOP = 269,
     NONE = 270,
     OR = 271,
     AND = 272,
     NE = 273,
     EQ = 274,
     GE = 275,
     LE = 276,
     SHR = 277,
     SHL = 278,
     CAST = 279,
     VARCAST = 280,
     DEREF = 281,
     ADDR = 282,
     PREFIX = 283,
     MM = 284,
     PP = 285,
     NEG = 286,
     CALL = 287
   };
#endif
/* Tokens.  */
#define NUMBER 258
#define STR_CONST 259
#define FUNC 260
#define VAR 261
#define UVAR 262
#define IDENT 263
#define KW_CHAR 264
#define KW_SHORT 265
#define KW_LONG 266
#define KW_FLOAT 267
#define KW_DOUBLE 268
#define MODOP 269
#define NONE 270
#define OR 271
#define AND 272
#define NE 273
#define EQ 274
#define GE 275
#define LE 276
#define SHR 277
#define SHL 278
#define CAST 279
#define VARCAST 280
#define DEREF 281
#define ADDR 282
#define PREFIX 283
#define MM 284
#define PP 285
#define NEG 286
#define CALL 287




/* Copy the first part of user declarations.  */
#line 1 "cexp.y"

/* $Id: cexp.y,v 1.48 2008/10/09 04:51:24 strauman Exp $ */
/* Grammar definition and lexical analyzer for Cexp */

/* SLAC Software Notices, Set 4 OTT.002a, 2004 FEB 03
 *
 * Authorship
 * ----------
 * This software (CEXP - C-expression interpreter and runtime
 * object loader/linker) was created by
 *
 *    Till Straumann <strauman@slac.stanford.edu>, 2002-2008,
 * 	  Stanford Linear Accelerator Center, Stanford University.
 *
 * Acknowledgement of sponsorship
 * ------------------------------
 * This software was produced by
 *     the Stanford Linear Accelerator Center, Stanford University,
 * 	   under Contract DE-AC03-76SFO0515 with the Department of Energy.
 * 
 * Government disclaimer of liability
 * ----------------------------------
 * Neither the United States nor the United States Department of Energy,
 * nor any of their employees, makes any warranty, express or implied, or
 * assumes any legal liability or responsibility for the accuracy,
 * completeness, or usefulness of any data, apparatus, product, or process
 * disclosed, or represents that its use would not infringe privately owned
 * rights.
 * 
 * Stanford disclaimer of liability
 * --------------------------------
 * Stanford University makes no representations or warranties, express or
 * implied, nor assumes any liability for the use of this software.
 * 
 * Stanford disclaimer of copyright
 * --------------------------------
 * Stanford University, owner of the copyright, hereby disclaims its
 * copyright and all other rights in this software.  Hence, anyone may
 * freely use it for any purpose without restriction.  
 * 
 * Maintenance of notices
 * ----------------------
 * In the interest of clarity regarding the origin and status of this
 * SLAC software, this and all the preceding Stanford University notices
 * are to remain affixed to any copy or derivative of this software made
 * or distributed by the recipient and are to be affixed to any copy of
 * software made or distributed by the recipient that contains a copy or
 * derivative of this software.
 * 
 * SLAC Software Notices, Set 4 OTT.002a, 2004 FEB 03
 */ 

#include <stdio.h>
#include <fcntl.h>
#include <assert.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define _INSIDE_CEXP_Y
#include "cexpsyms.h"
#include "cexpmod.h"
#undef  _INSIDE_CEXP_Y
#include "vars.h"

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

/* not letting them live makes not much sense */
#ifndef CONFIG_STRINGS_LIVE_FOREVER
#define CONFIG_STRINGS_LIVE_FOREVER
#endif

#define YYPARSE_PARAM	parm
#define YYLEX_PARAM		parm
#define YYERROR_VERBOSE

#define EVAL_INH	 (((CexpParserCtx)YYPARSE_PARAM)->evalInhibit)
#define PSHEVAL(inh) do { EVAL_INH<<=1; if (inh) EVAL_INH++; } while(0)
#define POPEVAL      do { EVAL_INH>>=1; } while(0)
#define EVAL(stuff)  if (! EVAL_INH ) do { stuff; } while (0)

#define CHECK(cexpTfuncall) do { const char *e=(cexpTfuncall);\
					 if (e) { yyerror(e); YYERROR; } } while (0)

/* acceptable characters for identifiers - must not
 * overlap with operators
 */
#define ISIDENTCHAR(ch) ('_'==(ch) || '@'==(ch))

#define LEXERR	-1
/* ugly hack; helper for word completion */
#define LEXERR_INCOMPLETE_STRING	-100

void yyerror(const char*msg);
int  yylex();

typedef char *LString;

typedef struct CexpParserCtxRec_ {
	const char		*chpt;
	LString			lineStrTbl[10];	/* allow for 10 strings on one line of input  */
	CexpSymRec		rval_sym;       /* return value and status of last evaluation */
	CexpValU		rval;
	int             status;         
	unsigned long	evalInhibit;
	FILE			*f;				/* where to print evaluated value			  */
	char            sbuf[1000];		/* scratch space for strings                  */
} CexpParserCtxRec;

static CexpSym
varCreate(char *name, CexpType type)
{
CexpSym rval;
	if (!(rval=cexpVarLookup(name,1)/*allow creation*/)) {
		yyerror("unable to add new user variable");
		return 0;
	}
	rval->value.type = type;
	if (CEXP_TYPE_PTRQ(type))
		rval->value.ptv->p=0;
	else switch(type) {
		case TUChar:	rval->value.ptv->c=0;		break;
		case TUShort:	rval->value.ptv->s=0;		break;
		case TULong:	rval->value.ptv->l=0;		break;
		case TFloat:	rval->value.ptv->f=0.0;	break;
		case TDouble:	rval->value.ptv->d=0.0;	break;
		default:
			assert(!"unknown type");
	}
	return rval;
}



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
typedef union YYSTYPE
#line 137 "cexp.y"
{
	CexpTypedValRec				val;
	CexpTypedAddrRec			lval;
	CexpTypedAddr				varp;
	CexpSym						sym;	/* a symbol table entry */
	CexpType					typ;
	CexpBinOp					binop;
	char						*lstr;	/* string in the line string table */
	struct			{
		CexpTypedAddrRec	lval;
		CexpBinOp			op;
	}							fixexp;
	struct			{
		CexpSym				sym;
		char				*mname;		/* string kept in the line string table */
	}							method;
	unsigned long				ul;
}
/* Line 187 of yacc.c.  */
#line 322 "cexp.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 335 "cexp.tab.c"

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
# if YYENABLE_NLS
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
#define YYFINAL  70
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   440

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNRULES -- Number of states.  */
#define YYNSTATES  206

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      52,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,     2,     2,    37,    24,     2,
      50,    51,    35,    34,    16,    33,    49,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    18,     2,
      27,    19,    28,    17,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    23,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    22,     2,    46,     2,     2,     2,
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
      15,    20,    21,    25,    26,    29,    30,    31,    32,    38,
      39,    40,    41,    42,    43,    44,    45,    48
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    12,    20,    23,    27,    35,
      37,    40,    42,    46,    48,    51,    54,    57,    60,    62,
      66,    70,    74,    76,    79,    82,    86,    90,    94,    98,
     102,   106,   110,   114,   118,   122,   126,   130,   134,   138,
     142,   146,   149,   152,   155,   158,   161,   164,   166,   168,
     170,   172,   175,   178,   181,   184,   187,   189,   191,   195,
     197,   199,   201,   203,   206,   208,   211,   213,   215,   217,
     219,   221,   225,   230,   232,   241,   243,   246,   248,   250,
     252,   255,   258,   261,   265,   269,   273,   277,   279,   283,
     288,   295,   299,   304,   311,   320,   331,   344,   359,   376,
     395,   416,   439,   464,   491
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    59,    -1,    71,    68,    -1,    71,    35,
      68,    -1,    74,    50,    35,    68,    51,    50,    51,    -1,
      71,     8,    -1,    71,    35,     8,    -1,    74,    50,    35,
       8,    51,    50,    51,    -1,    56,    -1,    55,    47,    -1,
      60,    -1,    58,    16,    60,    -1,    52,    -1,     8,    52,
      -1,    57,    52,    -1,    55,    52,    -1,    58,    52,    -1,
      61,    -1,    70,    19,    60,    -1,    70,    14,    60,    -1,
       8,    19,    60,    -1,    77,    -1,    62,    61,    -1,    63,
      61,    -1,    61,    22,    61,    -1,    61,    23,    61,    -1,
      61,    24,    61,    -1,    61,    25,    61,    -1,    61,    26,
      61,    -1,    61,    28,    61,    -1,    61,    27,    61,    -1,
      61,    30,    61,    -1,    61,    29,    61,    -1,    61,    32,
      61,    -1,    61,    31,    61,    -1,    61,    34,    61,    -1,
      61,    33,    61,    -1,    61,    35,    61,    -1,    61,    36,
      61,    -1,    61,    37,    61,    -1,    61,    20,    -1,    61,
      21,    -1,    43,    70,    -1,    44,    70,    -1,    70,    43,
      -1,    70,    44,    -1,    70,    -1,     3,    -1,     4,    -1,
      79,    -1,    47,    77,    -1,    46,    77,    -1,    33,    77,
      -1,    24,     6,    -1,    24,     7,    -1,     6,    -1,     7,
      -1,    50,    70,    51,    -1,     6,    -1,     7,    -1,     5,
      -1,    67,    -1,    72,    69,    -1,    69,    -1,    35,    77,
      -1,     9,    -1,    10,    -1,    11,    -1,    12,    -1,    13,
      -1,    50,    71,    51,    -1,    50,    71,    35,    51,    -1,
      71,    -1,    50,    74,    50,    35,    51,    50,    51,    51,
      -1,     5,    -1,    24,     5,    -1,    65,    -1,    64,    -1,
      66,    -1,    72,    77,    -1,    73,    77,    -1,    75,    77,
      -1,     6,    49,     8,    -1,     7,    49,     8,    -1,     5,
      49,     8,    -1,    50,    58,    51,    -1,    76,    -1,    78,
      50,    51,    -1,    78,    50,    60,    51,    -1,    78,    50,
      60,    16,    60,    51,    -1,    79,    50,    51,    -1,    79,
      50,    60,    51,    -1,    79,    50,    60,    16,    60,    51,
      -1,    79,    50,    60,    16,    60,    16,    60,    51,    -1,
      79,    50,    60,    16,    60,    16,    60,    16,    60,    51,
      -1,    79,    50,    60,    16,    60,    16,    60,    16,    60,
      16,    60,    51,    -1,    79,    50,    60,    16,    60,    16,
      60,    16,    60,    16,    60,    16,    60,    51,    -1,    79,
      50,    60,    16,    60,    16,    60,    16,    60,    16,    60,
      16,    60,    16,    60,    51,    -1,    79,    50,    60,    16,
      60,    16,    60,    16,    60,    16,    60,    16,    60,    16,
      60,    16,    60,    51,    -1,    79,    50,    60,    16,    60,
      16,    60,    16,    60,    16,    60,    16,    60,    16,    60,
      16,    60,    16,    60,    51,    -1,    79,    50,    60,    16,
      60,    16,    60,    16,    60,    16,    60,    16,    60,    16,
      60,    16,    60,    16,    60,    16,    60,    51,    -1,    79,
      50,    60,    16,    60,    16,    60,    16,    60,    16,    60,
      16,    60,    16,    60,    16,    60,    16,    60,    16,    60,
      16,    60,    51,    -1,    79,    50,    60,    16,    60,    16,
      60,    16,    60,    16,    60,    16,    60,    16,    60,    16,
      60,    16,    60,    16,    60,    16,    60,    16,    60,    51,
      -1,    79,    50,    60,    16,    60,    16,    60,    16,    60,
      16,    60,    16,    60,    16,    60,    16,    60,    16,    60,
      16,    60,    16,    60,    16,    60,    16,    60,    51,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   215,   215,   218,   220,   222,   226,   231,   236,   243,
     243,   246,   247,   251,   253,   259,   260,   264,   301,   302,
     304,   311,   320,   321,   325,   329,   331,   333,   335,   337,
     339,   341,   343,   345,   347,   349,   351,   353,   355,   357,
     359,   363,   367,   371,   373,   378,   380,   382,   390,   391,
     395,   396,   398,   400,   406,   408,   412,   414,   416,   420,
     422,   424,   428,   429,   447,   448,   463,   465,   467,   469,
     471,   475,   480,   484,   502,   506,   508,   510,   522,   536,
     537,   539,   541,   546,   548,   550,   556,   557,   558,   560,
     562,   564,   566,   568,   570,   572,   574,   576,   578,   580,
     582,   584,   586,   588,   590
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "STR_CONST", "FUNC", "VAR",
  "UVAR", "IDENT", "KW_CHAR", "KW_SHORT", "KW_LONG", "KW_FLOAT",
  "KW_DOUBLE", "MODOP", "NONE", "','", "'?'", "':'", "'='", "OR", "AND",
  "'|'", "'^'", "'&'", "NE", "EQ", "'<'", "'>'", "GE", "LE", "SHR", "SHL",
  "'-'", "'+'", "'*'", "'/'", "'%'", "CAST", "VARCAST", "DEREF", "ADDR",
  "PREFIX", "MM", "PP", "NEG", "'~'", "'!'", "CALL", "'.'", "'('", "')'",
  "'\\n'", "$accept", "input", "redef", "newdef", "def", "commaexp",
  "line", "exp", "binexp", "or", "and", "prefix", "postfix", "unexp",
  "lvar", "anyvar", "clvar", "lval", "typeid", "cast", "pcast", "fptype",
  "fpcast", "funcp", "castexp", "symmethod", "call", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    44,    63,    58,    61,
     271,   272,   124,    94,    38,   273,   274,    60,    62,   275,
     276,   277,   278,    45,    43,    42,    47,    37,   279,   280,
     281,   282,   283,   284,   285,   286,   126,    33,   287,    46,
      40,    41,    10
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    55,    56,    56,    56,    57,
      57,    58,    58,    59,    59,    59,    59,    59,    60,    60,
      60,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    62,    63,    64,    64,    65,    65,    65,    66,    66,
      66,    66,    66,    66,    66,    66,    67,    67,    67,    68,
      68,    68,    69,    69,    70,    70,    71,    71,    71,    71,
      71,    72,    73,    74,    75,    76,    76,    76,    76,    77,
      77,    77,    77,    78,    78,    78,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     7,     2,     3,     7,     1,
       2,     1,     3,     1,     2,     2,     2,     2,     1,     3,
       3,     3,     1,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     1,     1,     3,     1,
       1,     1,     1,     2,     1,     2,     1,     1,     1,     1,
       1,     3,     4,     1,     8,     1,     2,     1,     1,     1,
       2,     2,     2,     3,     3,     3,     3,     1,     3,     4,
       6,     3,     4,     6,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    48,    49,    75,    56,    57,     0,    66,    67,    68,
      69,    70,     0,     0,     0,     0,     0,     0,     0,     0,
      13,     0,     0,     9,     0,     0,     2,    11,    18,     0,
       0,    78,    77,    79,    62,    64,    47,    73,     0,     0,
       0,     0,    87,    22,     0,    50,     0,     0,     0,     0,
      14,    76,    54,    55,    47,    53,    65,    56,    57,     0,
      43,     0,    44,    52,    51,     0,     0,    47,    73,     0,
       1,    10,    16,    15,     0,    17,    41,    42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,    24,     0,     0,    45,    46,
      61,    59,    60,     6,     0,     3,    63,    80,    81,     0,
      82,     0,     0,    85,    83,    84,    21,     0,     0,    63,
      86,    58,     0,    71,     0,    12,    25,    26,    27,    28,
      29,    31,    30,    33,    32,    35,    34,    37,    36,    38,
      39,    40,    20,    19,     7,     4,     0,    88,     0,    91,
       0,    72,     0,     0,     0,     0,    89,     0,    92,     0,
       0,     0,     0,     0,     0,     0,     0,    90,     0,    93,
       0,     8,     5,     0,    74,     0,    94,     0,     0,    95,
       0,     0,    96,     0,     0,    97,     0,     0,    98,     0,
       0,    99,     0,     0,   100,     0,     0,   101,     0,     0,
     102,     0,     0,   103,     0,   104
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,   105,    35,    54,    37,    38,
      39,    40,    41,    42,    43,    44,    45
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -77
static const yytype_int16 yypact[] =
{
      96,   -77,   -77,   -12,     6,     9,    13,   -77,   -77,   -77,
     -77,   -77,   231,   297,   297,    -2,    -2,   297,   297,   249,
     -77,    35,    -8,   -77,    -6,   -10,   -77,   -77,   328,   297,
     297,   -77,   -77,   -77,   -77,   -77,   151,   204,   297,   297,
      12,   297,   -77,   -77,    19,    63,   110,   113,   125,   273,
     -77,   -77,   -77,   -77,    51,   -77,   -77,   -77,   -77,     1,
     -77,    23,   -77,   -77,   -77,   105,     2,    79,     3,   102,
     -77,   -77,   -77,   -77,   273,   -77,   -77,   -77,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   345,   361,   273,   273,   -77,   -77,
     -77,   -77,   -77,   -77,   264,   -77,   -77,   -77,   -77,   123,
     -77,    17,   200,   -77,   -77,   -77,   -77,   115,   122,   -77,
     -77,   -77,   126,   -77,   129,   -77,   376,   390,   403,   186,
     186,   194,   194,   194,   194,   276,   276,   205,   205,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   319,   -77,    15,   -77,
      75,   -77,   128,   131,   132,   273,   -77,   273,   -77,   111,
     124,   130,   134,    76,   135,   137,   138,   -77,   273,   -77,
     140,   -77,   -77,    94,   -77,   273,   -77,    98,   273,   -77,
     100,   273,   -77,   103,   273,   -77,   109,   273,   -77,   116,
     273,   -77,   118,   273,   -77,   120,   273,   -77,   121,   273,
     -77,   147,   273,   -77,   141,   -77
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -77,   -77,   -77,   -77,   -77,   157,   -77,   -40,    -3,   -77,
     -77,   -77,   -77,   -77,   -77,   -76,   -21,     0,   -16,   -14,
     -77,   178,   -77,   -77,   250,   -77,   -77
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      36,    61,    61,    68,    57,    58,    74,    57,    58,   116,
       7,     8,     9,    10,    11,    60,    62,   106,    74,    67,
       1,     2,     3,     4,     5,    65,    94,    95,   145,    57,
      58,   155,    49,    14,   125,    70,    14,    46,   122,    71,
     119,    12,    75,   118,    72,    61,    73,    61,    59,    36,
      13,    59,    14,   120,   123,    47,   142,   143,    48,   117,
      15,    16,   109,    17,    18,    50,   156,    19,   147,   111,
     154,   148,   150,    59,    36,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   157,   168,    96,    98,    99,    36,    36,    97,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
     175,    36,    36,   112,   178,   162,   181,   163,   113,   184,
      12,   114,    98,    99,    49,   187,   158,   169,   173,    13,
     121,    14,   190,   115,   193,   177,   196,   199,   180,    15,
      16,   183,    17,    18,   186,   176,    19,   189,    20,   179,
     192,   182,   124,   195,   185,    36,   198,    36,   146,   201,
     188,   164,   204,   202,   152,    96,   121,   191,    36,   194,
      97,   197,   200,   123,   165,    36,    66,   151,    36,   159,
     166,    36,   160,   161,    36,   167,   170,    36,   171,   172,
      36,   174,   205,    36,    98,    99,    36,    69,   203,    36,
       0,     0,    36,     1,     2,     3,     4,     5,    65,   100,
     101,   102,   103,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    12,    87,    88,    89,    90,    91,
      92,    93,     0,    13,     0,    14,    51,    52,    53,   104,
      91,    92,    93,    15,    16,     0,    17,    18,     0,     0,
      19,   149,     1,     2,     3,     4,     5,    65,     7,     8,
       9,    10,    11,    55,    56,     0,     0,    63,    64,   100,
     101,   102,   144,    12,     0,     0,     1,     2,     3,     4,
       5,    65,    13,     0,    14,     0,     0,     0,   107,   108,
       0,   110,    15,    16,     0,    17,    18,    12,     0,    19,
       1,     2,     3,     4,     5,     0,    13,     0,    14,    89,
      90,    91,    92,    93,     0,     0,    15,    16,     0,    17,
      18,    12,     0,    19,   100,   101,   102,   153,     0,     0,
      13,     0,    14,     0,     0,     0,     0,     0,     0,     0,
      15,    16,     0,    17,    18,     0,     0,    19,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93
};

static const yytype_int16 yycheck[] =
{
       0,    15,    16,    19,     6,     7,    16,     6,     7,    49,
       9,    10,    11,    12,    13,    15,    16,    38,    16,    19,
       3,     4,     5,     6,     7,     8,    29,    30,   104,     6,
       7,    16,    19,    35,    74,     0,    35,    49,    35,    47,
      61,    24,    52,    59,    52,    59,    52,    61,    50,    49,
      33,    50,    35,    51,    51,    49,    96,    97,    49,    59,
      43,    44,    50,    46,    47,    52,    51,    50,    51,    50,
     146,   111,   112,    50,    74,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    16,    16,    14,    43,    44,    96,    97,    19,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      16,   111,   112,    50,    16,   155,    16,   157,     8,    16,
      24,     8,    43,    44,    19,    16,    51,    51,   168,    33,
      51,    35,    16,     8,    16,   175,    16,    16,   178,    43,
      44,   181,    46,    47,   184,    51,    50,   187,    52,    51,
     190,    51,    50,   193,    51,   155,   196,   157,    35,   199,
      51,    50,   202,    16,    35,    14,    51,    51,   168,    51,
      19,    51,    51,    51,    50,   175,    19,    51,   178,    51,
      50,   181,    51,    51,   184,    51,    51,   187,    51,    51,
     190,    51,    51,   193,    43,    44,   196,    19,    51,   199,
      -1,    -1,   202,     3,     4,     5,     6,     7,     8,     5,
       6,     7,     8,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    24,    31,    32,    33,    34,    35,
      36,    37,    -1,    33,    -1,    35,     5,     6,     7,    35,
      35,    36,    37,    43,    44,    -1,    46,    47,    -1,    -1,
      50,    51,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    13,    14,    -1,    -1,    17,    18,     5,
       6,     7,     8,    24,    -1,    -1,     3,     4,     5,     6,
       7,     8,    33,    -1,    35,    -1,    -1,    -1,    38,    39,
      -1,    41,    43,    44,    -1,    46,    47,    24,    -1,    50,
       3,     4,     5,     6,     7,    -1,    33,    -1,    35,    33,
      34,    35,    36,    37,    -1,    -1,    43,    44,    -1,    46,
      47,    24,    -1,    50,     5,     6,     7,     8,    -1,    -1,
      33,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    46,    47,    -1,    -1,    50,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    24,    33,    35,    43,    44,    46,    47,    50,
      52,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    49,    49,    49,    19,
      52,     5,     6,     7,    70,    77,    77,     6,     7,    50,
      70,    72,    70,    77,    77,     8,    58,    70,    71,    74,
       0,    47,    52,    52,    16,    52,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    61,    61,    14,    19,    43,    44,
       5,     6,     7,     8,    35,    68,    69,    77,    77,    50,
      77,    50,    50,     8,     8,     8,    60,    70,    71,    69,
      51,    51,    35,    51,    50,    60,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    60,    60,     8,    68,    35,    51,    60,    51,
      60,    51,    35,     8,    68,    16,    51,    16,    51,    51,
      51,    51,    60,    60,    50,    50,    50,    51,    16,    51,
      51,    51,    51,    60,    51,    16,    51,    60,    16,    51,
      60,    16,    51,    60,    16,    51,    60,    16,    51,    60,
      16,    51,    60,    16,    51,    60,    16,    51,    60,    16,
      51,    60,    16,    51,    60,    51
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
# if YYLTYPE_IS_TRIVIAL
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
#line 215 "cexp.y"
    { CexpParserCtx pa=parm; if ( TVoid != (yyvsp[(1) - (1)].val).type ) { pa->rval=(yyvsp[(1) - (1)].val).tv; pa->rval_sym.value.type = (yyvsp[(1) - (1)].val).type; } pa->status = 0; YYACCEPT; ;}
    break;

  case 3:
#line 219 "cexp.y"
    { EVAL((yyvsp[(2) - (2)].varp)->type = (yyvsp[(1) - (2)].typ);); CHECK(cexpTA2TV(&(yyval.val),(yyvsp[(2) - (2)].varp))); ;}
    break;

  case 4:
#line 221 "cexp.y"
    { EVAL((yyvsp[(3) - (3)].varp)->type = CEXP_TYPE_BASE2PTR((yyvsp[(1) - (3)].typ));); CHECK(cexpTA2TV(&(yyval.val),(yyvsp[(3) - (3)].varp))); ;}
    break;

  case 5:
#line 223 "cexp.y"
    { EVAL((yyvsp[(4) - (7)].varp)->type = (yyvsp[(1) - (7)].typ)); CHECK(cexpTA2TV(&(yyval.val),(yyvsp[(4) - (7)].varp))); ;}
    break;

  case 6:
#line 227 "cexp.y"
    { CexpSym found;
					  EVAL(if (!(found = varCreate((yyvsp[(2) - (2)].lstr), (yyvsp[(1) - (2)].typ)))) YYERROR; \
					  		CHECK(cexpTA2TV(&(yyval.val),&found->value)) );
					;}
    break;

  case 7:
#line 232 "cexp.y"
    { CexpSym found;
					  EVAL(if (!(found = varCreate((yyvsp[(3) - (3)].lstr), CEXP_TYPE_BASE2PTR((yyvsp[(1) - (3)].typ))))) YYERROR; \
					  		CHECK(cexpTA2TV(&(yyval.val),&found->value)));
					;}
    break;

  case 8:
#line 237 "cexp.y"
    { CexpSym found;
					  EVAL(if (!(found = varCreate((yyvsp[(4) - (7)].lstr), (yyvsp[(1) - (7)].typ)))) YYERROR; \
					  		CHECK(cexpTA2TV(&(yyval.val),&found->value)));
					;}
    break;

  case 12:
#line 248 "cexp.y"
    { (yyval.val)=(yyvsp[(3) - (3)].val); ;}
    break;

  case 13:
#line 252 "cexp.y"
    {	(yyval.val).type=TVoid; ;}
    break;

  case 14:
#line 254 "cexp.y"
    {
						(yyval.val).type=TVoid;
						yyerror("unknown symbol/variable; '=' expected");
						YYERROR;
					;}
    break;

  case 16:
#line 260 "cexp.y"
    {
						fprintf(stderr,"Symbol already defined; append '!' to enforce recast\n");
						YYERROR;
					;}
    break;

  case 17:
#line 265 "cexp.y"
    {FILE *f=((CexpParserCtx)parm)->f;
						(yyval.val)=(yyvsp[(1) - (2)].val);
						if (CEXP_TYPE_FPQ((yyvsp[(1) - (2)].val).type)) {
							CHECK(cexpTypeCast(&(yyvsp[(1) - (2)].val),TDouble,0));
							if (f)
								fprintf(f,"%f\n",(yyvsp[(1) - (2)].val).tv.d);
						}else {
							if (TUChar==(yyvsp[(1) - (2)].val).type) {
								unsigned char c=(yyvsp[(1) - (2)].val).tv.c,e=0;
								if (f) {
									fprintf(f,"0x%02x (%d)",c,c);
									switch (c) {
										case 0:	    e=1; c='0'; break;
										case '\t':	e=1; c='t'; break;
										case '\r':	e=1; c='r'; break;
										case '\n':	e=1; c='n'; break;
										case '\f':	e=1; c='f'; break;
										default: 	break;
									}
									if (isprint(c)) {
										fputc('\'',f);
										if (e) fputc('\\',f);
										fputc(c,f);
										fputc('\'',f);
									}
									fputc('\n',f);
								}
							} else {
								CHECK(cexpTypeCast(&(yyvsp[(1) - (2)].val),TULong,0));
								if (f)
									fprintf(f,"0x%08lx (%ld)\n",(yyvsp[(1) - (2)].val).tv.l,(yyvsp[(1) - (2)].val).tv.l);
							}
						}
					;}
    break;

  case 19:
#line 303 "cexp.y"
    { (yyval.val)=(yyvsp[(3) - (3)].val); EVAL(CHECK(cexpTVAssign(&(yyvsp[(1) - (3)].lval), &(yyvsp[(3) - (3)].val)))); ;}
    break;

  case 20:
#line 305 "cexp.y"
    { EVAL( \
						CHECK(cexpTA2TV(&(yyval.val),&(yyvsp[(1) - (3)].lval))); \
						CHECK(cexpTVBinOp(&(yyval.val), &(yyval.val), &(yyvsp[(3) - (3)].val), (yyvsp[(2) - (3)].binop))); \
						CHECK(cexpTVAssign(&(yyvsp[(1) - (3)].lval),&(yyval.val))); \
					  );
					;}
    break;

  case 21:
#line 312 "cexp.y"
    { CexpSym found;
					  (yyval.val)=(yyvsp[(3) - (3)].val); EVAL(if (!(found=varCreate((yyvsp[(1) - (3)].lstr), (yyvsp[(3) - (3)].val).type))) {	\
									YYERROR; 								\
								}\
								CHECK(cexpTVAssign(&found->value, &(yyvsp[(3) - (3)].val))); );
					;}
    break;

  case 23:
#line 322 "cexp.y"
    { (yyval.val).tv.l = (yyvsp[(1) - (2)].ul) || cexpTVTrueQ(&(yyvsp[(2) - (2)].val));
					  (yyval.val).type = TULong;
					  POPEVAL; ;}
    break;

  case 24:
#line 326 "cexp.y"
    { (yyval.val).tv.l = (yyvsp[(1) - (2)].ul) && cexpTVTrueQ(&(yyvsp[(2) - (2)].val));
					  (yyval.val).type = TULong;
					  POPEVAL; ;}
    break;

  case 25:
#line 330 "cexp.y"
    { CHECK(cexpTVBinOp(&(yyval.val),&(yyvsp[(1) - (3)].val),&(yyvsp[(3) - (3)].val),OOr)); ;}
    break;

  case 26:
#line 332 "cexp.y"
    { CHECK(cexpTVBinOp(&(yyval.val),&(yyvsp[(1) - (3)].val),&(yyvsp[(3) - (3)].val),OXor)); ;}
    break;

  case 27:
#line 334 "cexp.y"
    { CHECK(cexpTVBinOp(&(yyval.val),&(yyvsp[(1) - (3)].val),&(yyvsp[(3) - (3)].val),OAnd)); ;}
    break;

  case 28:
#line 336 "cexp.y"
    { CHECK(cexpTVBinOp(&(yyval.val),&(yyvsp[(1) - (3)].val),&(yyvsp[(3) - (3)].val),ONe)); ;}
    break;

  case 29:
#line 338 "cexp.y"
    { CHECK(cexpTVBinOp(&(yyval.val),&(yyvsp[(1) - (3)].val),&(yyvsp[(3) - (3)].val),OEq)); ;}
    break;

  case 30:
#line 340 "cexp.y"
    { CHECK(cexpTVBinOp(&(yyval.val),&(yyvsp[(1) - (3)].val),&(yyvsp[(3) - (3)].val),OGt)); ;}
    break;

  case 31:
#line 342 "cexp.y"
    { CHECK(cexpTVBinOp(&(yyval.val),&(yyvsp[(1) - (3)].val),&(yyvsp[(3) - (3)].val),OLt)); ;}
    break;

  case 32:
#line 344 "cexp.y"
    { CHECK(cexpTVBinOp(&(yyval.val),&(yyvsp[(1) - (3)].val),&(yyvsp[(3) - (3)].val),OLe)); ;}
    break;

  case 33:
#line 346 "cexp.y"
    { CHECK(cexpTVBinOp(&(yyval.val),&(yyvsp[(1) - (3)].val),&(yyvsp[(3) - (3)].val),OGe)); ;}
    break;

  case 34:
#line 348 "cexp.y"
    { CHECK(cexpTVBinOp(&(yyval.val),&(yyvsp[(1) - (3)].val),&(yyvsp[(3) - (3)].val),OShL)); ;}
    break;

  case 35:
#line 350 "cexp.y"
    { CHECK(cexpTVBinOp(&(yyval.val),&(yyvsp[(1) - (3)].val),&(yyvsp[(3) - (3)].val),OShR)); ;}
    break;

  case 36:
#line 352 "cexp.y"
    { CHECK(cexpTVBinOp(&(yyval.val),&(yyvsp[(1) - (3)].val),&(yyvsp[(3) - (3)].val),OAdd)); ;}
    break;

  case 37:
#line 354 "cexp.y"
    { CHECK(cexpTVBinOp(&(yyval.val),&(yyvsp[(1) - (3)].val),&(yyvsp[(3) - (3)].val),OSub)); ;}
    break;

  case 38:
#line 356 "cexp.y"
    { CHECK(cexpTVBinOp(&(yyval.val),&(yyvsp[(1) - (3)].val),&(yyvsp[(3) - (3)].val),OMul)); ;}
    break;

  case 39:
#line 358 "cexp.y"
    { CHECK(cexpTVBinOp(&(yyval.val),&(yyvsp[(1) - (3)].val),&(yyvsp[(3) - (3)].val),ODiv)); ;}
    break;

  case 40:
#line 360 "cexp.y"
    { CHECK(cexpTVBinOp(&(yyval.val),&(yyvsp[(1) - (3)].val),&(yyvsp[(3) - (3)].val),OMod)); ;}
    break;

  case 41:
#line 364 "cexp.y"
    { (yyval.ul)=cexpTVTrueQ(&(yyvsp[(1) - (2)].val)); PSHEVAL((yyval.ul)); ;}
    break;

  case 42:
#line 368 "cexp.y"
    { (yyval.ul)=cexpTVTrueQ(&(yyvsp[(1) - (2)].val)); PSHEVAL( ! (yyval.ul)); ;}
    break;

  case 43:
#line 372 "cexp.y"
    { (yyval.fixexp).lval=(yyvsp[(2) - (2)].lval); (yyval.fixexp).op=OSub; ;}
    break;

  case 44:
#line 374 "cexp.y"
    { (yyval.fixexp).lval=(yyvsp[(2) - (2)].lval); (yyval.fixexp).op=OAdd; ;}
    break;

  case 45:
#line 379 "cexp.y"
    { (yyval.fixexp).lval=(yyvsp[(1) - (2)].lval); (yyval.fixexp).op=OSub; ;}
    break;

  case 46:
#line 381 "cexp.y"
    { (yyval.fixexp).lval=(yyvsp[(1) - (2)].lval); (yyval.fixexp).op=OAdd; ;}
    break;

  case 47:
#line 383 "cexp.y"
    { (yyval.fixexp).lval=(yyvsp[(1) - (1)].lval); (yyval.fixexp).op=ONoop; ;}
    break;

  case 51:
#line 397 "cexp.y"
    { (yyval.val).type=TULong; (yyval.val).tv.l = ! cexpTVTrueQ(&(yyvsp[(2) - (2)].val)); ;}
    break;

  case 52:
#line 399 "cexp.y"
    { CHECK(cexpTVUnOp(&(yyval.val),&(yyvsp[(2) - (2)].val),OCpl)); ;}
    break;

  case 53:
#line 401 "cexp.y"
    { CHECK(cexpTVUnOp(&(yyval.val),&(yyvsp[(2) - (2)].val),ONeg)); ;}
    break;

  case 54:
#line 407 "cexp.y"
    { CHECK(cexpTVPtr(&(yyval.val), &(yyvsp[(2) - (2)].sym)->value)); ;}
    break;

  case 55:
#line 409 "cexp.y"
    { CHECK(cexpTVPtr(&(yyval.val), &(yyvsp[(2) - (2)].sym)->value)); ;}
    break;

  case 56:
#line 413 "cexp.y"
    { (yyval.lval)=(yyvsp[(1) - (1)].sym)->value; ;}
    break;

  case 57:
#line 415 "cexp.y"
    { (yyval.lval)=(yyvsp[(1) - (1)].sym)->value; ;}
    break;

  case 58:
#line 417 "cexp.y"
    { (yyval.lval)=(yyvsp[(2) - (3)].lval); ;}
    break;

  case 59:
#line 421 "cexp.y"
    { (yyval.varp)=&(yyvsp[(1) - (1)].sym)->value; ;}
    break;

  case 60:
#line 423 "cexp.y"
    { (yyval.varp)=&(yyvsp[(1) - (1)].sym)->value; ;}
    break;

  case 61:
#line 425 "cexp.y"
    { (yyval.varp)=&(yyvsp[(1) - (1)].sym)->value; ;}
    break;

  case 63:
#line 430 "cexp.y"
    { CexpTypedValRec v;
						v.type=(yyvsp[(2) - (2)].lval).type; v.tv=*(yyvsp[(2) - (2)].lval).ptv;
						CHECK(cexpTypeCast(&v,(yyvsp[(1) - (2)].typ),1));
						(yyval.lval)=(yyvsp[(2) - (2)].lval);
						(yyval.lval).type=(yyvsp[(1) - (2)].typ);
					;}
    break;

  case 65:
#line 449 "cexp.y"
    { if (!CEXP_TYPE_PTRQ((yyvsp[(2) - (2)].val).type) || CEXP_TYPE_FUNQ((yyvsp[(2) - (2)].val).type)) {
						yyerror("not a valid lval address");
						YYERROR;
					  }
					  (yyval.lval).type=CEXP_TYPE_PTR2BASE((yyvsp[(2) - (2)].val).type);
					  (yyval.lval).ptv=(CexpVal)(yyvsp[(2) - (2)].val).tv.p;
					;}
    break;

  case 66:
#line 464 "cexp.y"
    { (yyval.typ)=TUChar; ;}
    break;

  case 67:
#line 466 "cexp.y"
    { (yyval.typ)=TUShort; ;}
    break;

  case 68:
#line 468 "cexp.y"
    { (yyval.typ)=TULong; ;}
    break;

  case 69:
#line 470 "cexp.y"
    { (yyval.typ)=TFloat; ;}
    break;

  case 70:
#line 472 "cexp.y"
    { (yyval.typ)=TDouble; ;}
    break;

  case 71:
#line 476 "cexp.y"
    { (yyval.typ)=(yyvsp[(2) - (3)].typ); ;}
    break;

  case 72:
#line 481 "cexp.y"
    { (yyval.typ)=CEXP_TYPE_BASE2PTR((yyvsp[(2) - (4)].typ)); ;}
    break;

  case 73:
#line 485 "cexp.y"
    { switch ((yyvsp[(1) - (1)].typ)) {
						default:
							yyerror("invalid type for function pointer cast");
						YYERROR;

						case TDouble:
							(yyval.typ)=TDFuncP;
						break;

						case TULong:
							(yyval.typ)=TFuncP;
						break;
					  }
					;}
    break;

  case 74:
#line 503 "cexp.y"
    { (yyval.typ)=(yyvsp[(2) - (8)].typ); ;}
    break;

  case 75:
#line 507 "cexp.y"
    { (yyval.val).type=(yyvsp[(1) - (1)].sym)->value.type; (yyval.val).tv.p=(void*)(yyvsp[(1) - (1)].sym)->value.ptv; ;}
    break;

  case 76:
#line 509 "cexp.y"
    { (yyval.val).type=(yyvsp[(2) - (2)].sym)->value.type; (yyval.val).tv.p=(void*)(yyvsp[(2) - (2)].sym)->value.ptv; ;}
    break;

  case 77:
#line 511 "cexp.y"
    { CexpTypedValRec tmp;
					  EVAL( \
						CHECK(cexpTA2TV(&(yyval.val),&(yyvsp[(1) - (1)].fixexp).lval)); \
						tmp.type=TUChar; \
						tmp.tv.c=1; \
						if (ONoop != (yyvsp[(1) - (1)].fixexp).op) { \
							CHECK(cexpTVBinOp(&tmp,&(yyval.val),&tmp,(yyvsp[(1) - (1)].fixexp).op)); \
							CHECK(cexpTVAssign(&(yyvsp[(1) - (1)].fixexp).lval,&tmp)); \
						} \
					  );
					;}
    break;

  case 78:
#line 523 "cexp.y"
    { CexpTypedValRec tmp;
					  EVAL( \
						CHECK(cexpTA2TV(&(yyval.val),&(yyvsp[(1) - (1)].fixexp).lval)); \
						tmp.type=TUChar; \
						tmp.tv.c=1; \
						if (ONoop != (yyvsp[(1) - (1)].fixexp).op) { \
							CHECK(cexpTVBinOp(&(yyval.val),&(yyval.val),&tmp,(yyvsp[(1) - (1)].fixexp).op)); \
							CHECK(cexpTVAssign(&(yyvsp[(1) - (1)].fixexp).lval,&(yyval.val))); \
						} \
					  );
					;}
    break;

  case 80:
#line 538 "cexp.y"
    { (yyval.val)=(yyvsp[(2) - (2)].val); CHECK(cexpTypeCast(&(yyval.val),(yyvsp[(1) - (2)].typ),CNV_FORCE)); ;}
    break;

  case 81:
#line 540 "cexp.y"
    { (yyval.val)=(yyvsp[(2) - (2)].val); CHECK(cexpTypeCast(&(yyval.val),(yyvsp[(1) - (2)].typ),CNV_FORCE)); ;}
    break;

  case 82:
#line 542 "cexp.y"
    { (yyval.val)=(yyvsp[(2) - (2)].val); CHECK(cexpTypeCast(&(yyval.val),(yyvsp[(1) - (2)].typ),CNV_FORCE)); ;}
    break;

  case 83:
#line 546 "cexp.y"
    { (yyval.method).sym = (yyvsp[(1) - (3)].sym); (yyval.method).mname=(yyvsp[(3) - (3)].lstr); ;}
    break;

  case 84:
#line 548 "cexp.y"
    { (yyval.method).sym = (yyvsp[(1) - (3)].sym); (yyval.method).mname=(yyvsp[(3) - (3)].lstr); ;}
    break;

  case 85:
#line 550 "cexp.y"
    { (yyval.method).sym = (yyvsp[(1) - (3)].sym); (yyval.method).mname=(yyvsp[(3) - (3)].lstr); ;}
    break;

  case 86:
#line 556 "cexp.y"
    { (yyval.val)=(yyvsp[(2) - (3)].val); ;}
    break;

  case 88:
#line 559 "cexp.y"
    {	EVAL(CHECK(cexpSymMember(&(yyval.val), (yyvsp[(1) - (3)].method).sym, (yyvsp[(1) - (3)].method).mname, 0))); ;}
    break;

  case 89:
#line 561 "cexp.y"
    {	EVAL(CHECK(cexpSymMember(&(yyval.val), (yyvsp[(1) - (4)].method).sym, (yyvsp[(1) - (4)].method).mname, &(yyvsp[(3) - (4)].val), 0))); ;}
    break;

  case 90:
#line 563 "cexp.y"
    {	EVAL(CHECK(cexpSymMember(&(yyval.val), (yyvsp[(1) - (6)].method).sym, (yyvsp[(1) - (6)].method).mname, &(yyvsp[(3) - (6)].val), &(yyvsp[(5) - (6)].val), 0))); ;}
    break;

  case 91:
#line 565 "cexp.y"
    {	EVAL(CHECK(cexpTVFnCall(&(yyval.val),&(yyvsp[(1) - (3)].val),0))); ;}
    break;

  case 92:
#line 567 "cexp.y"
    {	EVAL(CHECK(cexpTVFnCall(&(yyval.val),&(yyvsp[(1) - (4)].val),&(yyvsp[(3) - (4)].val),0))); ;}
    break;

  case 93:
#line 569 "cexp.y"
    {	EVAL(CHECK(cexpTVFnCall(&(yyval.val),&(yyvsp[(1) - (6)].val),&(yyvsp[(3) - (6)].val),&(yyvsp[(5) - (6)].val),0))); ;}
    break;

  case 94:
#line 571 "cexp.y"
    {	EVAL(CHECK(cexpTVFnCall(&(yyval.val),&(yyvsp[(1) - (8)].val),&(yyvsp[(3) - (8)].val),&(yyvsp[(5) - (8)].val),&(yyvsp[(7) - (8)].val),0))); ;}
    break;

  case 95:
#line 573 "cexp.y"
    {	EVAL(CHECK(cexpTVFnCall(&(yyval.val),&(yyvsp[(1) - (10)].val),&(yyvsp[(3) - (10)].val),&(yyvsp[(5) - (10)].val),&(yyvsp[(7) - (10)].val),&(yyvsp[(9) - (10)].val),0))); ;}
    break;

  case 96:
#line 575 "cexp.y"
    {	EVAL(CHECK(cexpTVFnCall(&(yyval.val),&(yyvsp[(1) - (12)].val),&(yyvsp[(3) - (12)].val),&(yyvsp[(5) - (12)].val),&(yyvsp[(7) - (12)].val),&(yyvsp[(9) - (12)].val),&(yyvsp[(11) - (12)].val),0))); ;}
    break;

  case 97:
#line 577 "cexp.y"
    {	EVAL(CHECK(cexpTVFnCall(&(yyval.val),&(yyvsp[(1) - (14)].val),&(yyvsp[(3) - (14)].val),&(yyvsp[(5) - (14)].val),&(yyvsp[(7) - (14)].val),&(yyvsp[(9) - (14)].val),&(yyvsp[(11) - (14)].val),&(yyvsp[(13) - (14)].val),0))); ;}
    break;

  case 98:
#line 579 "cexp.y"
    {	EVAL(CHECK(cexpTVFnCall(&(yyval.val),&(yyvsp[(1) - (16)].val),&(yyvsp[(3) - (16)].val),&(yyvsp[(5) - (16)].val),&(yyvsp[(7) - (16)].val),&(yyvsp[(9) - (16)].val),&(yyvsp[(11) - (16)].val),&(yyvsp[(13) - (16)].val),&(yyvsp[(15) - (16)].val),0))); ;}
    break;

  case 99:
#line 581 "cexp.y"
    {	EVAL(CHECK(cexpTVFnCall(&(yyval.val),&(yyvsp[(1) - (18)].val),&(yyvsp[(3) - (18)].val),&(yyvsp[(5) - (18)].val),&(yyvsp[(7) - (18)].val),&(yyvsp[(9) - (18)].val),&(yyvsp[(11) - (18)].val),&(yyvsp[(13) - (18)].val),&(yyvsp[(15) - (18)].val),&(yyvsp[(17) - (18)].val),0))); ;}
    break;

  case 100:
#line 583 "cexp.y"
    {	EVAL(CHECK(cexpTVFnCall(&(yyval.val),&(yyvsp[(1) - (20)].val),&(yyvsp[(3) - (20)].val),&(yyvsp[(5) - (20)].val),&(yyvsp[(7) - (20)].val),&(yyvsp[(9) - (20)].val),&(yyvsp[(11) - (20)].val),&(yyvsp[(13) - (20)].val),&(yyvsp[(15) - (20)].val),&(yyvsp[(17) - (20)].val),&(yyvsp[(19) - (20)].val),0))); ;}
    break;

  case 101:
#line 585 "cexp.y"
    {	EVAL(CHECK(cexpTVFnCall(&(yyval.val),&(yyvsp[(1) - (22)].val),&(yyvsp[(3) - (22)].val),&(yyvsp[(5) - (22)].val),&(yyvsp[(7) - (22)].val),&(yyvsp[(9) - (22)].val),&(yyvsp[(11) - (22)].val),&(yyvsp[(13) - (22)].val),&(yyvsp[(15) - (22)].val),&(yyvsp[(17) - (22)].val),&(yyvsp[(19) - (22)].val),&(yyvsp[(21) - (22)].val),0))); ;}
    break;

  case 102:
#line 587 "cexp.y"
    {	EVAL(CHECK(cexpTVFnCall(&(yyval.val),&(yyvsp[(1) - (24)].val),&(yyvsp[(3) - (24)].val),&(yyvsp[(5) - (24)].val),&(yyvsp[(7) - (24)].val),&(yyvsp[(9) - (24)].val),&(yyvsp[(11) - (24)].val),&(yyvsp[(13) - (24)].val),&(yyvsp[(15) - (24)].val),&(yyvsp[(17) - (24)].val),&(yyvsp[(19) - (24)].val),&(yyvsp[(21) - (24)].val),&(yyvsp[(23) - (24)].val),0))); ;}
    break;

  case 103:
#line 589 "cexp.y"
    {	EVAL(CHECK(cexpTVFnCall(&(yyval.val),&(yyvsp[(1) - (26)].val),&(yyvsp[(3) - (26)].val),&(yyvsp[(5) - (26)].val),&(yyvsp[(7) - (26)].val),&(yyvsp[(9) - (26)].val),&(yyvsp[(11) - (26)].val),&(yyvsp[(13) - (26)].val),&(yyvsp[(15) - (26)].val),&(yyvsp[(17) - (26)].val),&(yyvsp[(19) - (26)].val),&(yyvsp[(21) - (26)].val),&(yyvsp[(23) - (26)].val),&(yyvsp[(25) - (26)].val),0))); ;}
    break;

  case 104:
#line 591 "cexp.y"
    {	EVAL(CHECK(cexpTVFnCall(&(yyval.val),&(yyvsp[(1) - (28)].val),&(yyvsp[(3) - (28)].val),&(yyvsp[(5) - (28)].val),&(yyvsp[(7) - (28)].val),&(yyvsp[(9) - (28)].val),&(yyvsp[(11) - (28)].val),&(yyvsp[(13) - (28)].val),&(yyvsp[(15) - (28)].val),&(yyvsp[(17) - (28)].val),&(yyvsp[(19) - (28)].val),&(yyvsp[(21) - (28)].val),&(yyvsp[(23) - (28)].val),&(yyvsp[(25) - (28)].val),&(yyvsp[(27) - (28)].val),0))); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2330 "cexp.tab.c"
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


#line 595 "cexp.y"



/* add a string to the line string table returning its index
 * RETURNS a negative number on error
 */
LString
lstAddString(CexpParserCtx env, char *string)
{
LString			rval=0;
LString			*chppt;
int				i;
	for (i=0,chppt=env->lineStrTbl;
		 i<sizeof(env->lineStrTbl)/sizeof(env->lineStrTbl[0]);
		 i++,chppt++) {
		if (*chppt) {
			if  (strcmp(string,*chppt))			continue;
			else /* string exists already */	return *chppt;
		}
		/* string exists already */
		if ((rval=malloc(strlen(string)+1))) {
			*chppt=rval;
			strcpy(rval,string);
			return (LString) rval;
		}
	}
	fprintf(stderr,"Cexp: Line String Table exhausted\n");
	return 0;
}

#define ch (*pa->chpt)
#define getch() do { (pa->chpt)++;} while(0)

/* helper to save typing */
static int
prerr(void)
{
	yyerror("yylex: buffer overflow");
	return LEXERR;
}

static int
scanfrac(char *buf, char *chpt, int size, YYSTYPE *rval, CexpParserCtx pa, int rejectLonely)
{
int hasE=0;
	/* first, we put ch to the buffer */
	*(chpt++)=(char)ch; size--; /* assume it's still safe */
	getch();
	if ( isdigit(ch) || 'E' == toupper(ch) ) {
		do {
			while(isdigit(ch) && size) {
				*(chpt++)=(char)ch; if (!--size) return prerr();
				getch();
			}
			if (toupper(ch)=='E' && !hasE) {
				*(chpt++)=(char)'E'; if (!--size) return prerr();
				getch();
				if ('-'==ch || '+'==ch) {
					*(chpt++)=(char)ch; if (!--size) return prerr();
					getch();
				}
				hasE=1;
			} else {
		break; /* the loop */
			}
		} while (1);
	} else {
		if ( rejectLonely )
			return '.';
	}
	*chpt=0;
	rval->val.type=TDouble;
	rval->val.tv.d=strtod(buf,&chpt);
	return *chpt ? LEXERR : NUMBER;
}

int
yylex(YYSTYPE *rval, void *arg)
{
unsigned long num;
CexpParserCtx pa=arg;
int           limit=sizeof(pa->sbuf)-1;
char          *chpt;

	while (' '==ch || '\t'==ch)
		getch();

	if (isdigit(ch) || '\''==ch) {
		/* a number */
		num=0;

		if ('\''==ch) {
			/* char constant */
			getch();
			num=ch;
			if ('\\'==ch) {
				getch();
				/* escape sequence */
				switch (ch) {
					case 't': num='\t'; break;
					case 'n': num='\n'; break;
					case 'r': num='\r'; break;
					case '0': num=0;	break;
					case 'f': num='\f';	break;
					case '\\': num='\\';break;
					case '\'': num='\'';break;
					default:
						yyerror("Warning: unknown escape sequence, using unescaped char");
						num=ch;
					break;
				}
			}
			getch();
			if ('\''!=ch)
				yyerror("Warning: missing closing '");
			else
				getch();
			rval->val.tv.c=(unsigned char)num;
			rval->val.type=TUChar;
			return NUMBER;
		}
		chpt=pa->sbuf;
		if ('0'==ch) {
			
			/* hex, octal or fractional */
			*(chpt++)=(char)ch; limit--;
			getch();
			if ('x'==ch) {
				/* a hex number */
				getch();
				while (isxdigit(ch)) {
					num<<=4;
					if (ch>='a')		num+=ch-'a'+10;
					else if (ch>='A')	num+=ch-'A'+10;
					else				num+=ch-'0';
					getch();
				}
			} else if ('.'==ch) {
				/* a decimal number */
				return scanfrac(pa->sbuf,chpt,limit,rval,pa,0);
			} else {
				/* OK, it's octal */
				while ('0'<=ch && ch<'8') {
					num<<=3;
					num+=ch-'0';
					getch();
				}
			}
		} else {
			/* so it must be base 10 */
			do {
				*(chpt++)=(char)ch; limit--;
				num=10*num+(ch-'0');
				getch();
			} while (isdigit(ch) && limit);
			if (!limit) {
				return prerr();
			}
			if ('.'==ch) {
				/* it's a fractional number */
				return scanfrac(pa->sbuf,chpt,limit,rval,pa,0);
			}
		}
		rval->val.tv.l=num;
		rval->val.type=TULong;
		return NUMBER;
	} else if ('.'==ch) {
		/* perhaps also a fractional number */
		return
			scanfrac(pa->sbuf,pa->sbuf,limit,rval,pa,1);
	} else if (isalpha(ch) || ISIDENTCHAR(ch)) {
		/* slurp in an identifier */
		chpt=pa->sbuf;
		do {
			*(chpt++)=ch;
			getch();
		} while ((isalnum(ch)||ISIDENTCHAR(ch)) && (--limit > 0));
		*chpt=0;
		if (!limit)
			return prerr();
		/* is it one of the type cast keywords? */
		if (!strcmp(pa->sbuf,"char"))
			return KW_CHAR;
		else if (!strcmp(pa->sbuf,"short"))
			return KW_SHORT;
		else if (!strcmp(pa->sbuf,"long"))
			return KW_LONG;
		else if (!strcmp(pa->sbuf,"float"))
			return KW_FLOAT;
		else if (!strcmp(pa->sbuf,"double"))
			return KW_DOUBLE;
		else if ((rval->sym=cexpSymLookup(pa->sbuf, 0)))
			return CEXP_TYPE_FUNQ(rval->sym->value.type) ? FUNC : VAR;
		else if ((rval->sym=cexpVarLookup(pa->sbuf,0))) {
			return UVAR;
		}

		/* it's a currently undefined symbol */
		return (rval->lstr=lstAddString(pa,pa->sbuf)) ? IDENT : LEXERR;
	} else if ('"'==ch) {
		/* generate a string constant */
		char *dst;
		const char *strStart;
		dst=pa->sbuf-1;
		strStart = pa->chpt+1;
		do {
		skipit:	
			dst++; limit--;
			getch();
			*dst=ch;
			if ('\\'==ch) {
				getch();
				switch (ch) {
					case 'n':	*dst='\n'; goto skipit;
					case 'r':	*dst='\r'; goto skipit;
					case 't':	*dst='\t'; goto skipit;
					case '"':	*dst='"';  goto skipit;
					case '\\':	           goto skipit;
					case '0':	*dst=0;    goto skipit;
					default:
						dst++; limit--; *dst=ch;
						break;
				}
			}
			if ('"'==ch) {
				*dst=0;
				getch();
				rval->val.type=TUCharP;
#ifdef CONFIG_STRINGS_LIVE_FOREVER
				rval->val.tv.p=cexpStrLookup(pa->sbuf,1);
#else
				rval->val.tv.p=lstAddString(pa,pa->sbuf);
#endif
				return rval->val.tv.p ? STR_CONST : LEXERR;
			}
		} while (ch && limit>2);
		return LEXERR_INCOMPLETE_STRING - (pa->chpt - strStart);
	} else {
		long rv=ch;
		if (rv) getch();

		/* comments? skip the rest of the line */
		if ('#'==rv || ('/'==ch && '/'==rv)) {
			while (ch && '\n'!=rv) {
				rv=ch;
				getch();
			}
			return '\n';
		}

		/* it's any kind of 'special' character such as
		 * an operator etc.
		 */

		/* check for 'double' character operators '&&' '||' '<<' '>>' '==' '!=' '<=' '>=' */
		switch (ch) { /* the second character */
			default: break;

			case '+': if ('+'==rv) rv=PP;  break;
			case '-': if ('-'==rv) rv=MM;  break;

			case '&': if ('&'==rv) rv=AND; break;
			case '|': if ('|'==rv) rv=OR;  break;

			case '<': if ('<'==rv) rv=SHL; break;
			case '>': if ('>'==rv) rv=SHR; break;


			case '=':
				switch (rv) {
					default: break;
					case '=': rv=EQ;	break;
					case '!': rv=NE;	break;
					case '<': rv=LE;	break;
					case '>': rv=GE;	break;
					case '+': rv=MODOP; rval->binop=OAdd;	break;
					case '-': rv=MODOP; rval->binop=OSub;	break;
					case '*': rv=MODOP; rval->binop=OMul;	break;
					case '/': rv=MODOP; rval->binop=ODiv;	break;
					case '%': rv=MODOP; rval->binop=OMod;	break;
					case '&': rv=MODOP; rval->binop=OAnd;	break;
					case '^': rv=MODOP; rval->binop=OXor;	break;
					case '|': rv=MODOP; rval->binop=OOr;	break;
				}
			break;
		}
		if (rv>255) getch(); /* skip second char */
		/* yyparse cannot deal with '\0' chars, so we translate it back to '\n'...*/
		if ((SHL==rv || SHR==rv) && '=' == ch) {
			getch();
			rval->binop = (SHL==rv ? OShL : OShR);
			rv=MODOP;
		}
		return rv ? rv : '\n';
	}
	return 0; /* seems to mean ERROR/EOF */
}

/* re-initialize a parser context to parse 'buf';
 * If called with a NULL argument, a new
 * context is created and initialized.
 *
 * RETURNS: initialized context
 */

static void
releaseStrings(CexpParserCtx ctx)
{
int			i;
char		**chppt;

	/* release the line string table */
	for (i=0,chppt=ctx->lineStrTbl;
		 i<sizeof(ctx->lineStrTbl)/sizeof(ctx->lineStrTbl[0]);
		 i++,chppt++) {
		if (*chppt) {
			free(*chppt);
			*chppt=0;
		}
	}
}

CexpParserCtx
cexpCreateParserCtx(FILE *f)
{
CexpParserCtx	ctx=0;

	assert(ctx=(CexpParserCtx)malloc(sizeof(*ctx)));
	memset(ctx,0,sizeof(*ctx));
	ctx->rval_sym.value.type = TULong;
	ctx->rval.l              = 0;
	ctx->rval_sym.value.ptv  = &ctx->rval;
	ctx->rval_sym.name       = CEXP_LAST_RESULT_VAR_NAME;
	ctx->rval_sym.size       = sizeof(ctx->rval);
	ctx->rval_sym.flags      = 0;
	ctx->rval_sym.help       = "value of last evaluated expression";
	ctx->f = f;
	ctx->status = -1;
	return ctx;
}

void
cexpResetParserCtx(CexpParserCtx ctx, const char *buf)
{
	ctx->chpt=buf;
	ctx->evalInhibit=0;
	ctx->status = -1;
	releaseStrings(ctx);
}

void
cexpFreeParserCtx(CexpParserCtx ctx)
{
	releaseStrings(ctx);
	free(ctx);
}

CexpSym
cexpParserCtxGetResult(CexpParserCtx ctx)
{
	return &ctx->rval_sym;
}

int
cexpParserCtxGetStatus(CexpParserCtx ctx)
{
	return ctx->status;
}

void
yyerror(const char*msg)
{
/* unfortunately, even %pure_parser doesn't pass us the parser argument along.
 * hence, it is not possible for a reentrant parser to tell us where we
 * should print :-( however, our caller may try to redirect stderr...
 */
fprintf(stderr,"Cexp syntax error: %s\n",msg);
}

