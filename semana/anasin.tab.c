/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 5 "anasin.y"

  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <math.h>
  #include "uthash.h"
  #include "symbol_table.h"
  #include "ast.h"

  extern int yylex();
  extern int yylex_destroy();
  extern FILE *yyin;
  extern int line;
  extern int column;
  extern int error_count;
  extern void yyerror(const char *tt_name);


  /* INITIALIZATIONS */
  symbol_table_entry* symbol_table = NULL; // Tabela de símbolos definida como uma cadeia de entradas symbol_table_entry
  tree_node* abstract_tree = NULL; // Árvore abstrata definida como uma cadeia de entradas tree_node
  int current_scope = 0; // Inicializa escopo global - https://steemit.com/programming/@drifter1/writing-a-simple-compiler-on-my-own-using-symbol-tables-in-the-lexer - 13/04


#line 96 "anasin.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

#include "anasin.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DIGIT = 3,                      /* DIGIT  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_FLOAT = 5,                      /* FLOAT  */
  YYSYMBOL_LETTER_ = 6,                    /* LETTER_  */
  YYSYMBOL_ID = 7,                         /* ID  */
  YYSYMBOL_CHAR = 8,                       /* CHAR  */
  YYSYMBOL_STRING = 9,                     /* STRING  */
  YYSYMBOL_EMPTY = 10,                     /* EMPTY  */
  YYSYMBOL_PLUS = 11,                      /* PLUS  */
  YYSYMBOL_MINUS = 12,                     /* MINUS  */
  YYSYMBOL_MULT = 13,                      /* MULT  */
  YYSYMBOL_DIV = 14,                       /* DIV  */
  YYSYMBOL_NOT = 15,                       /* NOT  */
  YYSYMBOL_OR = 16,                        /* OR  */
  YYSYMBOL_AND = 17,                       /* AND  */
  YYSYMBOL_LT = 18,                        /* LT  */
  YYSYMBOL_LTE = 19,                       /* LTE  */
  YYSYMBOL_GT = 20,                        /* GT  */
  YYSYMBOL_GTE = 21,                       /* GTE  */
  YYSYMBOL_EQ = 22,                        /* EQ  */
  YYSYMBOL_NEQ = 23,                       /* NEQ  */
  YYSYMBOL_ASSIGN = 24,                    /* ASSIGN  */
  YYSYMBOL_TYPEINT = 25,                   /* TYPEINT  */
  YYSYMBOL_TYPEFLOAT = 26,                 /* TYPEFLOAT  */
  YYSYMBOL_TYPEELEM = 27,                  /* TYPEELEM  */
  YYSYMBOL_TYPESET = 28,                   /* TYPESET  */
  YYSYMBOL_IF = 29,                        /* IF  */
  YYSYMBOL_ELSE = 30,                      /* ELSE  */
  YYSYMBOL_FOR = 31,                       /* FOR  */
  YYSYMBOL_RETURN = 32,                    /* RETURN  */
  YYSYMBOL_READ = 33,                      /* READ  */
  YYSYMBOL_WRITE = 34,                     /* WRITE  */
  YYSYMBOL_WRITELN = 35,                   /* WRITELN  */
  YYSYMBOL_IN_OP = 36,                     /* IN_OP  */
  YYSYMBOL_IS_SET_OP = 37,                 /* IS_SET_OP  */
  YYSYMBOL_ADD_OP = 38,                    /* ADD_OP  */
  YYSYMBOL_REMOVE_OP = 39,                 /* REMOVE_OP  */
  YYSYMBOL_EXISTS_OP = 40,                 /* EXISTS_OP  */
  YYSYMBOL_FORALL_OP = 41,                 /* FORALL_OP  */
  YYSYMBOL_LPAREN = 42,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 43,                    /* RPAREN  */
  YYSYMBOL_LBRACK = 44,                    /* LBRACK  */
  YYSYMBOL_RBRACK = 45,                    /* RBRACK  */
  YYSYMBOL_LBRACE = 46,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 47,                    /* RBRACE  */
  YYSYMBOL_COMMA = 48,                     /* COMMA  */
  YYSYMBOL_SEMICOLON = 49,                 /* SEMICOLON  */
  YYSYMBOL_IFX = 50,                       /* IFX  */
  YYSYMBOL_NEG = 51,                       /* NEG  */
  YYSYMBOL_52_ = 52,                       /* ';'  */
  YYSYMBOL_53_ = 53,                       /* '('  */
  YYSYMBOL_54_ = 54,                       /* ')'  */
  YYSYMBOL_55_ = 55,                       /* ','  */
  YYSYMBOL_56_ = 56,                       /* '{'  */
  YYSYMBOL_57_ = 57,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 58,                  /* $accept  */
  YYSYMBOL_program = 59,                   /* program  */
  YYSYMBOL_60_declaration_list = 60,       /* declaration-list  */
  YYSYMBOL_declaration = 61,               /* declaration  */
  YYSYMBOL_62_var_declaration = 62,        /* var-declaration  */
  YYSYMBOL_variable = 63,                  /* variable  */
  YYSYMBOL_64_func_declaration = 64,       /* func-declaration  */
  YYSYMBOL_65_type_specifier = 65,         /* type-specifier  */
  YYSYMBOL_66_parameter_list = 66,         /* parameter-list  */
  YYSYMBOL_parameter = 67,                 /* parameter  */
  YYSYMBOL_68_compound_stmt = 68,          /* compound-stmt  */
  YYSYMBOL_69_1 = 69,                      /* $@1  */
  YYSYMBOL_70_local_declarations = 70,     /* local-declarations  */
  YYSYMBOL_71_statement_list = 71,         /* statement-list  */
  YYSYMBOL_statement = 72,                 /* statement  */
  YYSYMBOL_73_forall_statement = 73,       /* forall-statement  */
  YYSYMBOL_74_conditional_stmt = 74,       /* conditional-stmt  */
  YYSYMBOL_75_iteration_stmt = 75,         /* iteration-stmt  */
  YYSYMBOL_76_forall_stmt = 76,            /* forall-stmt  */
  YYSYMBOL_77_expression_stmt = 77,        /* expression-stmt  */
  YYSYMBOL_78_return_stmt = 78,            /* return-stmt  */
  YYSYMBOL_expression = 79,                /* expression  */
  YYSYMBOL_80_simple_expression = 80,      /* simple-expression  */
  YYSYMBOL_81_relational_exp = 81,         /* relational-exp  */
  YYSYMBOL_82_arithm_add_exp = 82,         /* arithm-add-exp  */
  YYSYMBOL_83_arithm_mul_exp = 83,         /* arithm-mul-exp  */
  YYSYMBOL_84_unary_minus_exp = 84,        /* unary-minus-exp  */
  YYSYMBOL_factor = 85,                    /* factor  */
  YYSYMBOL_86_logop_una = 86,              /* logop-una  */
  YYSYMBOL_87_logop_bin = 87,              /* logop-bin  */
  YYSYMBOL_relop = 88,                     /* relop  */
  YYSYMBOL_89_ariop_add = 89,              /* ariop-add  */
  YYSYMBOL_90_ariop_mul = 90,              /* ariop-mul  */
  YYSYMBOL_91_set_expression = 91,         /* set-expression  */
  YYSYMBOL_92_setop_in = 92,               /* setop-in  */
  YYSYMBOL_93_setop_is_set = 93,           /* setop-is-set  */
  YYSYMBOL_94_setop_add = 94,              /* setop-add  */
  YYSYMBOL_95_setop_remove = 95,           /* setop-remove  */
  YYSYMBOL_96_setop_exists = 96,           /* setop-exists  */
  YYSYMBOL_97_io_expression = 97,          /* io-expression  */
  YYSYMBOL_98_ioop_read = 98,              /* ioop-read  */
  YYSYMBOL_99_ioop_write = 99,             /* ioop-write  */
  YYSYMBOL_word = 100,                     /* word  */
  YYSYMBOL_101_func_call = 101,            /* func-call  */
  YYSYMBOL_arguments = 102,                /* arguments  */
  YYSYMBOL_103_args_list = 103,            /* args-list  */
  YYSYMBOL_var = 104                       /* var  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8685

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  600

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   306


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      53,    54,     2,     2,    55,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    52,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    57,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   155,   155,   166,   173,   180,   186,   193,   200,   209,
     218,   224,   230,   236,   250,   257,   264,   270,   277,   285,
     284,   297,   304,   311,   318,   325,   331,   337,   343,   349,
     355,   361,   367,   374,   380,   386,   392,   398,   406,   413,
     421,   428,   437,   448,   457,   463,   470,   476,   492,   499,
     505,   511,   518,   525,   532,   540,   549,   557,   565,   574,
     583,   592,   601,   608,   616,   623,   631,   638,   646,   653,
     660,   667,   673,   684,   690,   696,   702,   709,   716,   722,
     729,   735,   741,   747,   753,   759,   766,   772,   779,   785,
     792,   798,   804,   810,   816,   823,   840,   847,   854,   878,
     886,   892,   908,   915,   921,   928,   934,   941,   948,   954,
     961,   968,   976
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "DIGIT", "INT",
  "FLOAT", "LETTER_", "ID", "CHAR", "STRING", "EMPTY", "PLUS", "MINUS",
  "MULT", "DIV", "NOT", "OR", "AND", "LT", "LTE", "GT", "GTE", "EQ", "NEQ",
  "ASSIGN", "TYPEINT", "TYPEFLOAT", "TYPEELEM", "TYPESET", "IF", "ELSE",
  "FOR", "RETURN", "READ", "WRITE", "WRITELN", "IN_OP", "IS_SET_OP",
  "ADD_OP", "REMOVE_OP", "EXISTS_OP", "FORALL_OP", "LPAREN", "RPAREN",
  "LBRACK", "RBRACK", "LBRACE", "RBRACE", "COMMA", "SEMICOLON", "IFX",
  "NEG", "';'", "'('", "')'", "','", "'{'", "'}'", "$accept", "program",
  "declaration-list", "declaration", "var-declaration", "variable",
  "func-declaration", "type-specifier", "parameter-list", "parameter",
  "compound-stmt", "$@1", "local-declarations", "statement-list",
  "statement", "forall-statement", "conditional-stmt", "iteration-stmt",
  "forall-stmt", "expression-stmt", "return-stmt", "expression",
  "simple-expression", "relational-exp", "arithm-add-exp",
  "arithm-mul-exp", "unary-minus-exp", "factor", "logop-una", "logop-bin",
  "relop", "ariop-add", "ariop-mul", "set-expression", "setop-in",
  "setop-is-set", "setop-add", "setop-remove", "setop-exists",
  "io-expression", "ioop-read", "ioop-write", "word", "func-call",
  "arguments", "args-list", "var", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,    59,    40,    41,    44,   123,   125
};
#endif

#define YYPACT_NINF (-317)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-113)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1218,     8,    11,    18,    31,   107,  1096,  1470,  1482,    -6,
    1492,    55,  -317,  1523,  1538,    67,    32,    -2,   194,   104,
     242,   296,   302,    20,  1218,  1788,  1570,   346,  5387,  5441,
    8090,  8107,  8022,  8127,    27,   383,    64,    73,  1179,    80,
      87,   103,   122,   129,   129,   140,   145,  5495,   641,  5549,
    5603,   155,  5657,  5711,  5765,  5819,  5873,  5927,  5981,   157,
      62,  1370,  3527,  8144,  8164,  8181,   476,   152,   227,   412,
     482,   574,   655,   172,   204,   217,  8201,  2681,   127,  2017,
    8218,  8238,   641,  6845,  1604,  6035,   220,   270,   450,   450,
     270,  2056,   824,   950,   295,  3585,   -24,  1601,  6089,  6143,
     277,   986,  1196,    65,    94,   139,   166,   266,   366,   387,
     403,   442,   387,   552,   571,   387,  1943,  1021,  1196,  2812,
     430,   250,   438,   255,    -9,   201,  2350,  6197,   258,   281,
     306,   308,   311,   326,   329,   288,   353,  6251,  6305,  6359,
    6413,  6467,  6521,  2017,  8255,  3777,   476,  1221,  3723,  8275,
    8292,  4387,   476,  1320,   352,  8312,  3224,  6845,  6895,  2017,
     354,   357,   360,  1325,   270,   362,  4441,  1354,  4495,  1384,
     469,   602,  6575,   378,   389,  1434,  6895,  6895,  1437,  6629,
    6683,  1788,   396,   434,   456,  2056,  7418,  7439,  7327,  7465,
      85,   472,   475,   484,   489,   492,   492,   510,   641,   229,
    2522,  1144,  7486,  7512,  7533,   817,   401,   408,   417,   799,
     828,   901,    14,    46,    69,  7559,  7371,  2418,  7043,  4147,
    7056,   148,   519,   529,   541,   551,   560,   560,   572,   641,
     244,   167,  2785,  7101,  7114,  7127,   874,   251,   274,   320,
     533,   538,   700,   516,   556,   564,  7172,  1297,  7770,  7788,
    1756,  7809,   213,   591,   594,   597,   599,   609,   609,   612,
     641,    49,  3641,  3122,  7827,  7848,  7866,  2171,   183,   234,
     304,   485,   569,   730,   407,   433,   449,  7887,  7580,   947,
     614,   617,  2479,   145,  1249,  1788,  1328,   570,  2470,  3185,
    4292,  4361,  4415,  4469,   586,  2950,   621,  8397,  8418,  8043,
    8439,   795,   634,   638,   642,   644,   657,   657,   660,   641,
       5,  2643,  7070,  8460,  8481,  8502,  2210,    38,   325,   563,
     585,   792,   794,   580,   683,   693,  8523,  8376,   696,  2017,
    4078,   687,  5387,  6737,   689,   699,   127,  7392,  2017,  7603,
    7624,   270,   450,   450,   270,  2056,   907,   929,   295,    76,
    1404,   656,   656,   656,  4015,  1005,  1404,   641,   127,  7030,
    2017,  7185,  7198,   270,   450,   450,   270,  2056,   833,   850,
     295,    91,  1425,   678,   678,   678,  3104,   875,  1425,  3224,
     127,  7650,  2017,  7905,  7926,   270,   450,   450,   270,  2056,
     994,  1018,   295,   100,  1520,   754,   754,   754,  4244,  1074,
    1520,  2017,   641,  6845,  1604,  4523,   701,  4181,  5387,  4577,
    4631,  3355,   127,  8069,  2017,  8544,  8565,   270,   450,   450,
     270,  2056,   802,  1000,   295,   141,  1567,   786,   786,   786,
    3611,  1135,  1567,  2056,   697,  4239,   706,  2017,   703,   713,
     719,   733,   735,   738,   765,   768,  2017,  7663,  7672,   817,
    1015,  1961,  7702,  7723,  8320,   817,  1058,   160,   759,   766,
     771,   777,   779,   782,   806,   815,  2017,  7243,  3509,   874,
     884,  2913,  7256,  7269,  4118,   874,   915,   648,   804,   805,
     807,   808,   818,   819,   835,   839,  2017,  7944,  6871,  2171,
    1127,  3318,  7965,  7983,  6921,  2171,  1131,   826,   226,  4685,
    2350,  4739,  4793,  4847,  4901,  4955,  5009,  5063,   812,   836,
     841,   844,   849,   852,   862,   857,   890,  2017,  8586,  4549,
    2210,  1159,  7141,  8607,  8628,  4603,  2210,  1224,   892,  6945,
    6791,   866,  7749,   257,   264,   310,  1072,   270,   881,  8329,
    1103,  8350,  1118,  7314,   670,   716,   724,   990,   270,   887,
    4320,   992,  7298,   998,  8004,   888,   893,   895,  1188,   270,
     896,  6946,  1212,  7633,  1231,  6845,  6845,  2017,  5117,  8649,
     908,   917,   922,  1467,   270,   906,  4657,  1495,  4711,  1574,
    6984,   909,  1161,   914,  1011,   935,  1241,  5171,  5225,   938,
     940,  1614,  1171,  1013,  1253,  6845,  6845,  1642,  5279,  5333
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -317,  -317,  -317,   989,     2,     0,  -317,   191,  -317,   973,
     -22,  -170,  -315,  -317,   -48,   605,   -76,   -69,   -44,   -55,
     -60,   -35,  2377,  1926,  2221,  1770,  1521,   704,  3492,   -58,
     358,  -196,  -139,  2526,  1067,  2682,  2931,  3087,  3336,  3628,
    3741,  3868,   -79,  1316,  -316,  -317,   348
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,    49,   182,    10,   183,    20,    21,
      50,    28,    51,    52,    53,   138,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,   102,
     109,   112,   115,    67,    68,    69,    70,    71,    72,    73,
      74,    75,   132,    76,   121,   122,    77
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    26,     8,    86,    98,   352,     9,   289,     8,   118,
     133,   332,   143,    96,   290,   -10,    18,   436,   -11,   139,
     438,   100,   101,   293,    18,   -12,   140,   329,   292,   126,
     144,    30,    31,    17,   184,   125,   374,    33,   -13,   291,
     142,   -49,   458,   120,   123,   157,    14,   124,   294,   296,
     -51,   141,   -17,   -17,   100,   101,   135,     1,     2,     3,
       4,   288,    15,   353,   478,   100,   101,   396,   -51,   -80,
     -80,   159,   -80,   137,   -50,   -80,    25,   -80,   100,   101,
      79,   289,  -100,   287,   154,   286,   -16,   -16,   290,   186,
     187,   331,   337,   508,   375,   189,   509,   293,   -81,   -81,
    -100,   -81,   292,   -49,   -81,  -101,   -81,    12,   165,   171,
     172,    22,   446,   291,   -49,   408,   428,    82,   -80,    -8,
      16,   170,   294,  -101,   173,   397,    84,   466,   179,   180,
     447,   217,   218,    87,   219,   288,   486,   220,   338,   221,
      88,   350,    35,   -82,   -82,   467,   -82,   -81,   356,   -82,
     335,   -82,   217,   218,   487,   359,    89,   287,   220,   286,
     222,   223,   224,   349,   225,   226,   227,   228,   100,   101,
     -83,   -83,   372,   -83,   429,    90,   -83,   517,   -83,   378,
     229,  -109,    91,   -62,   -62,   103,   104,   105,   106,   107,
     108,    11,   -82,    94,   371,   518,   -48,    11,   185,   100,
     101,   360,   -40,   394,   -50,   -40,   -40,    19,   -40,    99,
     400,   -40,    97,   -40,   -48,    19,   -40,   248,   249,   -83,
     381,   -62,   -62,   251,   -51,   393,   -40,   -40,   -40,   -40,
     -40,   158,   -40,   -40,   -40,   -40,   -40,   -50,   -40,   -40,
     -40,   -40,   -40,   -90,   -90,   100,   101,   406,   -18,   -18,
     -90,   -90,   426,   -40,   -40,   352,  -100,   -40,   -40,   432,
     100,   101,   329,   441,   442,   -49,   382,   100,   101,  -101,
     -84,   -84,   127,   -84,   425,   374,   -84,   128,   -84,   -90,
     565,   -79,   -79,   -49,   -79,   461,   462,   -79,   -90,   -79,
     -90,   -90,   -79,  -102,   434,   396,    23,    24,   -49,   -49,
    -103,   120,   328,   439,   155,   -50,   -50,   481,   482,   144,
     444,  -102,  -112,   353,   -79,   -79,   -79,   -79,  -103,   -84,
     -91,   -91,   457,   120,   143,   459,   428,   289,   -90,   -90,
     -79,   504,   464,   375,   290,   160,   -91,   -91,   505,   512,
     513,   -90,   -90,   293,   477,   120,  -104,   479,   292,   500,
     -15,   -15,   507,   397,   484,   499,    -8,    -8,   -91,   291,
    -105,   -90,  -106,   506,  -104,   161,   497,   498,   294,   296,
     -85,   -85,   294,   -85,   -91,   -91,   -85,   120,   -85,   510,
     162,   288,    81,   163,   429,   502,   515,   -77,   -77,   164,
     -77,    30,    31,   -77,   184,   -77,   216,    33,   528,    34,
     -14,   -14,   531,   287,   -48,   286,  -102,   -86,   -86,  -103,
     -86,   538,  -104,   -86,    81,   -86,   175,   100,   101,   -85,
     -77,   -77,   -77,   -77,   -90,   -90,   247,   278,   -91,   -91,
     216,   549,   177,   -91,   -91,   129,   -77,   -50,   134,   327,
      79,   334,   136,   178,   -90,   567,   -87,   -87,   333,   -87,
      81,   560,   -87,   -91,   -87,   -50,   -86,    81,   130,   131,
      81,   -51,   -90,    81,   -91,   331,    81,  -112,  -112,  -112,
    -112,   -91,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
      30,    31,   575,   184,  -111,  -111,    33,  -100,    34,   289,
     289,   278,  -108,   156,    81,   -87,   290,   290,   -92,   -92,
      81,   -92,   -92,  -101,   247,   293,   293,   278,  -112,    78,
     292,   292,   174,    42,    43,    44,    45,   587,   588,   289,
     289,   291,   291,  -110,  -110,   341,   290,   290,   342,    48,
     294,   294,   589,   327,   -92,   293,   293,   343,   340,   -92,
     292,   292,   344,   288,   288,   345,   216,   598,   599,   -92,
     -92,   291,   291,   340,   -93,   -93,   -88,   -88,   351,   -88,
     294,   294,   -88,   348,   -88,   287,   287,   286,   286,   362,
     -51,   -51,   363,   288,   288,   -89,   -89,   216,   -89,   -91,
     -91,   -89,   364,   -89,   362,   -93,   -93,   -92,   -92,   373,
     -93,   -93,   -93,   -93,   365,   287,   287,   286,   286,   -91,
     384,   -92,   -92,   -38,   366,   -88,   -38,   -38,   216,   -38,
    -100,  -100,   -38,   367,   -38,   384,   -51,   -38,  -101,  -101,
     395,   -92,   409,   -93,   -89,   370,   -93,   -38,   -38,   -38,
     -38,   -38,   176,   -38,   -38,   -38,   -38,   -38,   410,   -38,
     -38,   -38,   -38,   -38,   385,   186,   187,   386,   188,   416,
     387,   189,   388,   190,   -38,   -38,    35,   216,   -38,   -38,
     186,   187,   389,   337,   416,   392,   189,   402,   190,   427,
     404,   -94,   -94,   411,   191,   192,   193,   278,   194,   195,
     196,   197,   217,   218,   247,   359,   278,   417,   220,   440,
     221,   418,   443,   327,   198,   419,   445,   420,   340,   340,
     340,   340,   -48,   -48,   340,   216,   247,   -94,   278,   338,
     421,   460,   351,   424,   463,   327,   -94,   -94,   465,  -100,
     362,   362,   362,   362,  -102,  -102,   362,   247,   247,  -101,
     278,   360,  -112,   480,   373,   437,   483,   327,    80,   435,
     485,    -8,   384,   384,   384,   384,   -94,   -94,   384,   278,
     216,   529,   204,   501,   -94,   -94,   395,   532,   248,   249,
     247,   381,   278,   530,   251,   511,   252,   447,   514,   327,
    -103,  -103,   516,   533,   416,   416,   416,   416,  -104,  -104,
     416,   327,   235,   266,   -94,   278,   204,   534,   427,   535,
     297,   298,   536,   413,   278,   315,   300,   340,   301,   297,
     298,   446,   413,   340,   537,   300,   351,   382,   -93,   -93,
     -94,   -94,   351,   543,   278,   -92,   -92,   362,   -97,   -97,
     467,   186,   187,   362,   337,   544,   373,   189,   -93,   190,
     -94,   545,   373,   546,   278,   -92,   547,   384,   -97,   414,
     -97,   -97,   466,   384,   -93,   -93,   395,   266,   414,   -97,
     -97,   548,   395,   -92,   194,   195,   196,   197,   554,   487,
     235,   555,   556,   266,   -93,   278,   -98,   -98,   416,   568,
     198,   486,   557,   558,   416,   559,   -97,   427,   217,   218,
     -48,   359,   -93,   427,   220,   581,   221,   -97,   -97,   315,
     569,   -53,   -53,   517,   339,   518,   583,   351,   570,   351,
     -55,   -55,   204,   571,   -98,   -98,   572,   585,   373,   204,
     373,   225,   226,   227,   228,   278,   573,   -94,   -94,   395,
     580,   395,   590,   -97,   -97,   361,   574,   229,   -48,   -53,
     -53,   -57,   -57,   204,   427,   582,   427,   -94,   -55,   -55,
     235,   584,  -102,   -97,  -102,   -98,   -98,  -103,   -32,  -104,
     586,   -32,   -32,  -103,   -32,   -94,   383,   -32,  -104,   -32,
     591,   -97,   -32,   592,   204,   -98,   -98,   -98,   593,   -57,
     -57,   266,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -98,   -32,   -32,   -32,   -32,   -32,   594,
     -78,   -78,   596,   -78,   597,    13,   -78,    27,   -78,   -32,
     -32,   -78,   -98,   -32,   -32,   415,   -96,   -96,   -59,   -59,
     -97,   -97,   503,   204,   -61,   -61,   -98,   -98,     0,     0,
     315,   -53,   -53,   -78,   -78,   -78,   -78,   -95,   -95,   -99,
     -99,   -55,   -55,   266,   -98,   -98,   -98,   -53,   -53,   -78,
     235,   -53,   266,     0,   -96,   -96,   -59,   -59,   -97,   315,
       0,   -55,   -61,   -61,   204,   204,   204,   204,     0,   -53,
     204,   204,   235,     0,   266,   -95,   -95,   -99,   -99,   -55,
       0,   315,   -98,   -53,   -57,   -57,   235,   235,   235,   235,
       0,     0,   235,   235,   235,     0,   266,     0,   -96,   -96,
     -53,   -53,     0,   315,   -57,     0,    -2,     0,   266,   266,
     266,   266,     0,    83,   266,   266,   204,     0,   -96,     0,
      92,    93,   -57,    95,     0,   207,   235,     0,   266,   -59,
     -59,     1,     2,     3,     4,   315,   -96,     0,   -53,     0,
     315,   315,   315,   315,   -61,   -61,   315,   315,     0,   -59,
       0,   266,     0,   -55,   -55,   238,   269,   -57,   -57,   207,
     266,   -53,   -53,   204,   -61,   110,   111,   -59,   318,   204,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,
     266,   -53,   -61,   235,     0,   -55,   -55,   -95,   -95,   235,
     -64,   -55,     0,    30,    31,   -57,    32,   -99,   -99,    33,
     266,    34,     0,   266,    35,   -55,     0,   -95,   -64,   266,
      30,    31,     0,   184,   -96,   -96,    33,   -99,    34,     0,
     269,    35,    39,    40,    41,   -95,    42,    43,    44,    45,
       0,   266,     0,   238,   315,   -99,   269,     0,   -59,   -59,
     315,    85,    48,    42,    43,    44,    45,   -55,   -55,     0,
     -57,   -57,   -96,     1,     2,     3,     4,   -61,   -61,    48,
     -45,     0,   318,   -45,   -45,     0,   -45,   -95,   -95,   -45,
     -57,   -45,   346,   347,   -45,   207,   -59,     0,     0,   -99,
     -99,   266,   207,   -55,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -61,   -45,   -45,   -45,   -45,
     -45,     0,     0,   368,   369,   -95,   207,     0,     0,     0,
       0,   -45,   -45,   238,     0,   -45,   -45,   -99,   -73,   -73,
     -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   379,     0,     0,   390,   391,     0,   207,     0,   -30,
       0,     0,   -30,   -30,   269,   -30,   -57,   -57,   -30,     0,
     -30,   -96,   -96,   -30,     0,     0,     0,   403,     0,     0,
     407,   -73,   -73,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   215,   -30,   -30,   -30,   -30,   -30,
     -59,   -59,   -57,   422,   423,     0,   207,   -96,     0,     0,
     -30,   -30,     0,   318,   -30,   -30,   -62,   -62,   103,   104,
     105,   106,   107,   108,   246,   277,   269,     0,   215,     0,
     -61,   -61,     0,   238,     0,   269,   -59,   326,   186,   187,
       0,   337,   318,     0,   189,     0,   190,   207,     0,    35,
       0,     0,   -62,   207,   207,   238,     0,   269,     0,   217,
     218,     0,   359,     0,   318,   220,   -61,   221,     0,   238,
      35,   194,   195,   196,   197,   238,   238,   238,     0,   269,
     -95,   -95,     0,   -99,   -99,     0,   318,   198,     0,   277,
       0,   269,   225,   226,   227,   228,     0,   269,   269,   207,
      -4,     0,   246,     0,     0,   277,     0,     0,   229,   238,
       0,   269,    -5,   -96,   -96,     0,   -95,     0,   318,   -99,
       0,     0,    -6,   318,     0,    -4,    -4,    -4,    -4,   318,
     318,   326,     0,   -96,   269,     0,   215,    -5,    -5,    -5,
      -5,   -59,   -59,   269,   215,     0,   207,    -6,    -6,    -6,
      -6,   215,   207,    -3,   248,   249,     0,   381,     0,     0,
     251,   -59,   252,   269,     0,    35,   238,   246,    -7,     0,
       0,     0,   238,     0,     0,   215,     0,     0,    -3,    -3,
      -3,    -3,   246,   269,     0,     0,   269,   256,   257,   258,
     259,     0,   269,    -7,    -7,    -7,    -7,     0,   277,   203,
      -9,   297,   298,   260,   413,     0,   215,   300,     0,   301,
       0,     0,    35,   277,   269,     0,     0,   318,     0,     0,
     -61,   -61,     0,   318,     0,    -9,    -9,    -9,    -9,   234,
     265,   -20,     0,   203,   305,   306,   307,   308,    30,    31,
     -61,    32,   314,     0,    33,     0,    34,   326,     0,    35,
     309,     0,     0,     0,     0,   215,   -20,   -20,   -20,   -20,
     -95,   -95,   326,     0,   269,     0,   150,    39,    40,    41,
       0,    42,    43,    44,    45,   277,     0,     0,     0,     0,
     -95,     0,   246,     0,   277,     0,   295,    48,   -99,   -99,
       0,   326,     0,     0,   265,     0,   215,   215,   215,   215,
       0,     0,   215,   215,   246,     0,   277,   234,   -99,     0,
     265,     0,     0,   326,     0,     0,     0,     0,   246,   246,
     246,   246,     0,     0,   246,   246,   246,     0,   277,     0,
       0,     0,     0,     0,     0,   326,   314,     0,     0,     0,
     277,   277,   277,   277,     0,     0,   277,   277,   215,   203,
       0,     0,     0,     0,     0,     0,   203,     0,   246,     0,
     277,     0,     0,     0,     0,     0,     0,   326,     0,     0,
       0,     0,   326,   326,   326,   326,     0,     0,   326,   326,
     203,     0,     0,   277,     0,     0,     0,   234,     0,     0,
       0,     0,   277,     0,     0,   215,     0,  -112,  -112,  -112,
    -112,   215,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,   203,   277,     0,     0,   246,     0,     0,   265,   -19,
       0,   246,   -19,   -19,     0,   -19,     0,     0,   -19,     0,
     -19,     0,   277,   -19,     0,   277,     0,     0,     0,   380,
    -112,   277,     0,   -19,   -19,   -19,   -19,   -19,   202,   -19,
     -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,
     203,     0,     0,   277,     0,     0,   326,   314,     0,     0,
     -19,   -19,   326,     0,   -19,   -19,     0,     0,   233,   264,
     265,     0,   202,     0,     0,     0,     0,   234,     0,   265,
       0,   313,     0,     0,     0,     0,   314,     0,     0,     0,
       0,   203,   203,   203,   453,     0,     0,   203,   203,   234,
       0,   265,   149,   277,     0,     0,     0,     0,   314,     0,
       0,     0,     0,   234,   234,   234,   473,     0,     0,   234,
     234,   234,     0,   265,     0,     0,     0,     0,     0,     0,
     314,     0,     0,   264,     0,   265,   265,   265,   493,     0,
       0,   265,   265,   203,     0,     0,   233,     0,     0,   264,
       0,     0,     0,   234,     0,   265,     0,     0,     0,     0,
       0,     0,   314,     0,     0,     0,     0,   314,   314,   314,
     524,     0,     0,   314,   314,   313,     0,     0,   265,   -52,
     -52,   103,   104,   105,   106,   107,   108,   265,   202,     0,
     203,     0,   110,   111,   200,   202,   203,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,     0,     0,   265,     0,     0,
     234,     0,   116,     0,     0,   -52,   234,   -63,     0,   202,
       0,     0,     0,     0,   231,   262,   233,   265,   200,     0,
     265,     0,     0,     0,     0,   -63,   265,   311,     0,     0,
       0,   248,   249,     0,   250,     0,     0,   251,   145,   252,
     202,     0,    35,     0,     0,     0,     0,   264,   265,     0,
       0,   314,     0,     0,   151,     0,     0,   314,     0,     0,
     253,   254,   255,     0,   256,   257,   258,   259,     0,     0,
     297,   298,     0,   299,     0,     0,   300,     0,   301,   262,
     260,    35,   166,     0,     0,     0,     0,     0,   168,   202,
       0,     0,   231,     0,     0,   262,   313,     0,   265,   302,
     303,   304,     0,   305,   306,   307,   308,     0,     0,   264,
       0,     0,     0,     0,     0,     0,   233,     0,   264,   309,
       0,   311,     0,     0,     0,   313,     0,     0,     0,     0,
     202,   202,   452,     0,   200,     0,   202,   202,   233,     0,
     264,   354,     0,     0,     0,     0,     0,   313,     0,     0,
       0,     0,   233,   233,   472,     0,     0,     0,   233,   233,
     233,     0,   264,     0,     0,   200,     0,     0,     0,   313,
       0,     0,   376,     0,   264,   264,   492,     0,     0,     0,
     264,   264,   202,     0,     0,   248,   249,     0,   381,     0,
       0,   251,   233,   252,   264,     0,   200,     0,     0,     0,
       0,   313,     0,   398,     0,     0,   313,   313,   523,     0,
       0,     0,   313,   313,     0,     0,     0,   264,   256,   257,
     258,   259,     0,     0,   297,   298,   264,   413,     0,   202,
     300,     0,   301,     0,   260,   202,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   200,   264,     0,     0,   233,
       0,     0,   430,     0,     0,   233,     0,   305,   306,   307,
     308,     0,     0,     0,     0,   262,   264,     0,     0,   264,
       0,     0,   231,   309,   262,   264,     0,     0,     0,   201,
       0,   311,     0,     0,     0,     0,   448,     0,     0,     0,
       0,     0,   454,   200,   231,     0,   262,   264,     0,     0,
     313,     0,     0,   311,     0,     0,   313,     0,   468,   232,
     263,     0,     0,   201,   474,   231,   231,     0,   262,     0,
       0,     0,   312,     0,     0,   311,     0,     0,     0,     0,
     488,     0,     0,     0,     0,     0,   494,   262,   200,     0,
     148,     0,     0,     0,     0,     0,     0,   264,   231,     0,
     262,     0,     0,     0,     0,     0,     0,   311,     0,     0,
       0,     0,   519,     0,    30,    31,     0,    32,   525,   311,
      33,     0,    34,   262,   263,    35,     0,     0,     0,     0,
       0,     0,   262,     0,     0,   539,     0,   232,     0,     0,
     263,   541,     0,    39,    40,    41,     0,    42,    43,    44,
      45,     0,   262,     0,     0,   550,     0,     0,     0,     0,
       0,   552,   330,    48,     0,     0,   312,     0,     0,     0,
       0,     0,   262,     0,     0,   561,     0,     0,     0,   201,
       0,   563,     0,     0,     0,   199,   201,     0,     0,   -74,
     -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,   262,     0,     0,   576,     0,     0,     0,
     201,     0,   578,     0,     0,   230,   261,   232,     0,   199,
       0,     0,     0,     0,     0,     0,     0,     0,   310,     0,
       0,   -25,   -74,   -74,   -25,   -25,     0,   -25,     0,     0,
     -25,   201,   -25,    30,    31,   -25,    32,     0,   263,    33,
       0,    34,     0,   262,    35,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,
     -25,   -25,    39,    40,    41,     0,    42,    43,    44,    45,
     261,     0,   -25,   -25,     0,     0,   -25,   -25,     0,     0,
     201,   405,    48,   230,     0,     0,   261,   312,   -62,   -62,
     103,   104,   105,   106,   107,   108,     0,     0,     0,     0,
     263,     0,     0,     0,     0,     0,     0,   232,   -62,   263,
       0,     0,   310,     0,     0,     0,   312,     0,     0,     0,
       0,   201,   451,     0,   206,   199,   -62,   201,   201,   232,
       0,   263,     0,     0,     0,     0,     0,     0,   312,     0,
       0,     0,   117,   232,   471,     0,     0,     0,     0,   232,
     232,   232,     0,   263,   237,   268,   199,     0,   206,     0,
     312,     0,     0,     0,     0,   263,   491,   317,     0,     0,
       0,   263,   263,   201,     0,     0,     0,     0,   147,     0,
       0,     0,     0,   232,     0,   263,     0,   199,     0,     0,
       0,     0,   312,     0,   153,     0,     0,   312,   522,     0,
       0,     0,     0,   312,   312,     0,     0,     0,   263,   -62,
     -62,   103,   104,   105,   106,   107,   108,   263,     0,   268,
     201,     0,   167,     0,     0,     0,   201,     0,   169,   -62,
       0,     0,   237,     0,     0,   268,   199,   263,     0,     0,
     232,     0,   -73,   -73,   -73,   -73,   232,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   119,   261,   263,     0,     0,
     263,   317,     0,   230,     0,   261,   263,     0,     0,     0,
       0,     0,   310,     0,   206,     0,     0,     0,     0,     0,
     208,   355,     0,   -73,   199,   230,     0,   261,   263,     0,
       0,   312,     0,     0,   310,     0,     0,   312,     0,     0,
       0,     0,     0,     0,     0,   206,   230,   230,     0,   261,
     239,   270,   377,     0,   208,     0,   310,     0,     0,     0,
       0,     0,     0,   319,     0,     0,     0,     0,   261,   199,
       0,     0,     0,     0,     0,     0,   206,     0,   263,   230,
       0,   261,     0,   399,     0,     0,   110,   111,   310,     0,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
     310,     0,     0,     0,   261,     0,    30,    31,     0,    32,
       0,     0,    33,   261,    34,   270,     0,    35,     0,     0,
       0,     0,     0,     0,     0,   206,     0,     0,   239,   -64,
     -64,   270,   431,   261,     0,    39,    40,    41,     0,    42,
      43,    44,    45,     0,     0,   268,     0,     0,     0,     0,
       0,     0,   237,   261,   268,    48,     0,   319,     0,     0,
       0,   317,     0,     0,     0,     0,   450,     0,     0,     0,
     208,     0,   456,   206,   237,     0,   268,   208,     0,     0,
       0,     0,     0,   317,   261,     0,     0,     0,   470,     0,
       0,     0,     0,     0,   476,   237,   237,     0,   268,     0,
       0,   208,     0,     0,     0,   317,     0,     0,   239,     0,
     490,     0,     0,     0,   110,   111,   496,   268,   206,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,   237,     0,
     268,     0,   208,     0,   261,     0,     0,   317,     0,   270,
       0,     0,   521,     0,   -45,   -45,     0,   -45,   527,   317,
     -45,     0,   -45,   268,     0,   -45,     0,   -63,   -63,     0,
       0,     0,   268,     0,     0,   540,     0,     0,     0,   209,
       0,   542,     0,   -45,   -45,   -45,     0,   -45,   -45,   -45,
     -45,   208,   268,     0,     0,   551,     0,     0,   319,     0,
       0,   553,   -45,   -45,     0,     0,     0,     0,     0,   240,
     271,   270,   268,   209,     0,   562,     0,     0,   239,     0,
     270,   564,   320,     0,     0,     0,     0,   319,     0,     0,
       0,     0,   208,     0,     0,     0,     0,     0,   208,   208,
     239,     0,   270,   268,     0,     0,   577,     0,     0,   319,
       0,     0,   579,     0,   239,     0,     0,     0,     0,     0,
     239,   239,   239,     0,   270,     0,     0,     0,     0,     0,
       0,   319,     0,     0,   271,     0,   270,     0,     0,     0,
       0,     0,   270,   270,   208,     0,     0,   240,     0,     0,
     271,     0,     0,   268,   239,     0,   270,     0,     0,     0,
       0,     0,     0,   319,     0,     0,     0,     0,   319,     0,
       0,     0,     0,     0,   319,   319,   320,     0,     0,   270,
     -52,   -52,   103,   104,   105,   106,   107,   108,   270,   209,
       0,   208,     0,   110,   111,   210,   209,   208,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,     0,     0,   270,     0,
       0,   239,     0,     0,     0,     0,     0,   239,   -52,   -52,
     209,     0,     0,     0,     0,   241,   272,   240,   270,   210,
       0,   270,     0,     0,     0,     0,   -64,   270,   321,     0,
       0,     0,     0,     0,     0,     0,   -26,     0,     0,   -26,
     -26,   209,   -26,     0,     0,   -26,     0,   -26,   271,   270,
     -26,     0,   319,     0,     0,     0,     0,     0,   319,     0,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   -26,     0,   217,   218,
     272,   219,     0,     0,   220,     0,   221,   -26,   -26,    35,
     209,   -26,   -26,   241,     0,     0,   272,   320,     0,   270,
       0,     0,     0,     0,     0,     0,     0,   222,   223,   224,
     271,   225,   226,   227,   228,     0,     0,   240,     0,   271,
       0,     0,   321,     0,     0,     0,   320,   229,     0,     0,
       0,   209,     0,     0,     0,   210,     0,   209,   209,   240,
       0,   271,   210,     0,     0,     0,     0,     0,   320,     0,
       0,     0,     0,   240,     0,     0,     0,     0,     0,   240,
     240,   240,     0,   271,     0,     0,   210,     0,     0,     0,
     320,     0,     0,   241,     0,   271,     0,     0,     0,   110,
     111,   271,   271,   209,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,   240,     0,   271,     0,   210,     0,     0,
       0,     0,   320,     0,   272,     0,     0,   320,     0,   -44,
     -44,     0,   -44,   320,   320,   -44,     0,   -44,   271,     0,
     -44,     0,   -63,     0,     0,     0,     0,   271,     0,     0,
     209,     0,     0,     0,   211,     0,   209,     0,   -44,   -44,
     -44,     0,   -44,   -44,   -44,   -44,   210,   271,     0,     0,
     240,     0,     0,   321,     0,     0,   240,   -44,   -44,     0,
       0,     0,     0,     0,   242,   273,   272,   271,   211,     0,
     271,     0,     0,   241,     0,   272,   271,   322,     0,     0,
       0,     0,   321,     0,     0,     0,     0,   210,     0,     0,
       0,     0,     0,   210,   210,   241,     0,   272,   271,     0,
       0,   320,     0,     0,   321,     0,     0,   320,     0,   241,
       0,     0,     0,     0,     0,   241,   241,   241,     0,   272,
       0,     0,     0,     0,     0,     0,   321,     0,     0,   273,
       0,   272,     0,     0,     0,     0,     0,   272,   272,   210,
       0,     0,   242,     0,     0,   273,     0,     0,   271,   241,
       0,   272,     0,     0,     0,     0,     0,     0,   321,     0,
       0,     0,     0,   321,     0,     0,     0,     0,     0,   321,
     321,   322,     0,     0,   272,   -54,   -54,   103,   104,   105,
     106,   107,   108,   272,   211,     0,   210,     0,   110,   111,
     205,   211,   210,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,     0,     0,   272,     0,     0,   241,     0,     0,     0,
       0,     0,   241,   -54,   -54,   211,     0,     0,     0,     0,
     236,   267,   242,   272,   205,     0,   272,     0,     0,   -64,
       0,     0,   272,   316,     0,     0,     0,     0,     0,    30,
      31,     0,    32,     0,   146,    33,   211,    34,     0,     0,
      35,     0,     0,   273,   272,     0,     0,   321,     0,     0,
     152,     0,     0,   321,    36,     0,    37,     0,    39,    40,
      41,     0,    42,    43,    44,    45,    46,   -52,   -52,   103,
     104,   105,   106,   107,   108,   267,     0,    47,    48,     0,
       0,   181,     0,     0,     0,   211,     0,   -52,   236,     0,
       0,   267,   322,     0,   272,     0,     0,   -62,   -62,   103,
     104,   105,   106,   107,   108,   273,     0,     0,     0,     0,
       0,     0,   242,     0,   273,     0,   212,   316,     0,     0,
       0,   322,     0,     0,     0,     0,   211,     0,     0,     0,
     205,     0,   211,   211,   242,   -62,   273,     0,     0,     0,
       0,     0,     0,   322,     0,     0,   243,   274,   242,     0,
     212,     0,     0,     0,   242,   242,   242,     0,   273,   323,
       0,   205,     0,     0,     0,   322,     0,     0,     0,     0,
     273,     0,     0,     0,   110,   111,   273,   273,   211,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,   242,     0,
     273,     0,   205,     0,     0,     0,     0,   322,     0,     0,
       0,     0,   322,     0,     0,     0,     0,     0,   322,   322,
       0,   274,     0,   273,     0,   -63,     0,     0,     0,     0,
       0,     0,   273,     0,   243,   211,     0,   274,     0,   213,
       0,   211,     0,   -54,   -54,   103,   104,   105,   106,   107,
     108,   205,   273,     0,     0,   242,     0,     0,     0,     0,
       0,   242,     0,   323,     0,     0,     0,     0,     0,   244,
     275,   267,   273,   213,     0,   273,   212,     0,   236,   -54,
     267,   273,   324,     0,     0,     0,     0,   316,     0,     0,
       0,     0,   449,     0,     0,     0,     0,     0,   455,   205,
     236,     0,   267,   273,     0,     0,   322,   212,     0,   316,
       0,     0,   322,     0,   469,     0,     0,     0,     0,     0,
     475,   236,   236,     0,   267,     0,     0,     0,     0,     0,
       0,   316,     0,     0,   275,     0,   489,     0,   212,     0,
       0,     0,   495,   267,   205,     0,     0,   244,     0,     0,
     275,     0,     0,   273,   236,     0,   267,     0,     0,     0,
       0,     0,     0,   316,     0,     0,   214,     0,   520,     0,
       0,     0,     0,     0,   526,   316,   324,     0,     0,   267,
       0,     0,     0,     0,     0,     0,     0,   212,   267,   213,
       0,     0,     0,     0,     0,     0,   245,   276,     0,     0,
     214,     0,     0,     0,     0,     0,     0,   274,   267,   325,
       0,     0,     0,     0,   243,     0,   274,     0,     0,     0,
     213,     0,     0,   323,     0,     0,     0,     0,   267,     0,
       0,     0,     0,     0,     0,   212,   243,     0,   274,     0,
       0,     0,     0,     0,     0,   323,     0,     0,     0,     0,
       0,   213,     0,     0,     0,     0,     0,   243,   243,   267,
     274,   276,     0,     0,     0,     0,     0,   323,     0,     0,
       0,     0,     0,     0,   245,     0,     0,   276,     0,   274,
     212,   -52,   -52,   103,   104,   105,   106,   107,   108,     0,
     243,     0,   274,     0,     0,     0,     0,     0,     0,   323,
     213,   -52,     0,   325,     0,     0,     0,     0,     0,   267,
       0,   323,     0,     0,     0,   274,   214,     0,     0,   -52,
     275,     0,     0,     0,   274,     0,     0,   244,     0,   275,
       0,     0,   -45,   -45,     0,   -45,   324,     0,   -45,     0,
     -45,     0,     0,   -45,   274,     0,     0,   214,   213,   244,
       0,   275,     0,     0,     0,     0,     0,     0,   324,     0,
       0,   -45,   -45,   -45,   274,   -45,   -45,   -45,   -45,     0,
     244,   244,     0,   275,     0,     0,     0,     0,   214,     0,
     324,   -45,     0,     0,   -56,   -56,   103,   104,   105,   106,
     107,   108,   275,   213,     0,   274,     0,     0,     0,     0,
       0,     0,     0,   244,     0,   275,     0,     0,  -112,  -112,
    -112,  -112,   324,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,  -112,   -56,   -56,   324,     0,     0,   214,   275,     0,
       0,     0,     0,     0,     0,    30,    31,   275,    32,     0,
       0,    33,     0,    34,     0,   274,    35,   276,     0,     0,
     358,  -112,  -112,     0,   245,     0,   276,   275,     0,     0,
     280,     0,   281,   325,    39,    40,    41,     0,    42,    43,
      44,    45,   283,     0,     0,   214,   245,   275,   276,     0,
       0,     0,     0,   284,    48,   325,     0,   285,     0,     0,
       0,     0,     0,   -44,   -44,     0,   -44,   245,   245,   -44,
     276,   -44,     0,     0,   -44,     0,     0,   325,   275,     0,
     -52,   -52,   103,   104,   105,   106,   107,   108,     0,   276,
     214,     0,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,
     245,     0,   276,     0,     0,     0,     0,     0,     0,   325,
       0,     0,   -44,   -27,     0,     0,   -27,   -27,   -52,   -27,
       0,   325,   -27,     0,   -27,   276,     0,   -27,   275,     0,
       0,     0,     0,     0,   276,     0,     0,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   276,     0,   -58,   -58,   103,   104,
     105,   106,   107,   108,   -27,   -27,     0,     0,   -27,   -27,
       0,     0,     0,     0,   276,     0,     0,     0,     0,     0,
       0,     0,   -31,     0,     0,   -31,   -31,     0,   -31,     0,
       0,   -31,     0,   -31,   -58,   -58,   -31,     0,     0,     0,
       0,     0,     0,     0,     0,   276,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -56,   -56,   103,   104,   105,   106,   107,
     108,     0,     0,   -31,   -31,     0,   -28,   -31,   -31,   -28,
     -28,     0,   -28,     0,     0,   -28,     0,   -28,     0,     0,
     -28,     0,     0,     0,     0,   276,     0,     0,     0,   -56,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,     0,   -28,   -28,   -28,   -28,   -28,   -58,   -58,   103,
     104,   105,   106,   107,   108,     0,     0,   -28,   -28,     0,
     -29,   -28,   -28,   -29,   -29,     0,   -29,     0,     0,   -29,
       0,   -29,     0,     0,   -29,     0,     0,     0,     0,     0,
       0,     0,     0,   -58,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
     -29,   -60,   -60,   103,   104,   105,   106,   107,   108,     0,
       0,   -29,   -29,     0,   -46,   -29,   -29,   -46,   -46,     0,
     -46,     0,     0,   -46,     0,   -46,     0,     0,   -46,     0,
       0,     0,     0,     0,     0,     0,     0,   -60,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,
     -46,   -46,   -46,   -46,   -46,   -54,   -54,   103,   104,   105,
     106,   107,   108,     0,     0,   -46,   -46,     0,    -7,   -46,
     -46,    -7,    -7,     0,    -7,   -54,     0,    -7,     0,    -7,
       0,     0,    -7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,   -56,
     -56,   103,   104,   105,   106,   107,   108,     0,     0,    -7,
      -7,     0,   -44,    -7,    -7,   -44,   -44,     0,   -44,   -56,
       0,   -44,     0,   -44,     0,     0,   -44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,
     -44,   -44,   -44,   -58,   -58,   103,   104,   105,   106,   107,
     108,     0,     0,   -44,   -44,     0,   -40,   -44,   -44,   -40,
     -40,     0,   -40,   -58,     0,   -40,     0,   -40,     0,     0,
     -40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -40,   -40,   -40,   -40,   -40,   566,   -40,   -40,   -40,   -40,
     -40,     0,   -40,   -40,   -40,   -40,   -40,   -60,   -60,   103,
     104,   105,   106,   107,   108,     0,     0,   -40,   -40,     0,
     -47,   -40,   -40,   -47,   -47,     0,   -47,   -60,     0,   -47,
       0,   -47,     0,     0,   -47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,
     -47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -47,   -47,     0,   -33,   -47,   -47,   -33,   -33,     0,
     -33,     0,     0,   -33,     0,   -33,     0,     0,   -33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   -33,   -33,   -33,   -33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -33,   -33,     0,   -43,   -33,
     -33,   -43,   -43,     0,   -43,     0,     0,   -43,     0,   -43,
       0,     0,   -43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -43,
     -43,     0,   -34,   -43,   -43,   -34,   -34,     0,   -34,     0,
       0,   -34,     0,   -34,     0,     0,   -34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,
     -34,   -34,   -34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -34,   -34,     0,   -35,   -34,   -34,   -35,
     -35,     0,   -35,     0,     0,   -35,     0,   -35,     0,     0,
     -35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -35,   -35,     0,
     -37,   -35,   -35,   -37,   -37,     0,   -37,     0,     0,   -37,
       0,   -37,     0,     0,   -37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,
     -37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -37,   -37,     0,   -36,   -37,   -37,   -36,   -36,     0,
     -36,     0,     0,   -36,     0,   -36,     0,     0,   -36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   -36,   -36,   -36,   -36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -36,   -36,     0,   -20,   -36,
     -36,   -20,   -20,     0,   -20,     0,     0,   -20,     0,   -20,
       0,     0,   -20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,
     -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -20,
     -20,     0,   -38,   -20,   -20,   -38,   -38,     0,   -38,     0,
       0,   -38,     0,   -38,     0,     0,   -38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -38,   -38,   -38,   -38,
     -38,   595,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -38,   -38,     0,   -41,   -38,   -38,   -41,
     -41,     0,   -41,     0,     0,   -41,     0,   -41,     0,     0,
     -41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,     0,   -41,   -41,   -41,   -41,   -41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -41,   -41,     0,
     -39,   -41,   -41,   -39,   -39,     0,   -39,     0,     0,   -39,
       0,   -39,     0,     0,   -39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,
     -39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -39,   -39,     0,   -42,   -39,   -39,   -42,   -42,     0,
     -42,     0,     0,   -42,     0,   -42,     0,     0,   -42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,
     -42,   -42,   -42,   -42,   -42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -42,   -42,     0,    29,   -42,
     -42,    30,    31,     0,    32,     0,     0,    33,     0,    34,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     2,     3,     4,    36,     0,    37,    38,
      39,    40,    41,     0,    42,    43,    44,    45,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
      48,     0,   -32,   181,   -22,   -32,   -32,     0,   -32,     0,
       0,   -32,     0,   -32,     0,     0,   -32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -32,   -32,   -32,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,
     -32,   -32,   -32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -32,   -32,     0,   -45,   -32,   -32,   -45,
     -45,     0,   -45,     0,     0,   -45,     0,   -45,     0,     0,
     -45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,
     -45,     0,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -45,   -45,     0,
     -30,   -45,   -45,   -30,   -30,     0,   -30,     0,     0,   -30,
       0,   -30,     0,     0,   -30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -30,   -30,   -30,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -30,   -30,     0,   -25,   -30,   -30,   -25,   -25,     0,
     -25,     0,     0,   -25,     0,   -25,     0,     0,   -25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -25,   -25,
     -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,
     -25,   -25,   -25,   -25,   -25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -25,   -25,     0,    29,   -25,
     -25,    30,    31,     0,    32,     0,     0,    33,     0,    34,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     2,     3,     4,    36,     0,    37,    38,
      39,    40,    41,     0,    42,    43,    44,    45,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    47,
      48,     0,   -24,   181,   -21,   -24,   -24,     0,   -24,     0,
       0,   -24,     0,   -24,     0,     0,   -24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -24,   -24,   -24,   -24,
     -24,     0,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
     -24,   -24,   -24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -24,   -24,     0,   -26,   -24,   -24,   -26,
     -26,     0,   -26,     0,     0,   -26,     0,   -26,     0,     0,
     -26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,
     -26,     0,   -26,   -26,   -26,   -26,   -26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -26,   -26,     0,
     -27,   -26,   -26,   -27,   -27,     0,   -27,     0,     0,   -27,
       0,   -27,     0,     0,   -27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -27,   -27,   -27,   -27,   -27,     0,
     -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,
     -27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -27,   -27,     0,   -31,   -27,   -27,   -31,   -31,     0,
     -31,     0,     0,   -31,     0,   -31,     0,     0,   -31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,     0,
     -31,   -31,   -31,   -31,   -31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -31,   -31,     0,   -28,   -31,
     -31,   -28,   -28,     0,   -28,     0,     0,   -28,     0,   -28,
       0,     0,   -28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -28,
     -28,     0,   -29,   -28,   -28,   -29,   -29,     0,   -29,     0,
       0,   -29,     0,   -29,     0,     0,   -29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -29,   -29,   -29,   -29,
     -29,     0,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -29,   -29,     0,   -46,   -29,   -29,   -46,
     -46,     0,   -46,     0,     0,   -46,     0,   -46,     0,     0,
     -46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,
     -46,     0,   -46,   -46,   -46,   -46,   -46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -46,   -46,     0,
     -23,   -46,   -46,   -23,   -23,     0,   -23,     0,     0,   -23,
       0,   -23,     0,     0,   -23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -23,   -23,   -23,   -23,   -23,     0,
     -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,
     -23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -23,   -23,     0,   -44,   -23,   -23,   -44,   -44,     0,
     -44,     0,     0,   -44,     0,   -44,     0,     0,   -44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -44,   -44,
     -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,     0,
     -44,   -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -44,   -44,     0,   -47,   -44,
     -44,   -47,   -47,     0,   -47,     0,     0,   -47,     0,   -47,
       0,     0,   -47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,
     -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -47,
     -47,     0,   -33,   -47,   -47,   -33,   -33,     0,   -33,     0,
       0,   -33,     0,   -33,     0,     0,   -33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -33,   -33,   -33,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,
     -33,   -33,   -33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -33,   -33,     0,   -43,   -33,   -33,   -43,
     -43,     0,   -43,     0,     0,   -43,     0,   -43,     0,     0,
     -43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,
     -43,     0,   -43,   -43,   -43,   -43,   -43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -43,   -43,     0,
     -34,   -43,   -43,   -34,   -34,     0,   -34,     0,     0,   -34,
       0,   -34,     0,     0,   -34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -34,   -34,     0,   -35,   -34,   -34,   -35,   -35,     0,
     -35,     0,     0,   -35,     0,   -35,     0,     0,   -35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -35,   -35,
     -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,     0,
     -35,   -35,   -35,   -35,   -35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -35,   -35,     0,   -37,   -35,
     -35,   -37,   -37,     0,   -37,     0,     0,   -37,     0,   -37,
       0,     0,   -37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,
     -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -37,
     -37,     0,   -36,   -37,   -37,   -36,   -36,     0,   -36,     0,
       0,   -36,     0,   -36,     0,     0,   -36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -36,   -36,   -36,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,
     -36,   -36,   -36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -36,   -36,     0,   -41,   -36,   -36,   -41,
     -41,     0,   -41,     0,     0,   -41,     0,   -41,     0,     0,
     -41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,
     -41,     0,   -41,   -41,   -41,   -41,   -41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -41,   -41,     0,
     -39,   -41,   -41,   -39,   -39,     0,   -39,     0,     0,   -39,
       0,   -39,     0,     0,   -39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -39,   -39,   -39,   -39,   -39,     0,
     -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,
     -39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -39,   -39,     0,   -42,   -39,   -39,   -42,   -42,     0,
     -42,     0,     0,   -42,     0,   -42,     0,     0,   -42,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -42,   -42,
     -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,     0,
     -42,   -42,   -42,   -42,   -42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -42,   -42,     0,    -7,   -42,
     -42,    -7,    -7,     0,    -7,     0,     0,    -7,     0,    -7,
       0,     0,    -7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,
      -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    -7,
      -7,     0,   -20,    -7,    -7,   -20,   -20,     0,   -20,     0,
       0,   -20,     0,   -20,     0,     0,   -20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -20,   -20,   -20,   -20,
     -20,     0,   -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,
     -20,   -20,   -20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -20,   -20,     0,   279,   -20,   -20,    30,
      31,     0,    32,     0,     0,    33,     0,    34,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     2,     3,     4,   280,     0,   281,   282,    39,    40,
      41,     0,    42,    43,    44,    45,   283,   -54,   -54,   103,
     104,   105,   106,   107,   108,     0,    29,   284,    48,    30,
      31,   285,    32,     0,     0,    33,     0,    34,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     2,     3,     4,    36,   -54,    37,    38,    39,    40,
      41,     0,    42,    43,    44,    45,    46,   -56,   -56,   103,
     104,   105,   106,   107,   108,     0,   -95,    47,    48,   -95,
     -95,   181,   -95,     0,     0,   -95,     0,   -95,     0,     0,
     -95,     0,   -58,   -58,   103,   104,   105,   106,   107,   108,
     -95,   -95,   -95,   -95,   -95,   -56,   -95,   -95,   -95,   -95,
     -95,     0,   -95,   -95,   -95,   -95,   -95,     0,   -95,   -95,
       0,   -95,     0,     0,   -95,     0,   -95,   -95,   -95,   -95,
     -58,   -95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -95,     0,   -95,     0,   -95,   -95,   -95,
       0,   -95,   -95,   -95,   -95,   -95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -95,   -95,     0,     0,
     -95,  -112,  -112,  -112,  -112,     0,  -112,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,   -75,   -75,   -75,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,   -76,   -76,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,   110,   111,   358,  -112,  -112,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,     0,     0,     0,   -75,   -75,     0,
       0,     0,     0,     0,     0,     0,   -64,     0,     0,     0,
     -76,   -76,   -66,   -66,   113,   114,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -68,   -68,   -68,   -68,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -70,   -70,
     -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,     0,   110,   111,     0,   -66,   -66,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,     0,     0,     0,   -68,   -68,
       0,     0,     0,     0,     0,     0,     0,   -63,     0,     0,
       0,   -70,   -70,   -72,   -72,   -72,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -69,   -69,   -69,   -69,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -73,
     -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,   -72,   -72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -69,
     -69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -73,   -73,   -71,   -71,   -71,   -71,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -65,   -65,   113,
     114,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,     0,     0,     0,   -71,   -71,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -65,   -65,     0,     0,   -60,   -60,   103,   104,   105,   106,
     107,   108,     0,   -67,   -67,  -107,  -107,  -107,  -107,     0,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -112,  -112,
    -112,  -112,     0,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,  -112,   -60,   -60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -112,     0,     0,     0,     0,  -107,  -107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     336,  -112,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   357,     0,     0,     0,     0,
       0,     0,     0,  -112,  -112,  -112,  -112,   -73,  -112,  -112,
    -112,  -112,  -112,  -112,  -112,  -112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -73,     0,     0,  -112,   -74,
     -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,     0,     0,     0,   336,  -112,     0,     0,     0,
     -75,   -75,   -75,   -75,   -74,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -74,     0,     0,   -75,   -76,   -76,   -76,   -76,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
       0,     0,     0,   -75,     0,     0,     0,   -66,   -66,   113,
     114,   -76,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -76,
       0,     0,   -66,   -68,   -68,   -68,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,
     -66,     0,     0,     0,   -70,   -70,   -70,   -70,   -68,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -68,     0,     0,   -70,
     -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,   -70,     0,     0,
       0,   -73,   -73,   -73,   -73,   -72,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   401,     0,     0,     0,     0,     0,
       0,     0,     0,   -72,   -69,   -69,   -69,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
       0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -69,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -60,
     -60,   103,   104,   105,   106,   107,   108,   -69,     0,     0,
     -73,  -112,  -112,  -112,  -112,     0,  -112,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,   -71,   -71,   -71,   -71,   -73,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -60,   -54,   -54,
     103,   104,   105,   106,   107,   108,     0,     0,     0,   -71,
       0,     0,     0,   380,  -112,     0,     0,     0,   -54,     0,
       0,     0,     0,   -65,   -65,   113,   114,   -71,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -54,     0,     0,     0,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,   -65,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -65,     0,     0,   -67,
    -107,  -107,  -107,  -107,     0,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,     0,     0,     0,     0,   -67,     0,     0,
       0,   -74,   -74,   -74,   -74,  -107,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,   -75,
     -75,   -75,   -75,  -107,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,     0,     0,     0,     0,
     -76,   -76,   -76,   -76,   -74,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,     0,     0,   -66,   -66,
     113,   114,   -75,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,     0,     0,     0,     0,     0,     0,     0,     0,   -68,
     -68,   -68,   -68,   -76,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,     0,   -70,   -70,   -70,
     -70,   -66,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,     0,     0,     0,     0,     0,     0,     0,   -72,   -72,
     -72,   -72,   -68,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -70,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,
       0,     0,     0,     0,     0,     0,     0,   -73,   -73,   -73,
     -73,   -72,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
       0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   -69,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,
       0,     0,     0,     0,     0,     0,   -65,   -65,   113,   114,
     -73,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,   -71,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,     0,     0,     0,     0,  -107,  -107,  -107,  -107,   -65,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,     0,     0,
       0,     0,     0,  -112,  -112,  -112,  -112,   -67,  -112,  -112,
    -112,  -112,  -112,  -112,  -112,  -112,  -112,     0,     0,     0,
       0,     0,     0,     0,  -112,  -112,  -112,  -112,  -107,  -112,
    -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,     0,     0,
       0,     0,     0,     0,  -112,    78,     0,     0,     0,  -112,
    -112,  -112,  -112,  -112,     0,  -112,  -112,  -112,  -112,  -112,
    -112,  -112,  -112,     0,     0,     0,   412,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,  -112,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,   412,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,     0,     0,     0,   -76,   -76,
     -76,   -76,   -74,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,   -66,   -66,   113,   114,   -75,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,
       0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,   -76,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,     0,   -70,   -70,   -70,   -70,   -66,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,     0,
       0,     0,   -72,   -72,   -72,   -72,   -68,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,   -70,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,     0,     0,     0,     0,     0,   -73,
     -73,   -73,   -73,   -72,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
     -69,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,
       0,     0,     0,     0,     0,     0,   -65,   -65,   113,   114,
     -73,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,     0,     0,   -67,   -67,   -67,   -67,   -71,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,
       0,     0,     0,  -107,  -107,  -107,  -107,   -65,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,   -56,   -56,   103,   104,
     105,   106,   107,   108,   -67,   -58,   -58,   103,   104,   105,
     106,   107,   108,     0,     0,     0,   -56,     0,     0,     0,
       0,     0,     0,     0,  -107,   -58,   -60,   -60,   103,   104,
     105,   106,   107,   108,   -56,     0,     0,     0,     0,     0,
       0,     0,     0,   -58,     0,     0,   -60,   -73,   -73,   -73,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     433,     0,     0,     0,   -60,     0,     0,     0,   -74,   -74,
     -74,   -74,   -73,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,     0,     0,     0,     0,     0,     0,     0,     0,   -75,
     -75,   -75,   -75,   -74,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,     0,     0,     0,     0,
     -76,   -76,   -76,   -76,   -75,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,     0,     0,     0,     0,
       0,   -66,   -66,   113,   114,   -76,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,     0,     0,     0,     0,
       0,     0,   -68,   -68,   -68,   -68,   -66,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,
       0,     0,     0,   -70,   -70,   -70,   -70,   -68,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,     0,
       0,     0,     0,     0,   -72,   -72,   -72,   -72,   -70,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,   -72,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,
       0,     0,     0,     0,     0,     0,   -73,   -73,   -73,   -73,
     -69,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,
       0,     0,     0,     0,     0,     0,     0,   -71,   -71,   -71,
     -71,   -73,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,     0,     0,     0,     0,   -65,   -65,
     113,   114,   -71,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,     0,     0,     0,     0,     0,     0,     0,   -67,
     -67,   -67,   -67,   -65,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,     0,     0,     0,     0,     0,     0,
    -107,  -107,  -107,  -107,   -67,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -107
};

static const yytype_int16 yycheck[] =
{
       0,    23,     0,    38,    52,   201,     6,    83,     6,    67,
      89,   181,    36,    48,    83,     7,    16,   332,     7,    95,
     336,    16,    17,    83,    24,     7,    95,    36,    83,    84,
      54,     4,     5,     1,     7,    83,   232,    10,     7,    83,
      95,    36,   358,    78,    79,    54,    52,    82,    83,    84,
      36,    95,    54,    55,    16,    17,    91,    25,    26,    27,
      28,    83,     7,   202,   380,    16,    17,   263,    54,     4,
       5,   126,     7,    95,    36,    10,    56,    12,    16,    17,
      53,   157,    36,    83,   119,    83,    54,    55,   157,     4,
       5,   126,     7,   408,   233,    10,   412,   157,     4,     5,
      54,     7,   157,    54,    10,    36,    12,     0,   143,   157,
     158,     7,    36,   157,    52,   285,   312,    53,    53,    52,
      53,   156,   157,    54,   159,   264,    53,    36,   176,   177,
      54,     4,     5,    53,     7,   157,    36,    10,    53,    12,
      53,   199,    15,     4,     5,    54,     7,    53,   206,    10,
     185,    12,     4,     5,    54,     7,    53,   157,    10,   157,
      33,    34,    35,   198,    37,    38,    39,    40,    16,    17,
       4,     5,   230,     7,   313,    53,    10,    36,    12,   237,
      53,    54,    53,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    53,    53,   229,    54,    36,     6,    53,    16,
      17,    53,     1,   261,    52,     4,     5,    16,     7,    52,
     268,    10,    57,    12,    54,    24,    15,     4,     5,    53,
       7,    54,    55,    10,    52,   260,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    54,    37,    38,
      39,    40,    41,    16,    17,    16,    17,   282,    54,    55,
      16,    17,   310,    52,    53,   451,    52,    56,    57,   317,
      16,    17,    36,   342,   343,    36,    53,    16,    17,    52,
       4,     5,    52,     7,   309,   471,    10,     7,    12,    52,
      54,     4,     5,    54,     7,   364,   365,    10,    54,    12,
      16,    17,    15,    36,   329,   491,    54,    55,    54,    55,
      36,   336,     7,   338,    54,    54,    55,   386,   387,    54,
     345,    54,    54,   452,    37,    38,    39,    40,    54,    53,
      16,    17,   357,   358,    36,   360,   522,   403,    54,    55,
      53,   407,   367,   472,   403,    54,    16,    17,   407,   418,
     419,    16,    17,   403,   379,   380,    36,   382,   403,   404,
      54,    55,   407,   492,   389,   403,    54,    55,    54,   403,
      54,    36,    54,   407,    54,    54,   401,   402,   403,   404,
       4,     5,   407,     7,    54,    55,    10,   412,    12,   414,
      54,   403,    34,    54,   523,   407,   421,     4,     5,    36,
       7,     4,     5,    10,     7,    12,    48,    10,   433,    12,
      54,    55,   437,   403,    52,   403,    52,     4,     5,    52,
       7,   446,    52,    10,    66,    12,    54,    16,    17,    53,
      37,    38,    39,    40,    16,    17,    78,    79,    16,    17,
      82,   466,    54,    16,    17,    87,    53,    36,    90,    91,
      53,     7,    94,    54,    36,   500,     4,     5,    52,     7,
     102,   486,    10,    36,    12,    54,    53,   109,     8,     9,
     112,    54,    54,   115,    52,   500,   118,    11,    12,    13,
      14,    54,    16,    17,    18,    19,    20,    21,    22,    23,
       4,     5,   517,     7,    54,    55,    10,    54,    12,   565,
     566,   143,    54,    55,   146,    53,   565,   566,    16,    17,
     152,    16,    17,    54,   156,   565,   566,   159,    52,    53,
     565,   566,   164,    37,    38,    39,    40,   565,   566,   595,
     596,   565,   566,    54,    55,    53,   595,   596,    53,    53,
     565,   566,   567,   185,    52,   595,   596,    53,   190,    54,
     595,   596,    53,   565,   566,    53,   198,   595,   596,    16,
      17,   595,   596,   205,    16,    17,     4,     5,   200,     7,
     595,   596,    10,    53,    12,   565,   566,   565,   566,   221,
      54,    55,    53,   595,   596,     4,     5,   229,     7,    16,
      17,    10,    53,    12,   236,    16,    17,    54,    55,   231,
      16,    17,    54,    55,    53,   595,   596,   595,   596,    36,
     252,    16,    17,     1,    53,    53,     4,     5,   260,     7,
      54,    55,    10,    53,    12,   267,    36,    15,    54,    55,
     262,    36,    52,    54,    53,    53,    52,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    52,    37,
      38,    39,    40,    41,    53,     4,     5,    53,     7,   301,
      53,    10,    53,    12,    52,    53,    15,   309,    56,    57,
       4,     5,    53,     7,   316,    53,    10,    53,    12,   311,
      53,    16,    17,    52,    33,    34,    35,   329,    37,    38,
      39,    40,     4,     5,   336,     7,   338,    53,    10,   341,
      12,    53,   344,   345,    53,    53,   348,    53,   350,   351,
     352,   353,    54,    55,   356,   357,   358,    52,   360,    53,
      53,   363,   354,    53,   366,   367,    16,    17,   370,    36,
     372,   373,   374,   375,    54,    55,   378,   379,   380,    36,
     382,    53,    36,   385,   376,    36,   388,   389,    34,    52,
     392,    52,   394,   395,   396,   397,    16,    17,   400,   401,
     402,    54,    48,    52,    54,    55,   398,    54,     4,     5,
     412,     7,   414,    57,    10,   417,    12,    54,   420,   421,
      54,    55,   424,    54,   426,   427,   428,   429,    54,    55,
     432,   433,    78,    79,    54,   437,    82,    54,   430,    54,
       4,     5,    54,     7,   446,    91,    10,   449,    12,     4,
       5,    36,     7,   455,    36,    10,   448,    53,    16,    17,
      16,    17,   454,    54,   466,    16,    17,   469,    16,    17,
      54,     4,     5,   475,     7,    54,   468,    10,    36,    12,
      36,    54,   474,    54,   486,    36,    54,   489,    36,    53,
      16,    17,    36,   495,    16,    17,   488,   143,    53,    16,
      17,    36,   494,    54,    37,    38,    39,    40,    54,    54,
     156,    54,    54,   159,    36,   517,    16,    17,   520,    57,
      53,    36,    54,    54,   526,    36,    52,   519,     4,     5,
      54,     7,    54,   525,    10,   537,    12,    54,    55,   185,
      54,    16,    17,    36,   190,    54,   548,   539,    54,   541,
      16,    17,   198,    54,    54,    55,    54,   559,   550,   205,
     552,    37,    38,    39,    40,   567,    54,    16,    17,   561,
      54,   563,   574,    16,    17,   221,    36,    53,    36,    54,
      55,    16,    17,   229,   576,    54,   578,    36,    54,    55,
     236,    54,    54,    36,    36,    16,    17,    54,     1,    54,
      54,     4,     5,    36,     7,    54,   252,    10,    36,    12,
      54,    54,    15,    54,   260,    36,    16,    17,    54,    54,
      55,   267,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    54,    37,    38,    39,    40,    41,    54,
       4,     5,    54,     7,    54,     6,    10,    24,    12,    52,
      53,    15,    52,    56,    57,   301,    16,    17,    16,    17,
      16,    17,   407,   309,    16,    17,    16,    17,    -1,    -1,
     316,    16,    17,    37,    38,    39,    40,    16,    17,    16,
      17,    16,    17,   329,    16,    17,    36,    16,    17,    53,
     336,    36,   338,    -1,    54,    55,    54,    55,    54,   345,
      -1,    36,    54,    55,   350,   351,   352,   353,    -1,    54,
     356,   357,   358,    -1,   360,    54,    55,    54,    55,    54,
      -1,   367,    54,    52,    16,    17,   372,   373,   374,   375,
      -1,    -1,   378,   379,   380,    -1,   382,    -1,    16,    17,
      16,    17,    -1,   389,    36,    -1,     0,    -1,   394,   395,
     396,   397,    -1,    36,   400,   401,   402,    -1,    36,    -1,
      43,    44,    54,    46,    -1,    48,   412,    -1,   414,    16,
      17,    25,    26,    27,    28,   421,    54,    -1,    54,    -1,
     426,   427,   428,   429,    16,    17,   432,   433,    -1,    36,
      -1,   437,    -1,    16,    17,    78,    79,    16,    17,    82,
     446,    16,    17,   449,    36,    11,    12,    54,    91,   455,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
     466,    36,    54,   469,    -1,    16,    17,    16,    17,   475,
      36,    54,    -1,     4,     5,    54,     7,    16,    17,    10,
     486,    12,    -1,   489,    15,    36,    -1,    36,    54,   495,
       4,     5,    -1,     7,    16,    17,    10,    36,    12,    -1,
     143,    15,    33,    34,    35,    54,    37,    38,    39,    40,
      -1,   517,    -1,   156,   520,    54,   159,    -1,    16,    17,
     526,    52,    53,    37,    38,    39,    40,    16,    17,    -1,
      16,    17,    54,    25,    26,    27,    28,    16,    17,    53,
       1,    -1,   185,     4,     5,    -1,     7,    16,    17,    10,
      36,    12,   195,   196,    15,   198,    54,    -1,    -1,    16,
      17,   567,   205,    52,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    54,    37,    38,    39,    40,
      41,    -1,    -1,   226,   227,    54,   229,    -1,    -1,    -1,
      -1,    52,    53,   236,    -1,    56,    57,    54,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,   257,   258,    -1,   260,    -1,     1,
      -1,    -1,     4,     5,   267,     7,    16,    17,    10,    -1,
      12,    16,    17,    15,    -1,    -1,    -1,   280,    -1,    -1,
     283,    54,    55,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    48,    37,    38,    39,    40,    41,
      16,    17,    52,   306,   307,    -1,   309,    52,    -1,    -1,
      52,    53,    -1,   316,    56,    57,    16,    17,    18,    19,
      20,    21,    22,    23,    78,    79,   329,    -1,    82,    -1,
      16,    17,    -1,   336,    -1,   338,    52,    91,     4,     5,
      -1,     7,   345,    -1,    10,    -1,    12,   350,    -1,    15,
      -1,    -1,    52,   356,   357,   358,    -1,   360,    -1,     4,
       5,    -1,     7,    -1,   367,    10,    52,    12,    -1,   372,
      15,    37,    38,    39,    40,   378,   379,   380,    -1,   382,
      16,    17,    -1,    16,    17,    -1,   389,    53,    -1,   143,
      -1,   394,    37,    38,    39,    40,    -1,   400,   401,   402,
       0,    -1,   156,    -1,    -1,   159,    -1,    -1,    53,   412,
      -1,   414,     0,    16,    17,    -1,    52,    -1,   421,    52,
      -1,    -1,     0,   426,    -1,    25,    26,    27,    28,   432,
     433,   185,    -1,    36,   437,    -1,   190,    25,    26,    27,
      28,    16,    17,   446,   198,    -1,   449,    25,    26,    27,
      28,   205,   455,     0,     4,     5,    -1,     7,    -1,    -1,
      10,    36,    12,   466,    -1,    15,   469,   221,     0,    -1,
      -1,    -1,   475,    -1,    -1,   229,    -1,    -1,    25,    26,
      27,    28,   236,   486,    -1,    -1,   489,    37,    38,    39,
      40,    -1,   495,    25,    26,    27,    28,    -1,   252,    48,
       0,     4,     5,    53,     7,    -1,   260,    10,    -1,    12,
      -1,    -1,    15,   267,   517,    -1,    -1,   520,    -1,    -1,
      16,    17,    -1,   526,    -1,    25,    26,    27,    28,    78,
      79,     0,    -1,    82,    37,    38,    39,    40,     4,     5,
      36,     7,    91,    -1,    10,    -1,    12,   301,    -1,    15,
      53,    -1,    -1,    -1,    -1,   309,    25,    26,    27,    28,
      16,    17,   316,    -1,   567,    -1,   115,    33,    34,    35,
      -1,    37,    38,    39,    40,   329,    -1,    -1,    -1,    -1,
      36,    -1,   336,    -1,   338,    -1,    52,    53,    16,    17,
      -1,   345,    -1,    -1,   143,    -1,   350,   351,   352,   353,
      -1,    -1,   356,   357,   358,    -1,   360,   156,    36,    -1,
     159,    -1,    -1,   367,    -1,    -1,    -1,    -1,   372,   373,
     374,   375,    -1,    -1,   378,   379,   380,    -1,   382,    -1,
      -1,    -1,    -1,    -1,    -1,   389,   185,    -1,    -1,    -1,
     394,   395,   396,   397,    -1,    -1,   400,   401,   402,   198,
      -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,   412,    -1,
     414,    -1,    -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,
      -1,    -1,   426,   427,   428,   429,    -1,    -1,   432,   433,
     229,    -1,    -1,   437,    -1,    -1,    -1,   236,    -1,    -1,
      -1,    -1,   446,    -1,    -1,   449,    -1,    11,    12,    13,
      14,   455,    16,    17,    18,    19,    20,    21,    22,    23,
      24,   260,   466,    -1,    -1,   469,    -1,    -1,   267,     1,
      -1,   475,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      12,    -1,   486,    15,    -1,   489,    -1,    -1,    -1,    53,
      54,   495,    -1,    25,    26,    27,    28,    29,    48,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
     309,    -1,    -1,   517,    -1,    -1,   520,   316,    -1,    -1,
      52,    53,   526,    -1,    56,    57,    -1,    -1,    78,    79,
     329,    -1,    82,    -1,    -1,    -1,    -1,   336,    -1,   338,
      -1,    91,    -1,    -1,    -1,    -1,   345,    -1,    -1,    -1,
      -1,   350,   351,   352,   353,    -1,    -1,   356,   357,   358,
      -1,   360,   112,   567,    -1,    -1,    -1,    -1,   367,    -1,
      -1,    -1,    -1,   372,   373,   374,   375,    -1,    -1,   378,
     379,   380,    -1,   382,    -1,    -1,    -1,    -1,    -1,    -1,
     389,    -1,    -1,   143,    -1,   394,   395,   396,   397,    -1,
      -1,   400,   401,   402,    -1,    -1,   156,    -1,    -1,   159,
      -1,    -1,    -1,   412,    -1,   414,    -1,    -1,    -1,    -1,
      -1,    -1,   421,    -1,    -1,    -1,    -1,   426,   427,   428,
     429,    -1,    -1,   432,   433,   185,    -1,    -1,   437,    16,
      17,    18,    19,    20,    21,    22,    23,   446,   198,    -1,
     449,    -1,    11,    12,    48,   205,   455,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,   466,    -1,    -1,
     469,    -1,    66,    -1,    -1,    52,   475,    36,    -1,   229,
      -1,    -1,    -1,    -1,    78,    79,   236,   486,    82,    -1,
     489,    -1,    -1,    -1,    -1,    54,   495,    91,    -1,    -1,
      -1,     4,     5,    -1,     7,    -1,    -1,    10,   102,    12,
     260,    -1,    15,    -1,    -1,    -1,    -1,   267,   517,    -1,
      -1,   520,    -1,    -1,   118,    -1,    -1,   526,    -1,    -1,
      33,    34,    35,    -1,    37,    38,    39,    40,    -1,    -1,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,   143,
      53,    15,   146,    -1,    -1,    -1,    -1,    -1,   152,   309,
      -1,    -1,   156,    -1,    -1,   159,   316,    -1,   567,    33,
      34,    35,    -1,    37,    38,    39,    40,    -1,    -1,   329,
      -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,   338,    53,
      -1,   185,    -1,    -1,    -1,   345,    -1,    -1,    -1,    -1,
     350,   351,   352,    -1,   198,    -1,   356,   357,   358,    -1,
     360,   205,    -1,    -1,    -1,    -1,    -1,   367,    -1,    -1,
      -1,    -1,   372,   373,   374,    -1,    -1,    -1,   378,   379,
     380,    -1,   382,    -1,    -1,   229,    -1,    -1,    -1,   389,
      -1,    -1,   236,    -1,   394,   395,   396,    -1,    -1,    -1,
     400,   401,   402,    -1,    -1,     4,     5,    -1,     7,    -1,
      -1,    10,   412,    12,   414,    -1,   260,    -1,    -1,    -1,
      -1,   421,    -1,   267,    -1,    -1,   426,   427,   428,    -1,
      -1,    -1,   432,   433,    -1,    -1,    -1,   437,    37,    38,
      39,    40,    -1,    -1,     4,     5,   446,     7,    -1,   449,
      10,    -1,    12,    -1,    53,   455,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   309,   466,    -1,    -1,   469,
      -1,    -1,   316,    -1,    -1,   475,    -1,    37,    38,    39,
      40,    -1,    -1,    -1,    -1,   329,   486,    -1,    -1,   489,
      -1,    -1,   336,    53,   338,   495,    -1,    -1,    -1,    48,
      -1,   345,    -1,    -1,    -1,    -1,   350,    -1,    -1,    -1,
      -1,    -1,   356,   357,   358,    -1,   360,   517,    -1,    -1,
     520,    -1,    -1,   367,    -1,    -1,   526,    -1,   372,    78,
      79,    -1,    -1,    82,   378,   379,   380,    -1,   382,    -1,
      -1,    -1,    91,    -1,    -1,   389,    -1,    -1,    -1,    -1,
     394,    -1,    -1,    -1,    -1,    -1,   400,   401,   402,    -1,
     109,    -1,    -1,    -1,    -1,    -1,    -1,   567,   412,    -1,
     414,    -1,    -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,
      -1,    -1,   426,    -1,     4,     5,    -1,     7,   432,   433,
      10,    -1,    12,   437,   143,    15,    -1,    -1,    -1,    -1,
      -1,    -1,   446,    -1,    -1,   449,    -1,   156,    -1,    -1,
     159,   455,    -1,    33,    34,    35,    -1,    37,    38,    39,
      40,    -1,   466,    -1,    -1,   469,    -1,    -1,    -1,    -1,
      -1,   475,    52,    53,    -1,    -1,   185,    -1,    -1,    -1,
      -1,    -1,   486,    -1,    -1,   489,    -1,    -1,    -1,   198,
      -1,   495,    -1,    -1,    -1,    48,   205,    -1,    -1,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,   517,    -1,    -1,   520,    -1,    -1,    -1,
     229,    -1,   526,    -1,    -1,    78,    79,   236,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,     1,    54,    55,     4,     5,    -1,     7,    -1,    -1,
      10,   260,    12,     4,     5,    15,     7,    -1,   267,    10,
      -1,    12,    -1,   567,    15,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    33,    34,    35,    -1,    37,    38,    39,    40,
     143,    -1,    52,    53,    -1,    -1,    56,    57,    -1,    -1,
     309,    52,    53,   156,    -1,    -1,   159,   316,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
     329,    -1,    -1,    -1,    -1,    -1,    -1,   336,    36,   338,
      -1,    -1,   185,    -1,    -1,    -1,   345,    -1,    -1,    -1,
      -1,   350,   351,    -1,    48,   198,    54,   356,   357,   358,
      -1,   360,    -1,    -1,    -1,    -1,    -1,    -1,   367,    -1,
      -1,    -1,    66,   372,   373,    -1,    -1,    -1,    -1,   378,
     379,   380,    -1,   382,    78,    79,   229,    -1,    82,    -1,
     389,    -1,    -1,    -1,    -1,   394,   395,    91,    -1,    -1,
      -1,   400,   401,   402,    -1,    -1,    -1,    -1,   102,    -1,
      -1,    -1,    -1,   412,    -1,   414,    -1,   260,    -1,    -1,
      -1,    -1,   421,    -1,   118,    -1,    -1,   426,   427,    -1,
      -1,    -1,    -1,   432,   433,    -1,    -1,    -1,   437,    16,
      17,    18,    19,    20,    21,    22,    23,   446,    -1,   143,
     449,    -1,   146,    -1,    -1,    -1,   455,    -1,   152,    36,
      -1,    -1,   156,    -1,    -1,   159,   309,   466,    -1,    -1,
     469,    -1,    11,    12,    13,    14,   475,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   329,   486,    -1,    -1,
     489,   185,    -1,   336,    -1,   338,   495,    -1,    -1,    -1,
      -1,    -1,   345,    -1,   198,    -1,    -1,    -1,    -1,    -1,
      48,   205,    -1,    52,   357,   358,    -1,   360,   517,    -1,
      -1,   520,    -1,    -1,   367,    -1,    -1,   526,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   229,   379,   380,    -1,   382,
      78,    79,   236,    -1,    82,    -1,   389,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,   401,   402,
      -1,    -1,    -1,    -1,    -1,    -1,   260,    -1,   567,   412,
      -1,   414,    -1,   267,    -1,    -1,    11,    12,   421,    -1,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
     433,    -1,    -1,    -1,   437,    -1,     4,     5,    -1,     7,
      -1,    -1,    10,   446,    12,   143,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,   156,    54,
      55,   159,   316,   466,    -1,    33,    34,    35,    -1,    37,
      38,    39,    40,    -1,    -1,   329,    -1,    -1,    -1,    -1,
      -1,    -1,   336,   486,   338,    53,    -1,   185,    -1,    -1,
      -1,   345,    -1,    -1,    -1,    -1,   350,    -1,    -1,    -1,
     198,    -1,   356,   357,   358,    -1,   360,   205,    -1,    -1,
      -1,    -1,    -1,   367,   517,    -1,    -1,    -1,   372,    -1,
      -1,    -1,    -1,    -1,   378,   379,   380,    -1,   382,    -1,
      -1,   229,    -1,    -1,    -1,   389,    -1,    -1,   236,    -1,
     394,    -1,    -1,    -1,    11,    12,   400,   401,   402,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,   412,    -1,
     414,    -1,   260,    -1,   567,    -1,    -1,   421,    -1,   267,
      -1,    -1,   426,    -1,     4,     5,    -1,     7,   432,   433,
      10,    -1,    12,   437,    -1,    15,    -1,    54,    55,    -1,
      -1,    -1,   446,    -1,    -1,   449,    -1,    -1,    -1,    48,
      -1,   455,    -1,    33,    34,    35,    -1,    37,    38,    39,
      40,   309,   466,    -1,    -1,   469,    -1,    -1,   316,    -1,
      -1,   475,    52,    53,    -1,    -1,    -1,    -1,    -1,    78,
      79,   329,   486,    82,    -1,   489,    -1,    -1,   336,    -1,
     338,   495,    91,    -1,    -1,    -1,    -1,   345,    -1,    -1,
      -1,    -1,   350,    -1,    -1,    -1,    -1,    -1,   356,   357,
     358,    -1,   360,   517,    -1,    -1,   520,    -1,    -1,   367,
      -1,    -1,   526,    -1,   372,    -1,    -1,    -1,    -1,    -1,
     378,   379,   380,    -1,   382,    -1,    -1,    -1,    -1,    -1,
      -1,   389,    -1,    -1,   143,    -1,   394,    -1,    -1,    -1,
      -1,    -1,   400,   401,   402,    -1,    -1,   156,    -1,    -1,
     159,    -1,    -1,   567,   412,    -1,   414,    -1,    -1,    -1,
      -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,   426,    -1,
      -1,    -1,    -1,    -1,   432,   433,   185,    -1,    -1,   437,
      16,    17,    18,    19,    20,    21,    22,    23,   446,   198,
      -1,   449,    -1,    11,    12,    48,   205,   455,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,   466,    -1,
      -1,   469,    -1,    -1,    -1,    -1,    -1,   475,    54,    55,
     229,    -1,    -1,    -1,    -1,    78,    79,   236,   486,    82,
      -1,   489,    -1,    -1,    -1,    -1,    54,   495,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,     4,
       5,   260,     7,    -1,    -1,    10,    -1,    12,   267,   517,
      15,    -1,   520,    -1,    -1,    -1,    -1,    -1,   526,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    -1,     4,     5,
     143,     7,    -1,    -1,    10,    -1,    12,    52,    53,    15,
     309,    56,    57,   156,    -1,    -1,   159,   316,    -1,   567,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
     329,    37,    38,    39,    40,    -1,    -1,   336,    -1,   338,
      -1,    -1,   185,    -1,    -1,    -1,   345,    53,    -1,    -1,
      -1,   350,    -1,    -1,    -1,   198,    -1,   356,   357,   358,
      -1,   360,   205,    -1,    -1,    -1,    -1,    -1,   367,    -1,
      -1,    -1,    -1,   372,    -1,    -1,    -1,    -1,    -1,   378,
     379,   380,    -1,   382,    -1,    -1,   229,    -1,    -1,    -1,
     389,    -1,    -1,   236,    -1,   394,    -1,    -1,    -1,    11,
      12,   400,   401,   402,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,   412,    -1,   414,    -1,   260,    -1,    -1,
      -1,    -1,   421,    -1,   267,    -1,    -1,   426,    -1,     4,
       5,    -1,     7,   432,   433,    10,    -1,    12,   437,    -1,
      15,    -1,    54,    -1,    -1,    -1,    -1,   446,    -1,    -1,
     449,    -1,    -1,    -1,    48,    -1,   455,    -1,    33,    34,
      35,    -1,    37,    38,    39,    40,   309,   466,    -1,    -1,
     469,    -1,    -1,   316,    -1,    -1,   475,    52,    53,    -1,
      -1,    -1,    -1,    -1,    78,    79,   329,   486,    82,    -1,
     489,    -1,    -1,   336,    -1,   338,   495,    91,    -1,    -1,
      -1,    -1,   345,    -1,    -1,    -1,    -1,   350,    -1,    -1,
      -1,    -1,    -1,   356,   357,   358,    -1,   360,   517,    -1,
      -1,   520,    -1,    -1,   367,    -1,    -1,   526,    -1,   372,
      -1,    -1,    -1,    -1,    -1,   378,   379,   380,    -1,   382,
      -1,    -1,    -1,    -1,    -1,    -1,   389,    -1,    -1,   143,
      -1,   394,    -1,    -1,    -1,    -1,    -1,   400,   401,   402,
      -1,    -1,   156,    -1,    -1,   159,    -1,    -1,   567,   412,
      -1,   414,    -1,    -1,    -1,    -1,    -1,    -1,   421,    -1,
      -1,    -1,    -1,   426,    -1,    -1,    -1,    -1,    -1,   432,
     433,   185,    -1,    -1,   437,    16,    17,    18,    19,    20,
      21,    22,    23,   446,   198,    -1,   449,    -1,    11,    12,
      48,   205,   455,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,   466,    -1,    -1,   469,    -1,    -1,    -1,
      -1,    -1,   475,    54,    55,   229,    -1,    -1,    -1,    -1,
      78,    79,   236,   486,    82,    -1,   489,    -1,    -1,    52,
      -1,    -1,   495,    91,    -1,    -1,    -1,    -1,    -1,     4,
       5,    -1,     7,    -1,   102,    10,   260,    12,    -1,    -1,
      15,    -1,    -1,   267,   517,    -1,    -1,   520,    -1,    -1,
     118,    -1,    -1,   526,    29,    -1,    31,    -1,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    16,    17,    18,
      19,    20,    21,    22,    23,   143,    -1,    52,    53,    -1,
      -1,    56,    -1,    -1,    -1,   309,    -1,    36,   156,    -1,
      -1,   159,   316,    -1,   567,    -1,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,   329,    -1,    -1,    -1,    -1,
      -1,    -1,   336,    -1,   338,    -1,    48,   185,    -1,    -1,
      -1,   345,    -1,    -1,    -1,    -1,   350,    -1,    -1,    -1,
     198,    -1,   356,   357,   358,    54,   360,    -1,    -1,    -1,
      -1,    -1,    -1,   367,    -1,    -1,    78,    79,   372,    -1,
      82,    -1,    -1,    -1,   378,   379,   380,    -1,   382,    91,
      -1,   229,    -1,    -1,    -1,   389,    -1,    -1,    -1,    -1,
     394,    -1,    -1,    -1,    11,    12,   400,   401,   402,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,   412,    -1,
     414,    -1,   260,    -1,    -1,    -1,    -1,   421,    -1,    -1,
      -1,    -1,   426,    -1,    -1,    -1,    -1,    -1,   432,   433,
      -1,   143,    -1,   437,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,   446,    -1,   156,   449,    -1,   159,    -1,    48,
      -1,   455,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,   309,   466,    -1,    -1,   469,    -1,    -1,    -1,    -1,
      -1,   475,    -1,   185,    -1,    -1,    -1,    -1,    -1,    78,
      79,   329,   486,    82,    -1,   489,   198,    -1,   336,    52,
     338,   495,    91,    -1,    -1,    -1,    -1,   345,    -1,    -1,
      -1,    -1,   350,    -1,    -1,    -1,    -1,    -1,   356,   357,
     358,    -1,   360,   517,    -1,    -1,   520,   229,    -1,   367,
      -1,    -1,   526,    -1,   372,    -1,    -1,    -1,    -1,    -1,
     378,   379,   380,    -1,   382,    -1,    -1,    -1,    -1,    -1,
      -1,   389,    -1,    -1,   143,    -1,   394,    -1,   260,    -1,
      -1,    -1,   400,   401,   402,    -1,    -1,   156,    -1,    -1,
     159,    -1,    -1,   567,   412,    -1,   414,    -1,    -1,    -1,
      -1,    -1,    -1,   421,    -1,    -1,    48,    -1,   426,    -1,
      -1,    -1,    -1,    -1,   432,   433,   185,    -1,    -1,   437,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,   446,   198,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,   329,   466,    91,
      -1,    -1,    -1,    -1,   336,    -1,   338,    -1,    -1,    -1,
     229,    -1,    -1,   345,    -1,    -1,    -1,    -1,   486,    -1,
      -1,    -1,    -1,    -1,    -1,   357,   358,    -1,   360,    -1,
      -1,    -1,    -1,    -1,    -1,   367,    -1,    -1,    -1,    -1,
      -1,   260,    -1,    -1,    -1,    -1,    -1,   379,   380,   517,
     382,   143,    -1,    -1,    -1,    -1,    -1,   389,    -1,    -1,
      -1,    -1,    -1,    -1,   156,    -1,    -1,   159,    -1,   401,
     402,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
     412,    -1,   414,    -1,    -1,    -1,    -1,    -1,    -1,   421,
     309,    36,    -1,   185,    -1,    -1,    -1,    -1,    -1,   567,
      -1,   433,    -1,    -1,    -1,   437,   198,    -1,    -1,    54,
     329,    -1,    -1,    -1,   446,    -1,    -1,   336,    -1,   338,
      -1,    -1,     4,     5,    -1,     7,   345,    -1,    10,    -1,
      12,    -1,    -1,    15,   466,    -1,    -1,   229,   357,   358,
      -1,   360,    -1,    -1,    -1,    -1,    -1,    -1,   367,    -1,
      -1,    33,    34,    35,   486,    37,    38,    39,    40,    -1,
     379,   380,    -1,   382,    -1,    -1,    -1,    -1,   260,    -1,
     389,    53,    -1,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,   401,   402,    -1,   517,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   412,    -1,   414,    -1,    -1,    11,    12,
      13,    14,   421,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    54,    55,   433,    -1,    -1,   309,   437,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,   446,     7,    -1,
      -1,    10,    -1,    12,    -1,   567,    15,   329,    -1,    -1,
      53,    54,    55,    -1,   336,    -1,   338,   466,    -1,    -1,
      29,    -1,    31,   345,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    -1,    -1,   357,   358,   486,   360,    -1,
      -1,    -1,    -1,    52,    53,   367,    -1,    56,    -1,    -1,
      -1,    -1,    -1,     4,     5,    -1,     7,   379,   380,    10,
     382,    12,    -1,    -1,    15,    -1,    -1,   389,   517,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,   401,
     402,    -1,    33,    34,    35,    -1,    37,    38,    39,    40,
     412,    -1,   414,    -1,    -1,    -1,    -1,    -1,    -1,   421,
      -1,    -1,    53,     1,    -1,    -1,     4,     5,    54,     7,
      -1,   433,    10,    -1,    12,   437,    -1,    15,   567,    -1,
      -1,    -1,    -1,    -1,   446,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,   466,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    52,    53,    -1,    -1,    56,    57,
      -1,    -1,    -1,    -1,   486,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    12,    54,    55,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   517,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    52,    53,    -1,     1,    56,    57,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,   567,    -1,    -1,    -1,    52,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    52,    53,    -1,
       1,    56,    57,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    52,    53,    -1,     1,    56,    57,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    52,    53,    -1,     1,    56,
      57,     4,     5,    -1,     7,    36,    -1,    10,    -1,    12,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    52,
      53,    -1,     1,    56,    57,     4,     5,    -1,     7,    36,
      -1,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    52,    53,    -1,     1,    56,    57,     4,
       5,    -1,     7,    36,    -1,    10,    -1,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    52,    53,    -1,
       1,    56,    57,     4,     5,    -1,     7,    36,    -1,    10,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,     1,    56,    57,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    -1,     1,    56,
      57,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    -1,     1,    56,    57,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,     1,    56,    57,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,
       1,    56,    57,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,     1,    56,    57,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    -1,     1,    56,
      57,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    -1,     1,    56,    57,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,     1,    56,    57,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,
       1,    56,    57,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,     1,    56,    57,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    -1,     1,    56,
      57,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    -1,     1,    56,    57,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,     1,    56,    57,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,
       1,    56,    57,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,     1,    56,    57,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    -1,     1,    56,
      57,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    -1,     1,    56,    57,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,     1,    56,    57,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,
       1,    56,    57,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,     1,    56,    57,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    -1,     1,    56,
      57,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    -1,     1,    56,    57,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,     1,    56,    57,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,
       1,    56,    57,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,     1,    56,    57,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    -1,     1,    56,
      57,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    -1,     1,    56,    57,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,     1,    56,    57,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,
       1,    56,    57,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,     1,    56,    57,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    -1,     1,    56,
      57,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    -1,     1,    56,    57,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,     1,    56,    57,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,
       1,    56,    57,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,     1,    56,    57,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    -1,     1,    56,
      57,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    -1,     1,    56,    57,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,     1,    56,    57,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,     1,    52,    53,     4,
       5,    56,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    54,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,     1,    52,    53,     4,
       5,    56,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,
      15,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      25,    26,    27,    28,    29,    54,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    -1,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    12,    52,    53,    15,
      54,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,
      56,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    11,    12,    53,    54,    55,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      54,    55,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    11,    12,    -1,    54,    55,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    54,    55,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    -1,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    54,    55,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    14,    36,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    36,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,
      11,    12,    13,    14,    36,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    36,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    11,    12,    13,
      14,    36,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    36,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    11,    12,    13,    14,    36,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    36,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    11,    12,    13,    14,    36,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    11,    12,    13,    14,    36,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    54,    -1,    -1,
      36,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    11,    12,    13,    14,    54,    16,
      17,    18,    19,    20,    21,    22,    23,    54,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    11,    12,    13,    14,    54,    16,    17,
      18,    19,    20,    21,    22,    23,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    36,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    36,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    11,    12,    13,    14,    36,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    11,
      12,    13,    14,    54,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    54,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    54,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,
      12,    13,    14,    54,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,
      14,    54,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    54,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      54,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,
      14,    54,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,    54,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      54,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    54,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,    54,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    14,    54,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    54,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    36,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    11,    12,    13,    14,    36,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    53,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    52,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    11,    12,    13,    14,    52,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,    52,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    52,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    52,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    11,
      12,    13,    14,    52,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,
      12,    13,    14,    52,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      52,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      52,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    11,    12,    13,    14,    52,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    14,    52,    16,    17,
      18,    19,    20,    21,    22,    23,    16,    17,    18,    19,
      20,    21,    22,    23,    52,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    36,    16,    17,    18,    19,
      20,    21,    22,    23,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    36,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    54,    -1,    -1,    -1,    11,    12,
      13,    14,    36,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,
      12,    13,    14,    36,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    36,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    14,    36,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    36,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    14,    36,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    36,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,    36,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      36,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,
      14,    36,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    36,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,
      12,    13,    14,    36,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    36,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    25,    26,    27,    28,    59,    60,    61,    62,    63,
      64,    65,     0,    61,    52,     7,    53,     1,    63,    65,
      66,    67,     7,    54,    55,    56,    68,    67,    69,     1,
       4,     5,     7,    10,    12,    15,    29,    31,    32,    33,
      34,    35,    37,    38,    39,    40,    41,    52,    53,    62,
      68,    70,    71,    72,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   101,   104,    53,    53,
      85,   104,    53,    92,    53,    52,    79,    53,    53,    53,
      53,    53,    92,    92,    53,    92,    79,    57,    72,    52,
      16,    17,    87,    18,    19,    20,    21,    22,    23,    88,
      11,    12,    89,    13,    14,    90,    81,    91,    87,    24,
      79,   102,   103,    79,    79,    72,    77,    52,     7,   104,
       8,     9,   100,   100,   104,    79,   104,    68,    73,    74,
      75,    76,    77,    36,    54,    81,    86,    91,    82,    83,
      84,    81,    86,    91,    79,    54,    55,    54,    30,    77,
      54,    54,    54,    54,    36,    79,    81,    91,    81,    91,
      79,    72,    72,    79,   104,    54,    30,    54,    54,    72,
      72,    56,    63,    65,     7,    53,     4,     5,     7,    10,
      12,    33,    34,    35,    37,    38,    39,    40,    53,    80,
      81,    82,    83,    84,    85,    86,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   101,   104,     4,     5,     7,
      10,    12,    33,    34,    35,    37,    38,    39,    40,    53,
      80,    81,    82,    83,    84,    85,    86,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   101,   104,     4,     5,
       7,    10,    12,    33,    34,    35,    37,    38,    39,    40,
      53,    80,    81,    82,    83,    84,    85,    86,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   101,   104,     1,
      29,    31,    32,    41,    52,    56,    62,    63,    68,    74,
      75,    76,    77,    78,    79,    52,    79,     4,     5,     7,
      10,    12,    33,    34,    35,    37,    38,    39,    40,    53,
      80,    81,    82,    83,    84,    85,    86,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   101,   104,     7,    36,
      52,    79,    69,    52,     7,    79,    53,     7,    53,    85,
     104,    53,    53,    53,    53,    53,    92,    92,    53,    79,
      87,    88,    89,    90,    81,    91,    87,    24,    53,     7,
      53,    85,   104,    53,    53,    53,    53,    53,    92,    92,
      53,    79,    87,    88,    89,    90,    81,    91,    87,    24,
      53,     7,    53,    85,   104,    53,    53,    53,    53,    53,
      92,    92,    53,    79,    87,    88,    89,    90,    81,    91,
      87,    24,    53,    92,    53,    52,    79,    92,    69,    52,
      52,    52,    53,     7,    53,    85,   104,    53,    53,    53,
      53,    53,    92,    92,    53,    79,    87,    88,    89,    90,
      81,    91,    87,    24,    79,    52,    70,    36,   102,    79,
     104,   100,   100,   104,    79,   104,    36,    54,    81,    86,
      91,    82,    83,    84,    81,    86,    91,    79,   102,    79,
     104,   100,   100,   104,    79,   104,    36,    54,    81,    86,
      91,    82,    83,    84,    81,    86,    91,    79,   102,    79,
     104,   100,   100,   104,    79,   104,    36,    54,    81,    86,
      91,    82,    83,    84,    81,    86,    91,    79,    79,    72,
      77,    52,    68,    73,    74,    75,    76,    77,    70,   102,
      79,   104,   100,   100,   104,    79,   104,    36,    54,    81,
      86,    91,    82,    83,    84,    81,    86,    91,    79,    54,
      57,    79,    54,    54,    54,    54,    54,    36,    79,    81,
      91,    81,    91,    54,    54,    54,    54,    54,    36,    79,
      81,    91,    81,    91,    54,    54,    54,    54,    54,    36,
      79,    81,    91,    81,    91,    54,    30,    77,    57,    54,
      54,    54,    54,    54,    36,    79,    81,    91,    81,    91,
      54,   104,    54,   104,    54,   104,    54,    72,    72,    79,
     104,    54,    54,    54,    54,    30,    54,    54,    72,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    62,    63,    64,
      65,    65,    65,    65,    66,    66,    66,    66,    67,    69,
      68,    70,    70,    71,    71,    72,    72,    72,    72,    72,
      72,    72,    72,    73,    73,    73,    73,    73,    74,    74,
      74,    74,    75,    76,    77,    77,    78,    78,    79,    79,
      79,    79,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    81,    81,    82,    82,    83,    83,    84,
      84,    85,    85,    85,    85,    85,    85,    86,    87,    87,
      88,    88,    88,    88,    88,    88,    89,    89,    90,    90,
      91,    91,    91,    91,    91,    92,    93,    94,    95,    96,
      97,    97,    98,    99,    99,   100,   100,   101,   102,   102,
     103,   103,   104
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     2,     6,
       1,     1,     1,     1,     3,     1,     0,     1,     1,     0,
       4,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     7,
       3,     5,     7,     3,     2,     1,     2,     3,     3,     1,
       1,     1,     2,     2,     3,     3,     3,     3,     4,     4,
       4,     4,     1,     3,     1,     3,     1,     3,     1,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     2,     6,
       1,     1,     4,     4,     4,     1,     1,     4,     1,     0,
       3,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: declaration-list  */
