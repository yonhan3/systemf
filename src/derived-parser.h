/* A Bison parser, made by GNU Bison 3.6.3.  */

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

#ifndef YY_SYSTEMF1_YY_DERIVED_PARSER_H_INCLUDED
# define YY_SYSTEMF1_YY_DERIVED_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef SYSTEMF1_YYDEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define SYSTEMF1_YYDEBUG 1
#  else
#   define SYSTEMF1_YYDEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define SYSTEMF1_YYDEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined SYSTEMF1_YYDEBUG */
#if SYSTEMF1_YYDEBUG
extern int systemf1_yydebug;
#endif
/* "%code requires" blocks.  */
#line 13 "parser.y"

    #if 1 // This compiles in debug code enabled by systemf1_yydebug;
        #undef SYSTEMF1_YYDEBUG
        #define SYSTEMF1_YYDEBUG 1
        extern int systemf1_yydebug;
    #endif

    #include "systemf-internal.h"


#line 68 "derived-parser.h"

/* Token kinds.  */
#ifndef SYSTEMF1_YYTOKENTYPE
# define SYSTEMF1_YYTOKENTYPE
  enum systemf1_yytokentype
  {
    SYSTEMF1_YYEMPTY = -2,
    SYSTEMF1_YYEOF = 0,            /* "end of file"  */
    SYSTEMF1_YYerror = 256,        /* error  */
    SYSTEMF1_YYUNDEF = 257,        /* "invalid token"  */
    SYLLABLE = 258,                /* SYLLABLE  */
    SPACE = 259,                   /* SPACE  */
    QUOTE = 260,                   /* QUOTE  */
    LESSER = 261,                  /* LESSER  */
    TWO_GREATER_AND_ONE = 262,     /* TWO_GREATER_AND_ONE  */
    TWO_GREATER = 263,             /* TWO_GREATER  */
    AND_GREATER = 264,             /* AND_GREATER  */
    GREATER = 265,                 /* GREATER  */
    TWO_GREATER_GREATER = 266,     /* TWO_GREATER_GREATER  */
    AND_GREATER_GREATER = 267,     /* AND_GREATER_GREATER  */
    GREATER_GREATER = 268,         /* GREATER_GREATER  */
    GREATER_AND_TWO = 269,         /* GREATER_AND_TWO  */
    AND_AND = 270,                 /* AND_AND  */
    OR_OR = 271,                   /* OR_OR  */
    SEMICOLON = 272,               /* SEMICOLON  */
    OR = 273                       /* OR  */
  };
  typedef enum systemf1_yytokentype systemf1_yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined SYSTEMF1_YYSTYPE && ! defined SYSTEMF1_YYSTYPE_IS_DECLARED
union SYSTEMF1_YYSTYPE
{
  syllable * SYLLABLE;                     /* SYLLABLE  */
  syllable * syllables;                    /* syllables  */
  systemf1_redirect * redirects;           /* redirects  */
  systemf1_redirect * redirect;            /* redirect  */
  systemf1_task * cmds;                    /* cmds  */
  systemf1_task * cmd;                     /* cmd  */
  systemf1_task * words;                   /* words  */

#line 111 "derived-parser.h"

};
typedef union SYSTEMF1_YYSTYPE SYSTEMF1_YYSTYPE;
# define SYSTEMF1_YYSTYPE_IS_TRIVIAL 1
# define SYSTEMF1_YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined SYSTEMF1_YYLTYPE && ! defined SYSTEMF1_YYLTYPE_IS_DECLARED
typedef struct SYSTEMF1_YYLTYPE SYSTEMF1_YYLTYPE;
struct SYSTEMF1_YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define SYSTEMF1_YYLTYPE_IS_DECLARED 1
# define SYSTEMF1_YYLTYPE_IS_TRIVIAL 1
#endif



int systemf1_yyparse (yyscan_t scanner, systemf1_parse_args *results);
/* "%code provides" blocks.  */
#line 25 "parser.y"

    #define YYSTYPE SYSTEMF1_YYSTYPE
    #define YYLTYPE SYSTEMF1_YYLTYPE
    #define YY_DECL int systemf1_yylex(YYSTYPE * yylval_param , YYLTYPE *yylloc, yyscan_t yyscanner, systemf1_parse_args *results)
    extern YY_DECL;

    int systemf1_yyerror(SYSTEMF1_YYLTYPE *locp, yyscan_t scanner, systemf1_parse_args *results, const char *msg);

#line 146 "derived-parser.h"

#endif /* !YY_SYSTEMF1_YY_DERIVED_PARSER_H_INCLUDED  */
