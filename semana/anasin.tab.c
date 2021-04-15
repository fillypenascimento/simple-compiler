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
  YYSYMBOL_parameters = 66,                /* parameters  */
  YYSYMBOL_67_parameter_list = 67,         /* parameter-list  */
  YYSYMBOL_parameter = 68,                 /* parameter  */
  YYSYMBOL_69_compound_stmt = 69,          /* compound-stmt  */
  YYSYMBOL_70_1 = 70,                      /* $@1  */
  YYSYMBOL_71_local_declarations = 71,     /* local-declarations  */
  YYSYMBOL_72_statement_list = 72,         /* statement-list  */
  YYSYMBOL_statement = 73,                 /* statement  */
  YYSYMBOL_74_forall_statement = 74,       /* forall-statement  */
  YYSYMBOL_75_conditional_stmt = 75,       /* conditional-stmt  */
  YYSYMBOL_76_iteration_stmt = 76,         /* iteration-stmt  */
  YYSYMBOL_77_forall_stmt = 77,            /* forall-stmt  */
  YYSYMBOL_78_expression_stmt = 78,        /* expression-stmt  */
  YYSYMBOL_79_return_stmt = 79,            /* return-stmt  */
  YYSYMBOL_expression = 80,                /* expression  */
  YYSYMBOL_81_simple_expression = 81,      /* simple-expression  */
  YYSYMBOL_82_relational_exp = 82,         /* relational-exp  */
  YYSYMBOL_83_arithm_add_exp = 83,         /* arithm-add-exp  */
  YYSYMBOL_84_arithm_mul_exp = 84,         /* arithm-mul-exp  */
  YYSYMBOL_85_unary_minus_exp = 85,        /* unary-minus-exp  */
  YYSYMBOL_factor = 86,                    /* factor  */
  YYSYMBOL_87_logop_una = 87,              /* logop-una  */
  YYSYMBOL_88_logop_bin = 88,              /* logop-bin  */
  YYSYMBOL_relop = 89,                     /* relop  */
  YYSYMBOL_90_ariop_add = 90,              /* ariop-add  */
  YYSYMBOL_91_ariop_mul = 91,              /* ariop-mul  */
  YYSYMBOL_92_set_expression = 92,         /* set-expression  */
  YYSYMBOL_93_setop_in = 93,               /* setop-in  */
  YYSYMBOL_94_setop_is_set = 94,           /* setop-is-set  */
  YYSYMBOL_95_setop_add = 95,              /* setop-add  */
  YYSYMBOL_96_setop_remove = 96,           /* setop-remove  */
  YYSYMBOL_97_setop_exists = 97,           /* setop-exists  */
  YYSYMBOL_98_io_expression = 98,          /* io-expression  */
  YYSYMBOL_99_ioop_read = 99,              /* ioop-read  */
  YYSYMBOL_100_ioop_write = 100,           /* ioop-write  */
  YYSYMBOL_word = 101,                     /* word  */
  YYSYMBOL_102_func_call = 102,            /* func-call  */
  YYSYMBOL_arguments = 103,                /* arguments  */
  YYSYMBOL_104_args_list = 104,            /* args-list  */
  YYSYMBOL_var = 105                       /* var  */
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
#define YYLAST   8670

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  601

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
       0,   155,   155,   166,   173,   180,   186,   193,   200,   208,
     217,   223,   229,   235,   242,   255,   262,   269,   276,   282,
     289,   288,   301,   307,   314,   321,   328,   334,   340,   346,
     352,   358,   364,   370,   377,   383,   389,   395,   401,   409,
     416,   424,   431,   440,   451,   460,   466,   473,   479,   495,
     502,   508,   514,   521,   528,   535,   543,   552,   560,   568,
     577,   586,   595,   604,   611,   619,   626,   634,   641,   649,
     656,   663,   670,   676,   687,   693,   699,   705,   712,   719,
     725,   732,   738,   744,   750,   756,   762,   769,   775,   782,
     788,   795,   801,   807,   813,   819,   826,   843,   850,   857,
     881,   889,   895,   911,   918,   924,   931,   937,   944,   951,
     957,   964,   971,   978
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
  "func-declaration", "type-specifier", "parameters", "parameter-list",
  "parameter", "compound-stmt", "$@1", "local-declarations",
  "statement-list", "statement", "forall-statement", "conditional-stmt",
  "iteration-stmt", "forall-stmt", "expression-stmt", "return-stmt",
  "expression", "simple-expression", "relational-exp", "arithm-add-exp",
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