#line 156 "anasin.y"
    {
      // printf("program\n");
      // abstract_tree = $1;
      // tree_node* create_ast_node(rules_types rule, char* type, char* value, struct tree_node* next, struct tree_node* child) 
      (yyval.nt_node) = create_ast_node(PROGRAM, NULL, NULL, NULL, (yyvsp[0].nt_node));
      abstract_tree = (yyval.nt_node);
    }
#line 3524 "anasin.tab.c"
    break;

  case 3: /* declaration-list: declaration-list declaration  */
#line 167 "anasin.y"
    {
      // printf("declaration-list  ->  declaration-list declaration\n");
      (yyval.nt_node) = create_ast_node(DECLARATION_LIST, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3534 "anasin.tab.c"
    break;

  case 4: /* declaration-list: declaration  */
#line 174 "anasin.y"
    {
      // printf("declaration-list  ->  declaration\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3543 "anasin.tab.c"
    break;

  case 5: /* declaration: var-declaration  */
#line 181 "anasin.y"
    {
      // printf("declaration  ->  var-declaration\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3552 "anasin.tab.c"
    break;

  case 6: /* declaration: func-declaration  */
#line 187 "anasin.y"
    {
      // printf("declaration  ->  func-declaration\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3561 "anasin.tab.c"
    break;

  case 7: /* var-declaration: variable ';'  */
#line 194 "anasin.y"
    {
      // printf("var declaration  ->  variable ;\n");
      (yyval.nt_node) = (yyvsp[-1].nt_node);
    }
#line 3570 "anasin.tab.c"
    break;

  case 8: /* variable: type-specifier ID  */
#line 201 "anasin.y"
    { 
      // printf("variable  ->  type-specifier %s\n", $2);
      // NÃO PRECISA CRIAR NÓ NO TYPE-SPECIFIER, SÓ CHAMAR A TT_NAME DA UNION 
      (yyval.nt_node) = create_ast_node(VARIABLE, (yyvsp[-1].nt_node)->type, (yyvsp[0].tt_name), NULL, NULL);
      insert_into_symbol_table((yyvsp[0].tt_name), (yyvsp[-1].nt_node)->type, "variable");
    }
#line 3581 "anasin.tab.c"
    break;

  case 9: /* func-declaration: type-specifier ID '(' parameter-list ')' compound-stmt  */
#line 210 "anasin.y"
    {
      // printf("func-declaration  ->  type-specifier %s ( parameters ) compount-stmt\n", $2);
      (yyval.nt_node) = create_ast_node(FUNC_DECLARATION, (yyvsp[-5].nt_node)->type, (yyvsp[-4].tt_name), NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
      insert_into_symbol_table((yyvsp[-4].tt_name), (yyvsp[-5].nt_node)->type, "function");
    }
#line 3592 "anasin.tab.c"
    break;

  case 10: /* type-specifier: TYPEINT  */
#line 219 "anasin.y"
    {
      // printf("type-specifier  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].tt_name), NULL, NULL, NULL);
    }
#line 3601 "anasin.tab.c"
    break;

  case 11: /* type-specifier: TYPEFLOAT  */
#line 225 "anasin.y"
    {
      // printf("type-specifier  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].tt_name), NULL, NULL, NULL);
    }
#line 3610 "anasin.tab.c"
    break;

  case 12: /* type-specifier: TYPEELEM  */
#line 231 "anasin.y"
    {
      // printf("type-specifier  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].tt_name), NULL, NULL, NULL);
    }
#line 3619 "anasin.tab.c"
    break;

  case 13: /* type-specifier: TYPESET  */
#line 237 "anasin.y"
    {
      // printf("type-specifier  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].tt_name), NULL, NULL, NULL);
    }
#line 3628 "anasin.tab.c"
    break;

  case 14: /* parameter-list: parameter-list ',' parameter  */
#line 251 "anasin.y"
    {
      // printf("parameter-list  ->  parameter-list , parameter\n");
      (yyval.nt_node) = create_ast_node(PARAMETER_LIST, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3638 "anasin.tab.c"
    break;

  case 15: /* parameter-list: parameter  */
#line 258 "anasin.y"
    {
      // printf("parameter-list  ->  parameter\n");
      (yyval.nt_node) = create_ast_node(PARAMETER_LIST, NULL, NULL, NULL, (yyvsp[0].nt_node));
      // $$ = $1;
    }
#line 3648 "anasin.tab.c"
    break;

  case 16: /* parameter-list: %empty  */
#line 265 "anasin.y"
    {
      // $$ = NULL;
      (yyval.nt_node) = create_ast_node(EMPTY_PARAMETER_LIST, NULL, NULL, NULL, NULL);
    }
#line 3657 "anasin.tab.c"
    break;

  case 17: /* parameter-list: error  */
#line 271 "anasin.y"
    {
      yyerrok;
      (yyval.nt_node) = NULL;
    }
#line 3666 "anasin.tab.c"
    break;

  case 18: /* parameter: variable  */
#line 278 "anasin.y"
    {
      // printf("parameter  ->  variable\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3675 "anasin.tab.c"
    break;

  case 19: /* $@1: %empty  */
#line 285 "anasin.y"
    {
      current_scope+=1;
    }
#line 3683 "anasin.tab.c"
    break;

  case 20: /* compound-stmt: '{' $@1 local-declarations '}'  */
#line 289 "anasin.y"
    {
      // printf("compound-stmt  ->  { local-declarations }\n");
      (yyval.nt_node) = create_ast_node(COMPOUND_STMT, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      // $$ = $3;
      current_scope-=1;
    }
#line 3694 "anasin.tab.c"
    break;

  case 21: /* local-declarations: statement-list  */
#line 298 "anasin.y"
    {
      // printf("local-declarations  ->  statement-list\n");
      // $$ = create_ast_node(COMPOUND_STMT, NULL, NULL, NULL, $3);
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3704 "anasin.tab.c"
    break;

  case 22: /* local-declarations: %empty  */
#line 305 "anasin.y"
    {
      // printf("local-declarations  ->\n");
      (yyval.nt_node) = NULL;
    }
#line 3713 "anasin.tab.c"
    break;

  case 23: /* statement-list: statement-list statement  */
#line 312 "anasin.y"
    {
      // printf("statement-list  ->  statement-list statement\n");
      (yyval.nt_node) = create_ast_node(STATEMENT_LIST, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3723 "anasin.tab.c"
    break;

  case 24: /* statement-list: statement  */
#line 319 "anasin.y"
    {
      // printf("statement-list  ->  statement\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3732 "anasin.tab.c"
    break;

  case 25: /* statement: compound-stmt  */
#line 326 "anasin.y"
    {
      // printf("statement  ->  compound-stmt \n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3741 "anasin.tab.c"
    break;

  case 26: /* statement: conditional-stmt  */
#line 332 "anasin.y"
    {
      // printf("statement  ->  conditional-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3750 "anasin.tab.c"
    break;

  case 27: /* statement: iteration-stmt  */
#line 338 "anasin.y"
    {
      // printf("statement  ->  iteration-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3759 "anasin.tab.c"
    break;

  case 28: /* statement: expression-stmt  */
#line 344 "anasin.y"
    {
      // printf("statement  ->  expression-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3768 "anasin.tab.c"
    break;

  case 29: /* statement: return-stmt  */
#line 350 "anasin.y"
    {
      // printf("statement  ->  return-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3777 "anasin.tab.c"
    break;

  case 30: /* statement: var-declaration  */
#line 356 "anasin.y"
    {
      // printf("statement  ->  var-declaration \n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3786 "anasin.tab.c"
    break;

  case 31: /* statement: forall-stmt  */
#line 362 "anasin.y"
    {
      // printf("statement  ->  forall-stmt \n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3795 "anasin.tab.c"
    break;

  case 32: /* statement: error  */
#line 368 "anasin.y"
    {
      yyerrok;
      (yyval.nt_node) = NULL;
    }
#line 3804 "anasin.tab.c"
    break;

  case 33: /* forall-statement: compound-stmt  */
#line 375 "anasin.y"
    {
      // printf("statement  ->  compound-stmt \n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3813 "anasin.tab.c"
    break;

  case 34: /* forall-statement: conditional-stmt  */
#line 381 "anasin.y"
    {
      // printf("statement  ->  conditional-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3822 "anasin.tab.c"
    break;

  case 35: /* forall-statement: iteration-stmt  */
#line 387 "anasin.y"
    {
      // printf("statement  ->  iteration-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3831 "anasin.tab.c"
    break;

  case 36: /* forall-statement: expression-stmt  */
#line 393 "anasin.y"
    {
      // printf("statement  ->  expression-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3840 "anasin.tab.c"
    break;

  case 37: /* forall-statement: forall-stmt  */
#line 399 "anasin.y"
    {
      // printf("statement  ->  forall-stmt \n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3849 "anasin.tab.c"
    break;

  case 38: /* conditional-stmt: IF '(' expression ')' statement  */
#line 407 "anasin.y"
    {
      // printf("conditional-stmt  ->  if ( expression ) statement \n");
      (yyval.nt_node) = create_ast_node(CONDITIONAL_IF_STMT, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3859 "anasin.tab.c"
    break;

  case 39: /* conditional-stmt: IF '(' expression ')' statement ELSE statement  */
#line 414 "anasin.y"
    {
      // printf("conditional-stmt  ->  if ( expression ) statement else statement\n");
      (yyval.nt_node) = create_ast_node(CONDITIONAL_IF_ELSE_STMT, NULL, NULL, NULL, (yyvsp[-4].nt_node));
      (yyvsp[-4].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3870 "anasin.tab.c"
    break;

  case 40: /* conditional-stmt: IF setop-in statement  */
#line 422 "anasin.y"
    {
      // printf("conditional-stmt  ->  if ( expression ) statement \n");
      (yyval.nt_node) = create_ast_node(CONDITIONAL_IF_STMT, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3880 "anasin.tab.c"
    break;

  case 41: /* conditional-stmt: IF setop-in statement ELSE statement  */
#line 429 "anasin.y"
    {
      // printf("conditional-stmt  ->  if ( expression ) statement else statement\n");
      (yyval.nt_node) = create_ast_node(CONDITIONAL_IF_ELSE_STMT, NULL, NULL, NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3891 "anasin.tab.c"
    break;

  case 42: /* iteration-stmt: FOR '(' expression-stmt expression-stmt expression ')' statement  */
#line 438 "anasin.y"
    {
      // printf("iteration-stmt  ->  for ( expression ; expression ; expression ) statement\n");
      (yyval.nt_node) = create_ast_node(ITERATION_STMT, NULL, NULL, NULL, (yyvsp[-4].nt_node));
      (yyvsp[-4].nt_node)->next = (yyvsp[-3].nt_node);
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3903 "anasin.tab.c"
    break;

  case 43: /* forall-stmt: FORALL_OP setop-in forall-statement  */
#line 449 "anasin.y"
    {
      // printf("setop-forall  ->  setop-in forall-statement\n");
      (yyval.nt_node) = create_ast_node(FORALL_STMT, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3913 "anasin.tab.c"
    break;

  case 44: /* expression-stmt: expression ';'  */
#line 458 "anasin.y"
    {
      // printf("expression-stmt  ->  expression ;\n");
      (yyval.nt_node) = (yyvsp[-1].nt_node);
    }
#line 3922 "anasin.tab.c"
    break;

  case 45: /* expression-stmt: ';'  */
#line 464 "anasin.y"
    {
      // printf("expression-stmt  ->  ; \n");
      (yyval.nt_node) = NULL;
    }
#line 3931 "anasin.tab.c"
    break;

  case 46: /* return-stmt: RETURN ';'  */
#line 471 "anasin.y"
    {
      // printf("return-stmt  ->  return ; \n");
      (yyval.nt_node) = create_ast_node(RETURN_STMT, NULL, NULL, NULL, NULL);
    }
#line 3940 "anasin.tab.c"
    break;

  case 47: /* return-stmt: RETURN expression ';'  */
#line 477 "anasin.y"
    {
      // printf("return-stmt  ->  return expression ; \n");
      (yyval.nt_node) = create_ast_node(RETURN_STMT, NULL, NULL, NULL, (yyvsp[-1].nt_node));
    }
#line 3949 "anasin.tab.c"
    break;

  case 48: /* expression: var ASSIGN expression  */
#line 493 "anasin.y"
    {
      // printf("expression  ->  var = expression ;\n");
      (yyval.nt_node) = create_ast_node(EQ_T, NULL, (yyvsp[-1].tt_name), NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3959 "anasin.tab.c"
    break;

  case 49: /* expression: simple-expression  */
#line 500 "anasin.y"
    {
      // printf("expression  ->  simple-expression ;\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3968 "anasin.tab.c"
    break;

  case 50: /* expression: set-expression  */
#line 506 "anasin.y"
    {
      // printf("expression  ->  set-expression ;\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3977 "anasin.tab.c"
    break;

  case 51: /* expression: io-expression  */
#line 512 "anasin.y"
    {
      // printf("expression  ->  io-expression ;\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3986 "anasin.tab.c"
    break;

  case 52: /* simple-expression: logop-una relational-exp  */
#line 519 "anasin.y"
    {
      // printf("simple-expression  ->  logop-una relational-exp simple-expression\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3996 "anasin.tab.c"
    break;

  case 53: /* simple-expression: logop-una set-expression  */
#line 526 "anasin.y"
    {
      // printf("simple-expression  ->  logop-una relational-exp simple-expression\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4006 "anasin.tab.c"
    break;

  case 54: /* simple-expression: simple-expression logop-bin relational-exp  */
#line 533 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4017 "anasin.tab.c"
    break;

  case 55: /* simple-expression: simple-expression logop-bin set-expression  */
#line 541 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
      
    }
#line 4029 "anasin.tab.c"
    break;

  case 56: /* simple-expression: set-expression logop-bin relational-exp  */
#line 550 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4040 "anasin.tab.c"
    break;

  case 57: /* simple-expression: set-expression logop-bin set-expression  */
#line 558 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4051 "anasin.tab.c"
    break;

  case 58: /* simple-expression: simple-expression logop-bin logop-una relational-exp  */
#line 566 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[0].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4063 "anasin.tab.c"
    break;

  case 59: /* simple-expression: simple-expression logop-bin logop-una set-expression  */
#line 575 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[0].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4075 "anasin.tab.c"
    break;

  case 60: /* simple-expression: set-expression logop-bin logop-una relational-exp  */
#line 584 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[0].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4087 "anasin.tab.c"
    break;

  case 61: /* simple-expression: set-expression logop-bin logop-una set-expression  */
#line 593 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[0].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4099 "anasin.tab.c"
    break;

  case 62: /* simple-expression: relational-exp  */
#line 602 "anasin.y"
    {
      // printf("simple-expression  ->  relational-exp\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4108 "anasin.tab.c"
    break;

  case 63: /* relational-exp: relational-exp relop arithm-add-exp  */
#line 609 "anasin.y"
    {
      // printf("relational-exp  ->  arithm-add-exp relop arithm-add-exp\n");
      (yyval.nt_node) = create_ast_node(RELATIONAL_EXP, NULL, (yyvsp[-1].nt_node)->value, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
      // $2->next = $3;
    }
#line 4119 "anasin.tab.c"
    break;

  case 64: /* relational-exp: arithm-add-exp  */
#line 617 "anasin.y"
    {
      // printf("relational-exp  ->  arithm-add-exp\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4128 "anasin.tab.c"
    break;

  case 65: /* arithm-add-exp: arithm-add-exp ariop-add arithm-mul-exp  */
#line 624 "anasin.y"
    {
      // printf("arithm-add-exp  ->  arithm-add-exp ariop-add arithm-mul-exp\n");
      (yyval.nt_node) = create_ast_node(ARITHM_ADD_EXP, NULL, (yyvsp[-1].nt_node)->value, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
      // $2->next = $3;
    }
#line 4139 "anasin.tab.c"
    break;

  case 66: /* arithm-add-exp: arithm-mul-exp  */
#line 632 "anasin.y"
    {
      // printf("arithm-add-exp  ->  arithm-mul-exp\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4148 "anasin.tab.c"
    break;

  case 67: /* arithm-mul-exp: arithm-mul-exp ariop-mul unary-minus-exp  */
#line 639 "anasin.y"
    {
      // printf("arithm-mul-exp  ->  arithm-mul-exp ariop-mul unary-minus-exp\n");
      (yyval.nt_node) = create_ast_node(ARITHM_MUL_EXP, NULL, (yyvsp[-1].nt_node)->value, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
      // $2->next = $3;
    }
#line 4159 "anasin.tab.c"
    break;

  case 68: /* arithm-mul-exp: unary-minus-exp  */
#line 647 "anasin.y"
    {
      // printf("arithm-mul-exp  ->  unary-minus-exp\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4168 "anasin.tab.c"
    break;

  case 69: /* unary-minus-exp: MINUS factor  */
#line 654 "anasin.y"
    {
      // printf("unary-minus-exp  ->  '-' factor\n");
      // $$ = $2; //CORRIGIR NUMERO NEGATIVO
      (yyval.nt_node) = create_ast_node(UNARY_MINUS_EXP, NULL, (yyvsp[-1].tt_name), NULL, (yyvsp[0].nt_node));
    }
#line 4178 "anasin.tab.c"
    break;

  case 70: /* unary-minus-exp: factor  */
#line 661 "anasin.y"
    {
      // printf("unary-minus-exp  ->  factor\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4187 "anasin.tab.c"
    break;

  case 71: /* factor: '(' expression ')'  */
#line 668 "anasin.y"
    {
      // printf("factor  ->  ( expression )\n");
      (yyval.nt_node) = (yyvsp[-1].nt_node);
    }
#line 4196 "anasin.tab.c"
    break;

  case 72: /* factor: func-call  */
#line 674 "anasin.y"
    {
      // printf("factor  ->  func-call\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4205 "anasin.tab.c"
    break;

  case 73: /* factor: var  */
#line 685 "anasin.y"
    {
      // printf("factor  ->  var\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4214 "anasin.tab.c"
    break;

  case 74: /* factor: INT  */
#line 691 "anasin.y"
    {
      // printf("factor  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(FACTOR, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4223 "anasin.tab.c"
    break;

  case 75: /* factor: FLOAT  */
#line 697 "anasin.y"
    {
      // printf("factor  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(FACTOR, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4232 "anasin.tab.c"
    break;

  case 76: /* factor: EMPTY  */
#line 703 "anasin.y"
    {
      // printf("factor  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(FACTOR, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4241 "anasin.tab.c"
    break;

  case 77: /* logop-una: NOT  */
#line 710 "anasin.y"
    {
      // printf("logop-una  ->  !\n");
      (yyval.nt_node) = create_ast_node(LOGOP_UNA, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4250 "anasin.tab.c"
    break;

  case 78: /* logop-bin: AND  */
#line 717 "anasin.y"
    {
      // printf("logop-bin  ->  &&\n");
      (yyval.nt_node) = create_ast_node(LOGOP_BIN, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4259 "anasin.tab.c"
    break;

  case 79: /* logop-bin: OR  */
#line 723 "anasin.y"
    {
      // printf("logop-bin  ->  ||\n");
      (yyval.nt_node) = create_ast_node(LOGOP_BIN, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4268 "anasin.tab.c"
    break;

  case 80: /* relop: LT  */
#line 730 "anasin.y"
    {
      // printf("relop  ->  <\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4277 "anasin.tab.c"
    break;

  case 81: /* relop: LTE  */
#line 736 "anasin.y"
    {
      // printf("relop  ->  <=\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4286 "anasin.tab.c"
    break;

  case 82: /* relop: GT  */
#line 742 "anasin.y"
    {
      // printf("relop  ->  >\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4295 "anasin.tab.c"
    break;

  case 83: /* relop: GTE  */
#line 748 "anasin.y"
    {
      // printf("relop  ->  >=\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4304 "anasin.tab.c"
    break;

  case 84: /* relop: EQ  */
#line 754 "anasin.y"
    {
      // printf("relop  ->  ==\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4313 "anasin.tab.c"
    break;

  case 85: /* relop: NEQ  */
#line 760 "anasin.y"
    {
      // printf("relop  ->  !=\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4322 "anasin.tab.c"
    break;

  case 86: /* ariop-add: PLUS  */
#line 767 "anasin.y"
    {
      // printf("ariop-add  ->  +\n");
      (yyval.nt_node) = create_ast_node(ARIOP_ADD, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4331 "anasin.tab.c"
    break;

  case 87: /* ariop-add: MINUS  */
#line 773 "anasin.y"
    {
      // printf("ariop-add  ->  -\n");
      (yyval.nt_node) = create_ast_node(ARIOP_ADD, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4340 "anasin.tab.c"
    break;

  case 88: /* ariop-mul: MULT  */
#line 780 "anasin.y"
    {
      // printf("ariop-mul  ->  *\n");
      (yyval.nt_node) = create_ast_node(ARIOP_MUL, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4349 "anasin.tab.c"
    break;

  case 89: /* ariop-mul: DIV  */
#line 786 "anasin.y"
    {
      // printf("ariop-mul  ->  /\n");
      (yyval.nt_node) = create_ast_node(ARIOP_MUL, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4358 "anasin.tab.c"
    break;

  case 90: /* set-expression: setop-in  */
#line 793 "anasin.y"
    {
      // printf("set-expressions  ->  setop-in\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4367 "anasin.tab.c"
    break;

  case 91: /* set-expression: setop-is-set  */
#line 799 "anasin.y"
    {
      // printf("set-expressions  ->  setop-is-set\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4376 "anasin.tab.c"
    break;

  case 92: /* set-expression: setop-add  */
#line 805 "anasin.y"
    {
      // printf("set-expressions  ->  setop-add\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4385 "anasin.tab.c"
    break;

  case 93: /* set-expression: setop-remove  */
#line 811 "anasin.y"
    {
      // printf("set-expressions  ->  setop-remove\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4394 "anasin.tab.c"
    break;

  case 94: /* set-expression: setop-exists  */
#line 817 "anasin.y"
    {
      // printf("set-expressions  ->  setop-exists\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4403 "anasin.tab.c"
    break;

  case 95: /* setop-in: '(' expression IN_OP expression ')'  */
#line 824 "anasin.y"
    {
      // printf("setop-in  ->  ( expression IN_OP expression ) \n");
      (yyval.nt_node) = create_ast_node(SETOP_IN, NULL, (yyvsp[-2].tt_name), NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-1].nt_node);
    }
#line 4413 "anasin.tab.c"
    break;

  case 96: /* setop-is-set: IS_SET_OP '(' var ')'  */
#line 841 "anasin.y"
    {
      // printf("setop-is-set  ->  is_set ( var )\n");
      (yyval.nt_node) = create_ast_node(SETOP_IS_SET, NULL, (yyvsp[-3].tt_name), NULL, (yyvsp[-1].nt_node));
    }
#line 4422 "anasin.tab.c"
    break;

  case 97: /* setop-add: ADD_OP setop-in  */
#line 848 "anasin.y"
    {
      // printf("setop-add  ->  add setop-in\n");
      (yyval.nt_node) = create_ast_node(SETOP_ADD, NULL, (yyvsp[-1].tt_name), NULL, (yyvsp[0].nt_node));
    }
#line 4431 "anasin.tab.c"
    break;

  case 98: /* setop-remove: REMOVE_OP setop-in  */
#line 855 "anasin.y"
    {
      // printf("setop-remove  ->  remove setop-in\n");
      (yyval.nt_node) = create_ast_node(SETOP_REMOVE, NULL, (yyvsp[-1].tt_name), NULL, (yyvsp[0].nt_node));
    }
#line 4440 "anasin.tab.c"
    break;

  case 99: /* setop-exists: EXISTS_OP '(' var IN_OP var ')'  */
#line 879 "anasin.y"
    {
      // printf("setop-exists  ->  exists ( var in var )\n");
      (yyval.nt_node) = create_ast_node(SETOP_EXISTS, NULL, (yyvsp[-5].tt_name), NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-1].nt_node);
    }
#line 4450 "anasin.tab.c"
    break;

  case 100: /* io-expression: ioop-read  */
#line 887 "anasin.y"
    {
      // printf("io-expression  ->  ioop-read\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4459 "anasin.tab.c"
    break;

  case 101: /* io-expression: ioop-write  */
#line 893 "anasin.y"
    {
      // printf("io-expression  ->  ioop-read\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4468 "anasin.tab.c"
    break;

  case 102: /* ioop-read: READ '(' var ')'  */
#line 909 "anasin.y"
    {
      // printf("ioop-read  ->  read ( var ) \n");
      (yyval.nt_node) = create_ast_node(READ_T, NULL, (yyvsp[-3].tt_name), NULL, (yyvsp[-1].nt_node));
    }
#line 4477 "anasin.tab.c"
    break;

  case 103: /* ioop-write: WRITE '(' word ')'  */
#line 916 "anasin.y"
    {
      // printf("ioop-write  ->  write ( word ) \n");
      (yyval.nt_node) = create_ast_node(WRITE_T, NULL, (yyvsp[-3].tt_name), NULL, (yyvsp[-1].nt_node));
    }
#line 4486 "anasin.tab.c"
    break;

  case 104: /* ioop-write: WRITELN '(' word ')'  */
#line 922 "anasin.y"
    {
      // printf("ioop-write  ->  writeln ( word ) \n");
      (yyval.nt_node) = create_ast_node(WRITELN_T, NULL, (yyvsp[-3].tt_name), NULL, (yyvsp[-1].nt_node));
    }
#line 4495 "anasin.tab.c"
    break;

  case 105: /* word: CHAR  */
#line 929 "anasin.y"
    {
      // printf("word  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(CHAR_T, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4504 "anasin.tab.c"
    break;

  case 106: /* word: STRING  */
#line 935 "anasin.y"
    {
      // printf("word  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(STRING_T, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4513 "anasin.tab.c"
    break;

  case 107: /* func-call: ID '(' arguments ')'  */
#line 942 "anasin.y"
    {
      // printf("func-call  ->  %s ( arguments )\n", $1);
      (yyval.nt_node) = create_ast_node(FUNC_CALL, NULL, (yyvsp[-3].tt_name), NULL, (yyvsp[-1].nt_node));
    }
#line 4522 "anasin.tab.c"
    break;

  case 108: /* arguments: args-list  */
#line 949 "anasin.y"
    {
      // printf("arguments  ->  args-list\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4531 "anasin.tab.c"
    break;

  case 109: /* arguments: %empty  */
#line 955 "anasin.y"
    {
      // printf("arguments  ->  empty-set\n");
      (yyval.nt_node) = NULL;
    }
#line 4540 "anasin.tab.c"
    break;

  case 110: /* args-list: args-list ',' expression  */
#line 962 "anasin.y"
    {
      // printf("args-list  ->  args-list , expression\n");
      (yyval.nt_node) = create_ast_node(ARGS_LIST, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4550 "anasin.tab.c"
    break;

  case 111: /* args-list: expression  */
#line 969 "anasin.y"
    {
      // printf("args-list  ->  expression\n");
      (yyval.nt_node) = create_ast_node(ARGS_LIST, NULL, NULL, NULL, (yyvsp[0].nt_node));
      // $$ = $1;
    }
#line 4560 "anasin.tab.c"
    break;

  case 112: /* var: ID  */
#line 977 "anasin.y"
    {
      // printf("var  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(VAR, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4569 "anasin.tab.c"
    break;


#line 4573 "anasin.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 983 "anasin.y"




void yyerror(const char *tt_name) {
  printf("yyerror:%s em linha:%d coluna:%d.\n", tt_name, line, column);
}

int main(int argc, char *argv[]){
  yyin = fopen(argv[1], "r");

  yyparse();
  fclose(yyin);
  yylex_destroy();

  //  if(error_count > 0){
  //    printf("\nThe lexical analisys finished with %d errors found.\n", error_count);
  //  }

  printf("\n\n\n________________| ABSTRACT SYNTAX TREE |________________\n\n");
  print_tree(abstract_tree, 0);
  print_symbol_table();

  free_ast(abstract_tree);
  free_symbol_table();

  return 0;
}
