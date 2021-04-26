/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_ANASIN_TAB_H_INCLUDED
# define YY_YY_ANASIN_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    DIGIT = 258,                   /* DIGIT  */
    INT = 259,                     /* INT  */
    FLOAT = 260,                   /* FLOAT  */
    LETTER_ = 261,                 /* LETTER_  */
    ID = 262,                      /* ID  */
    CHAR = 263,                    /* CHAR  */
    STRING = 264,                  /* STRING  */
    EMPTY = 265,                   /* EMPTY  */
    PLUS = 266,                    /* PLUS  */
    MINUS = 267,                   /* MINUS  */
    MULT = 268,                    /* MULT  */
    DIV = 269,                     /* DIV  */
    NOT = 270,                     /* NOT  */
    OR = 271,                      /* OR  */
    AND = 272,                     /* AND  */
    LT = 273,                      /* LT  */
    LTE = 274,                     /* LTE  */
    GT = 275,                      /* GT  */
    GTE = 276,                     /* GTE  */
    EQ = 277,                      /* EQ  */
    NEQ = 278,                     /* NEQ  */
    ASSIGN = 279,                  /* ASSIGN  */
    TYPEINT = 280,                 /* TYPEINT  */
    TYPEFLOAT = 281,               /* TYPEFLOAT  */
    TYPEELEM = 282,                /* TYPEELEM  */
    TYPESET = 283,                 /* TYPESET  */
    IF = 284,                      /* IF  */
    ELSE = 285,                    /* ELSE  */
    FOR = 286,                     /* FOR  */
    RETURN = 287,                  /* RETURN  */
    READ = 288,                    /* READ  */
    WRITE = 289,                   /* WRITE  */
    WRITELN = 290,                 /* WRITELN  */
    IN_OP = 291,                   /* IN_OP  */
    IS_SET_OP = 292,               /* IS_SET_OP  */
    ADD_OP = 293,                  /* ADD_OP  */
    REMOVE_OP = 294,               /* REMOVE_OP  */
    EXISTS_OP = 295,               /* EXISTS_OP  */
    FORALL_OP = 296,               /* FORALL_OP  */
    LPAREN = 297,                  /* LPAREN  */
    RPAREN = 298,                  /* RPAREN  */
    LBRACK = 299,                  /* LBRACK  */
    RBRACK = 300,                  /* RBRACK  */
    LBRACE = 301,                  /* LBRACE  */
    RBRACE = 302,                  /* RBRACE  */
    COMMA = 303,                   /* COMMA  */
    SEMICOLON = 304,               /* SEMICOLON  */
    IFX = 305,                     /* IFX  */
    NEG = 306                      /* NEG  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
#line 54 "anasin.y"
union value
{
#line 54 "anasin.y"

  // char tt_name[51]; // tt_name: Terminal Token name      inicialização com tamanho estático para poder usar strcpy no léxico e não precisar lidar com free's eternos por causa do strdup
  char* tt_name; // tt_name: Terminal Token name
  struct tree_node* nt_node; // nt_node: Nonterminal Token node

#line 122 "anasin.tab.h"

};
#line 54 "anasin.y"
typedef union value YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_ANASIN_TAB_H_INCLUDED  */