#define YYPACT_NINF (-327)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-114)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1273,    15,    19,    55,    74,   106,   595,  1223,  1427,    56,
    1459,   105,  -327,  1471,  1483,   197,    42,    -2,   144,   107,
      63,   277,   434,   517,    82,  1232,  1789,  1533,   557,  5442,
    5496,  8096,  8116,  7989,  8133,    95,   149,    80,   102,   915,
     104,   123,   132,   139,   150,   150,   155,   166,  5550,   998,
    5604,  5658,   184,  5712,  5766,  5820,  5874,  5928,  5982,  6036,
     204,    30,  1371,  3528,  8153,  8170,  8190,  1568,   334,   349,
     359,   452,   574,   777,   234,   249,   263,  8207,  8079,   642,
    2018,  8227,  8244,   998,  6900,  1180,  6090,   265,   296,   695,
     695,   296,  2057,   784,   826,   301,   818,   -24,  1539,  6144,
    6198,   409,   472,   752,   114,   165,   217,   259,   309,   367,
     572,   657,   679,   572,   807,   827,   572,  1944,   876,   752,
    2813,   671,   268,   681,   280,    20,   205,  1605,  6252,   288,
     293,   300,   330,   344,   351,   371,   366,   397,  6306,  6360,
    6414,  6468,  6522,  6576,  2018,  8264,  3778,  1568,  1023,  3724,
    8281,  8301,  4388,  1568,  1036,   383,  8318,  3225,  6900,  6950,
    2018,   386,   398,   413,  1057,   296,   403,  4442,  1136,  4496,
    1160,   766,   603,  6630,   418,   426,  1185,  6950,  6950,  1190,
    6684,  6738,  1789,   441,   507,  8036,  2057,  7470,  7496,  7402,
    7517,   161,   464,   473,   489,   497,   504,   504,   510,   998,
      18,  2523,  1508,  7543,  7564,  7590,  2172,    47,   406,   437,
     499,   570,   846,    98,   169,   171,  7611,  7423,  7073,  7118,
    4148,  7131,   283,   522,   552,   561,   566,   586,   586,   592,
     998,    25,  1295,  2786,  7144,  7189,  7202,  2211,    49,    61,
      77,   124,   127,   129,   772,   829,   863,  7215,  7046,  7820,
    7833,  1757,  7846,   287,   598,   600,   610,   613,   615,   615,
     621,   998,     4,  3642,  2683,  7859,  7872,  7885,  2330,    21,
     120,   174,   235,   251,   256,   506,   538,   563,  7898,  7637,
     959,   635,   645,  2351,   166,  1329,  1789,  2471,   575,  3186,
    4293,  4362,  4416,  4470,  4524,   596,  2480,   659,  8382,  8403,
    8015,  8424,   384,   667,   677,   687,   689,   699,   699,   705,
     998,   111,  3612,  7086,  8445,  8466,  8487,  2424,   177,   180,
     238,   260,   264,   393,   718,   724,   729,  8508,  8355,   732,
    2018,  3356,   722,  5442,  6792,   736,   761,   642,  7449,  2018,
    7656,  7682,   296,   695,   695,   296,  2057,   851,   926,   301,
     211,  1231,   884,   884,   884,  2644,  1028,  1231,   998,   642,
    7060,  2018,  7260,  7273,   296,   695,   695,   296,  2057,   146,
     401,   301,   273,  1270,   894,   894,   894,  3105,   469,  1270,
    3225,   642,  7703,  2018,  7911,  7924,   296,   695,   695,   296,
    2057,   266,   336,   301,   289,  1405,   928,   928,   928,  4245,
     341,  1405,  2018,   998,  6900,  1180,  4578,   754,  3586,  5442,
    4632,  4686,  2951,   642,  8058,  2018,  8529,  8550,   296,   695,
     695,   296,  2057,   454,   458,   301,   328,  1426,  1013,  1013,
    1013,  4550,   564,  1426,  2057,   759,  4079,   793,  2018,   762,
     800,   811,   819,   825,   831,   836,   845,  2018,  7726,  4016,
    2172,  1032,  1962,  7747,  7773,  4321,  2172,  1054,   390,   848,
     853,   855,   859,   867,   870,   893,   900,  2018,  7286,  3319,
    2211,   486,  2914,  7331,  7344,  3510,  2211,   539,   890,   885,
     897,   902,   907,   916,   919,   943,   946,  2018,  7937,  6926,
    2330,   376,  3123,  7950,  7963,  6976,  2330,   391,   929,   405,
    4740,  1605,  4794,  4848,  4902,  4956,  5010,  5064,  5118,   938,
     947,   950,   953,   955,   965,   968,   988,  1006,  2018,  8571,
    4604,  2424,   656,  7158,  8592,  8613,  4658,  2424,   697,  1010,
    7000,  6846,  1000,  7794,   427,   442,   484,  1104,   296,  1022,
    7373,  1107,  8326,  1112,  7357,   921,   975,  1038,   548,   296,
    1027,  4119,   755,  4223,   786,  7976,  1035,  1049,  1056,   529,
     296,  1064,  7001,   654,  8338,   701,  6900,  6900,  2018,  5172,
    8634,  1031,  1086,  1089,   763,   296,  1073,  4712,   895,  4766,
     942,  4182,  1076,  1119,  1085,   791,  1087,   731,  5226,  5280,
    1090,  1095,  1011,  1162,  1043,   860,  6900,  6900,  1079,  5334,
    5388
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -327,  -327,  -327,  1150,     2,     0,  -327,     7,  -327,  -327,
    1132,   -23,  -179,  -314,  -327,   -48,   756,   -69,   -45,    -8,
     -67,   -60,   -35,  2377,  1926,  2221,  1770,  1521,   704,  3492,
     -58,   714,  -193,  -175,  2526,  1067,  2682,  2931,  3087,  3336,
    3628,  3741,  3868,   -59,  1316,  -326,  -327,   348
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,    50,   183,    10,   184,    20,    21,
      22,    51,    29,    52,    53,    54,   139,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
     103,   110,   113,   116,    68,    69,    70,    71,    72,    73,
      74,    75,    76,   133,    77,   122,   123,    78
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    27,     8,   333,    87,    99,     9,    11,     8,   353,
     119,   439,   144,    11,    97,   290,    18,   293,   127,   437,
     101,   102,   -10,    19,   294,    18,   -11,   140,   354,   143,
     145,   134,    19,   459,   101,   102,   126,   101,   102,   291,
     375,   101,   102,    17,   121,   124,   101,   102,   125,   295,
     297,   141,   -17,   -17,   -50,   479,   330,   136,   -50,   376,
     160,   289,   -12,   101,   102,   101,   102,     1,     2,     3,
       4,   397,   -50,   138,   158,   -51,   292,   -91,   -91,   -50,
     -50,   -13,   -50,   -51,   288,   155,   287,   510,   142,   290,
     398,   293,   332,   -92,   -92,   509,   -19,   -19,   294,    31,
      32,   -51,   185,   -51,   -51,    34,    12,   409,    14,   166,
     172,   173,    15,   291,    23,   -91,   -91,    24,   -81,   -81,
     429,   -81,   171,   295,   -81,   174,   -81,   101,   102,   180,
     181,   -92,   -92,    83,   -52,   289,   -91,   -91,    26,   430,
     -93,   -93,   351,   -94,   -94,   -95,   -95,   -50,    80,   357,
     292,   336,   -52,   -78,   -78,    85,   -78,    88,   288,   -78,
     287,   -78,   -98,   -98,   350,   187,   188,   -81,   338,   -82,
     -82,   190,   -82,   373,   -91,   -82,    89,   -82,   -93,   -93,
     379,   -94,   -94,   -95,   -95,    90,   -78,   -78,   -78,   -78,
     -92,   -92,    91,   101,   102,   372,   -91,   -91,   -18,   -18,
     -98,   -98,   -78,    92,   395,  -101,   -41,  -102,    95,   -41,
     -41,   401,   -41,   -51,   339,   -41,   -91,   -41,   -82,   186,
     -41,   -83,   -83,  -101,   -83,  -102,   394,   -83,   -92,   -83,
     -41,   -41,   -41,   -41,   -41,   159,   -41,   -41,   -41,   -41,
     -41,    98,   -41,   -41,   -41,   -41,   -41,   447,   407,    -8,
      16,   -93,   -93,   427,   -92,   -92,   100,   -41,   -41,   353,
     433,   -41,   -41,   -84,   -84,   448,   -84,   -94,   -94,   -84,
     -83,   -84,   -95,   -95,   -92,   426,   -93,   -93,   354,   375,
     -94,   -94,   -98,   -98,   442,   443,   -52,   218,   219,   -93,
     360,   249,   250,   221,   382,   435,   -93,   252,   376,   397,
     -94,  -101,   121,   129,   440,   -94,   462,   463,   329,   467,
     -95,   445,   -84,   -85,   -85,  -102,   -85,   128,   398,   -85,
     -98,   -85,   156,   458,   121,   487,   460,   468,   482,   483,
     429,   -14,    25,   465,   145,   290,   361,   293,   501,   505,
     383,   508,  -113,   488,   294,   478,   121,   161,   480,   430,
     101,   102,   -99,   -99,  -106,   485,   500,   -54,   -54,   291,
     513,   514,   -85,   506,   518,   -91,   -91,   498,   499,   295,
     297,   -86,   -86,   295,   -86,   -92,   -92,   -86,   121,   -86,
     511,   289,   519,    82,  -107,   503,   -51,   516,   298,   299,
     -99,   414,   -56,   -56,   301,   -54,   292,   217,   162,   529,
     507,   -91,   144,   532,   288,   163,   287,   -58,   -58,   -95,
     -95,   -92,   539,   -80,   -80,    82,   -80,   -99,   -99,   -80,
     -86,   -80,   -91,   -91,   -80,   164,   -49,   248,   279,   -95,
     -56,   217,   550,   165,   568,   -49,   130,   415,  -103,   135,
     328,   330,   -91,   137,   -49,   -58,   -80,   -80,   -80,   -80,
    -104,    82,   561,   -92,   -92,   -99,   -99,   176,    82,   566,
     -91,    82,   -80,  -103,    82,  -105,   332,    82,   -93,   -93,
     -98,   -98,   178,   -92,   -99,   -99,   -79,   -79,  -104,   -79,
     179,  -103,   -79,   576,   -79,   -54,   -54,   -79,   -16,   -16,
     -98,   -92,   279,   334,   -99,    82,  -104,   290,   290,   293,
     293,    82,   -56,   -56,   -93,   248,   294,   294,   279,   -79,
     -79,   -79,   -79,   175,   335,   -93,   -93,   342,   588,   589,
    -105,   291,   291,   -54,   -54,   -79,   343,   290,   290,   293,
     293,   295,   295,   590,   328,   -93,   294,   294,  -105,   341,
     -56,   -56,   344,   289,   289,   -97,   -97,   217,   599,   600,
     345,   291,   291,   -93,   341,   -58,   -58,   346,   292,   292,
     -52,   295,   295,   349,   -97,   -97,   288,   288,   287,   287,
     363,    -8,    -8,   289,   289,   364,    31,    32,   217,   185,
     -54,   -54,    34,   -97,    35,   363,   -94,   -94,   292,   292,
     -94,   -94,  -101,   -58,   -58,    -2,   288,   288,   287,   287,
     -54,   385,   -97,   -97,   -39,   365,   -94,   -39,   -39,   217,
     -39,   -15,   -15,   -39,   366,   -39,   385,  -102,   -39,   367,
       1,     2,     3,     4,   -94,    80,   -94,   410,   -39,   -39,
     -39,   -39,   -39,   177,   -39,   -39,   -39,   -39,   -39,   368,
     -39,   -39,   -39,   -39,   -39,   371,   218,   219,   411,   220,
     417,   386,   221,   387,   222,   -39,   -39,    36,   217,   -39,
     -39,   -87,   -87,   388,   -87,   417,   389,   -87,   390,   -87,
     -60,   -60,   -56,   -56,   393,   223,   224,   225,   279,   226,
     227,   228,   229,   -88,   -88,   248,   -88,   279,   403,   -88,
     441,   -88,   -56,   444,   328,   230,  -110,   446,   405,   341,
     341,   341,   341,   131,   132,   341,   217,   248,   -60,   279,
     -87,   412,   461,   -58,   -58,   464,   328,   -62,   -62,   466,
     418,   363,   363,   363,   363,  -112,  -112,   363,   248,   248,
     419,   279,   -88,   -58,   481,  -109,   157,   484,   328,    81,
     420,   486,   421,   385,   385,   385,   385,   -96,   -96,   385,
     279,   217,   422,   205,   -52,   -62,    31,    32,   425,   185,
    -101,   248,    34,   279,    35,  -102,   512,    36,  -113,   515,
     328,   -60,   -60,   517,   436,   417,   417,   417,   417,   -97,
     -97,   417,   328,   236,   267,   -96,   279,   205,    -8,    43,
      44,    45,    46,   -95,   -95,   279,   316,   438,   341,   -97,
     -98,   -98,   -62,   -62,   341,    49,   502,   -96,   -96,   -60,
     -60,   -89,   -89,   530,   -89,   279,   533,   -89,   363,   -89,
    -111,  -111,    31,    32,   363,    33,   -52,   -52,    34,   -95,
      35,   -90,   -90,    36,   -90,   279,   -98,   -90,   385,   -90,
     -62,   -62,   -99,   -99,   385,   -96,   -96,    37,   267,    38,
     531,    40,    41,    42,   448,    43,    44,    45,    46,    47,
     -89,   236,   -95,   -95,   267,   534,   279,   -98,   -98,   417,
      48,    49,   447,   535,   182,   417,  -100,  -100,   -99,   536,
     -90,   538,   -95,  -101,  -101,   537,   582,   -98,   187,   188,
     316,   338,   -54,   -54,   190,   340,   191,   584,   218,   219,
     -95,   360,   544,   205,   221,   -98,   222,   468,   586,   545,
     205,   -60,   -60,   546,  -100,   352,   279,  -102,  -102,    31,
      32,   547,    33,   591,   548,    34,   362,    35,   -54,   467,
      36,   -60,   249,   250,   205,   382,   549,   339,   252,   555,
     253,   236,   -99,   -99,   -49,   -49,   374,   361,    40,    41,
      42,   488,    43,    44,    45,    46,   556,   384,   -62,   -62,
     -33,   557,   -99,   -33,   -33,   205,   -33,    86,    49,   -33,
     558,   -33,   267,   559,   -33,  -103,  -103,   396,   -62,   487,
     -99,   383,   560,   -49,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   569,   -33,   -33,   -33,   -33,
     -33,   570,   187,   188,   519,   189,   416,   571,   190,   572,
     191,   -33,   -33,    36,   205,   -33,   -33,   298,   299,   573,
     414,   316,   574,   301,   518,   302,   428,   -96,   -96,  -104,
    -104,   192,   193,   194,   267,   195,   196,   197,   198,   -56,
     -56,   236,   575,   267,   -54,   -54,   -49,   -96,   -56,   -56,
     316,   199,   -58,   -58,   581,   205,   205,   205,   205,  -100,
    -100,   205,   205,   236,   -54,   267,   415,  -103,   -56,   352,
     -58,   -58,   316,   -97,   -97,   -56,   583,   236,   236,   236,
     236,   585,   -54,   236,   236,   236,   -56,   267,   -58,  -103,
     -58,   374,  -105,  -105,   316,  -100,  -100,  -100,  -100,   267,
     267,   267,   267,  -104,    84,   267,   267,   205,   -58,   -97,
    -105,    93,    94,   396,    96,  -100,   208,   236,   587,   267,
     -97,   -97,  -104,   -60,   -60,  -105,   316,   592,   -62,   -62,
     593,   316,   316,   316,   316,   -96,   -96,   316,   316,   594,
     -97,   595,   267,   -60,   597,   428,   239,   270,   -62,   598,
     208,   267,   -60,   -60,   205,   -96,    13,    28,   -97,   319,
     205,   -60,     0,   352,   504,     0,   -62,     0,     0,   352,
       0,   267,     0,   -96,   236,     0,   -62,   -62,  -100,  -100,
     236,     0,     0,   374,    31,    32,     0,    33,   -60,   374,
      34,   267,    35,     0,   267,    36,     0,     0,  -100,     0,
     267,   -96,   -96,   396,     0,     0,  -100,  -100,     0,   396,
       0,   270,   -62,    40,    41,    42,  -100,    43,    44,    45,
      46,     0,   267,    -4,   239,   316,     0,   270,     0,     0,
       0,   316,   296,    49,   428,   187,   188,   -96,   338,     0,
     428,   190,  -100,   191,     0,     0,    36,     0,    -4,    -4,
      -4,    -4,     0,   319,   352,     0,   352,     1,     2,     3,
       4,     0,     0,   347,   348,   374,   208,   374,   195,   196,
     197,   198,   267,   208,   218,   219,   396,   360,   396,     0,
     221,     0,   222,     0,   199,    36,   -19,   -19,     0,     0,
       0,   428,     0,   428,   369,   370,     0,   208,     1,     2,
       3,     4,     0,     0,   239,     0,     0,   226,   227,   228,
     229,   -63,   -63,   104,   105,   106,   107,   108,   109,     0,
       0,     0,     0,   230,     0,   391,   392,     0,   208,     0,
     -46,     0,     0,   -46,   -46,   270,   -46,     0,     0,   -46,
       0,   -46,     0,     0,   -46,     0,     0,     0,   404,   -63,
     -63,   408,     0,     0,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   216,   -46,   -46,   -46,   -46,
     -46,     0,     0,     0,   423,   424,     0,   208,     0,     0,
       0,   -46,   -46,     0,   319,   -46,   -46,   -63,   -63,   104,
     105,   106,   107,   108,   109,   247,   278,   270,     0,   216,
       0,     0,     0,     0,   239,     0,   270,     0,   327,   249,
     250,     0,   382,   319,     0,   252,     0,   253,   208,     0,
      36,     0,     0,   -63,   208,   208,   239,    -5,   270,     0,
     298,   299,     0,   414,     0,   319,   301,     0,   302,     0,
     239,    36,   257,   258,   259,   260,   239,   239,   239,     0,
     270,     0,    -5,    -5,    -5,    -5,     0,   319,   261,    -6,
     278,     0,   270,   306,   307,   308,   309,     0,   270,   270,
     208,    -3,     0,   247,     0,     0,   278,     0,     0,   310,
     239,     0,   270,    -7,    -6,    -6,    -6,    -6,     0,   319,
       0,     0,     0,     0,   319,     0,    -3,    -3,    -3,    -3,
     319,   319,   327,     0,     0,   270,     0,   216,    -7,    -7,
      -7,    -7,     0,     0,   270,   216,     0,   208,     0,   111,
     112,     0,   216,   208,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,    -9,   270,     0,     0,   239,   247,   -21,
       0,     0,     0,   239,   -65,     0,   216,     0,     0,     0,
       0,     0,     0,   247,   270,     0,     0,   270,    -9,    -9,
      -9,    -9,   -65,   270,   -21,   -21,   -21,   -21,     0,   278,
     204,     0,    31,    32,     0,   185,     0,   216,    34,     0,
      35,     0,     0,     0,   278,   270,     0,     0,   319,     0,
       0,     0,     0,     0,   319,     0,     0,     0,     0,     0,
     235,   266,     0,     0,   204,    43,    44,    45,    46,    31,
      32,     0,    33,   315,     0,    34,     0,    35,   327,     0,
      36,    49,     0,     0,     0,     0,   216,     0,     0,     0,
       0,     0,     0,   327,     0,   270,     0,   151,    40,    41,
      42,     0,    43,    44,    45,    46,   278,     0,     0,     0,
       0,     0,     0,   247,     0,   278,     0,   331,    49,     0,
       0,     0,   327,     0,     0,   266,     0,   216,   216,   216,
     216,     0,     0,   216,   216,   247,     0,   278,   235,     0,
       0,   266,     0,     0,   327,     0,     0,     0,     0,   247,
     247,   247,   247,     0,     0,   247,   247,   247,     0,   278,
       0,     0,     0,     0,     0,     0,   327,   315,     0,     0,
       0,   278,   278,   278,   278,     0,     0,   278,   278,   216,
     204,     0,     0,     0,     0,     0,     0,   204,     0,   247,
       0,   278,     0,     0,     0,     0,     0,     0,   327,     0,
       0,     0,     0,   327,   327,   327,   327,     0,     0,   327,
     327,   204,     0,     0,   278,     0,     0,     0,   235,     0,
       0,     0,     0,   278,     0,     0,   216,     0,  -113,  -113,
    -113,  -113,   216,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,   204,   278,     0,     0,   247,     0,     0,   266,
     -20,     0,   247,   -20,   -20,     0,   -20,     0,     0,   -20,
       0,   -20,     0,   278,   -20,     0,   278,     0,     0,     0,
     381,  -113,   278,     0,   -20,   -20,   -20,   -20,   -20,   203,
     -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,   -20,
     -20,   204,     0,     0,   278,     0,     0,   327,   315,     0,
       0,   -20,   -20,   327,     0,   -20,   -20,     0,     0,   234,
     265,   266,     0,   203,     0,     0,     0,     0,   235,     0,
     266,     0,   314,     0,     0,     0,     0,   315,     0,     0,
       0,     0,   204,   204,   204,   454,     0,     0,   204,   204,
     235,     0,   266,   150,   278,     0,     0,     0,     0,   315,
       0,     0,     0,     0,   235,   235,   235,   474,     0,     0,
     235,   235,   235,     0,   266,     0,     0,     0,     0,     0,
       0,   315,     0,     0,   265,     0,   266,   266,   266,   494,
       0,     0,   266,   266,   204,     0,     0,   234,     0,     0,
     265,     0,     0,     0,   235,     0,   266,     0,     0,     0,
       0,     0,     0,   315,     0,     0,     0,     0,   315,   315,
     315,   525,     0,     0,   315,   315,   314,     0,     0,   266,
     -53,   -53,   104,   105,   106,   107,   108,   109,   266,   203,
       0,   204,     0,   111,   112,   201,   203,   204,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,     0,     0,   266,     0,
       0,   235,     0,   117,     0,     0,   -53,   235,   -64,     0,
     203,     0,     0,     0,     0,   232,   263,   234,   266,   201,
       0,   266,     0,     0,     0,     0,   -64,   266,   312,     0,
       0,     0,   249,   250,     0,   251,     0,     0,   252,   146,
     253,   203,     0,    36,     0,     0,     0,     0,   265,   266,
       0,     0,   315,     0,     0,   152,     0,     0,   315,     0,
       0,   254,   255,   256,     0,   257,   258,   259,   260,     0,
       0,   298,   299,     0,   300,     0,     0,   301,     0,   302,
     263,   261,    36,   167,     0,     0,     0,     0,     0,   169,
     203,     0,     0,   232,     0,     0,   263,   314,     0,   266,
     303,   304,   305,     0,   306,   307,   308,   309,     0,     0,
     265,     0,     0,     0,     0,     0,     0,   234,     0,   265,
     310,     0,   312,     0,     0,     0,   314,     0,     0,     0,
       0,   203,   203,   453,     0,   201,     0,   203,   203,   234,
       0,   265,   355,     0,     0,     0,     0,     0,   314,     0,
       0,     0,     0,   234,   234,   473,     0,     0,     0,   234,
     234,   234,     0,   265,     0,     0,   201,     0,     0,     0,
     314,     0,     0,   377,     0,   265,   265,   493,     0,     0,
       0,   265,   265,   203,     0,     0,   187,   188,     0,   338,
       0,     0,   190,   234,   191,   265,     0,   201,     0,     0,
       0,     0,   314,     0,   399,     0,     0,   314,   314,   524,
       0,     0,     0,   314,   314,     0,     0,     0,   265,   195,
     196,   197,   198,     0,     0,   218,   219,   265,   360,     0,
     203,   221,     0,   222,     0,   199,   203,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   201,   265,     0,     0,
     234,     0,     0,   431,     0,     0,   234,     0,   226,   227,
     228,   229,     0,     0,     0,     0,   263,   265,     0,     0,
     265,     0,     0,   232,   230,   263,   265,     0,     0,     0,
     202,     0,   312,     0,     0,     0,     0,   449,     0,     0,
       0,     0,     0,   455,   201,   232,     0,   263,   265,     0,
       0,   314,     0,     0,   312,     0,     0,   314,     0,   469,
     233,   264,     0,     0,   202,   475,   232,   232,     0,   263,
       0,     0,     0,   313,     0,     0,   312,     0,     0,     0,
       0,   489,     0,     0,     0,     0,     0,   495,   263,   201,
       0,   149,     0,     0,   249,   250,     0,   382,   265,   232,
     252,   263,   253,     0,     0,     0,     0,     0,   312,     0,
       0,     0,     0,   520,     0,    31,    32,     0,    33,   526,
     312,    34,     0,    35,   263,   264,    36,   257,   258,   259,
     260,     0,     0,   263,     0,     0,   540,     0,   233,     0,
       0,   264,   542,   261,    40,    41,    42,     0,    43,    44,
      45,    46,     0,   263,     0,     0,   551,     0,     0,     0,
       0,     0,   553,   406,    49,     0,     0,   313,     0,     0,
       0,     0,     0,   263,     0,     0,   562,     0,     0,     0,
     202,     0,   564,     0,     0,     0,   200,   202,   298,   299,
       0,   414,     0,     0,   301,     0,   302,     0,     0,     0,
       0,     0,     0,     0,   263,     0,     0,   577,     0,     0,
       0,   202,     0,   579,     0,     0,   231,   262,   233,     0,
     200,   306,   307,   308,   309,     0,     0,     0,     0,   311,
       0,     0,   -31,     0,     0,   -31,   -31,   310,   -31,     0,
       0,   -31,   202,   -31,   -46,   -46,   -31,   -46,     0,   264,
     -46,     0,   -46,     0,   263,   -46,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -46,   -46,   -46,     0,   -46,   -46,   -46,
     -46,   262,     0,   -31,   -31,     0,     0,   -31,   -31,     0,
       0,   202,   -46,   -46,   231,     0,     0,   262,   313,   -63,
     -63,   104,   105,   106,   107,   108,   109,     0,     0,     0,
       0,   264,     0,     0,     0,     0,     0,     0,   233,   -63,
     264,     0,     0,   311,     0,     0,     0,   313,     0,     0,
       0,     0,   202,   452,     0,   207,   200,   -63,   202,   202,
     233,     0,   264,     0,     0,     0,     0,     0,     0,   313,
       0,     0,     0,   118,   233,   472,     0,     0,     0,     0,
     233,   233,   233,     0,   264,   238,   269,   200,     0,   207,
       0,   313,     0,     0,     0,     0,   264,   492,   318,     0,
       0,     0,   264,   264,   202,     0,     0,     0,     0,   148,
       0,     0,     0,     0,   233,     0,   264,     0,   200,     0,
       0,     0,     0,   313,     0,   154,     0,     0,   313,   523,
       0,     0,     0,     0,   313,   313,     0,     0,     0,   264,
     -53,   -53,   104,   105,   106,   107,   108,   109,   264,     0,
     269,   202,     0,   168,     0,     0,     0,   202,     0,   170,
     -53,     0,     0,   238,     0,     0,   269,   200,   264,     0,
       0,   233,     0,     0,   111,   112,     0,   233,   -53,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   262,   264,     0,
       0,   264,   318,     0,   231,     0,   262,   264,     0,     0,
       0,     0,     0,   311,     0,   207,     0,     0,     0,     0,
       0,   209,   356,     0,     0,   200,   231,   -65,   262,   264,
       0,     0,   313,     0,     0,   311,     0,     0,   313,     0,
       0,     0,     0,     0,     0,     0,   207,   231,   231,     0,
     262,   240,   271,   378,     0,   209,     0,   311,     0,     0,
       0,     0,     0,     0,   320,     0,     0,     0,     0,   262,
     200,     0,     0,     0,     0,     0,     0,   207,     0,   264,
     231,     0,   262,     0,   400,     0,     0,   111,   112,   311,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,   311,     0,     0,     0,   262,     0,    31,    32,     0,
      33,     0,     0,    34,   262,    35,   271,     0,    36,     0,
       0,     0,     0,     0,     0,     0,   207,     0,     0,   240,
     -65,   -65,   271,   432,   262,     0,    40,    41,    42,     0,
      43,    44,    45,    46,     0,     0,   269,     0,     0,     0,
       0,     0,     0,   238,   262,   269,    49,     0,   320,     0,
       0,     0,   318,     0,     0,     0,     0,   451,     0,     0,
       0,   209,     0,   457,   207,   238,     0,   269,   209,     0,
       0,     0,     0,     0,   318,   262,     0,     0,     0,   471,
       0,     0,     0,     0,     0,   477,   238,   238,     0,   269,
       0,     0,   209,     0,     0,     0,   318,     0,     0,   240,
       0,   491,     0,     0,     0,   111,   112,   497,   269,   207,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,   238,
       0,   269,     0,   209,     0,   262,     0,     0,   318,     0,
     271,     0,     0,   522,     0,   -45,   -45,     0,   -45,   528,
     318,   -45,     0,   -45,   269,     0,   -45,     0,   -64,   -64,
       0,     0,     0,   269,     0,     0,   541,     0,     0,     0,
     210,     0,   543,     0,   -45,   -45,   -45,     0,   -45,   -45,
     -45,   -45,   209,   269,     0,     0,   552,     0,     0,   320,
       0,     0,   554,   -45,   -45,     0,     0,     0,     0,     0,
     241,   272,   271,   269,   210,     0,   563,     0,     0,   240,
       0,   271,   565,   321,     0,     0,     0,     0,   320,     0,
       0,     0,     0,   209,     0,     0,     0,     0,     0,   209,
     209,   240,     0,   271,   269,     0,     0,   578,     0,     0,
     320,     0,     0,   580,     0,   240,     0,     0,     0,     0,
       0,   240,   240,   240,     0,   271,     0,     0,     0,     0,
       0,     0,   320,     0,     0,   272,     0,   271,     0,     0,
       0,     0,     0,   271,   271,   209,     0,     0,   241,     0,
       0,   272,     0,     0,   269,   240,     0,   271,     0,     0,
       0,     0,     0,     0,   320,     0,     0,     0,     0,   320,
       0,     0,     0,     0,     0,   320,   320,   321,     0,     0,
     271,   -53,   -53,   104,   105,   106,   107,   108,   109,   271,
     210,     0,   209,     0,   111,   112,   211,   210,   209,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,     0,   271,
       0,     0,   240,     0,     0,     0,     0,     0,   240,   -53,
     -53,   210,     0,     0,     0,     0,   242,   273,   241,   271,
     211,     0,   271,     0,     0,     0,     0,   -64,   271,   322,
       0,     0,     0,     0,     0,     0,     0,   -26,     0,     0,
     -26,   -26,   210,   -26,     0,     0,   -26,     0,   -26,   272,
     271,   -26,     0,   320,     0,     0,     0,     0,     0,   320,
       0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,   218,
     219,   273,   220,     0,     0,   221,     0,   222,   -26,   -26,
      36,   210,   -26,   -26,   242,     0,     0,   273,   321,     0,
     271,     0,     0,     0,     0,     0,     0,     0,   223,   224,
     225,   272,   226,   227,   228,   229,     0,     0,   241,     0,
     272,     0,     0,   322,     0,     0,     0,   321,   230,     0,
       0,     0,   210,     0,     0,     0,   211,     0,   210,   210,
     241,     0,   272,   211,     0,     0,     0,     0,     0,   321,
       0,     0,     0,     0,   241,     0,     0,     0,     0,     0,
     241,   241,   241,     0,   272,     0,     0,   211,     0,     0,
       0,   321,     0,     0,   242,     0,   272,     0,     0,     0,
       0,     0,   272,   272,   210,   -55,   -55,   104,   105,   106,
     107,   108,   109,     0,   241,     0,   272,     0,   211,     0,
       0,     0,     0,   321,     0,   273,     0,     0,   321,     0,
     -46,   -46,     0,   -46,   321,   321,   -46,     0,   -46,   272,
       0,   -46,     0,   -55,   -55,     0,     0,     0,   272,     0,
       0,   210,     0,     0,     0,   212,     0,   210,     0,   -46,
     -46,   -46,     0,   -46,   -46,   -46,   -46,   211,   272,     0,
       0,   241,     0,     0,   322,     0,     0,   241,     0,   -46,
       0,     0,     0,     0,     0,   243,   274,   273,   272,   212,
       0,   272,     0,     0,   242,     0,   273,   272,   323,     0,
       0,     0,     0,   322,     0,     0,     0,     0,   211,     0,
       0,     0,     0,     0,   211,   211,   242,     0,   273,   272,
       0,     0,   321,     0,     0,   322,     0,     0,   321,     0,
     242,     0,     0,     0,     0,     0,   242,   242,   242,     0,
     273,     0,     0,     0,     0,     0,     0,   322,     0,     0,
     274,     0,   273,     0,     0,     0,     0,     0,   273,   273,
     211,     0,     0,   243,     0,     0,   274,     0,     0,   272,
     242,     0,   273,     0,     0,     0,     0,     0,     0,   322,
       0,     0,     0,     0,   322,     0,     0,     0,     0,     0,
     322,   322,   323,     0,     0,   273,   -57,   -57,   104,   105,
     106,   107,   108,   109,   273,   212,     0,   211,     0,   111,
     112,   206,   212,   211,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,   273,     0,     0,   242,     0,     0,
       0,     0,     0,   242,   -57,   -57,   212,     0,     0,     0,
       0,   237,   268,   243,   273,   206,     0,   273,     0,     0,
     -65,     0,     0,   273,   317,     0,     0,     0,     0,     0,
      31,    32,     0,    33,     0,   147,    34,   212,    35,     0,
       0,    36,     0,     0,   274,   273,     0,     0,   322,     0,
       0,   153,     0,     0,   322,   281,     0,   282,     0,    40,
      41,    42,     0,    43,    44,    45,    46,   284,   -63,   -63,
     104,   105,   106,   107,   108,   109,   268,     0,   285,    49,
       0,     0,   286,     0,     0,     0,   212,     0,   -63,   237,
       0,     0,   268,   323,     0,   273,     0,     0,   -63,   -63,
     104,   105,   106,   107,   108,   109,   274,     0,     0,     0,
       0,     0,     0,   243,     0,   274,     0,   213,   317,     0,
       0,     0,   323,     0,     0,     0,     0,   212,     0,     0,
       0,   206,     0,   212,   212,   243,   -63,   274,     0,     0,
       0,     0,     0,     0,   323,     0,     0,   244,   275,   243,
       0,   213,     0,     0,     0,   243,   243,   243,     0,   274,
     324,     0,   206,     0,     0,     0,   323,     0,     0,     0,
       0,   274,     0,     0,     0,   111,   112,   274,   274,   212,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,   243,
       0,   274,     0,   206,     0,     0,     0,     0,   323,     0,
       0,     0,     0,   323,     0,     0,     0,     0,     0,   323,
     323,     0,   275,     0,   274,     0,   -64,     0,     0,     0,
       0,     0,     0,   274,     0,   244,   212,     0,   275,     0,
     214,     0,   212,     0,   -55,   -55,   104,   105,   106,   107,
     108,   109,   206,   274,     0,     0,   243,     0,     0,     0,
       0,     0,   243,     0,   324,     0,     0,     0,     0,     0,
     245,   276,   268,   274,   214,     0,   274,   213,     0,   237,
     -55,   268,   274,   325,     0,     0,     0,     0,   317,     0,
       0,     0,     0,   450,     0,     0,     0,     0,     0,   456,
     206,   237,     0,   268,   274,     0,     0,   323,   213,     0,
     317,     0,     0,   323,     0,   470,     0,     0,     0,     0,
       0,   476,   237,   237,     0,   268,     0,     0,     0,     0,
       0,     0,   317,     0,     0,   276,     0,   490,     0,   213,
       0,     0,     0,   496,   268,   206,     0,     0,   245,     0,
       0,   276,     0,     0,   274,   237,     0,   268,     0,     0,
       0,     0,     0,     0,   317,     0,     0,   215,     0,   521,
       0,     0,     0,     0,     0,   527,   317,   325,     0,     0,
     268,     0,     0,     0,     0,     0,     0,     0,   213,   268,
     214,     0,     0,     0,     0,     0,     0,   246,   277,     0,
       0,   215,     0,     0,     0,     0,     0,     0,   275,   268,
     326,     0,     0,     0,     0,   244,     0,   275,     0,     0,
       0,   214,     0,     0,   324,     0,     0,     0,     0,   268,
       0,     0,     0,     0,     0,     0,   213,   244,     0,   275,
       0,     0,     0,     0,     0,     0,   324,     0,     0,     0,
       0,     0,   214,     0,     0,     0,     0,     0,   244,   244,
     268,   275,   277,     0,     0,     0,     0,     0,   324,     0,
       0,     0,     0,     0,     0,   246,     0,     0,   277,     0,
     275,   213,   -55,   -55,   104,   105,   106,   107,   108,   109,
       0,   244,     0,   275,     0,     0,     0,     0,     0,     0,
     324,   214,   -55,     0,   326,     0,     0,     0,     0,     0,
     268,     0,   324,     0,     0,     0,   275,   215,     0,     0,
     -55,   276,     0,     0,     0,   275,     0,     0,   245,     0,
     276,     0,     0,   -45,   -45,     0,   -45,   325,     0,   -45,
       0,   -45,     0,     0,   -45,   275,     0,     0,   215,   214,
     245,     0,   276,     0,     0,     0,     0,     0,     0,   325,
       0,     0,   -45,   -45,   -45,   275,   -45,   -45,   -45,   -45,
       0,   245,   245,     0,   276,     0,     0,     0,     0,   215,
       0,   325,   -45,     0,     0,   -59,   -59,   104,   105,   106,
     107,   108,   109,   276,   214,     0,   275,     0,     0,     0,
       0,     0,     0,     0,   245,     0,   276,     0,     0,  -113,
    -113,  -113,  -113,   325,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,   -59,   -59,   325,     0,     0,   215,   276,
       0,     0,     0,     0,     0,     0,   -96,   -96,   276,   -96,
       0,     0,   -96,     0,   -96,     0,   275,   -96,   277,     0,
       0,   359,  -113,  -113,     0,   246,     0,   277,   276,     0,
       0,   -96,     0,   -96,   326,   -96,   -96,   -96,     0,   -96,
     -96,   -96,   -96,   -96,     0,     0,   215,   246,   276,   277,
       0,     0,     0,     0,   -96,   -96,   326,     0,   -96,   -61,
     -61,   104,   105,   106,   107,   108,   109,     0,   246,   246,
       0,   277,     0,     0,     0,     0,     0,     0,   326,   276,
       0,   -53,   -53,   104,   105,   106,   107,   108,   109,     0,
     277,   215,     0,     0,     0,     0,     0,   -61,   -61,     0,
       0,   246,     0,   277,     0,     0,     0,     0,     0,     0,
     326,     0,     0,     0,   -27,     0,     0,   -27,   -27,   -53,
     -27,     0,   326,   -27,     0,   -27,   277,     0,   -27,   276,
       0,     0,     0,     0,     0,   277,     0,     0,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,
     -27,   -27,   -27,   -27,   -27,   277,     0,   -57,   -57,   104,
     105,   106,   107,   108,   109,   -27,   -27,     0,     0,   -27,
     -27,     0,     0,     0,     0,   277,     0,   -57,     0,     0,
       0,     0,     0,   -28,     0,     0,   -28,   -28,     0,   -28,
       0,     0,   -28,     0,   -28,   -57,     0,   -28,     0,     0,
       0,     0,     0,     0,     0,     0,   277,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,
     -28,   -28,   -28,   -28,   -57,   -57,   104,   105,   106,   107,
     108,   109,     0,     0,   -28,   -28,     0,   -32,   -28,   -28,
     -32,   -32,     0,   -32,     0,     0,   -32,     0,   -32,     0,
       0,   -32,     0,     0,     0,     0,   277,     0,     0,     0,
     -57,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -59,   -59,
     104,   105,   106,   107,   108,   109,     0,     0,   -32,   -32,
       0,   -29,   -32,   -32,   -29,   -29,     0,   -29,     0,     0,
     -29,     0,   -29,     0,     0,   -29,     0,     0,     0,     0,
       0,     0,     0,     0,   -59,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,   -61,   -61,   104,   105,   106,   107,   108,   109,
       0,     0,   -29,   -29,     0,   -30,   -29,   -29,   -30,   -30,
       0,   -30,     0,     0,   -30,     0,   -30,     0,     0,   -30,
       0,     0,     0,     0,     0,     0,     0,     0,   -61,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
       0,   -30,   -30,   -30,   -30,   -30,   -53,   -53,   104,   105,
     106,   107,   108,   109,     0,     0,   -30,   -30,     0,   -47,
     -30,   -30,   -47,   -47,     0,   -47,   -53,     0,   -47,     0,
     -47,     0,     0,   -47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,
     -55,   -55,   104,   105,   106,   107,   108,   109,     0,     0,
     -47,   -47,     0,    -7,   -47,   -47,    -7,    -7,     0,    -7,
     -55,     0,    -7,     0,    -7,     0,     0,    -7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,
      -7,    -7,    -7,    -7,   -57,   -57,   104,   105,   106,   107,
     108,   109,     0,     0,    -7,    -7,     0,   -45,    -7,    -7,
     -45,   -45,     0,   -45,   -57,     0,   -45,     0,   -45,     0,
       0,   -45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -59,   -59,
     104,   105,   106,   107,   108,   109,     0,     0,   -45,   -45,
       0,   -41,   -45,   -45,   -41,   -41,     0,   -41,   -59,     0,
     -41,     0,   -41,     0,     0,   -41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -41,   -41,   -41,   -41,   -41,
     567,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,
     -41,   -41,   -61,   -61,   104,   105,   106,   107,   108,   109,
       0,     0,   -41,   -41,     0,   -48,   -41,   -41,   -48,   -48,
       0,   -48,   -61,     0,   -48,     0,   -48,     0,     0,   -48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
       0,   -48,   -48,   -48,   -48,   -48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -48,   -48,     0,   -34,
     -48,   -48,   -34,   -34,     0,   -34,     0,     0,   -34,     0,
     -34,     0,     0,   -34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -34,   -34,     0,   -44,   -34,   -34,   -44,   -44,     0,   -44,
       0,     0,   -44,     0,   -44,     0,     0,   -44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -44,   -44,     0,   -35,   -44,   -44,
     -35,   -35,     0,   -35,     0,     0,   -35,     0,   -35,     0,
       0,   -35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -35,   -35,
       0,   -36,   -35,   -35,   -36,   -36,     0,   -36,     0,     0,
     -36,     0,   -36,     0,     0,   -36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -36,   -36,     0,   -38,   -36,   -36,   -38,   -38,
       0,   -38,     0,     0,   -38,     0,   -38,     0,     0,   -38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
       0,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -38,   -38,     0,   -37,
     -38,   -38,   -37,   -37,     0,   -37,     0,     0,   -37,     0,
     -37,     0,     0,   -37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -37,   -37,     0,   -21,   -37,   -37,   -21,   -21,     0,   -21,
       0,     0,   -21,     0,   -21,     0,     0,   -21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,   -21,
     -21,   -21,   -21,   -21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -21,   -21,     0,   -39,   -21,   -21,
     -39,   -39,     0,   -39,     0,     0,   -39,     0,   -39,     0,
       0,   -39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -39,   -39,   -39,   -39,   -39,   596,   -39,   -39,   -39,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -39,   -39,
       0,   -42,   -39,   -39,   -42,   -42,     0,   -42,     0,     0,
     -42,     0,   -42,     0,     0,   -42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,
     -42,   -42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -42,   -42,     0,   -40,   -42,   -42,   -40,   -40,
       0,   -40,     0,     0,   -40,     0,   -40,     0,     0,   -40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
       0,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -40,   -40,     0,   -43,
     -40,   -40,   -43,   -43,     0,   -43,     0,     0,   -43,     0,
     -43,     0,     0,   -43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -43,   -43,     0,    30,   -43,   -43,    31,    32,     0,    33,
       0,     0,    34,     0,    35,     0,     0,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     2,     3,
       4,    37,     0,    38,    39,    40,    41,    42,     0,    43,
      44,    45,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,     0,   -33,   182,   -23,
     -33,   -33,     0,   -33,     0,     0,   -33,     0,   -33,     0,
       0,   -33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,
     -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -33,   -33,
       0,   -46,   -33,   -33,   -46,   -46,     0,   -46,     0,     0,
     -46,     0,   -46,     0,     0,   -46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -46,   -46,   -46,   -46,   -46,
       0,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,
     -46,   -46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -46,   -46,     0,   -31,   -46,   -46,   -31,   -31,
       0,   -31,     0,     0,   -31,     0,   -31,     0,     0,   -31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -31,
     -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -31,   -31,     0,   -26,
     -31,   -31,   -26,   -26,     0,   -26,     0,     0,   -26,     0,
     -26,     0,     0,   -26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -26,   -26,   -26,   -26,   -26,     0,   -26,
     -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -26,   -26,     0,    30,   -26,   -26,    31,    32,     0,    33,
       0,     0,    34,     0,    35,     0,     0,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     2,     3,
       4,    37,     0,    38,    39,    40,    41,    42,     0,    43,
      44,    45,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,    49,     0,   -25,   182,   -22,
     -25,   -25,     0,   -25,     0,     0,   -25,     0,   -25,     0,
       0,   -25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,
     -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -25,   -25,
       0,   -27,   -25,   -25,   -27,   -27,     0,   -27,     0,     0,
     -27,     0,   -27,     0,     0,   -27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -27,   -27,   -27,   -27,   -27,
       0,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,
     -27,   -27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -27,   -27,     0,   -28,   -27,   -27,   -28,   -28,
       0,   -28,     0,     0,   -28,     0,   -28,     0,     0,   -28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -28,
     -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -28,   -28,     0,   -32,
     -28,   -28,   -32,   -32,     0,   -32,     0,     0,   -32,     0,
     -32,     0,     0,   -32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -32,   -32,     0,   -29,   -32,   -32,   -29,   -29,     0,   -29,
       0,     0,   -29,     0,   -29,     0,     0,   -29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -29,   -29,   -29,
     -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,     0,   -29,
     -29,   -29,   -29,   -29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -29,   -29,     0,   -30,   -29,   -29,
     -30,   -30,     0,   -30,     0,     0,   -30,     0,   -30,     0,
       0,   -30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -30,   -30,
       0,   -47,   -30,   -30,   -47,   -47,     0,   -47,     0,     0,
     -47,     0,   -47,     0,     0,   -47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -47,   -47,   -47,   -47,   -47,
       0,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,
     -47,   -47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -47,   -47,     0,   -24,   -47,   -47,   -24,   -24,
       0,   -24,     0,     0,   -24,     0,   -24,     0,     0,   -24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -24,
     -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,
       0,   -24,   -24,   -24,   -24,   -24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -24,   -24,     0,   -45,
     -24,   -24,   -45,   -45,     0,   -45,     0,     0,   -45,     0,
     -45,     0,     0,   -45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -45,   -45,     0,   -48,   -45,   -45,   -48,   -48,     0,   -48,
       0,     0,   -48,     0,   -48,     0,     0,   -48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -48,   -48,   -48,
     -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,     0,   -48,
     -48,   -48,   -48,   -48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -48,   -48,     0,   -34,   -48,   -48,
     -34,   -34,     0,   -34,     0,     0,   -34,     0,   -34,     0,
       0,   -34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -34,   -34,
       0,   -44,   -34,   -34,   -44,   -44,     0,   -44,     0,     0,
     -44,     0,   -44,     0,     0,   -44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -44,   -44,   -44,   -44,   -44,
       0,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,
     -44,   -44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -44,   -44,     0,   -35,   -44,   -44,   -35,   -35,
       0,   -35,     0,     0,   -35,     0,   -35,     0,     0,   -35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -35,
     -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,
       0,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -35,   -35,     0,   -36,
     -35,   -35,   -36,   -36,     0,   -36,     0,     0,   -36,     0,
     -36,     0,     0,   -36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -36,   -36,   -36,   -36,   -36,     0,   -36,
     -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -36,   -36,     0,   -38,   -36,   -36,   -38,   -38,     0,   -38,
       0,     0,   -38,     0,   -38,     0,     0,   -38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -38,   -38,   -38,
     -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,     0,   -38,
     -38,   -38,   -38,   -38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -38,   -38,     0,   -37,   -38,   -38,
     -37,   -37,     0,   -37,     0,     0,   -37,     0,   -37,     0,
       0,   -37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,
     -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -37,   -37,
       0,   -42,   -37,   -37,   -42,   -42,     0,   -42,     0,     0,
     -42,     0,   -42,     0,     0,   -42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -42,   -42,   -42,   -42,   -42,
       0,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,
     -42,   -42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -42,   -42,     0,   -40,   -42,   -42,   -40,   -40,
       0,   -40,     0,     0,   -40,     0,   -40,     0,     0,   -40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -40,
     -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,
       0,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -40,   -40,     0,   -43,
     -40,   -40,   -43,   -43,     0,   -43,     0,     0,   -43,     0,
     -43,     0,     0,   -43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -43,   -43,   -43,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -43,   -43,     0,    -7,   -43,   -43,    -7,    -7,     0,    -7,
       0,     0,    -7,     0,    -7,     0,     0,    -7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    -7,    -7,    -7,
      -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,     0,    -7,
      -7,    -7,    -7,    -7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    -7,    -7,     0,   -21,    -7,    -7,
     -21,   -21,     0,   -21,     0,     0,   -21,     0,   -21,     0,
       0,   -21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,
     -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -21,   -21,
       0,   280,   -21,   -21,    31,    32,     0,    33,     0,     0,
      34,     0,    35,     0,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     2,     3,     4,   281,
       0,   282,   283,    40,    41,    42,     0,    43,    44,    45,
      46,   284,   -55,   -55,   104,   105,   106,   107,   108,   109,
       0,    30,   285,    49,    31,    32,   286,    33,     0,     0,
      34,     0,    35,     0,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     2,     3,     4,    37,
     -55,    38,    39,    40,    41,    42,     0,    43,    44,    45,
      46,    47,   -57,   -57,   104,   105,   106,   107,   108,   109,
       0,   -96,    48,    49,   -96,   -96,   182,   -96,     0,     0,
     -96,     0,   -96,     0,     0,   -96,     0,   -59,   -59,   104,
     105,   106,   107,   108,   109,   -96,   -96,   -96,   -96,   -96,
     -57,   -96,   -96,   -96,   -96,   -96,     0,   -96,   -96,   -96,
     -96,   -96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -96,   -96,     0,   -59,   -96,   -74,   -74,   -74,
     -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     380,  -113,  -113,  -113,  -113,     0,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,   -75,   -75,   -75,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   111,   112,     0,
     -74,   -74,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,     0,     0,   359,  -113,  -113,     0,     0,     0,     0,
       0,     0,   -65,     0,     0,     0,     0,   -75,   -75,   -76,
     -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -67,   -67,   114,   115,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,   111,
     112,     0,   -76,   -76,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,   -77,   -77,     0,     0,     0,
       0,     0,     0,     0,   -64,     0,     0,     0,   -67,   -67,
     -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -71,   -71,   -71,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -73,   -73,   -73,   -73,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,
       0,     0,     0,   -69,   -69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -71,   -71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -73,
     -73,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -74,   -74,   -74,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -72,   -72,   -72,
     -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,   -70,   -70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -74,   -74,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -72,   -72,   -66,   -66,   114,   115,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -68,   -68,   -68,   -68,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,  -108,  -108,
    -108,  -108,     0,  -108,  -108,  -108,  -108,  -108,  -108,  -108,
    -108,     0,     0,     0,     0,   -66,   -66,     0,     0,   -59,
     -59,   104,   105,   106,   107,   108,   109,     0,   -68,   -68,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -59,
       0,  -108,  -108,  -113,  -113,  -113,  -113,     0,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,   -59,     0,     0,
       0,     0,     0,     0,   -74,   -74,   -74,   -74,  -113,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   358,     0,     0,
       0,     0,     0,     0,     0,   337,  -113,     0,     0,   -74,
    -113,  -113,  -113,  -113,     0,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,     0,     0,     0,     0,   -74,     0,     0,
       0,   -75,   -75,   -75,   -75,  -113,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,     0,
       0,     0,   337,  -113,     0,     0,   -75,   -76,   -76,   -76,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,   -75,     0,     0,     0,   -77,   -77,
     -77,   -77,   -76,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -76,     0,     0,   -77,   -67,   -67,   114,   115,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,   -77,     0,     0,     0,   -69,   -69,   -69,   -69,   -67,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -67,     0,     0,
     -69,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,   -69,     0,
       0,     0,   -73,   -73,   -73,   -73,   -71,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -71,     0,     0,   -73,   -74,   -74,
     -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   402,     0,     0,     0,   -73,     0,   -70,   -70,   -70,
     -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -74,   -70,   -74,   -74,   -74,   -74,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,     0,
     -70,     0,     0,     0,  -113,  -113,  -113,  -113,   -74,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -74,   -72,   -72,   -72,
     -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,     0,     0,     0,     0,   381,  -113,   -66,   -66,
     114,   115,   -72,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -72,     0,     0,   -66,   -68,   -68,   -68,   -68,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,   -66,     0,     0,     0,  -108,  -108,  -108,  -108,   -68,
    -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -68,     0,     0,
    -108,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -76,   -76,   -76,   -76,  -108,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -77,   -77,   -77,
     -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -67,   -67,   114,   115,   -75,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -69,   -69,   -69,   -69,   -76,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -71,   -71,   -71,   -71,
     -77,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -73,
     -73,   -73,   -73,   -67,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -70,   -70,   -70,   -70,   -69,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -74,   -74,   -74,   -74,   -71,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -72,   -72,
     -72,   -72,   -73,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -66,   -66,   114,   115,   -70,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -68,   -68,   -68,   -68,   -74,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,  -108,  -108,  -108,
    -108,   -72,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,
    -113,  -113,  -113,  -113,   -66,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,     0,     0,     0,   -68,     0,     0,
       0,     0,     0,     0,     0,     0,  -113,  -113,  -113,  -113,
    -108,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
       0,  -113,    79,     0,     0,     0,     0,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
       0,     0,     0,     0,     0,     0,     0,     0,   413,  -113,
    -113,  -113,  -113,     0,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,     0,     0,     0,     0,     0,     0,  -113,    79,
     -74,   -74,   -74,   -74,  -113,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   120,     0,     0,     0,   -75,   -75,   -75,
     -75,   413,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,     0,     0,     0,   -76,   -76,   -76,
     -76,   -74,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,   -75,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,     0,
       0,     0,     0,     0,   -67,   -67,   114,   115,   -76,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,   -69,   -69,   -69,   -69,   -77,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,     0,     0,     0,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -67,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,   -73,   -73,
     -73,   -73,   -69,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,     0,     0,     0,     0,     0,     0,     0,   -70,   -70,
     -70,   -70,   -71,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,     0,   -74,   -74,   -74,   -74,   -73,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,     0,     0,     0,     0,   -72,   -72,   -72,   -72,   -70,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,     0,
       0,     0,   -66,   -66,   114,   115,   -74,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,     0,
       0,     0,   -68,   -68,   -68,   -68,   -72,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,  -108,
    -108,  -108,  -108,   -66,  -108,  -108,  -108,  -108,  -108,  -108,
    -108,  -108,   -61,   -61,   104,   105,   106,   107,   108,   109,
       0,     0,     0,   -68,   -61,   -61,   104,   105,   106,   107,
     108,   109,   -61,     0,     0,     0,   -74,   -74,   -74,   -74,
    -108,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   434,
     -61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -74,   -61,   -75,   -75,   -75,   -75,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -75,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,     0,     0,     0,     0,   -77,   -77,   -77,   -77,   -76,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,     0,     0,     0,     0,     0,   -67,   -67,   114,   115,
     -77,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,     0,     0,     0,     0,     0,   -69,   -69,   -69,
     -69,   -67,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,   -69,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,     0,     0,     0,     0,     0,   -73,
     -73,   -73,   -73,   -71,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,     0,     0,     0,     0,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,   -73,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -70,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,     0,
       0,     0,   -72,   -72,   -72,   -72,   -74,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,
       0,     0,     0,   -66,   -66,   114,   115,   -72,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,     0,
       0,     0,     0,     0,   -68,   -68,   -68,   -68,   -66,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,     0,     0,     0,     0,  -108,  -108,  -108,  -108,   -68,
    -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -108
};

