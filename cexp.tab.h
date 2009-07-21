/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1489 of yacc.c.  */
#line 132 "cexp.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