static const yytype_int16 yycheck[] =
{
       0,    24,     0,   182,    39,    53,     6,     0,     6,   202,
      68,   337,    36,     6,    49,    84,    16,    84,    85,   333,
      16,    17,     7,    16,    84,    25,     7,    96,   203,    96,
      54,    90,    25,   359,    16,    17,    84,    16,    17,    84,
     233,    16,    17,     1,    79,    80,    16,    17,    83,    84,
      85,    96,    54,    55,    36,   381,    36,    92,    54,   234,
     127,    84,     7,    16,    17,    16,    17,    25,    26,    27,
      28,   264,    54,    96,    54,    54,    84,    16,    17,    54,
      55,     7,    52,    36,    84,   120,    84,   413,    96,   158,
     265,   158,   127,    16,    17,   409,    54,    55,   158,     4,
       5,    54,     7,    54,    55,    10,     0,   286,    52,   144,
     158,   159,     7,   158,     7,    54,    55,    54,     4,     5,
     313,     7,   157,   158,    10,   160,    12,    16,    17,   177,
     178,    54,    55,    53,    36,   158,    16,    17,    56,   314,
      16,    17,   200,    16,    17,    16,    17,    36,    53,   207,
     158,   186,    54,     4,     5,    53,     7,    53,   158,    10,
     158,    12,    16,    17,   199,     4,     5,    53,     7,     4,
       5,    10,     7,   231,    54,    10,    53,    12,    54,    55,
     238,    54,    55,    54,    55,    53,    37,    38,    39,    40,
      16,    17,    53,    16,    17,   230,    16,    17,    54,    55,
      54,    55,    53,    53,   262,    36,     1,    36,    53,     4,
       5,   269,     7,    36,    53,    10,    36,    12,    53,    53,
      15,     4,     5,    54,     7,    54,   261,    10,    54,    12,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    57,    37,    38,    39,    40,    41,    36,   283,    52,
      53,    16,    17,   311,    16,    17,    52,    52,    53,   452,
     318,    56,    57,     4,     5,    54,     7,    16,    17,    10,
      53,    12,    16,    17,    36,   310,    16,    17,   453,   472,
      16,    17,    16,    17,   343,   344,    52,     4,     5,    54,
       7,     4,     5,    10,     7,   330,    36,    10,   473,   492,
      36,    52,   337,     7,   339,    54,   365,   366,     7,    36,
      54,   346,    53,     4,     5,    52,     7,    52,   493,    10,
      54,    12,    54,   358,   359,    36,   361,    54,   387,   388,
     523,    54,    55,   368,    54,   404,    53,   404,   405,   408,
      53,   408,    54,    54,   404,   380,   381,    54,   383,   524,
      16,    17,    16,    17,    54,   390,   404,    16,    17,   404,
     419,   420,    53,   408,    36,    16,    17,   402,   403,   404,
     405,     4,     5,   408,     7,    16,    17,    10,   413,    12,
     415,   404,    54,    35,    54,   408,    52,   422,     4,     5,
      54,     7,    16,    17,    10,    54,   404,    49,    54,   434,
     408,    52,    36,   438,   404,    54,   404,    16,    17,    16,
      17,    52,   447,     4,     5,    67,     7,    16,    17,    10,
      53,    12,    16,    17,    15,    54,    36,    79,    80,    36,
      54,    83,   467,    36,   501,    52,    88,    53,    52,    91,
      92,    36,    36,    95,    54,    54,    37,    38,    39,    40,
      52,   103,   487,    16,    17,    54,    55,    54,   110,    54,
      54,   113,    53,    36,   116,    52,   501,   119,    16,    17,
      16,    17,    54,    36,    16,    17,     4,     5,    36,     7,
      54,    54,    10,   518,    12,    16,    17,    15,    54,    55,
      36,    54,   144,    52,    36,   147,    54,   566,   567,   566,
     567,   153,    16,    17,    52,   157,   566,   567,   160,    37,
      38,    39,    40,   165,     7,    16,    17,    53,   566,   567,
      36,   566,   567,    54,    55,    53,    53,   596,   597,   596,
     597,   566,   567,   568,   186,    36,   596,   597,    54,   191,
      54,    55,    53,   566,   567,    16,    17,   199,   596,   597,
      53,   596,   597,    54,   206,    16,    17,    53,   566,   567,
      54,   596,   597,    53,    16,    17,   566,   567,   566,   567,
     222,    54,    55,   596,   597,    53,     4,     5,   230,     7,
      16,    17,    10,    54,    12,   237,    16,    17,   596,   597,
      16,    17,    54,    54,    55,     0,   596,   597,   596,   597,
      36,   253,    54,    55,     1,    53,    36,     4,     5,   261,
       7,    54,    55,    10,    53,    12,   268,    54,    15,    53,
      25,    26,    27,    28,    54,    53,    52,    52,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    53,
      37,    38,    39,    40,    41,    53,     4,     5,    52,     7,
     302,    53,    10,    53,    12,    52,    53,    15,   310,    56,
      57,     4,     5,    53,     7,   317,    53,    10,    53,    12,
      16,    17,    16,    17,    53,    33,    34,    35,   330,    37,
      38,    39,    40,     4,     5,   337,     7,   339,    53,    10,
     342,    12,    36,   345,   346,    53,    54,   349,    53,   351,
     352,   353,   354,     8,     9,   357,   358,   359,    54,   361,
      53,    52,   364,    16,    17,   367,   368,    16,    17,   371,
      53,   373,   374,   375,   376,    54,    55,   379,   380,   381,
      53,   383,    53,    36,   386,    54,    55,   389,   390,    35,
      53,   393,    53,   395,   396,   397,   398,    16,    17,   401,
     402,   403,    53,    49,    36,    54,     4,     5,    53,     7,
      36,   413,    10,   415,    12,    36,   418,    15,    36,   421,
     422,    16,    17,   425,    52,   427,   428,   429,   430,    16,
      17,   433,   434,    79,    80,    54,   438,    83,    52,    37,
      38,    39,    40,    16,    17,   447,    92,    36,   450,    36,
      16,    17,    16,    17,   456,    53,    52,    16,    17,    54,
      55,     4,     5,    54,     7,   467,    54,    10,   470,    12,
      54,    55,     4,     5,   476,     7,    54,    55,    10,    52,
      12,     4,     5,    15,     7,   487,    52,    10,   490,    12,
      54,    55,    16,    17,   496,    54,    55,    29,   144,    31,
      57,    33,    34,    35,    54,    37,    38,    39,    40,    41,
      53,   157,    16,    17,   160,    54,   518,    16,    17,   521,
      52,    53,    36,    54,    56,   527,    16,    17,    52,    54,
      53,    36,    36,    54,    55,    54,   538,    36,     4,     5,
     186,     7,    16,    17,    10,   191,    12,   549,     4,     5,
      54,     7,    54,   199,    10,    54,    12,    54,   560,    54,
     206,    16,    17,    54,    54,   201,   568,    54,    55,     4,
       5,    54,     7,   575,    54,    10,   222,    12,    52,    36,
      15,    36,     4,     5,   230,     7,    36,    53,    10,    54,
      12,   237,    16,    17,    54,    55,   232,    53,    33,    34,
      35,    54,    37,    38,    39,    40,    54,   253,    16,    17,
       1,    54,    36,     4,     5,   261,     7,    52,    53,    10,
      54,    12,   268,    54,    15,    54,    55,   263,    36,    36,
      54,    53,    36,    54,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    57,    37,    38,    39,    40,
      41,    54,     4,     5,    54,     7,   302,    54,    10,    54,
      12,    52,    53,    15,   310,    56,    57,     4,     5,    54,
       7,   317,    54,    10,    36,    12,   312,    16,    17,    54,
      55,    33,    34,    35,   330,    37,    38,    39,    40,    16,
      17,   337,    36,   339,    16,    17,    36,    36,    16,    17,
     346,    53,    16,    17,    54,   351,   352,   353,   354,    16,
      17,   357,   358,   359,    36,   361,    53,    36,    36,   355,
      16,    17,   368,    16,    17,    52,    54,   373,   374,   375,
     376,    54,    54,   379,   380,   381,    54,   383,    52,    54,
      36,   377,    54,    55,   390,    16,    17,    54,    55,   395,
     396,   397,   398,    54,    37,   401,   402,   403,    54,    52,
      54,    44,    45,   399,    47,    36,    49,   413,    54,   415,
      16,    17,    36,    16,    17,    36,   422,    54,    16,    17,
      54,   427,   428,   429,   430,    16,    17,   433,   434,    54,
      36,    54,   438,    36,    54,   431,    79,    80,    36,    54,
      83,   447,    16,    17,   450,    36,     6,    25,    54,    92,
     456,    54,    -1,   449,   408,    -1,    54,    -1,    -1,   455,
      -1,   467,    -1,    54,   470,    -1,    16,    17,    16,    17,
     476,    -1,    -1,   469,     4,     5,    -1,     7,    52,   475,
      10,   487,    12,    -1,   490,    15,    -1,    -1,    36,    -1,
     496,    16,    17,   489,    -1,    -1,    16,    17,    -1,   495,
      -1,   144,    52,    33,    34,    35,    54,    37,    38,    39,
      40,    -1,   518,     0,   157,   521,    -1,   160,    -1,    -1,
      -1,   527,    52,    53,   520,     4,     5,    52,     7,    -1,
     526,    10,    52,    12,    -1,    -1,    15,    -1,    25,    26,
      27,    28,    -1,   186,   540,    -1,   542,    25,    26,    27,
      28,    -1,    -1,   196,   197,   551,   199,   553,    37,    38,
      39,    40,   568,   206,     4,     5,   562,     7,   564,    -1,
      10,    -1,    12,    -1,    53,    15,    54,    55,    -1,    -1,
      -1,   577,    -1,   579,   227,   228,    -1,   230,    25,    26,
      27,    28,    -1,    -1,   237,    -1,    -1,    37,    38,    39,
      40,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    53,    -1,   258,   259,    -1,   261,    -1,
       1,    -1,    -1,     4,     5,   268,     7,    -1,    -1,    10,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,   281,    54,
      55,   284,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    49,    37,    38,    39,    40,
      41,    -1,    -1,    -1,   307,   308,    -1,   310,    -1,    -1,
      -1,    52,    53,    -1,   317,    56,    57,    16,    17,    18,
      19,    20,    21,    22,    23,    79,    80,   330,    -1,    83,
      -1,    -1,    -1,    -1,   337,    -1,   339,    -1,    92,     4,
       5,    -1,     7,   346,    -1,    10,    -1,    12,   351,    -1,
      15,    -1,    -1,    52,   357,   358,   359,     0,   361,    -1,
       4,     5,    -1,     7,    -1,   368,    10,    -1,    12,    -1,
     373,    15,    37,    38,    39,    40,   379,   380,   381,    -1,
     383,    -1,    25,    26,    27,    28,    -1,   390,    53,     0,
     144,    -1,   395,    37,    38,    39,    40,    -1,   401,   402,
     403,     0,    -1,   157,    -1,    -1,   160,    -1,    -1,    53,
     413,    -1,   415,     0,    25,    26,    27,    28,    -1,   422,
      -1,    -1,    -1,    -1,   427,    -1,    25,    26,    27,    28,
     433,   434,   186,    -1,    -1,   438,    -1,   191,    25,    26,
      27,    28,    -1,    -1,   447,   199,    -1,   450,    -1,    11,
      12,    -1,   206,   456,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,     0,   467,    -1,    -1,   470,   222,     0,
      -1,    -1,    -1,   476,    36,    -1,   230,    -1,    -1,    -1,
      -1,    -1,    -1,   237,   487,    -1,    -1,   490,    25,    26,
      27,    28,    54,   496,    25,    26,    27,    28,    -1,   253,
      49,    -1,     4,     5,    -1,     7,    -1,   261,    10,    -1,
      12,    -1,    -1,    -1,   268,   518,    -1,    -1,   521,    -1,
      -1,    -1,    -1,    -1,   527,    -1,    -1,    -1,    -1,    -1,
      79,    80,    -1,    -1,    83,    37,    38,    39,    40,     4,
       5,    -1,     7,    92,    -1,    10,    -1,    12,   302,    -1,
      15,    53,    -1,    -1,    -1,    -1,   310,    -1,    -1,    -1,
      -1,    -1,    -1,   317,    -1,   568,    -1,   116,    33,    34,
      35,    -1,    37,    38,    39,    40,   330,    -1,    -1,    -1,
      -1,    -1,    -1,   337,    -1,   339,    -1,    52,    53,    -1,
      -1,    -1,   346,    -1,    -1,   144,    -1,   351,   352,   353,
     354,    -1,    -1,   357,   358,   359,    -1,   361,   157,    -1,
      -1,   160,    -1,    -1,   368,    -1,    -1,    -1,    -1,   373,
     374,   375,   376,    -1,    -1,   379,   380,   381,    -1,   383,
      -1,    -1,    -1,    -1,    -1,    -1,   390,   186,    -1,    -1,
      -1,   395,   396,   397,   398,    -1,    -1,   401,   402,   403,
     199,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,   413,
      -1,   415,    -1,    -1,    -1,    -1,    -1,    -1,   422,    -1,
      -1,    -1,    -1,   427,   428,   429,   430,    -1,    -1,   433,
     434,   230,    -1,    -1,   438,    -1,    -1,    -1,   237,    -1,
      -1,    -1,    -1,   447,    -1,    -1,   450,    -1,    11,    12,
      13,    14,   456,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   261,   467,    -1,    -1,   470,    -1,    -1,   268,
       1,    -1,   476,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    12,    -1,   487,    15,    -1,   490,    -1,    -1,    -1,
      53,    54,   496,    -1,    25,    26,    27,    28,    29,    49,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,   310,    -1,    -1,   518,    -1,    -1,   521,   317,    -1,
      -1,    52,    53,   527,    -1,    56,    57,    -1,    -1,    79,
      80,   330,    -1,    83,    -1,    -1,    -1,    -1,   337,    -1,
     339,    -1,    92,    -1,    -1,    -1,    -1,   346,    -1,    -1,
      -1,    -1,   351,   352,   353,   354,    -1,    -1,   357,   358,
     359,    -1,   361,   113,   568,    -1,    -1,    -1,    -1,   368,
      -1,    -1,    -1,    -1,   373,   374,   375,   376,    -1,    -1,
     379,   380,   381,    -1,   383,    -1,    -1,    -1,    -1,    -1,
      -1,   390,    -1,    -1,   144,    -1,   395,   396,   397,   398,
      -1,    -1,   401,   402,   403,    -1,    -1,   157,    -1,    -1,
     160,    -1,    -1,    -1,   413,    -1,   415,    -1,    -1,    -1,
      -1,    -1,    -1,   422,    -1,    -1,    -1,    -1,   427,   428,
     429,   430,    -1,    -1,   433,   434,   186,    -1,    -1,   438,
      16,    17,    18,    19,    20,    21,    22,    23,   447,   199,
      -1,   450,    -1,    11,    12,    49,   206,   456,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,   467,    -1,
      -1,   470,    -1,    67,    -1,    -1,    52,   476,    36,    -1,
     230,    -1,    -1,    -1,    -1,    79,    80,   237,   487,    83,
      -1,   490,    -1,    -1,    -1,    -1,    54,   496,    92,    -1,
      -1,    -1,     4,     5,    -1,     7,    -1,    -1,    10,   103,
      12,   261,    -1,    15,    -1,    -1,    -1,    -1,   268,   518,
      -1,    -1,   521,    -1,    -1,   119,    -1,    -1,   527,    -1,
      -1,    33,    34,    35,    -1,    37,    38,    39,    40,    -1,
      -1,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,
     144,    53,    15,   147,    -1,    -1,    -1,    -1,    -1,   153,
     310,    -1,    -1,   157,    -1,    -1,   160,   317,    -1,   568,
      33,    34,    35,    -1,    37,    38,    39,    40,    -1,    -1,
     330,    -1,    -1,    -1,    -1,    -1,    -1,   337,    -1,   339,
      53,    -1,   186,    -1,    -1,    -1,   346,    -1,    -1,    -1,
      -1,   351,   352,   353,    -1,   199,    -1,   357,   358,   359,
      -1,   361,   206,    -1,    -1,    -1,    -1,    -1,   368,    -1,
      -1,    -1,    -1,   373,   374,   375,    -1,    -1,    -1,   379,
     380,   381,    -1,   383,    -1,    -1,   230,    -1,    -1,    -1,
     390,    -1,    -1,   237,    -1,   395,   396,   397,    -1,    -1,
      -1,   401,   402,   403,    -1,    -1,     4,     5,    -1,     7,
      -1,    -1,    10,   413,    12,   415,    -1,   261,    -1,    -1,
      -1,    -1,   422,    -1,   268,    -1,    -1,   427,   428,   429,
      -1,    -1,    -1,   433,   434,    -1,    -1,    -1,   438,    37,
      38,    39,    40,    -1,    -1,     4,     5,   447,     7,    -1,
     450,    10,    -1,    12,    -1,    53,   456,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   310,   467,    -1,    -1,
     470,    -1,    -1,   317,    -1,    -1,   476,    -1,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,   330,   487,    -1,    -1,
     490,    -1,    -1,   337,    53,   339,   496,    -1,    -1,    -1,
      49,    -1,   346,    -1,    -1,    -1,    -1,   351,    -1,    -1,
      -1,    -1,    -1,   357,   358,   359,    -1,   361,   518,    -1,
      -1,   521,    -1,    -1,   368,    -1,    -1,   527,    -1,   373,
      79,    80,    -1,    -1,    83,   379,   380,   381,    -1,   383,
      -1,    -1,    -1,    92,    -1,    -1,   390,    -1,    -1,    -1,
      -1,   395,    -1,    -1,    -1,    -1,    -1,   401,   402,   403,
      -1,   110,    -1,    -1,     4,     5,    -1,     7,   568,   413,
      10,   415,    12,    -1,    -1,    -1,    -1,    -1,   422,    -1,
      -1,    -1,    -1,   427,    -1,     4,     5,    -1,     7,   433,
     434,    10,    -1,    12,   438,   144,    15,    37,    38,    39,
      40,    -1,    -1,   447,    -1,    -1,   450,    -1,   157,    -1,
      -1,   160,   456,    53,    33,    34,    35,    -1,    37,    38,
      39,    40,    -1,   467,    -1,    -1,   470,    -1,    -1,    -1,
      -1,    -1,   476,    52,    53,    -1,    -1,   186,    -1,    -1,
      -1,    -1,    -1,   487,    -1,    -1,   490,    -1,    -1,    -1,
     199,    -1,   496,    -1,    -1,    -1,    49,   206,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   518,    -1,    -1,   521,    -1,    -1,
      -1,   230,    -1,   527,    -1,    -1,    79,    80,   237,    -1,
      83,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    92,
      -1,    -1,     1,    -1,    -1,     4,     5,    53,     7,    -1,
      -1,    10,   261,    12,     4,     5,    15,     7,    -1,   268,
      10,    -1,    12,    -1,   568,    15,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    33,    34,    35,    -1,    37,    38,    39,
      40,   144,    -1,    52,    53,    -1,    -1,    56,    57,    -1,
      -1,   310,    52,    53,   157,    -1,    -1,   160,   317,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,   330,    -1,    -1,    -1,    -1,    -1,    -1,   337,    36,
     339,    -1,    -1,   186,    -1,    -1,    -1,   346,    -1,    -1,
      -1,    -1,   351,   352,    -1,    49,   199,    54,   357,   358,
     359,    -1,   361,    -1,    -1,    -1,    -1,    -1,    -1,   368,
      -1,    -1,    -1,    67,   373,   374,    -1,    -1,    -1,    -1,
     379,   380,   381,    -1,   383,    79,    80,   230,    -1,    83,
      -1,   390,    -1,    -1,    -1,    -1,   395,   396,    92,    -1,
      -1,    -1,   401,   402,   403,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,    -1,   413,    -1,   415,    -1,   261,    -1,
      -1,    -1,    -1,   422,    -1,   119,    -1,    -1,   427,   428,
      -1,    -1,    -1,    -1,   433,   434,    -1,    -1,    -1,   438,
      16,    17,    18,    19,    20,    21,    22,    23,   447,    -1,
     144,   450,    -1,   147,    -1,    -1,    -1,   456,    -1,   153,
      36,    -1,    -1,   157,    -1,    -1,   160,   310,   467,    -1,
      -1,   470,    -1,    -1,    11,    12,    -1,   476,    54,    16,
      17,    18,    19,    20,    21,    22,    23,   330,   487,    -1,
      -1,   490,   186,    -1,   337,    -1,   339,   496,    -1,    -1,
      -1,    -1,    -1,   346,    -1,   199,    -1,    -1,    -1,    -1,
      -1,    49,   206,    -1,    -1,   358,   359,    54,   361,   518,
      -1,    -1,   521,    -1,    -1,   368,    -1,    -1,   527,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   230,   380,   381,    -1,
     383,    79,    80,   237,    -1,    83,    -1,   390,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,   402,
     403,    -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,   568,
     413,    -1,   415,    -1,   268,    -1,    -1,    11,    12,   422,
      -1,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,   434,    -1,    -1,    -1,   438,    -1,     4,     5,    -1,
       7,    -1,    -1,    10,   447,    12,   144,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   310,    -1,    -1,   157,
      54,    55,   160,   317,   467,    -1,    33,    34,    35,    -1,
      37,    38,    39,    40,    -1,    -1,   330,    -1,    -1,    -1,
      -1,    -1,    -1,   337,   487,   339,    53,    -1,   186,    -1,
      -1,    -1,   346,    -1,    -1,    -1,    -1,   351,    -1,    -1,
      -1,   199,    -1,   357,   358,   359,    -1,   361,   206,    -1,
      -1,    -1,    -1,    -1,   368,   518,    -1,    -1,    -1,   373,
      -1,    -1,    -1,    -1,    -1,   379,   380,   381,    -1,   383,
      -1,    -1,   230,    -1,    -1,    -1,   390,    -1,    -1,   237,
      -1,   395,    -1,    -1,    -1,    11,    12,   401,   402,   403,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,   413,
      -1,   415,    -1,   261,    -1,   568,    -1,    -1,   422,    -1,
     268,    -1,    -1,   427,    -1,     4,     5,    -1,     7,   433,
     434,    10,    -1,    12,   438,    -1,    15,    -1,    54,    55,
      -1,    -1,    -1,   447,    -1,    -1,   450,    -1,    -1,    -1,
      49,    -1,   456,    -1,    33,    34,    35,    -1,    37,    38,
      39,    40,   310,   467,    -1,    -1,   470,    -1,    -1,   317,
      -1,    -1,   476,    52,    53,    -1,    -1,    -1,    -1,    -1,
      79,    80,   330,   487,    83,    -1,   490,    -1,    -1,   337,
      -1,   339,   496,    92,    -1,    -1,    -1,    -1,   346,    -1,
      -1,    -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,   357,
     358,   359,    -1,   361,   518,    -1,    -1,   521,    -1,    -1,
     368,    -1,    -1,   527,    -1,   373,    -1,    -1,    -1,    -1,
      -1,   379,   380,   381,    -1,   383,    -1,    -1,    -1,    -1,
      -1,    -1,   390,    -1,    -1,   144,    -1,   395,    -1,    -1,
      -1,    -1,    -1,   401,   402,   403,    -1,    -1,   157,    -1,
      -1,   160,    -1,    -1,   568,   413,    -1,   415,    -1,    -1,
      -1,    -1,    -1,    -1,   422,    -1,    -1,    -1,    -1,   427,
      -1,    -1,    -1,    -1,    -1,   433,   434,   186,    -1,    -1,
     438,    16,    17,    18,    19,    20,    21,    22,    23,   447,
     199,    -1,   450,    -1,    11,    12,    49,   206,   456,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,   467,
      -1,    -1,   470,    -1,    -1,    -1,    -1,    -1,   476,    54,
      55,   230,    -1,    -1,    -1,    -1,    79,    80,   237,   487,
      83,    -1,   490,    -1,    -1,    -1,    -1,    54,   496,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
       4,     5,   261,     7,    -1,    -1,    10,    -1,    12,   268,
     518,    15,    -1,   521,    -1,    -1,    -1,    -1,    -1,   527,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,     4,
       5,   144,     7,    -1,    -1,    10,    -1,    12,    52,    53,
      15,   310,    56,    57,   157,    -1,    -1,   160,   317,    -1,
     568,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,   330,    37,    38,    39,    40,    -1,    -1,   337,    -1,
     339,    -1,    -1,   186,    -1,    -1,    -1,   346,    53,    -1,
      -1,    -1,   351,    -1,    -1,    -1,   199,    -1,   357,   358,
     359,    -1,   361,   206,    -1,    -1,    -1,    -1,    -1,   368,
      -1,    -1,    -1,    -1,   373,    -1,    -1,    -1,    -1,    -1,
     379,   380,   381,    -1,   383,    -1,    -1,   230,    -1,    -1,
      -1,   390,    -1,    -1,   237,    -1,   395,    -1,    -1,    -1,
      -1,    -1,   401,   402,   403,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,   413,    -1,   415,    -1,   261,    -1,
      -1,    -1,    -1,   422,    -1,   268,    -1,    -1,   427,    -1,
       4,     5,    -1,     7,   433,   434,    10,    -1,    12,   438,
      -1,    15,    -1,    54,    55,    -1,    -1,    -1,   447,    -1,
      -1,   450,    -1,    -1,    -1,    49,    -1,   456,    -1,    33,
      34,    35,    -1,    37,    38,    39,    40,   310,   467,    -1,
      -1,   470,    -1,    -1,   317,    -1,    -1,   476,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    79,    80,   330,   487,    83,
      -1,   490,    -1,    -1,   337,    -1,   339,   496,    92,    -1,
      -1,    -1,    -1,   346,    -1,    -1,    -1,    -1,   351,    -1,
      -1,    -1,    -1,    -1,   357,   358,   359,    -1,   361,   518,
      -1,    -1,   521,    -1,    -1,   368,    -1,    -1,   527,    -1,
     373,    -1,    -1,    -1,    -1,    -1,   379,   380,   381,    -1,
     383,    -1,    -1,    -1,    -1,    -1,    -1,   390,    -1,    -1,
     144,    -1,   395,    -1,    -1,    -1,    -1,    -1,   401,   402,
     403,    -1,    -1,   157,    -1,    -1,   160,    -1,    -1,   568,
     413,    -1,   415,    -1,    -1,    -1,    -1,    -1,    -1,   422,
      -1,    -1,    -1,    -1,   427,    -1,    -1,    -1,    -1,    -1,
     433,   434,   186,    -1,    -1,   438,    16,    17,    18,    19,
      20,    21,    22,    23,   447,   199,    -1,   450,    -1,    11,
      12,    49,   206,   456,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,   467,    -1,    -1,   470,    -1,    -1,
      -1,    -1,    -1,   476,    54,    55,   230,    -1,    -1,    -1,
      -1,    79,    80,   237,   487,    83,    -1,   490,    -1,    -1,
      52,    -1,    -1,   496,    92,    -1,    -1,    -1,    -1,    -1,
       4,     5,    -1,     7,    -1,   103,    10,   261,    12,    -1,
      -1,    15,    -1,    -1,   268,   518,    -1,    -1,   521,    -1,
      -1,   119,    -1,    -1,   527,    29,    -1,    31,    -1,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    16,    17,
      18,    19,    20,    21,    22,    23,   144,    -1,    52,    53,
      -1,    -1,    56,    -1,    -1,    -1,   310,    -1,    36,   157,
      -1,    -1,   160,   317,    -1,   568,    -1,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,   330,    -1,    -1,    -1,
      -1,    -1,    -1,   337,    -1,   339,    -1,    49,   186,    -1,
      -1,    -1,   346,    -1,    -1,    -1,    -1,   351,    -1,    -1,
      -1,   199,    -1,   357,   358,   359,    54,   361,    -1,    -1,
      -1,    -1,    -1,    -1,   368,    -1,    -1,    79,    80,   373,
      -1,    83,    -1,    -1,    -1,   379,   380,   381,    -1,   383,
      92,    -1,   230,    -1,    -1,    -1,   390,    -1,    -1,    -1,
      -1,   395,    -1,    -1,    -1,    11,    12,   401,   402,   403,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,   413,
      -1,   415,    -1,   261,    -1,    -1,    -1,    -1,   422,    -1,
      -1,    -1,    -1,   427,    -1,    -1,    -1,    -1,    -1,   433,
     434,    -1,   144,    -1,   438,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,   447,    -1,   157,   450,    -1,   160,    -1,
      49,    -1,   456,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,   310,   467,    -1,    -1,   470,    -1,    -1,    -1,
      -1,    -1,   476,    -1,   186,    -1,    -1,    -1,    -1,    -1,
      79,    80,   330,   487,    83,    -1,   490,   199,    -1,   337,
      52,   339,   496,    92,    -1,    -1,    -1,    -1,   346,    -1,
      -1,    -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,   357,
     358,   359,    -1,   361,   518,    -1,    -1,   521,   230,    -1,
     368,    -1,    -1,   527,    -1,   373,    -1,    -1,    -1,    -1,
      -1,   379,   380,   381,    -1,   383,    -1,    -1,    -1,    -1,
      -1,    -1,   390,    -1,    -1,   144,    -1,   395,    -1,   261,
      -1,    -1,    -1,   401,   402,   403,    -1,    -1,   157,    -1,
      -1,   160,    -1,    -1,   568,   413,    -1,   415,    -1,    -1,
      -1,    -1,    -1,    -1,   422,    -1,    -1,    49,    -1,   427,
      -1,    -1,    -1,    -1,    -1,   433,   434,   186,    -1,    -1,
     438,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   310,   447,
     199,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,   330,   467,
      92,    -1,    -1,    -1,    -1,   337,    -1,   339,    -1,    -1,
      -1,   230,    -1,    -1,   346,    -1,    -1,    -1,    -1,   487,
      -1,    -1,    -1,    -1,    -1,    -1,   358,   359,    -1,   361,
      -1,    -1,    -1,    -1,    -1,    -1,   368,    -1,    -1,    -1,
      -1,    -1,   261,    -1,    -1,    -1,    -1,    -1,   380,   381,
     518,   383,   144,    -1,    -1,    -1,    -1,    -1,   390,    -1,
      -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,   160,    -1,
     402,   403,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,   413,    -1,   415,    -1,    -1,    -1,    -1,    -1,    -1,
     422,   310,    36,    -1,   186,    -1,    -1,    -1,    -1,    -1,
     568,    -1,   434,    -1,    -1,    -1,   438,   199,    -1,    -1,
      54,   330,    -1,    -1,    -1,   447,    -1,    -1,   337,    -1,
     339,    -1,    -1,     4,     5,    -1,     7,   346,    -1,    10,
      -1,    12,    -1,    -1,    15,   467,    -1,    -1,   230,   358,
     359,    -1,   361,    -1,    -1,    -1,    -1,    -1,    -1,   368,
      -1,    -1,    33,    34,    35,   487,    37,    38,    39,    40,
      -1,   380,   381,    -1,   383,    -1,    -1,    -1,    -1,   261,
      -1,   390,    53,    -1,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,   402,   403,    -1,   518,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   413,    -1,   415,    -1,    -1,    11,
      12,    13,    14,   422,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    54,    55,   434,    -1,    -1,   310,   438,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,   447,     7,
      -1,    -1,    10,    -1,    12,    -1,   568,    15,   330,    -1,
      -1,    53,    54,    55,    -1,   337,    -1,   339,   467,    -1,
      -1,    29,    -1,    31,   346,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    -1,   358,   359,   487,   361,
      -1,    -1,    -1,    -1,    52,    53,   368,    -1,    56,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,   380,   381,
      -1,   383,    -1,    -1,    -1,    -1,    -1,    -1,   390,   518,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
     402,   403,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,
      -1,   413,    -1,   415,    -1,    -1,    -1,    -1,    -1,    -1,
     422,    -1,    -1,    -1,     1,    -1,    -1,     4,     5,    54,
       7,    -1,   434,    10,    -1,    12,   438,    -1,    15,   568,
      -1,    -1,    -1,    -1,    -1,   447,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,   467,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    52,    53,    -1,    -1,    56,
      57,    -1,    -1,    -1,    -1,   487,    -1,    36,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    12,    54,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   518,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    52,    53,    -1,     1,    56,    57,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,
      -1,    15,    -1,    -1,    -1,    -1,   568,    -1,    -1,    -1,
      52,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    52,    53,
      -1,     1,    56,    57,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    52,    53,    -1,     1,    56,    57,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    52,    53,    -1,     1,
      56,    57,     4,     5,    -1,     7,    36,    -1,    10,    -1,
      12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      52,    53,    -1,     1,    56,    57,     4,     5,    -1,     7,
      36,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    52,    53,    -1,     1,    56,    57,
       4,     5,    -1,     7,    36,    -1,    10,    -1,    12,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    52,    53,
      -1,     1,    56,    57,     4,     5,    -1,     7,    36,    -1,
      10,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    52,    53,    -1,     1,    56,    57,     4,     5,
      -1,     7,    36,    -1,    10,    -1,    12,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,     1,
      56,    57,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,     1,    56,    57,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,     1,    56,    57,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,     1,    56,    57,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    -1,     1,    56,    57,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,     1,
      56,    57,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,     1,    56,    57,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,     1,    56,    57,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,     1,    56,    57,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    -1,     1,    56,    57,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,     1,
      56,    57,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,     1,    56,    57,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,     1,    56,    57,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,     1,    56,    57,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    -1,     1,    56,    57,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,     1,
      56,    57,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,     1,    56,    57,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,     1,    56,    57,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,     1,    56,    57,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    -1,     1,    56,    57,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,     1,
      56,    57,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,     1,    56,    57,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,     1,    56,    57,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,     1,    56,    57,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    -1,     1,    56,    57,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,     1,
      56,    57,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,     1,    56,    57,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,     1,    56,    57,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,     1,    56,    57,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    -1,     1,    56,    57,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,     1,
      56,    57,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,     1,    56,    57,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,     1,    56,    57,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,     1,    56,    57,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    -1,     1,    56,    57,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,     1,
      56,    57,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,     1,    56,    57,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,     1,    56,    57,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,     1,    56,    57,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,     1,    52,    53,     4,     5,    56,     7,    -1,    -1,
      10,    -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      54,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,     1,    52,    53,     4,     5,    56,     7,    -1,    -1,
      10,    -1,    12,    -1,    -1,    15,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    25,    26,    27,    28,    29,
      54,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    -1,    54,    56,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    11,    12,    -1,
      54,    55,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    54,    55,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    11,
      12,    -1,    54,    55,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    54,    55,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    54,    55,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    36,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    36,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    11,    12,    13,    14,    36,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    -1,    -1,    36,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    11,    12,
      13,    14,    36,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    36,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    11,    12,    13,    14,    36,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      36,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    11,    12,    13,    14,    36,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    36,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    54,    -1,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    36,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    11,    12,    13,    14,    36,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    11,    12,
      13,    14,    36,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    36,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    11,    12,    13,    14,    36,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      36,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    11,    12,    13,    14,    54,    16,
      17,    18,    19,    20,    21,    22,    23,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      11,    12,    13,    14,    54,    16,    17,    18,    19,    20,
      21,    22,    23,    11,    12,    13,    14,    54,    16,    17,
      18,    19,    20,    21,    22,    23,    11,    12,    13,    14,
      54,    16,    17,    18,    19,    20,    21,    22,    23,    11,
      12,    13,    14,    54,    16,    17,    18,    19,    20,    21,
      22,    23,    11,    12,    13,    14,    54,    16,    17,    18,
      19,    20,    21,    22,    23,    11,    12,    13,    14,    54,
      16,    17,    18,    19,    20,    21,    22,    23,    11,    12,
      13,    14,    54,    16,    17,    18,    19,    20,    21,    22,
      23,    11,    12,    13,    14,    54,    16,    17,    18,    19,
      20,    21,    22,    23,    11,    12,    13,    14,    54,    16,
      17,    18,    19,    20,    21,    22,    23,    11,    12,    13,
      14,    54,    16,    17,    18,    19,    20,    21,    22,    23,
      11,    12,    13,    14,    54,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      54,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    52,    53,    -1,    -1,    -1,    -1,    11,    12,    13,
      14,    36,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      11,    12,    13,    14,    36,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    11,    12,    13,
      14,    53,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,
      14,    52,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    52,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    52,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    11,    12,    13,    14,    52,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    14,    52,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    52,    16,    17,    18,    19,    20,    21,    22,
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
      22,    23,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    52,    16,    17,    18,    19,    20,    21,
      22,    23,    36,    -1,    -1,    -1,    11,    12,    13,    14,
      52,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    54,    11,    12,    13,    14,    -1,    16,    17,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    25,    26,    27,    28,    59,    60,    61,    62,    63,
      64,    65,     0,    61,    52,     7,    53,     1,    63,    65,
      66,    67,    68,     7,    54,    55,    56,    69,    68,    70,
       1,     4,     5,     7,    10,    12,    15,    29,    31,    32,
      33,    34,    35,    37,    38,    39,    40,    41,    52,    53,
      62,    69,    71,    72,    73,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   102,   105,    53,
      53,    86,   105,    53,    93,    53,    52,    80,    53,    53,
      53,    53,    53,    93,    93,    53,    93,    80,    57,    73,
      52,    16,    17,    88,    18,    19,    20,    21,    22,    23,
      89,    11,    12,    90,    13,    14,    91,    82,    92,    88,
      24,    80,   103,   104,    80,    80,    73,    78,    52,     7,
     105,     8,     9,   101,   101,   105,    80,   105,    69,    74,
      75,    76,    77,    78,    36,    54,    82,    87,    92,    83,
      84,    85,    82,    87,    92,    80,    54,    55,    54,    30,
      78,    54,    54,    54,    54,    36,    80,    82,    92,    82,
      92,    80,    73,    73,    80,   105,    54,    30,    54,    54,
      73,    73,    56,    63,    65,     7,    53,     4,     5,     7,
      10,    12,    33,    34,    35,    37,    38,    39,    40,    53,
      81,    82,    83,    84,    85,    86,    87,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   102,   105,     4,     5,
       7,    10,    12,    33,    34,    35,    37,    38,    39,    40,
      53,    81,    82,    83,    84,    85,    86,    87,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   102,   105,     4,
       5,     7,    10,    12,    33,    34,    35,    37,    38,    39,
      40,    53,    81,    82,    83,    84,    85,    86,    87,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   102,   105,
       1,    29,    31,    32,    41,    52,    56,    62,    63,    69,
      75,    76,    77,    78,    79,    80,    52,    80,     4,     5,
       7,    10,    12,    33,    34,    35,    37,    38,    39,    40,
      53,    81,    82,    83,    84,    85,    86,    87,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   102,   105,     7,
      36,    52,    80,    70,    52,     7,    80,    53,     7,    53,
      86,   105,    53,    53,    53,    53,    53,    93,    93,    53,
      80,    88,    89,    90,    91,    82,    92,    88,    24,    53,
       7,    53,    86,   105,    53,    53,    53,    53,    53,    93,
      93,    53,    80,    88,    89,    90,    91,    82,    92,    88,
      24,    53,     7,    53,    86,   105,    53,    53,    53,    53,
      53,    93,    93,    53,    80,    88,    89,    90,    91,    82,
      92,    88,    24,    53,    93,    53,    52,    80,    93,    70,
      52,    52,    52,    53,     7,    53,    86,   105,    53,    53,
      53,    53,    53,    93,    93,    53,    80,    88,    89,    90,
      91,    82,    92,    88,    24,    80,    52,    71,    36,   103,
      80,   105,   101,   101,   105,    80,   105,    36,    54,    82,
      87,    92,    83,    84,    85,    82,    87,    92,    80,   103,
      80,   105,   101,   101,   105,    80,   105,    36,    54,    82,
      87,    92,    83,    84,    85,    82,    87,    92,    80,   103,
      80,   105,   101,   101,   105,    80,   105,    36,    54,    82,
      87,    92,    83,    84,    85,    82,    87,    92,    80,    80,
      73,    78,    52,    69,    74,    75,    76,    77,    78,    71,
     103,    80,   105,   101,   101,   105,    80,   105,    36,    54,
      82,    87,    92,    83,    84,    85,    82,    87,    92,    80,
      54,    57,    80,    54,    54,    54,    54,    54,    36,    80,
      82,    92,    82,    92,    54,    54,    54,    54,    54,    36,
      80,    82,    92,    82,    92,    54,    54,    54,    54,    54,
      36,    80,    82,    92,    82,    92,    54,    30,    78,    57,
      54,    54,    54,    54,    54,    36,    80,    82,    92,    82,
      92,    54,   105,    54,   105,    54,   105,    54,    73,    73,
      80,   105,    54,    54,    54,    54,    30,    54,    54,    73,
      73
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    62,    63,    64,
      65,    65,    65,    65,    66,    67,    67,    67,    68,    68,
      70,    69,    71,    71,    72,    72,    73,    73,    73,    73,
      73,    73,    73,    73,    74,    74,    74,    74,    74,    75,
      75,    75,    75,    76,    77,    78,    78,    79,    79,    80,
      80,    80,    80,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    82,    82,    83,    83,    84,    84,
      85,    85,    86,    86,    86,    86,    86,    86,    87,    88,
      88,    89,    89,    89,    89,    89,    89,    90,    90,    91,
      91,    92,    92,    92,    92,    92,    93,    94,    95,    96,
      97,    98,    98,    99,   100,   100,   101,   101,   102,   103,
     103,   104,   104,   105
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     2,     6,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     0,
       0,     4,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       7,     3,     5,     7,     3,     2,     1,     2,     3,     3,
       1,     1,     1,     2,     2,     3,     3,     3,     3,     4,
       4,     4,     4,     1,     3,     1,     3,     1,     3,     1,
       2,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     4,     2,     2,
       6,     1,     1,     4,     4,     4,     1,     1,     4,     1,
       0,     3,     1,     1
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
#line 3526 "anasin.tab.c"
    break;

  case 3: /* declaration-list: declaration-list declaration  */
#line 167 "anasin.y"
    {
      // printf("declaration-list  ->  declaration-list declaration\n");
      (yyval.nt_node) = create_ast_node(DECLARATION_LIST, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3536 "anasin.tab.c"
    break;

  case 4: /* declaration-list: declaration  */
#line 174 "anasin.y"
    {
      // printf("declaration-list  ->  declaration\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3545 "anasin.tab.c"
    break;

  case 5: /* declaration: var-declaration  */
#line 181 "anasin.y"
    {
      // printf("declaration  ->  var-declaration\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3554 "anasin.tab.c"
    break;

  case 6: /* declaration: func-declaration  */
#line 187 "anasin.y"
    {
      // printf("declaration  ->  func-declaration\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3563 "anasin.tab.c"
    break;

  case 7: /* var-declaration: variable ';'  */
#line 194 "anasin.y"
    {
      // printf("var declaration  ->  variable ;\n");
      (yyval.nt_node) = (yyvsp[-1].nt_node);
    }
#line 3572 "anasin.tab.c"
    break;

  case 8: /* variable: type-specifier ID  */
#line 201 "anasin.y"
    { 
      // printf("variable  ->  type-specifier %s\n", $2);
      (yyval.nt_node) = create_ast_node(VAR_DECLARATION, (yyvsp[-1].nt_node)->type, (yyvsp[0].tt_name), NULL, NULL);
      insert_into_symbol_table((yyvsp[0].tt_name), (yyvsp[-1].nt_node)->type, "variable");
    }
#line 3582 "anasin.tab.c"
    break;

  case 9: /* func-declaration: type-specifier ID '(' parameters ')' compound-stmt  */
#line 209 "anasin.y"
    {
      // printf("func-declaration  ->  type-specifier %s ( parameters ) compount-stmt\n", $2);
      (yyval.nt_node) = create_ast_node(FUNC_DECLARATION, (yyvsp[-5].nt_node)->type, (yyvsp[-4].tt_name), NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
      insert_into_symbol_table((yyvsp[-4].tt_name), (yyvsp[-5].nt_node)->type, "function");
    }
#line 3593 "anasin.tab.c"
    break;

  case 10: /* type-specifier: TYPEINT  */
#line 218 "anasin.y"
    {
      // printf("type-specifier  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].tt_name), NULL, NULL, NULL);
    }
#line 3602 "anasin.tab.c"
    break;

  case 11: /* type-specifier: TYPEFLOAT  */
#line 224 "anasin.y"
    {
      // printf("type-specifier  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].tt_name), NULL, NULL, NULL);
    }
#line 3611 "anasin.tab.c"
    break;

  case 12: /* type-specifier: TYPEELEM  */
#line 230 "anasin.y"
    {
      // printf("type-specifier  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].tt_name), NULL, NULL, NULL);
    }
#line 3620 "anasin.tab.c"
    break;

  case 13: /* type-specifier: TYPESET  */
#line 236 "anasin.y"
    {
      // printf("type-specifier  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].tt_name), NULL, NULL, NULL);
    }
#line 3629 "anasin.tab.c"
    break;

  case 14: /* parameters: parameter-list  */
#line 243 "anasin.y"
    {
      // printf("parameters  ->  parameter-list\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3638 "anasin.tab.c"
    break;

  case 15: /* parameter-list: parameter-list ',' parameter  */
#line 256 "anasin.y"
    {
      // printf("parameter-list  ->  parameter-list , parameter\n");
      (yyval.nt_node) = create_ast_node(PARAMETER_LIST, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3648 "anasin.tab.c"
    break;

  case 16: /* parameter-list: parameter  */
#line 263 "anasin.y"
    {
      // printf("parameter-list  ->  parameter\n");
      // $$ = create_ast_node(PARAMETER, NULL, NULL, NULL, $1);
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3658 "anasin.tab.c"
    break;

  case 17: /* parameter-list: error  */
#line 270 "anasin.y"
    {
      yyerrok;
      (yyval.nt_node) = NULL;
    }
#line 3667 "anasin.tab.c"
    break;

  case 18: /* parameter: variable  */
#line 277 "anasin.y"
    {
      // printf("parameter  ->  variable\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3676 "anasin.tab.c"
    break;

  case 19: /* parameter: %empty  */
#line 283 "anasin.y"
    {
      (yyval.nt_node) = NULL;
    }
#line 3684 "anasin.tab.c"
    break;

  case 20: /* $@1: %empty  */
#line 289 "anasin.y"
    {
      current_scope+=1;
    }
#line 3692 "anasin.tab.c"
    break;

  case 21: /* compound-stmt: '{' $@1 local-declarations '}'  */
#line 293 "anasin.y"
    {
      // printf("compound-stmt  ->  { local-declarations }\n");
      (yyval.nt_node) = create_ast_node(COMPOUND_STMT, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      // $$ = $3;
      current_scope-=1;
    }
#line 3703 "anasin.tab.c"
    break;

  case 22: /* local-declarations: statement-list  */
#line 302 "anasin.y"
    {
      // printf("local-declarations  ->  statement-list\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3712 "anasin.tab.c"
    break;

  case 23: /* local-declarations: %empty  */
#line 308 "anasin.y"
    {
      // printf("local-declarations  ->\n");
      (yyval.nt_node) = NULL;
    }
#line 3721 "anasin.tab.c"
    break;

  case 24: /* statement-list: statement-list statement  */
#line 315 "anasin.y"
    {
      // printf("statement-list  ->  statement-list statement\n");
      (yyval.nt_node) = create_ast_node(STATEMENT_LIST, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3731 "anasin.tab.c"
    break;

  case 25: /* statement-list: statement  */
#line 322 "anasin.y"
    {
      // printf("statement-list  ->  statement\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3740 "anasin.tab.c"
    break;

  case 26: /* statement: compound-stmt  */
#line 329 "anasin.y"
    {
      // printf("statement  ->  compound-stmt \n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3749 "anasin.tab.c"
    break;

  case 27: /* statement: conditional-stmt  */
#line 335 "anasin.y"
    {
      // printf("statement  ->  conditional-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3758 "anasin.tab.c"
    break;

  case 28: /* statement: iteration-stmt  */
#line 341 "anasin.y"
    {
      // printf("statement  ->  iteration-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3767 "anasin.tab.c"
    break;

  case 29: /* statement: expression-stmt  */
#line 347 "anasin.y"
    {
      // printf("statement  ->  expression-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3776 "anasin.tab.c"
    break;

  case 30: /* statement: return-stmt  */
#line 353 "anasin.y"
    {
      // printf("statement  ->  return-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3785 "anasin.tab.c"
    break;

  case 31: /* statement: var-declaration  */
#line 359 "anasin.y"
    {
      // printf("statement  ->  var-declaration \n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3794 "anasin.tab.c"
    break;

  case 32: /* statement: forall-stmt  */
#line 365 "anasin.y"
    {
      // printf("statement  ->  forall-stmt \n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3803 "anasin.tab.c"
    break;

  case 33: /* statement: error  */
#line 371 "anasin.y"
    {
      yyerrok;
      (yyval.nt_node) = NULL;
    }
#line 3812 "anasin.tab.c"
    break;

  case 34: /* forall-statement: compound-stmt  */
#line 378 "anasin.y"
    {
      // printf("statement  ->  compound-stmt \n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3821 "anasin.tab.c"
    break;

  case 35: /* forall-statement: conditional-stmt  */
#line 384 "anasin.y"
    {
      // printf("statement  ->  conditional-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3830 "anasin.tab.c"
    break;

  case 36: /* forall-statement: iteration-stmt  */
#line 390 "anasin.y"
    {
      // printf("statement  ->  iteration-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3839 "anasin.tab.c"
    break;

  case 37: /* forall-statement: expression-stmt  */
#line 396 "anasin.y"
    {
      // printf("statement  ->  expression-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3848 "anasin.tab.c"
    break;

  case 38: /* forall-statement: forall-stmt  */
#line 402 "anasin.y"
    {
      // printf("statement  ->  forall-stmt \n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3857 "anasin.tab.c"
    break;

  case 39: /* conditional-stmt: IF '(' expression ')' statement  */
#line 410 "anasin.y"
    {
      // printf("conditional-stmt  ->  if ( expression ) statement \n");
      (yyval.nt_node) = create_ast_node(CONDITIONAL_STMT, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3867 "anasin.tab.c"
    break;

  case 40: /* conditional-stmt: IF '(' expression ')' statement ELSE statement  */
#line 417 "anasin.y"
    {
      // printf("conditional-stmt  ->  if ( expression ) statement else statement\n");
      (yyval.nt_node) = create_ast_node(CONDITIONAL_STMT, NULL, NULL, NULL, (yyvsp[-4].nt_node));
      (yyvsp[-4].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3878 "anasin.tab.c"
    break;

  case 41: /* conditional-stmt: IF setop-in statement  */
#line 425 "anasin.y"
    {
      // printf("conditional-stmt  ->  if ( expression ) statement \n");
      (yyval.nt_node) = create_ast_node(CONDITIONAL_STMT, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3888 "anasin.tab.c"
    break;

  case 42: /* conditional-stmt: IF setop-in statement ELSE statement  */
#line 432 "anasin.y"
    {
      // printf("conditional-stmt  ->  if ( expression ) statement else statement\n");
      (yyval.nt_node) = create_ast_node(CONDITIONAL_STMT, NULL, NULL, NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3899 "anasin.tab.c"
    break;

  case 43: /* iteration-stmt: FOR '(' expression-stmt expression-stmt expression ')' statement  */
#line 441 "anasin.y"
    {
      // printf("iteration-stmt  ->  for ( expression ; expression ; expression ) statement\n");
      (yyval.nt_node) = create_ast_node(ITERATION_STMT, NULL, NULL, NULL, (yyvsp[-4].nt_node));
      (yyvsp[-4].nt_node)->next = (yyvsp[-3].nt_node);
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3911 "anasin.tab.c"
    break;

  case 44: /* forall-stmt: FORALL_OP setop-in forall-statement  */
#line 452 "anasin.y"
    {
      // printf("setop-forall  ->  setop-in forall-statement\n");
      (yyval.nt_node) = create_ast_node(FORALL_STMT, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3921 "anasin.tab.c"
    break;

  case 45: /* expression-stmt: expression ';'  */
#line 461 "anasin.y"
    {
      // printf("expression-stmt  ->  expression ;\n");
      (yyval.nt_node) = (yyvsp[-1].nt_node);
    }
#line 3930 "anasin.tab.c"
    break;

  case 46: /* expression-stmt: ';'  */
#line 467 "anasin.y"
    {
      // printf("expression-stmt  ->  ; \n");
      (yyval.nt_node) = NULL;
    }
#line 3939 "anasin.tab.c"
    break;

  case 47: /* return-stmt: RETURN ';'  */
#line 474 "anasin.y"
    {
      // printf("return-stmt  ->  return ; \n");
      (yyval.nt_node) = create_ast_node(RETURN_STMT, NULL, NULL, NULL, NULL);
    }
#line 3948 "anasin.tab.c"
    break;

  case 48: /* return-stmt: RETURN expression ';'  */
#line 480 "anasin.y"
    {
      // printf("return-stmt  ->  return expression ; \n");
      (yyval.nt_node) = create_ast_node(RETURN_STMT, NULL, NULL, NULL, (yyvsp[-1].nt_node));
    }
#line 3957 "anasin.tab.c"
    break;

  case 49: /* expression: var ASSIGN expression  */
#line 496 "anasin.y"
    {
      // printf("expression  ->  var = expression ;\n");
      (yyval.nt_node) = create_ast_node(EQ_T, NULL, (yyvsp[-1].tt_name), NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3967 "anasin.tab.c"
    break;

  case 50: /* expression: simple-expression  */
#line 503 "anasin.y"
    {
      // printf("expression  ->  simple-expression ;\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3976 "anasin.tab.c"
    break;

  case 51: /* expression: set-expression  */
#line 509 "anasin.y"
    {
      // printf("expression  ->  set-expression ;\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3985 "anasin.tab.c"
    break;

  case 52: /* expression: io-expression  */
#line 515 "anasin.y"
    {
      // printf("expression  ->  io-expression ;\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3994 "anasin.tab.c"
    break;

  case 53: /* simple-expression: logop-una relational-exp  */
#line 522 "anasin.y"
    {
      // printf("simple-expression  ->  logop-una relational-exp simple-expression\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4004 "anasin.tab.c"
    break;

  case 54: /* simple-expression: logop-una set-expression  */
#line 529 "anasin.y"
    {
      // printf("simple-expression  ->  logop-una relational-exp simple-expression\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4014 "anasin.tab.c"
    break;

  case 55: /* simple-expression: simple-expression logop-bin relational-exp  */
#line 536 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4025 "anasin.tab.c"
    break;

  case 56: /* simple-expression: simple-expression logop-bin set-expression  */
#line 544 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
      
    }
#line 4037 "anasin.tab.c"
    break;

  case 57: /* simple-expression: set-expression logop-bin relational-exp  */
#line 553 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4048 "anasin.tab.c"
    break;

  case 58: /* simple-expression: set-expression logop-bin set-expression  */
#line 561 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4059 "anasin.tab.c"
    break;

  case 59: /* simple-expression: simple-expression logop-bin logop-una relational-exp  */
#line 569 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[0].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4071 "anasin.tab.c"
    break;

  case 60: /* simple-expression: simple-expression logop-bin logop-una set-expression  */
#line 578 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[0].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4083 "anasin.tab.c"
    break;

  case 61: /* simple-expression: set-expression logop-bin logop-una relational-exp  */
#line 587 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[0].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4095 "anasin.tab.c"
    break;

  case 62: /* simple-expression: set-expression logop-bin logop-una set-expression  */
#line 596 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[0].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4107 "anasin.tab.c"
    break;

  case 63: /* simple-expression: relational-exp  */
#line 605 "anasin.y"
    {
      // printf("simple-expression  ->  relational-exp\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4116 "anasin.tab.c"
    break;

  case 64: /* relational-exp: relational-exp relop arithm-add-exp  */
#line 612 "anasin.y"
    {
      // printf("relational-exp  ->  arithm-add-exp relop arithm-add-exp\n");
      (yyval.nt_node) = create_ast_node(RELATIONAL_EXP, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4127 "anasin.tab.c"
    break;

  case 65: /* relational-exp: arithm-add-exp  */
#line 620 "anasin.y"
    {
      // printf("relational-exp  ->  arithm-add-exp\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4136 "anasin.tab.c"
    break;

  case 66: /* arithm-add-exp: arithm-add-exp ariop-add arithm-mul-exp  */
#line 627 "anasin.y"
    {
      // printf("arithm-add-exp  ->  arithm-add-exp ariop-add arithm-mul-exp\n");
      (yyval.nt_node) = create_ast_node(ARITHM_ADD_EXP, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4147 "anasin.tab.c"
    break;

  case 67: /* arithm-add-exp: arithm-mul-exp  */
#line 635 "anasin.y"
    {
      // printf("arithm-add-exp  ->  arithm-mul-exp\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4156 "anasin.tab.c"
    break;

  case 68: /* arithm-mul-exp: arithm-mul-exp ariop-mul unary-minus-exp  */
#line 642 "anasin.y"
    {
      // printf("arithm-mul-exp  ->  arithm-mul-exp ariop-mul unary-minus-exp\n");
      (yyval.nt_node) = create_ast_node(ARITHM_MUL_EXP, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4167 "anasin.tab.c"
    break;

  case 69: /* arithm-mul-exp: unary-minus-exp  */
#line 650 "anasin.y"
    {
      // printf("arithm-mul-exp  ->  unary-minus-exp\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4176 "anasin.tab.c"
    break;

  case 70: /* unary-minus-exp: MINUS factor  */
#line 657 "anasin.y"
    {
      // printf("unary-minus-exp  ->  '-' factor\n");
      (yyval.nt_node) = (yyvsp[0].nt_node); //CORRIGIR NUMERO NEGATIVO
      (yyval.nt_node) = create_ast_node(UNARY_MINUS_EXP, NULL, (yyvsp[-1].tt_name), NULL, (yyvsp[0].nt_node));
    }
#line 4186 "anasin.tab.c"
    break;

  case 71: /* unary-minus-exp: factor  */
#line 664 "anasin.y"
    {
      // printf("unary-minus-exp  ->  factor\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4195 "anasin.tab.c"
    break;

  case 72: /* factor: '(' expression ')'  */
#line 671 "anasin.y"
    {
      // printf("factor  ->  ( expression )\n");
      (yyval.nt_node) = (yyvsp[-1].nt_node);
    }
#line 4204 "anasin.tab.c"
    break;

  case 73: /* factor: func-call  */
#line 677 "anasin.y"
    {
      // printf("factor  ->  func-call\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4213 "anasin.tab.c"
    break;

  case 74: /* factor: var  */
#line 688 "anasin.y"
    {
      // printf("factor  ->  var\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4222 "anasin.tab.c"
    break;

  case 75: /* factor: INT  */
#line 694 "anasin.y"
    {
      // printf("factor  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(FACTOR, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4231 "anasin.tab.c"
    break;

  case 76: /* factor: FLOAT  */
#line 700 "anasin.y"
    {
      // printf("factor  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(FACTOR, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4240 "anasin.tab.c"
    break;

  case 77: /* factor: EMPTY  */
#line 706 "anasin.y"
    {
      // printf("factor  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(FACTOR, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4249 "anasin.tab.c"
    break;

  case 78: /* logop-una: NOT  */
#line 713 "anasin.y"
    {
      // printf("logop-una  ->  !\n");
      (yyval.nt_node) = create_ast_node(LOGOP_UNA, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4258 "anasin.tab.c"
    break;

  case 79: /* logop-bin: AND  */
#line 720 "anasin.y"
    {
      // printf("logop-bin  ->  &&\n");
      (yyval.nt_node) = create_ast_node(LOGOP_BIN, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4267 "anasin.tab.c"
    break;

  case 80: /* logop-bin: OR  */
#line 726 "anasin.y"
    {
      // printf("logop-bin  ->  ||\n");
      (yyval.nt_node) = create_ast_node(LOGOP_BIN, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4276 "anasin.tab.c"
    break;

  case 81: /* relop: LT  */
#line 733 "anasin.y"
    {
      // printf("relop  ->  <\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4285 "anasin.tab.c"
    break;

  case 82: /* relop: LTE  */
#line 739 "anasin.y"
    {
      // printf("relop  ->  <=\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4294 "anasin.tab.c"
    break;

  case 83: /* relop: GT  */
#line 745 "anasin.y"
    {
      // printf("relop  ->  >\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4303 "anasin.tab.c"
    break;

  case 84: /* relop: GTE  */
#line 751 "anasin.y"
    {
      // printf("relop  ->  >=\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4312 "anasin.tab.c"
    break;

  case 85: /* relop: EQ  */
#line 757 "anasin.y"
    {
      // printf("relop  ->  ==\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4321 "anasin.tab.c"
    break;

  case 86: /* relop: NEQ  */
#line 763 "anasin.y"
    {
      // printf("relop  ->  !=\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4330 "anasin.tab.c"
    break;

  case 87: /* ariop-add: PLUS  */
#line 770 "anasin.y"
    {
      // printf("ariop-add  ->  +\n");
      (yyval.nt_node) = create_ast_node(ARIOP_ADD, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4339 "anasin.tab.c"
    break;

  case 88: /* ariop-add: MINUS  */
#line 776 "anasin.y"
    {
      // printf("ariop-add  ->  -\n");
      (yyval.nt_node) = create_ast_node(ARIOP_ADD, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4348 "anasin.tab.c"
    break;

  case 89: /* ariop-mul: MULT  */
#line 783 "anasin.y"
    {
      // printf("ariop-mul  ->  *\n");
      (yyval.nt_node) = create_ast_node(ARIOP_MUL, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4357 "anasin.tab.c"
    break;

  case 90: /* ariop-mul: DIV  */
#line 789 "anasin.y"
    {
      // printf("ariop-mul  ->  /\n");
      (yyval.nt_node) = create_ast_node(ARIOP_MUL, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4366 "anasin.tab.c"
    break;

  case 91: /* set-expression: setop-in  */
#line 796 "anasin.y"
    {
      // printf("set-expressions  ->  setop-in\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4375 "anasin.tab.c"
    break;

  case 92: /* set-expression: setop-is-set  */
#line 802 "anasin.y"
    {
      // printf("set-expressions  ->  setop-is-set\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4384 "anasin.tab.c"
    break;

  case 93: /* set-expression: setop-add  */
#line 808 "anasin.y"
    {
      // printf("set-expressions  ->  setop-add\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4393 "anasin.tab.c"
    break;

  case 94: /* set-expression: setop-remove  */
#line 814 "anasin.y"
    {
      // printf("set-expressions  ->  setop-remove\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4402 "anasin.tab.c"
    break;

  case 95: /* set-expression: setop-exists  */
#line 820 "anasin.y"
    {
      // printf("set-expressions  ->  setop-exists\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4411 "anasin.tab.c"
    break;

  case 96: /* setop-in: '(' expression IN_OP expression ')'  */
#line 827 "anasin.y"
    {
      // printf("setop-in  ->  ( expression IN_OP expression ) \n");
      (yyval.nt_node) = create_ast_node(SETOP_IN, NULL, (yyvsp[-2].tt_name), NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-1].nt_node);
    }
#line 4421 "anasin.tab.c"
    break;

  case 97: /* setop-is-set: IS_SET_OP '(' var ')'  */
#line 844 "anasin.y"
    {
      // printf("setop-is-set  ->  is_set ( var )\n");
      (yyval.nt_node) = create_ast_node(SETOP_IS_SET, NULL, (yyvsp[-3].tt_name), NULL, (yyvsp[-1].nt_node));
    }
#line 4430 "anasin.tab.c"
    break;

  case 98: /* setop-add: ADD_OP setop-in  */
#line 851 "anasin.y"
    {
      // printf("setop-add  ->  add setop-in\n");
      (yyval.nt_node) = create_ast_node(SETOP_ADD, NULL, (yyvsp[-1].tt_name), NULL, (yyvsp[0].nt_node));
    }
#line 4439 "anasin.tab.c"
    break;

  case 99: /* setop-remove: REMOVE_OP setop-in  */
#line 858 "anasin.y"
    {
      // printf("setop-remove  ->  remove setop-in\n");
      (yyval.nt_node) = create_ast_node(SETOP_REMOVE, NULL, (yyvsp[-1].tt_name), NULL, (yyvsp[0].nt_node));
    }
#line 4448 "anasin.tab.c"
    break;

  case 100: /* setop-exists: EXISTS_OP '(' var IN_OP var ')'  */
#line 882 "anasin.y"
    {
      // printf("setop-exists  ->  exists ( var in var )\n");
      (yyval.nt_node) = create_ast_node(SETOP_EXISTS, NULL, (yyvsp[-5].tt_name), NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-1].nt_node);
    }
#line 4458 "anasin.tab.c"
    break;

  case 101: /* io-expression: ioop-read  */
#line 890 "anasin.y"
    {
      // printf("io-expression  ->  ioop-read\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4467 "anasin.tab.c"
    break;

  case 102: /* io-expression: ioop-write  */
#line 896 "anasin.y"
    {
      // printf("io-expression  ->  ioop-read\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4476 "anasin.tab.c"
    break;

  case 103: /* ioop-read: READ '(' var ')'  */
#line 912 "anasin.y"
    {
      // printf("ioop-read  ->  read ( var ) \n");
      (yyval.nt_node) = create_ast_node(READ_T, NULL, (yyvsp[-3].tt_name), NULL, (yyvsp[-1].nt_node));
    }
#line 4485 "anasin.tab.c"
    break;

  case 104: /* ioop-write: WRITE '(' word ')'  */
#line 919 "anasin.y"
    {
      // printf("ioop-write  ->  write ( word ) \n");
      (yyval.nt_node) = create_ast_node(WRITE, NULL, (yyvsp[-3].tt_name), NULL, (yyvsp[-1].nt_node));
    }
#line 4494 "anasin.tab.c"
    break;

  case 105: /* ioop-write: WRITELN '(' word ')'  */
#line 925 "anasin.y"
    {
      // printf("ioop-write  ->  writeln ( word ) \n");
      (yyval.nt_node) = create_ast_node(WRITELN, NULL, (yyvsp[-3].tt_name), NULL, (yyvsp[-1].nt_node));
    }
#line 4503 "anasin.tab.c"
    break;

  case 106: /* word: CHAR  */
#line 932 "anasin.y"
    {
      // printf("word  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(CHAR_T, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4512 "anasin.tab.c"
    break;

  case 107: /* word: STRING  */
#line 938 "anasin.y"
    {
      // printf("word  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(STRING_T, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4521 "anasin.tab.c"
    break;

  case 108: /* func-call: ID '(' arguments ')'  */
#line 945 "anasin.y"
    {
      // printf("func-call  ->  %s ( arguments )\n", $1);
      (yyval.nt_node) = create_ast_node(FUNC_CALL, NULL, (yyvsp[-3].tt_name), NULL, (yyvsp[-1].nt_node));
    }
#line 4530 "anasin.tab.c"
    break;

  case 109: /* arguments: args-list  */
#line 952 "anasin.y"
    {
      // printf("arguments  ->  args-list\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4539 "anasin.tab.c"
    break;

  case 110: /* arguments: %empty  */
#line 958 "anasin.y"
    {
      // printf("arguments  ->  empty-set\n");
      (yyval.nt_node) = NULL;
    }
#line 4548 "anasin.tab.c"
    break;

  case 111: /* args-list: args-list ',' expression  */
#line 965 "anasin.y"
    {
      // printf("args-list  ->  args-list , expression\n");
      (yyval.nt_node) = create_ast_node(ARGS_LIST, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4558 "anasin.tab.c"
    break;

  case 112: /* args-list: expression  */
#line 972 "anasin.y"
    {
      // printf("args-list  ->  expression\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4567 "anasin.tab.c"
    break;

  case 113: /* var: ID  */
#line 979 "anasin.y"
    {
      // printf("var  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(VAR, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4576 "anasin.tab.c"
    break;


#line 4580 "anasin.tab.c"

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

#line 985 "anasin.y"




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

  printf("\n\n\n________________| ABSTRACT TREE |________________\n\n");
  print_tree(abstract_tree, 0);
  print_symbol_table();

  free_ast(abstract_tree);
  free_symbol_table();

  return 0;
}
