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
  // #include "scope.h"

  extern int yylex();
  extern int yylex_destroy();
  extern FILE *yyin;
  extern int line;
  extern int column;
  extern int error_count;
  extern void yyerror(const char *tt_name);

  typedef struct semantic_validations {
    int main_issue;
    int scope_issue;
    int previous_ref_issue;
    int function_args_issue;
    int implicit_cast_issue;
    int return_type_issue;
  } semantic_validations;

  void perform_main_validation(char* func_name);
  void run_semantic_validation();
  void initialize_semantic_validations();

  /* INITIALIZATIONS */
  symbol_table_entry* symbol_table = NULL; // Tabela de símbolos definida como uma cadeia de entradas symbol_table_entry
  tree_node* abstract_tree = NULL; // Árvore abstrata definida como uma cadeia de entradas tree_node
  int global_scope_counter = 0; // Inicializa escopo global - https://steemit.com/programming/@drifter1/writing-a-simple-compiler-on-my-own-using-symbol-tables-in-the-lexer - 13/04
  int current_scope_seq = 0;
  int aux_scope = 0;
  scope* global_scope = NULL;
  scope* current_scope = NULL;
  int whitin_parameters = 0;
  int whitin_function = 0;
  semantic_validations* semantics = NULL;
  int semantic_errors = 0;


#line 117 "anasin.tab.c"

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
  YYSYMBOL_65_1 = 65,                      /* $@1  */
  YYSYMBOL_66_2 = 66,                      /* $@2  */
  YYSYMBOL_67_type_specifier = 67,         /* type-specifier  */
  YYSYMBOL_68_parameter_list = 68,         /* parameter-list  */
  YYSYMBOL_parameter = 69,                 /* parameter  */
  YYSYMBOL_70_compound_stmt = 70,          /* compound-stmt  */
  YYSYMBOL_71_3 = 71,                      /* $@3  */
  YYSYMBOL_72_local_declarations = 72,     /* local-declarations  */
  YYSYMBOL_73_statement_list = 73,         /* statement-list  */
  YYSYMBOL_statement = 74,                 /* statement  */
  YYSYMBOL_75_forall_statement = 75,       /* forall-statement  */
  YYSYMBOL_76_conditional_stmt = 76,       /* conditional-stmt  */
  YYSYMBOL_77_iteration_stmt = 77,         /* iteration-stmt  */
  YYSYMBOL_78_forall_stmt = 78,            /* forall-stmt  */
  YYSYMBOL_79_expression_stmt = 79,        /* expression-stmt  */
  YYSYMBOL_80_return_stmt = 80,            /* return-stmt  */
  YYSYMBOL_expression = 81,                /* expression  */
  YYSYMBOL_82_simple_expression = 82,      /* simple-expression  */
  YYSYMBOL_83_relational_exp = 83,         /* relational-exp  */
  YYSYMBOL_84_arithm_add_exp = 84,         /* arithm-add-exp  */
  YYSYMBOL_85_arithm_mul_exp = 85,         /* arithm-mul-exp  */
  YYSYMBOL_86_unary_minus_exp = 86,        /* unary-minus-exp  */
  YYSYMBOL_factor = 87,                    /* factor  */
  YYSYMBOL_88_logop_una = 88,              /* logop-una  */
  YYSYMBOL_89_logop_bin = 89,              /* logop-bin  */
  YYSYMBOL_relop = 90,                     /* relop  */
  YYSYMBOL_91_ariop_add = 91,              /* ariop-add  */
  YYSYMBOL_92_ariop_mul = 92,              /* ariop-mul  */
  YYSYMBOL_93_set_expression = 93,         /* set-expression  */
  YYSYMBOL_94_setop_in = 94,               /* setop-in  */
  YYSYMBOL_95_setop_is_set = 95,           /* setop-is-set  */
  YYSYMBOL_96_setop_add = 96,              /* setop-add  */
  YYSYMBOL_97_setop_remove = 97,           /* setop-remove  */
  YYSYMBOL_98_setop_exists = 98,           /* setop-exists  */
  YYSYMBOL_99_io_expression = 99,          /* io-expression  */
  YYSYMBOL_100_ioop_read = 100,            /* ioop-read  */
  YYSYMBOL_101_ioop_write = 101,           /* ioop-write  */
  YYSYMBOL_word = 102,                     /* word  */
  YYSYMBOL_103_func_call = 103,            /* func-call  */
  YYSYMBOL_arguments = 104,                /* arguments  */
  YYSYMBOL_105_args_list = 105,            /* args-list  */
  YYSYMBOL_var = 106                       /* var  */
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
#define YYLAST   8751

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  602

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
       0,   177,   177,   188,   195,   202,   208,   215,   222,   233,
     240,   232,   258,   265,   272,   279,   294,   301,   308,   314,
     321,   329,   328,   344,   351,   358,   365,   372,   378,   384,
     390,   396,   402,   408,   414,   421,   427,   433,   439,   445,
     453,   460,   468,   475,   484,   495,   504,   510,   517,   523,
     539,   546,   552,   558,   565,   572,   579,   587,   596,   604,
     612,   621,   630,   639,   648,   655,   663,   670,   678,   685,
     693,   700,   707,   714,   720,   731,   737,   743,   749,   756,
     764,   771,   779,   786,   793,   800,   807,   814,   822,   829,
     837,   844,   852,   858,   864,   870,   876,   883,   900,   907,
     914,   938,   946,   952,   968,   975,   981,   988,   995,  1003,
    1010,  1016,  1023,  1030,  1038
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
  "func-declaration", "$@1", "$@2", "type-specifier", "parameter-list",
  "parameter", "compound-stmt", "$@3", "local-declarations",
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

#define YYPACT_NINF (-323)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-115)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1274,    22,    31,    39,    48,    74,  1102,  1253,  1459,    26,
    1491,    79,  -323,  1503,  1515,   296,    38,    72,   168,   367,
      83,   373,   419,   443,    51,  1274,    62,   458,   164,  1525,
    1821,  5474,  8159,  8176,  8068,  8196,    23,   396,    67,    92,
    1212,   102,   105,   111,   113,   117,   117,   122,   125,  5528,
     674,  5582,  5636,   150,  5690,  5744,  5798,  5852,  5906,  5960,
    6014,   157,     7,  1254,  3560,  8213,  8233,  8250,   850,   197,
     202,   225,   291,   345,   437,   160,   177,   180,  8270,   607,
     233,  2050,  8287,  8307,   674,  6878,  1637,  6068,   184,   232,
     520,   520,   232,  2089,   468,   591,   239,  3618,    35,  1556,
    6122,  6176,  1019,  1229,  1437,   107,   128,   223,   246,   286,
     307,   346,   366,   413,   346,   433,   457,   346,  1403,   688,
    1437,  2845,   530,   205,   535,   209,    77,   635,  2383,  6230,
     211,   231,   238,   243,   270,   281,   284,   264,   292,  6284,
    6338,  6392,  6446,  6500,  6554,  2050,  8324,  1976,   850,   909,
    3756,  8344,  8361,  3810,   850,  1034,   330,  8381,  3257,  6878,
    6928,  2050,   333,   335,   337,  1104,   232,   303,  4420,  1107,
    4474,  1124,   561,   980,  6608,   339,   342,  1138,  6928,  6928,
    1155,  6662,  6716,   164,   352,   403,  8115,  2089,  7464,  7485,
    7373,  7511,   147,   361,   363,   371,   377,   386,   386,   391,
     674,    15,  2555,  1177,  7532,  7558,  7579,   907,    25,    41,
      87,    89,   170,   578,   126,   190,   198,  7605,  7417,  7076,
    7089,  4180,  7134,   178,   393,   395,   397,   399,   402,   402,
     405,   674,    -1,  3137,  2818,  7147,  7160,  7205,  2243,   156,
     358,   425,   440,   460,   471,   583,   601,   681,  7218,  1330,
    7816,  7834,  1789,  7855,   274,   417,   428,   449,   454,   456,
     456,   463,   674,    85,  3674,  2715,  7873,  7894,  7912,  2362,
     547,   763,   807,   867,   948,   962,   378,   424,   465,  7933,
    7626,  1282,   470,   483,  2512,   125,  1361,   164,  2503,   459,
    3218,  4325,  4394,  4448,  4502,  4556,   489,  2983,   492,  8463,
    8484,  8089,  8505,   311,   493,   503,   506,   509,   512,   512,
     525,   674,   120,  3644,  7103,  8526,  8547,  8568,  2456,   131,
     618,   858,   888,  1067,  1144,   560,   569,   608,  8589,  8442,
     610,  2050,  4111,   597,  1821,  6770,   619,   615,   233,  7438,
    2050,  7649,  7670,   232,   520,   520,   232,  2089,   641,   775,
     239,   226,  1458,   496,   496,   496,  2676,   815,  1458,   674,
     233,  7063,  2050,  7231,  7276,   232,   520,   520,   232,  2089,
     522,   538,   239,   252,  1553,   599,   599,   599,  3351,   558,
    1553,  3257,   233,  7696,  2050,  7951,  7972,   232,   520,   520,
     232,  2089,  1011,  1023,   239,   266,  1600,   689,   689,   689,
    4277,  1025,  1600,  2050,   674,  6878,  1637,  4610,   628,  4214,
    1821,  4664,  4718,  3388,   233,  8133,  2050,  8610,  8631,   232,
     520,   520,   232,  2089,  1151,  1168,   239,   277,  2206,   711,
     711,   711,  4528,  1185,  2206,  2089,   629,  4272,   643,  2050,
     631,   644,   649,   652,   666,   670,   692,   694,  2050,  7709,
    4048,   907,   832,  1994,  7748,  7769,  7719,   907,   855,   298,
     698,   708,   714,   718,   720,   730,   707,   710,  2050,  7289,
    3542,  2243,   733,  2946,  7302,  7347,  4151,  2243,   780,   703,
     732,   736,   740,   752,   758,   766,   729,   786,  2050,  7990,
    6904,  2362,  1027,  3155,  8011,  8029,  6954,  2362,  1031,   779,
     305,  4772,  2383,  4826,  4880,  4934,  4988,  5042,  5096,  5150,
     789,   804,   812,   819,   838,   841,   848,   870,   872,  2050,
    8652,  4582,  2456,  1192,  7174,  8673,  8694,  4636,  2456,  1194,
     877,  6978,  6824,   866,  7795,   327,   329,   355,   861,   232,
     869,  8389,   917,  8398,   934,  7360,   798,   920,   944,   783,
     232,   874,  4353,   787,  7679,   809,  8050,   882,   885,   895,
    1038,   232,   905,  6979,  1044,  8419,  1046,  6878,  6878,  2050,
    5204,  8715,   932,   936,   941,  1339,   232,   926,  4690,  1394,
    4744,  1417,  7017,   929,   940,   937,   827,   939,  1051,  5258,
    5312,   942,   947,  1528,   946,   883,  1053,  6878,  6878,  1560,
    5366,  5420
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
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -323,  -323,  -323,   834,     2,     0,  -323,  -323,  -323,    20,
    -323,   906,   -25,  -172,  -322,  -323,   -50,   577,   -63,   -17,
     -15,   -76,   -10,   -37,  2408,  1957,  2252,  1801,  1552,   735,
    3523,   -55,   389,  -198,  -185,  2557,  1098,  2713,  2962,  3118,
    3367,  3659,  3772,  3899,   -84,  1347,  -320,  -323,   379
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,    51,   184,    10,    17,    26,   185,
      21,    22,    52,    30,    53,    54,    55,   140,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,   104,   111,   114,   117,    69,    70,    71,    72,    73,
      74,    75,    76,    77,   134,    78,   123,   124,    79
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    29,     8,    88,   100,   354,     9,   135,     8,   294,
     128,   334,   438,    98,   120,   102,   103,    19,   440,   355,
      11,   144,   291,   102,   103,    19,    11,    32,    33,   -12,
     186,   102,   103,    35,   141,   127,   376,    20,   -13,    -9,
     460,   102,   103,   122,   125,    20,   -14,   126,   296,   298,
     377,   -51,   161,   -51,   -51,   -15,   137,   -92,   -92,   -51,
     290,   -52,   480,    -9,    -9,    -9,    -9,   398,   292,   -51,
     293,   145,   139,    18,    12,   295,    81,   -92,    14,   -52,
     142,   399,   143,   294,   156,   289,    15,   288,   510,   146,
      23,   333,    -9,    -9,   511,   -92,   291,     1,     2,     3,
       4,   102,   103,   -93,   -93,   -94,   -94,   -10,   167,   173,
     174,   -82,   -82,   331,   -82,   410,   430,   -82,    28,   -82,
      84,   172,   296,   -93,   175,   -94,   -18,   -18,   181,   182,
     431,   159,   -83,   -83,   290,   -83,   102,   103,   -83,   -51,
     -83,   -93,   292,   -94,   293,    86,   352,   102,   103,   295,
     337,   188,   189,   358,   339,    89,   -51,   191,    90,   289,
     -82,   288,   -53,   351,    91,   -21,    92,   -52,   -21,   -21,
      93,   -21,   102,   103,   -21,    96,   -21,   374,   187,   -21,
     -53,   -83,   219,   220,   380,   361,   -95,   -95,   222,   -21,
     -21,   -21,   -21,   -21,   373,   -21,   -21,   -21,   -21,   -21,
     340,   -21,   -21,   -21,   -21,   -21,   -95,    99,   396,   101,
     -52,   -52,   -53,   102,   103,   402,   -21,   -21,   -92,   -92,
     -21,   -21,   -19,   -19,   -95,   395,  -102,   -84,   -84,  -102,
     -84,   362,  -103,   -84,  -103,   -84,   129,   219,   220,   130,
     221,   -93,   -93,   222,  -102,   223,   330,   408,    37,   -52,
     -85,   -85,  -103,   -85,   -92,   354,   -85,   428,   -85,   157,
     443,   444,   448,   146,   434,  -114,   224,   225,   226,   355,
     227,   228,   229,   230,   427,   376,   -84,   -93,   250,   251,
     449,   383,   463,   464,   253,   162,   231,  -111,   468,   377,
     -86,   -86,  -107,   -86,   436,   398,   -86,  -108,   -86,   -85,
     145,   122,   488,   441,   483,   484,   469,   -94,   -94,   399,
     446,   -87,   -87,   519,   -87,   299,   300,   -87,   415,   -87,
     489,   302,   459,   122,   163,   461,   430,   384,   166,   294,
     502,   520,   466,   509,   -50,   164,   514,   515,   165,   -86,
     431,   331,   291,   -94,   479,   122,   506,   481,    -8,    16,
      32,    33,   -50,   186,   486,   501,    35,   177,    36,   567,
     -87,   -95,   -95,  -104,   416,  -105,   499,   500,   296,   298,
     -88,   -88,   296,   -88,   -92,   -92,   -88,   122,   -88,   512,
     290,  -104,   -50,  -105,   504,  -104,   517,  -105,   292,  -106,
     293,  -106,   507,   179,   508,   295,   180,   -95,   530,    81,
     -79,   -79,   533,   -79,   335,   289,   -79,   288,   -79,  -106,
     336,   540,   -92,   -92,   343,    83,   344,   -89,   -89,   -88,
     -89,   -20,   -20,   -89,   345,   -89,   569,    24,    25,   218,
     346,   551,   -53,   -79,   -79,   -79,   -79,   -90,   -90,   347,
     -90,   -93,   -93,   -90,   350,   -90,   365,    83,   366,   -79,
     367,   562,   368,   -96,   -96,   369,   -94,   -94,   372,   249,
     280,   -91,   -91,   218,   -91,   333,   -89,   -91,   131,   -91,
     387,   136,   329,   -17,   -17,   138,   -95,   -95,  -102,   -93,
     -93,   388,   577,    83,   -99,   -99,   -90,   -96,   -96,   -96,
      83,   294,   294,    83,   -94,   -94,    83,    -8,    -8,    83,
     188,   189,   389,   339,   291,   291,   191,   390,   192,   391,
     -91,   411,   -16,   -16,   -95,   -95,   394,   589,   590,  -103,
     -99,   294,   294,   404,   280,   -96,   -96,    83,   132,   133,
     296,   296,   591,    83,   291,   291,   406,   249,   -99,   -99,
     280,   412,   290,   290,   413,   176,   419,   600,   601,   340,
     292,   292,   293,   293,  -100,  -100,   420,   295,   295,   421,
     296,   296,   422,   102,   103,   423,   329,   289,   289,   288,
     288,   342,   290,   290,   -55,   -55,   -99,   -99,   426,   218,
     292,   292,   293,   293,  -113,  -113,   342,   295,   295,  -110,
     158,   353,  -100,  -100,   -96,   -96,   -53,   289,   289,   288,
     288,   -52,   364,   219,   220,  -102,   361,  -100,  -100,   222,
     218,   223,   -55,   -55,   -96,  -112,  -112,   364,   -75,   -75,
     -75,   -75,   375,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   121,   -96,   386,   -92,   -92,   -42,   -53,   -53,   -42,
     -42,   218,   -42,  -100,  -103,   -42,  -114,   -42,   386,   437,
     -42,   439,   362,   397,   -92,  -102,  -102,   -99,   -99,   -75,
     -42,   -42,   -42,   -42,   -42,   160,   -42,   -42,   -42,   -42,
     -42,    -8,   -42,   -42,   -42,   -42,   -42,   -99,   188,   189,
     503,   190,   418,   531,   191,   534,   192,   -42,   -42,    37,
     218,   -42,   -42,   250,   251,   -99,   383,   418,   449,   253,
     532,   254,   429,   535,   -55,   -55,   536,   193,   194,   195,
     280,   196,   197,   198,   199,   299,   300,   249,   415,   280,
     537,   302,   442,   303,   538,   445,   329,   200,   448,   447,
     539,   342,   342,   342,   342,  -103,  -103,   342,   218,   249,
     -55,   280,   384,   468,   462,   353,   550,   465,   329,   -57,
     -57,   467,   545,   364,   364,   364,   364,   -50,   -50,   364,
     249,   249,   469,   280,   416,   488,   482,   375,   546,   485,
     329,    82,   547,   487,   548,   386,   386,   386,   386,   -92,
     -92,   386,   280,   218,   549,   206,   556,   -57,   -57,   397,
     489,  -100,  -100,   249,   557,   280,   -59,   -59,   513,   -98,
     -98,   516,   329,   -61,   -61,   518,   558,   418,   418,   418,
     418,  -100,   559,   418,   329,   237,   268,   -92,   280,   206,
     560,   429,   561,   -93,   -93,   -63,   -63,   280,   317,  -100,
     342,   -55,   -55,   -50,   -59,   -59,   342,   -98,   -98,   353,
      13,   -61,   -61,   -97,   -97,   353,   570,   280,   -57,   -57,
     364,   -55,  -104,  -104,    32,    33,   364,   186,   571,   375,
      35,   -93,    36,   -63,   -63,   375,   520,   280,   -57,   -55,
     386,   -59,   -59,   572,   -93,   -93,   386,   -98,   -98,   397,
     268,   -97,   -97,   -94,   -94,   397,   -57,    44,    45,    46,
      47,   -59,   573,   237,   -93,   574,   268,   -98,   280,  -101,
    -101,   418,   575,    50,   -94,   -94,   519,   418,   576,   -59,
     429,   188,   189,   -50,   339,   -98,   429,   191,   583,   192,
     582,   -94,   317,   584,   -94,   -57,   -57,   341,   586,   585,
     353,    27,   353,   -61,   -61,   206,  -104,  -101,  -101,  -105,
     587,   375,   206,   375,   196,   197,   198,   199,   280,  -106,
     -63,   -63,   397,   -61,   397,   592,   -97,   -97,   363,   588,
     200,   -57,  -101,  -101,   -95,   -95,   206,   429,  -104,   429,
     -63,   -61,  -105,   237,  -105,  -105,   -97,  -106,   -96,   -96,
     593,   -40,  -101,   594,   -40,   -40,   505,   -40,   -63,   385,
     -40,   595,   -40,   596,   -97,   -40,   598,   206,  -106,  -106,
    -101,   599,   -95,     0,   268,   -40,   -40,   -40,   -40,   -40,
     178,   -40,   -40,   -40,   -40,   -40,   -96,   -40,   -40,   -40,
     -40,   -40,     0,   -81,   -81,     0,   -81,   -99,   -99,   -81,
       0,   -81,   -40,   -40,   -81,     0,   -40,   -40,   417,  -100,
    -100,   -55,   -55,   -57,   -57,     0,   206,   -59,   -59,     0,
     -59,   -59,     0,   317,   -98,   -98,   -81,   -81,   -81,   -81,
     -61,   -61,   -63,   -63,     0,   -99,   268,   -97,   -97,  -101,
    -101,     0,   -81,   237,     0,   268,     0,  -100,     0,   -55,
       0,   -57,   317,   -95,   -95,   -59,   -59,   206,   206,   206,
     206,     0,   -98,   206,   206,   237,     0,   268,   -61,     0,
     -63,     0,    -2,   -95,   317,   -97,     0,  -101,     0,   237,
     237,   237,   237,     0,     0,   237,   237,   237,     0,   268,
     -98,   -98,     0,   -61,   -61,     0,   317,     1,     2,     3,
       4,   268,   268,   268,   268,     0,    85,   268,   268,   206,
     -63,   -63,     0,    94,    95,     0,    97,     0,   209,   237,
       0,   268,     0,     0,   -97,   -97,   -98,     0,   317,   -61,
     -96,   -96,     0,   317,   317,   317,   317,   -99,   -99,   317,
     317,  -101,  -101,     0,   268,     0,   -63,     0,   240,   271,
     -96,     0,   209,   268,  -100,  -100,   206,   -99,   112,   113,
     -97,   320,   206,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -55,   -55,   268,  -100,     0,   237,  -101,   -57,   -57,
     -59,   -59,   237,   -66,     0,     0,    32,    33,     0,    34,
       0,   -55,    35,   268,    36,     0,   268,    37,   -57,     0,
     -59,   -66,   268,   -80,   -80,     0,   -80,     0,     0,   -80,
       0,   -80,     0,   271,   -80,    41,    42,    43,     0,    44,
      45,    46,    47,    -4,   268,     0,   240,   317,     0,   271,
       0,     0,     0,   317,    87,    50,   -80,   -80,   -80,   -80,
     -64,   -64,   105,   106,   107,   108,   109,   110,    -4,    -4,
      -4,    -4,   -80,   -34,     0,   320,   -34,   -34,     0,   -34,
       0,     0,   -34,     0,   -34,   348,   349,   -34,   209,     1,
       2,     3,     4,     0,   268,   209,   -64,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,     0,     0,   370,   371,     0,   209,
       0,     0,     0,     0,   -34,   -34,   240,     0,   -34,   -34,
       0,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   381,   -98,   -98,   392,   393,     0,
     209,     0,   -47,     0,     0,   -47,   -47,   271,   -47,     0,
       0,   -47,     0,   -47,     0,   -98,   -47,     0,     0,     0,
     405,     0,     0,   409,   -75,   -75,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   217,   -47,   -47,
     -47,   -47,   -47,     0,     0,     0,   424,   425,     0,   209,
     -61,   -61,     0,   -47,   -47,     0,   320,   -47,   -47,   -54,
     -54,   105,   106,   107,   108,   109,   110,   248,   279,   271,
     -61,   217,     0,   -63,   -63,     0,   240,     0,   271,     0,
     328,    32,    33,     0,   186,   320,     0,    35,     0,    36,
     209,     0,    37,   -63,     0,   -54,   209,   209,   240,    -5,
     271,     0,   188,   189,     0,   339,     0,   320,   191,     0,
     192,     0,   240,    37,    44,    45,    46,    47,   240,   240,
     240,     0,   271,     0,    -5,    -5,    -5,    -5,     0,   320,
      50,    -6,   279,     0,   271,   196,   197,   198,   199,     0,
     271,   271,   209,    -3,     0,   248,     0,     0,   279,     0,
       0,   200,   240,     0,   271,    -7,    -6,    -6,    -6,    -6,
       0,   320,     0,     0,     0,   -11,   320,     0,    -3,    -3,
      -3,    -3,   320,   320,   328,     0,     0,   271,     0,   217,
      -7,    -7,    -7,    -7,   -97,   -97,   271,   217,     0,   209,
     -11,   -11,   -11,   -11,   217,   209,   -22,   219,   220,     0,
     361,     0,     0,   222,   -97,   223,   271,     0,    37,   240,
     248,     0,     0,     0,     0,   240,  -101,  -101,   217,     0,
       0,   -22,   -22,   -22,   -22,   248,   271,     0,     0,   271,
     227,   228,   229,   230,     0,   271,  -101,     0,     0,     0,
       0,   279,   205,     0,   250,   251,   231,   383,     0,   217,
     253,     0,   254,     0,     0,    37,   279,   271,     0,     0,
     320,     0,     0,     0,     0,     0,   320,     0,     0,     0,
       0,     0,   236,   267,     0,     0,   205,   258,   259,   260,
     261,    32,    33,     0,    34,   316,     0,    35,     0,    36,
     328,     0,    37,   262,     0,     0,     0,     0,   217,     0,
       0,     0,     0,     0,     0,   328,     0,   271,     0,   152,
      41,    42,    43,     0,    44,    45,    46,    47,   279,     0,
       0,     0,     0,     0,     0,   248,     0,   279,     0,   297,
      50,     0,     0,     0,   328,     0,     0,   267,     0,   217,
     217,   217,   217,     0,     0,   217,   217,   248,     0,   279,
     236,     0,     0,   267,     0,     0,   328,     0,     0,     0,
       0,   248,   248,   248,   248,     0,     0,   248,   248,   248,
       0,   279,     0,     0,     0,     0,     0,     0,   328,   316,
       0,     0,     0,   279,   279,   279,   279,     0,     0,   279,
     279,   217,   205,     0,     0,     0,     0,     0,     0,   205,
       0,   248,     0,   279,     0,     0,     0,     0,     0,     0,
     328,     0,     0,     0,     0,   328,   328,   328,   328,     0,
       0,   328,   328,   205,     0,     0,   279,     0,     0,     0,
     236,     0,     0,     0,     0,   279,     0,     0,   217,     0,
    -114,  -114,  -114,  -114,   217,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,   205,   279,     0,     0,   248,     0,
       0,   267,    31,     0,   248,    32,    33,     0,    34,     0,
       0,    35,     0,    36,     0,   279,    37,     0,   279,     0,
       0,     0,   382,  -114,   279,     0,     1,     2,     3,     4,
      38,   204,    39,    40,    41,    42,    43,     0,    44,    45,
      46,    47,    48,   205,     0,     0,   279,     0,     0,   328,
     316,     0,     0,    49,    50,   328,     0,   183,   -24,     0,
       0,   235,   266,   267,     0,   204,     0,     0,     0,     0,
     236,     0,   267,     0,   315,     0,     0,     0,     0,   316,
       0,     0,     0,     0,   205,   205,   205,   455,     0,     0,
     205,   205,   236,     0,   267,   151,   279,     0,     0,     0,
       0,   316,     0,     0,     0,     0,   236,   236,   236,   475,
       0,     0,   236,   236,   236,     0,   267,     0,     0,     0,
       0,     0,     0,   316,     0,     0,   266,     0,   267,   267,
     267,   495,     0,     0,   267,   267,   205,     0,     0,   235,
       0,     0,   266,     0,     0,     0,   236,     0,   267,     0,
       0,     0,     0,     0,     0,   316,     0,     0,     0,     0,
     316,   316,   316,   526,     0,     0,   316,   316,   315,     0,
       0,   267,   -56,   -56,   105,   106,   107,   108,   109,   110,
     267,   204,     0,   205,     0,   112,   113,   202,   204,   205,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
     267,     0,     0,   236,     0,   118,     0,     0,   -56,   236,
     -65,     0,   204,     0,     0,     0,     0,   233,   264,   235,
     267,   202,     0,   267,     0,     0,     0,     0,   -65,   267,
     313,     0,     0,     0,   250,   251,     0,   252,     0,     0,
     253,   147,   254,   204,     0,    37,     0,     0,     0,     0,
     266,   267,     0,     0,   316,     0,     0,   153,     0,     0,
     316,     0,     0,   255,   256,   257,     0,   258,   259,   260,
     261,     0,     0,   299,   300,     0,   301,     0,     0,   302,
       0,   303,   264,   262,    37,   168,     0,     0,     0,     0,
       0,   170,   204,     0,     0,   233,     0,     0,   264,   315,
       0,   267,   304,   305,   306,     0,   307,   308,   309,   310,
       0,     0,   266,     0,     0,     0,     0,     0,     0,   235,
       0,   266,   311,     0,   313,     0,     0,     0,   315,     0,
       0,     0,     0,   204,   204,   454,     0,   202,     0,   204,
     204,   235,     0,   266,   356,     0,     0,     0,     0,     0,
     315,     0,     0,     0,     0,   235,   235,   474,     0,     0,
       0,   235,   235,   235,     0,   266,     0,     0,   202,     0,
       0,     0,   315,     0,     0,   378,     0,   266,   266,   494,
       0,     0,     0,   266,   266,   204,     0,     0,     0,     0,
     299,   300,     0,   415,     0,   235,   302,   266,   303,   202,
       0,    37,     0,     0,   315,     0,   400,     0,     0,   315,
     315,   525,     0,     0,     0,   315,   315,     0,     0,     0,
     266,     0,     0,   307,   308,   309,   310,   219,   220,   266,
     361,     0,   204,   222,     0,   223,     0,     0,   204,   311,
       0,     0,     0,     0,     0,     0,     0,     0,   202,   266,
       0,     0,   235,     0,     0,   432,     0,     0,   235,     0,
     227,   228,   229,   230,     0,     0,     0,     0,   264,   266,
       0,     0,   266,     0,     0,   233,   231,   264,   266,     0,
       0,     0,   203,     0,   313,     0,     0,     0,     0,   450,
       0,     0,     0,     0,     0,   456,   202,   233,     0,   264,
     266,     0,     0,   315,     0,     0,   313,     0,     0,   315,
       0,   470,   234,   265,     0,     0,   203,   476,   233,   233,
       0,   264,     0,     0,     0,   314,     0,     0,   313,     0,
       0,     0,     0,   490,     0,     0,     0,     0,     0,   496,
     264,   202,     0,   150,     0,     0,   250,   251,     0,   383,
     266,   233,   253,   264,   254,     0,     0,     0,     0,     0,
     313,     0,     0,     0,     0,   521,     0,    32,    33,     0,
      34,   527,   313,    35,     0,    36,   264,   265,    37,   258,
     259,   260,   261,     0,     0,   264,     0,     0,   541,     0,
     234,     0,     0,   265,   543,   262,    41,    42,    43,     0,
      44,    45,    46,    47,     0,   264,     0,     0,   552,     0,
       0,     0,     0,     0,   554,   332,    50,     0,     0,   314,
       0,     0,     0,     0,     0,   264,     0,     0,   563,     0,
       0,     0,   203,     0,   565,     0,     0,     0,   201,   203,
     299,   300,     0,   415,     0,     0,   302,     0,   303,     0,
       0,     0,     0,     0,     0,     0,   264,     0,     0,   578,
       0,     0,     0,   203,     0,   580,     0,     0,   232,   263,
     234,     0,   201,   307,   308,   309,   310,     0,     0,     0,
       0,   312,     0,     0,   -32,     0,     0,   -32,   -32,   311,
     -32,     0,     0,   -32,   203,   -32,    32,    33,   -32,    34,
       0,   265,    35,     0,    36,     0,   264,    37,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,
     -32,   -32,   -32,   -32,   -32,    41,    42,    43,     0,    44,
      45,    46,    47,   263,     0,   -32,   -32,     0,     0,   -32,
     -32,     0,     0,   203,   407,    50,   232,     0,     0,   263,
     314,   -64,   -64,   105,   106,   107,   108,   109,   110,     0,
       0,     0,     0,   265,     0,     0,     0,     0,     0,     0,
     234,   -64,   265,     0,     0,   312,     0,     0,     0,   314,
       0,     0,     0,     0,   203,   453,     0,   208,   201,   -64,
     203,   203,   234,     0,   265,     0,     0,     0,     0,     0,
       0,   314,     0,     0,     0,   119,   234,   473,     0,     0,
       0,     0,   234,   234,   234,     0,   265,   239,   270,   201,
       0,   208,     0,   314,     0,     0,     0,     0,   265,   493,
     319,     0,     0,     0,   265,   265,   203,     0,     0,     0,
       0,   149,     0,     0,     0,     0,   234,     0,   265,     0,
     201,     0,     0,     0,     0,   314,     0,   155,     0,     0,
     314,   524,     0,     0,     0,     0,   314,   314,     0,     0,
       0,   265,   -54,   -54,   105,   106,   107,   108,   109,   110,
     265,     0,   270,   203,     0,   169,     0,     0,     0,   203,
       0,   171,   -54,     0,     0,   239,     0,     0,   270,   201,
     265,     0,     0,   234,     0,     0,   112,   113,     0,   234,
     -54,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   263,
     265,     0,     0,   265,   319,     0,   232,     0,   263,   265,
       0,     0,     0,     0,     0,   312,     0,   208,     0,     0,
       0,     0,     0,   210,   357,     0,     0,   201,   232,   -66,
     263,   265,     0,     0,   314,     0,     0,   312,     0,     0,
     314,     0,     0,     0,     0,     0,     0,     0,   208,   232,
     232,     0,   263,   241,   272,   379,     0,   210,     0,   312,
       0,     0,     0,     0,     0,     0,   321,     0,     0,     0,
       0,   263,   201,     0,     0,     0,     0,     0,     0,   208,
       0,   265,   232,     0,   263,     0,   401,     0,     0,   112,
     113,   312,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,   312,     0,     0,     0,   263,     0,    32,
      33,     0,    34,     0,     0,    35,   263,    36,   272,     0,
      37,     0,     0,     0,     0,     0,     0,     0,   208,     0,
       0,   241,   -66,   -66,   272,   433,   263,     0,    41,    42,
      43,     0,    44,    45,    46,    47,     0,     0,   270,     0,
       0,     0,     0,     0,     0,   239,   263,   270,    50,     0,
     321,     0,     0,     0,   319,     0,     0,     0,     0,   452,
       0,     0,     0,   210,     0,   458,   208,   239,     0,   270,
     210,     0,     0,     0,     0,     0,   319,   263,     0,     0,
       0,   472,     0,     0,     0,     0,     0,   478,   239,   239,
       0,   270,     0,     0,   210,     0,     0,     0,   319,     0,
       0,   241,     0,   492,     0,     0,     0,   112,   113,   498,
     270,   208,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,   239,     0,   270,     0,   210,     0,   263,     0,     0,
     319,     0,   272,     0,     0,   523,     0,   -47,   -47,     0,
     -47,   529,   319,   -47,     0,   -47,   270,     0,   -47,     0,
     -65,   -65,     0,     0,     0,   270,     0,     0,   542,     0,
       0,     0,   211,     0,   544,     0,   -47,   -47,   -47,     0,
     -47,   -47,   -47,   -47,   210,   270,     0,     0,   553,     0,
       0,   321,     0,     0,   555,   -47,   -47,     0,     0,     0,
       0,     0,   242,   273,   272,   270,   211,     0,   564,     0,
       0,   241,     0,   272,   566,   322,     0,     0,     0,     0,
     321,     0,     0,     0,     0,   210,     0,     0,     0,     0,
       0,   210,   210,   241,     0,   272,   270,     0,     0,   579,
       0,     0,   321,     0,     0,   581,     0,   241,     0,     0,
       0,     0,     0,   241,   241,   241,     0,   272,     0,     0,
       0,     0,     0,     0,   321,     0,     0,   273,     0,   272,
       0,     0,     0,     0,     0,   272,   272,   210,     0,     0,
     242,     0,     0,   273,     0,     0,   270,   241,     0,   272,
       0,     0,     0,     0,     0,     0,   321,     0,     0,     0,
       0,   321,     0,     0,     0,     0,     0,   321,   321,   322,
       0,     0,   272,   -64,   -64,   105,   106,   107,   108,   109,
     110,   272,   211,     0,   210,     0,   112,   113,   212,   211,
     210,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,
       0,   272,     0,     0,   241,     0,     0,     0,     0,     0,
     241,   -64,   -64,   211,     0,     0,     0,     0,   243,   274,
     242,   272,   212,     0,   272,     0,     0,     0,     0,   -65,
     272,   323,     0,     0,     0,     0,     0,     0,     0,   -27,
       0,     0,   -27,   -27,   211,   -27,     0,     0,   -27,     0,
     -27,   273,   272,   -27,     0,   321,     0,     0,     0,     0,
       0,   321,     0,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,
       0,   219,   220,   274,   221,     0,     0,   222,     0,   223,
     -27,   -27,    37,   211,   -27,   -27,   243,     0,     0,   274,
     322,     0,   272,     0,     0,     0,     0,     0,     0,     0,
     224,   225,   226,   273,   227,   228,   229,   230,     0,     0,
     242,     0,   273,     0,     0,   323,     0,     0,     0,   322,
     231,     0,     0,     0,   211,     0,     0,     0,   212,     0,
     211,   211,   242,     0,   273,   212,     0,     0,     0,     0,
       0,   322,     0,     0,     0,     0,   242,     0,     0,     0,
       0,     0,   242,   242,   242,     0,   273,     0,     0,   212,
       0,     0,     0,   322,     0,     0,   243,     0,   273,     0,
       0,     0,     0,     0,   273,   273,   211,   -54,   -54,   105,
     106,   107,   108,   109,   110,     0,   242,     0,   273,     0,
     212,     0,     0,     0,     0,   322,     0,   274,     0,     0,
     322,     0,   -46,   -46,     0,   -46,   322,   322,   -46,     0,
     -46,   273,     0,   -46,     0,   -54,   -54,     0,     0,     0,
     273,     0,     0,   211,     0,     0,     0,   213,     0,   211,
       0,   -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,   212,
     273,     0,     0,   242,     0,     0,   323,     0,     0,   242,
     -46,   -46,     0,     0,     0,     0,     0,   244,   275,   274,
     273,   213,     0,   273,     0,     0,   243,     0,   274,   273,
     324,     0,     0,     0,     0,   323,     0,     0,     0,     0,
     212,     0,     0,     0,     0,     0,   212,   212,   243,     0,
     274,   273,     0,     0,   322,     0,     0,   323,     0,     0,
     322,     0,   243,     0,     0,     0,     0,     0,   243,   243,
     243,     0,   274,     0,     0,     0,     0,     0,     0,   323,
       0,     0,   275,     0,   274,     0,     0,     0,     0,     0,
     274,   274,   212,     0,     0,   244,     0,     0,   275,     0,
       0,   273,   243,     0,   274,     0,     0,     0,     0,     0,
       0,   323,     0,     0,     0,     0,   323,     0,     0,     0,
       0,     0,   323,   323,   324,     0,     0,   274,   -56,   -56,
     105,   106,   107,   108,   109,   110,   274,   213,     0,   212,
       0,   112,   113,   207,   213,   212,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,     0,   274,     0,     0,   243,
       0,     0,     0,     0,     0,   243,   -56,   -56,   213,     0,
       0,     0,     0,   238,   269,   244,   274,   207,     0,   274,
       0,     0,   -66,     0,     0,   274,   318,     0,     0,     0,
       0,     0,    32,    33,     0,    34,     0,   148,    35,   213,
      36,     0,     0,    37,     0,     0,   275,   274,     0,     0,
     323,     0,     0,   154,     0,     0,   323,    38,     0,    39,
       0,    41,    42,    43,     0,    44,    45,    46,    47,    48,
     -64,   -64,   105,   106,   107,   108,   109,   110,   269,     0,
      49,    50,     0,     0,   183,     0,     0,     0,   213,     0,
     -64,   238,     0,     0,   269,   324,     0,   274,     0,     0,
     -64,   -64,   105,   106,   107,   108,   109,   110,   275,     0,
       0,     0,     0,     0,     0,   244,     0,   275,     0,   214,
     318,     0,     0,     0,   324,     0,     0,     0,     0,   213,
       0,     0,     0,   207,     0,   213,   213,   244,   -64,   275,
       0,     0,     0,     0,     0,     0,   324,     0,     0,   245,
     276,   244,     0,   214,     0,     0,     0,   244,   244,   244,
       0,   275,   325,     0,   207,     0,     0,     0,   324,     0,
       0,     0,     0,   275,     0,     0,     0,   112,   113,   275,
     275,   213,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
       0,   244,     0,   275,     0,   207,     0,     0,     0,     0,
     324,     0,     0,     0,     0,   324,     0,     0,     0,     0,
       0,   324,   324,     0,   276,     0,   275,     0,   -65,     0,
       0,     0,     0,     0,     0,   275,     0,   245,   213,     0,
     276,     0,   215,     0,   213,     0,   -58,   -58,   105,   106,
     107,   108,   109,   110,   207,   275,     0,     0,   244,     0,
       0,     0,     0,     0,   244,     0,   325,     0,     0,     0,
       0,     0,   246,   277,   269,   275,   215,     0,   275,   214,
       0,   238,   -58,   269,   275,   326,     0,     0,     0,     0,
     318,     0,     0,     0,     0,   451,     0,     0,     0,     0,
       0,   457,   207,   238,     0,   269,   275,     0,     0,   324,
     214,     0,   318,     0,     0,   324,     0,   471,     0,     0,
       0,     0,     0,   477,   238,   238,     0,   269,     0,     0,
       0,     0,     0,     0,   318,     0,     0,   277,     0,   491,
       0,   214,     0,     0,     0,   497,   269,   207,     0,     0,
     246,     0,     0,   277,     0,     0,   275,   238,     0,   269,
       0,     0,     0,     0,     0,     0,   318,     0,     0,   216,
       0,   522,     0,     0,     0,     0,     0,   528,   318,   326,
       0,     0,   269,     0,     0,     0,     0,     0,     0,     0,
     214,   269,   215,     0,     0,     0,     0,     0,     0,   247,
     278,     0,     0,   216,     0,     0,     0,     0,     0,     0,
     276,   269,   327,     0,     0,     0,     0,   245,     0,   276,
       0,     0,     0,   215,     0,     0,   325,     0,     0,     0,
       0,   269,     0,     0,     0,     0,     0,     0,   214,   245,
       0,   276,     0,     0,     0,     0,     0,     0,   325,     0,
       0,     0,     0,     0,   215,     0,     0,     0,     0,     0,
     245,   245,   269,   276,   278,     0,     0,     0,     0,     0,
     325,     0,     0,     0,     0,     0,     0,   247,     0,     0,
     278,     0,   276,   214,   -56,   -56,   105,   106,   107,   108,
     109,   110,     0,   245,     0,   276,     0,     0,     0,     0,
       0,     0,   325,   215,   -56,     0,   327,     0,     0,     0,
       0,     0,   269,     0,   325,     0,     0,     0,   276,   216,
       0,     0,   -56,   277,     0,     0,     0,   276,     0,     0,
     246,     0,   277,     0,     0,   -47,   -47,     0,   -47,   326,
       0,   -47,     0,   -47,     0,     0,   -47,   276,     0,     0,
     216,   215,   246,     0,   277,     0,     0,     0,     0,     0,
       0,   326,     0,     0,   -47,   -47,   -47,   276,   -47,   -47,
     -47,   -47,     0,   246,   246,     0,   277,     0,     0,     0,
       0,   216,     0,   326,   -47,     0,     0,   -58,   -58,   105,
     106,   107,   108,   109,   110,   277,   215,     0,   276,     0,
       0,     0,     0,     0,     0,     0,   246,     0,   277,     0,
       0,  -114,  -114,  -114,  -114,   326,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,   -58,   -58,   326,     0,     0,
     216,   277,     0,     0,     0,     0,     0,     0,    32,    33,
     277,    34,     0,     0,    35,     0,    36,     0,   276,    37,
     278,     0,     0,   360,  -114,  -114,     0,   247,     0,   278,
     277,     0,     0,   282,     0,   283,   327,    41,    42,    43,
       0,    44,    45,    46,    47,   285,     0,     0,   216,   247,
     277,   278,     0,     0,     0,     0,   286,    50,   327,     0,
     287,     0,     0,     0,     0,     0,   -46,   -46,     0,   -46,
     247,   247,   -46,   278,   -46,     0,     0,   -46,     0,     0,
     327,   277,     0,   -54,   -54,   105,   106,   107,   108,   109,
     110,     0,   278,   216,     0,   -46,   -46,   -46,     0,   -46,
     -46,   -46,   -46,   247,     0,   278,     0,     0,     0,     0,
       0,     0,   327,     0,     0,   -46,   -28,     0,     0,   -28,
     -28,   -54,   -28,     0,   327,   -28,     0,   -28,   278,     0,
     -28,   277,     0,     0,     0,     0,     0,   278,     0,     0,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,     0,   -28,   -28,   -28,   -28,   -28,   278,     0,   -60,
     -60,   105,   106,   107,   108,   109,   110,   -28,   -28,     0,
       0,   -28,   -28,     0,     0,     0,     0,   278,     0,     0,
       0,     0,     0,     0,     0,   -29,     0,     0,   -29,   -29,
       0,   -29,     0,     0,   -29,     0,   -29,   -60,   -60,   -29,
       0,     0,     0,     0,     0,     0,     0,     0,   278,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,   -60,   -60,   105,   106,
     107,   108,   109,   110,     0,     0,   -29,   -29,     0,   -33,
     -29,   -29,   -33,   -33,     0,   -33,     0,     0,   -33,     0,
     -33,     0,     0,   -33,     0,     0,     0,     0,   278,     0,
       0,     0,   -60,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,
     -62,   -62,   105,   106,   107,   108,   109,   110,     0,     0,
     -33,   -33,     0,   -30,   -33,   -33,   -30,   -30,     0,   -30,
       0,     0,   -30,     0,   -30,     0,     0,   -30,     0,     0,
       0,     0,     0,     0,     0,     0,   -62,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -54,   -54,   105,   106,   107,   108,
     109,   110,     0,     0,   -30,   -30,     0,   -31,   -30,   -30,
     -31,   -31,     0,   -31,   -54,     0,   -31,     0,   -31,     0,
       0,   -31,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -56,   -56,
     105,   106,   107,   108,   109,   110,     0,     0,   -31,   -31,
       0,   -48,   -31,   -31,   -48,   -48,     0,   -48,   -56,     0,
     -48,     0,   -48,     0,     0,   -48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,   -48,
     -48,   -48,   -58,   -58,   105,   106,   107,   108,   109,   110,
       0,     0,   -48,   -48,     0,    -7,   -48,   -48,    -7,    -7,
       0,    -7,   -58,     0,    -7,     0,    -7,     0,     0,    -7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
       0,    -7,    -7,    -7,    -7,    -7,   -60,   -60,   105,   106,
     107,   108,   109,   110,     0,     0,    -7,    -7,     0,   -46,
      -7,    -7,   -46,   -46,     0,   -46,   -60,     0,   -46,     0,
     -46,     0,     0,   -46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,
     -62,   -62,   105,   106,   107,   108,   109,   110,     0,     0,
     -46,   -46,     0,   -42,   -46,   -46,   -42,   -42,     0,   -42,
     -62,     0,   -42,     0,   -42,     0,     0,   -42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -42,   -42,   -42,
     -42,   -42,   568,   -42,   -42,   -42,   -42,   -42,     0,   -42,
     -42,   -42,   -42,   -42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -42,   -42,     0,   -49,   -42,   -42,
     -49,   -49,     0,   -49,     0,     0,   -49,     0,   -49,     0,
       0,   -49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -49,   -49,
       0,   -35,   -49,   -49,   -35,   -35,     0,   -35,     0,     0,
     -35,     0,   -35,     0,     0,   -35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,
     -35,   -35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -35,   -35,     0,   -45,   -35,   -35,   -45,   -45,
       0,   -45,     0,     0,   -45,     0,   -45,     0,     0,   -45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
       0,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -45,   -45,     0,   -36,
     -45,   -45,   -36,   -36,     0,   -36,     0,     0,   -36,     0,
     -36,     0,     0,   -36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -36,   -36,     0,   -37,   -36,   -36,   -37,   -37,     0,   -37,
       0,     0,   -37,     0,   -37,     0,     0,   -37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -37,   -37,     0,   -39,   -37,   -37,
     -39,   -39,     0,   -39,     0,     0,   -39,     0,   -39,     0,
       0,   -39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -39,   -39,
       0,   -38,   -39,   -39,   -38,   -38,     0,   -38,     0,     0,
     -38,     0,   -38,     0,     0,   -38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,
     -38,   -38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -38,   -38,     0,   -22,   -38,   -38,   -22,   -22,
       0,   -22,     0,     0,   -22,     0,   -22,     0,     0,   -22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
       0,   -22,   -22,   -22,   -22,   -22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -22,   -22,     0,   -40,
     -22,   -22,   -40,   -40,     0,   -40,     0,     0,   -40,     0,
     -40,     0,     0,   -40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -40,   -40,   -40,   -40,   -40,   597,   -40,
     -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -40,   -40,     0,   -43,   -40,   -40,   -43,   -43,     0,   -43,
       0,     0,   -43,     0,   -43,     0,     0,   -43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -43,   -43,     0,   -41,   -43,   -43,
     -41,   -41,     0,   -41,     0,     0,   -41,     0,   -41,     0,
       0,   -41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -41,   -41,
       0,   -44,   -41,   -41,   -44,   -44,     0,   -44,     0,     0,
     -44,     0,   -44,     0,     0,   -44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,
     -44,   -44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -44,   -44,     0,   -34,   -44,   -44,   -34,   -34,
       0,   -34,     0,     0,   -34,     0,   -34,     0,     0,   -34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -34,
     -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -34,   -34,     0,   -47,
     -34,   -34,   -47,   -47,     0,   -47,     0,     0,   -47,     0,
     -47,     0,     0,   -47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -47,   -47,   -47,   -47,   -47,     0,   -47,
     -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -47,   -47,     0,   -32,   -47,   -47,   -32,   -32,     0,   -32,
       0,     0,   -32,     0,   -32,     0,     0,   -32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -32,   -32,   -32,
     -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -32,   -32,     0,   -27,   -32,   -32,
     -27,   -27,     0,   -27,     0,     0,   -27,     0,   -27,     0,
       0,   -27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,
     -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -27,   -27,
       0,    31,   -27,   -27,    32,    33,     0,    34,     0,     0,
      35,     0,    36,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     2,     3,     4,    38,
       0,    39,    40,    41,    42,    43,     0,    44,    45,    46,
      47,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,    50,     0,   -26,   183,   -23,   -26,   -26,
       0,   -26,     0,     0,   -26,     0,   -26,     0,     0,   -26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -26,
     -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,
       0,   -26,   -26,   -26,   -26,   -26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -26,   -26,     0,   -28,
     -26,   -26,   -28,   -28,     0,   -28,     0,     0,   -28,     0,
     -28,     0,     0,   -28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -28,   -28,   -28,   -28,   -28,     0,   -28,
     -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -28,   -28,     0,   -29,   -28,   -28,   -29,   -29,     0,   -29,
       0,     0,   -29,     0,   -29,     0,     0,   -29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -29,   -29,   -29,
     -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,     0,   -29,
     -29,   -29,   -29,   -29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -29,   -29,     0,   -33,   -29,   -29,
     -33,   -33,     0,   -33,     0,     0,   -33,     0,   -33,     0,
       0,   -33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,
     -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -33,   -33,
       0,   -30,   -33,   -33,   -30,   -30,     0,   -30,     0,     0,
     -30,     0,   -30,     0,     0,   -30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -30,   -30,   -30,   -30,   -30,
       0,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   -30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -30,   -30,     0,   -31,   -30,   -30,   -31,   -31,
       0,   -31,     0,     0,   -31,     0,   -31,     0,     0,   -31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -31,
     -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -31,   -31,     0,   -48,
     -31,   -31,   -48,   -48,     0,   -48,     0,     0,   -48,     0,
     -48,     0,     0,   -48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -48,   -48,   -48,   -48,   -48,     0,   -48,
     -48,   -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -48,   -48,     0,   -25,   -48,   -48,   -25,   -25,     0,   -25,
       0,     0,   -25,     0,   -25,     0,     0,   -25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -25,   -25,   -25,
     -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,   -25,
     -25,   -25,   -25,   -25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -25,   -25,     0,   -46,   -25,   -25,
     -46,   -46,     0,   -46,     0,     0,   -46,     0,   -46,     0,
       0,   -46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,
     -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -46,   -46,
       0,   -49,   -46,   -46,   -49,   -49,     0,   -49,     0,     0,
     -49,     0,   -49,     0,     0,   -49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -49,   -49,   -49,   -49,   -49,
       0,   -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,   -49,
     -49,   -49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -49,   -49,     0,   -35,   -49,   -49,   -35,   -35,
       0,   -35,     0,     0,   -35,     0,   -35,     0,     0,   -35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -35,
     -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,
       0,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -35,   -35,     0,   -45,
     -35,   -35,   -45,   -45,     0,   -45,     0,     0,   -45,     0,
     -45,     0,     0,   -45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -45,   -45,     0,   -36,   -45,   -45,   -36,   -36,     0,   -36,
       0,     0,   -36,     0,   -36,     0,     0,   -36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -36,   -36,   -36,
     -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,     0,   -36,
     -36,   -36,   -36,   -36,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -36,   -36,     0,   -37,   -36,   -36,
     -37,   -37,     0,   -37,     0,     0,   -37,     0,   -37,     0,
       0,   -37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,
     -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -37,   -37,
       0,   -39,   -37,   -37,   -39,   -39,     0,   -39,     0,     0,
     -39,     0,   -39,     0,     0,   -39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -39,   -39,   -39,   -39,   -39,
       0,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,
     -39,   -39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -39,   -39,     0,   -38,   -39,   -39,   -38,   -38,
       0,   -38,     0,     0,   -38,     0,   -38,     0,     0,   -38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -38,
     -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,
       0,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -38,   -38,     0,   -43,
     -38,   -38,   -43,   -43,     0,   -43,     0,     0,   -43,     0,
     -43,     0,     0,   -43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -43,   -43,   -43,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -43,   -43,     0,   -41,   -43,   -43,   -41,   -41,     0,   -41,
       0,     0,   -41,     0,   -41,     0,     0,   -41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -41,   -41,   -41,
     -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     -41,   -41,   -41,   -41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -41,   -41,     0,   -44,   -41,   -41,
     -44,   -44,     0,   -44,     0,     0,   -44,     0,   -44,     0,
       0,   -44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,
     -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -44,   -44,
       0,    -7,   -44,   -44,    -7,    -7,     0,    -7,     0,     0,
      -7,     0,    -7,     0,     0,    -7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    -7,    -7,    -7,    -7,    -7,
       0,    -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,
      -7,    -7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    -7,    -7,     0,   -22,    -7,    -7,   -22,   -22,
       0,   -22,     0,     0,   -22,     0,   -22,     0,     0,   -22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -22,
     -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,
       0,   -22,   -22,   -22,   -22,   -22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -22,   -22,     0,   281,
     -22,   -22,    32,    33,     0,    34,     0,     0,    35,     0,
      36,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     2,     3,     4,   282,     0,   283,
     284,    41,    42,    43,     0,    44,    45,    46,    47,   285,
     -56,   -56,   105,   106,   107,   108,   109,   110,     0,    31,
     286,    50,    32,    33,   287,    34,     0,     0,    35,     0,
      36,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     2,     3,     4,    38,   -56,    39,
      40,    41,    42,    43,     0,    44,    45,    46,    47,    48,
     -58,   -58,   105,   106,   107,   108,   109,   110,     0,   -97,
      49,    50,   -97,   -97,   183,   -97,     0,     0,   -97,     0,
     -97,     0,     0,   -97,     0,   -60,   -60,   105,   106,   107,
     108,   109,   110,   -97,   -97,   -97,   -97,   -97,   -58,   -97,
     -97,   -97,   -97,   -97,     0,   -97,   -97,   -97,   -97,   -97,
       0,   -97,   -97,     0,   -97,     0,     0,   -97,     0,   -97,
     -97,   -97,   -97,   -60,   -97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -97,     0,   -97,     0,
     -97,   -97,   -97,     0,   -97,   -97,   -97,   -97,   -97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -97,
     -97,     0,     0,   -97,  -114,  -114,  -114,  -114,     0,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,   -76,   -76,   -76,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,     0,   112,   113,   360,  -114,  -114,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
     -76,   -76,     0,     0,     0,     0,     0,     0,     0,   -66,
       0,     0,     0,   -77,   -77,   -78,   -78,   -78,   -78,     0,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -68,   -68,
     115,   116,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,     0,   112,   113,     0,   -78,   -78,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
     -65,     0,     0,     0,   -70,   -70,   -72,   -72,   -72,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -74,
     -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,   -72,
     -72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -74,   -74,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -71,   -71,   -75,   -75,   -75,
     -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -67,   -67,   115,   116,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,
     -75,   -75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -73,   -73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -67,   -67,   -69,   -69,
     -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,  -109,  -109,  -109,  -109,     0,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -114,  -114,  -114,  -114,     0,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,     0,     0,
       0,   -69,   -69,     0,     0,     0,     0,     0,     0,  -114,
       0,     0,     0,     0,  -109,  -109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   338,  -114,   -75,   -75,
     -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   359,     0,     0,     0,     0,     0,     0,     0,  -114,
    -114,  -114,  -114,   -75,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -75,     0,     0,  -114,   -76,   -76,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,
       0,   338,  -114,     0,     0,     0,   -77,   -77,   -77,   -77,
     -76,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -76,     0,
       0,   -77,   -78,   -78,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,     0,     0,     0,     0,   -77,
       0,     0,     0,   -68,   -68,   115,   116,   -78,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -78,     0,     0,   -68,   -70,
     -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,     0,     0,   -68,     0,     0,     0,
     -72,   -72,   -72,   -72,   -70,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -70,     0,     0,   -72,   -74,   -74,   -74,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,     0,   -72,     0,     0,     0,   -75,   -75,   -75,
     -75,   -74,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     403,     0,     0,     0,     0,     0,     0,     0,     0,   -74,
     -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
     -75,   -75,   -75,   -75,   -75,   -71,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,   -62,   -62,   105,   106,   107,
     108,   109,   110,   -71,     0,     0,   -75,  -114,  -114,  -114,
    -114,     0,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
     -73,   -73,   -73,   -73,   -75,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -62,   -62,   -58,   -58,   105,   106,   107,
     108,   109,   110,     0,     0,   -73,     0,     0,     0,   382,
    -114,     0,     0,     0,     0,   -58,     0,     0,     0,   -67,
     -67,   115,   116,   -73,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,   -58,     0,     0,     0,     0,     0,     0,
     -69,   -69,   -69,   -69,   -67,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -67,     0,     0,   -69,  -109,  -109,  -109,  -109,
       0,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,     0,
       0,     0,     0,   -69,     0,     0,     0,   -76,   -76,   -76,
     -76,  -109,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,     0,   -77,   -77,   -77,   -77,  -109,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,     0,     0,     0,     0,     0,   -78,   -78,   -78,   -78,
     -76,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,     0,     0,   -68,   -68,   115,   116,   -77,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -78,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,     0,     0,   -72,   -72,   -72,   -72,   -68,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,
       0,     0,     0,     0,   -74,   -74,   -74,   -74,   -70,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,
       0,     0,   -71,   -71,   -71,   -71,   -72,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,
       0,     0,     0,   -75,   -75,   -75,   -75,   -74,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,
       0,   -73,   -73,   -73,   -73,   -71,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,     0,     0,     0,     0,     0,     0,
       0,     0,   -67,   -67,   115,   116,   -75,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,     0,
     -69,   -69,   -69,   -69,   -73,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
       0,  -109,  -109,  -109,  -109,   -67,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,     0,     0,     0,     0,     0,  -114,
    -114,  -114,  -114,   -69,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,     0,     0,     0,     0,     0,     0,     0,
    -114,  -114,  -114,  -114,  -109,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,     0,     0,     0,     0,     0,     0,
    -114,    80,     0,     0,     0,  -114,  -114,  -114,  -114,  -114,
       0,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,     0,
       0,     0,   414,     0,  -114,  -114,  -114,  -114,     0,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -114,    80,  -114,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,     0,     0,   414,   -77,   -77,   -77,
     -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,     0,     0,     0,     0,     0,     0,   -78,   -78,   -78,
     -78,   -76,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,     0,     0,   -68,   -68,   115,   116,   -77,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,     0,
       0,     0,     0,     0,   -70,   -70,   -70,   -70,   -78,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,     0,
       0,   -72,   -72,   -72,   -72,   -68,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -70,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,   -72,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,   -74,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,     0,     0,     0,     0,   -73,   -73,   -73,   -73,   -71,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,     0,     0,     0,     0,   -67,   -67,   115,   116,   -75,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,
       0,     0,   -69,   -69,   -69,   -69,   -73,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,     0,
       0,     0,  -109,  -109,  -109,  -109,   -67,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,   -60,   -60,   105,   106,   107,
     108,   109,   110,   -69,   -62,   -62,   105,   106,   107,   108,
     109,   110,     0,     0,     0,   -60,     0,     0,     0,     0,
       0,     0,     0,  -109,   -62,   -62,   -62,   105,   106,   107,
     108,   109,   110,   -60,     0,     0,     0,     0,     0,     0,
       0,     0,   -62,   -75,   -75,   -75,   -75,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   435,     0,     0,     0,
       0,     0,     0,   -62,   -76,   -76,   -76,   -76,   -75,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,     0,     0,     0,     0,   -77,   -77,   -77,   -77,   -76,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,     0,
       0,     0,     0,     0,     0,     0,   -78,   -78,   -78,   -78,
     -77,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,     0,     0,     0,     0,     0,   -68,   -68,   115,
     116,   -78,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,     0,     0,     0,     0,     0,     0,   -70,   -70,
     -70,   -70,   -68,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,     0,     0,     0,     0,     0,     0,     0,     0,   -72,
     -72,   -72,   -72,   -70,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,     0,     0,
     -74,   -74,   -74,   -74,   -72,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,     0,     0,     0,     0,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -74,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,     0,     0,     0,
       0,     0,   -75,   -75,   -75,   -75,   -71,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,
       0,     0,     0,   -73,   -73,   -73,   -73,   -75,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
       0,     0,     0,     0,   -67,   -67,   115,   116,   -73,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,   -67,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,
       0,     0,     0,     0,     0,     0,  -109,  -109,  -109,  -109,
     -69,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -109
};

static const yytype_int16 yycheck[] =
{
       0,    26,     0,    40,    54,   203,     6,    91,     6,    85,
      86,   183,   334,    50,    69,    16,    17,    17,   338,   204,
       0,    97,    85,    16,    17,    25,     6,     4,     5,     7,
       7,    16,    17,    10,    97,    85,   234,    17,     7,     1,
     360,    16,    17,    80,    81,    25,     7,    84,    85,    86,
     235,    36,   128,    54,    55,     7,    93,    16,    17,    52,
      85,    36,   382,    25,    26,    27,    28,   265,    85,    54,
      85,    36,    97,     1,     0,    85,    53,    36,    52,    54,
      97,   266,    97,   159,   121,    85,     7,    85,   410,    54,
       7,   128,    54,    55,   414,    54,   159,    25,    26,    27,
      28,    16,    17,    16,    17,    16,    17,    56,   145,   159,
     160,     4,     5,    36,     7,   287,   314,    10,    56,    12,
      53,   158,   159,    36,   161,    36,    54,    55,   178,   179,
     315,    54,     4,     5,   159,     7,    16,    17,    10,    54,
      12,    54,   159,    54,   159,    53,   201,    16,    17,   159,
     187,     4,     5,   208,     7,    53,    36,    10,    53,   159,
      53,   159,    36,   200,    53,     1,    53,    36,     4,     5,
      53,     7,    16,    17,    10,    53,    12,   232,    53,    15,
      54,    53,     4,     5,   239,     7,    16,    17,    10,    25,
      26,    27,    28,    29,   231,    31,    32,    33,    34,    35,
      53,    37,    38,    39,    40,    41,    36,    57,   263,    52,
      54,    55,    52,    16,    17,   270,    52,    53,    16,    17,
      56,    57,    54,    55,    54,   262,    36,     4,     5,    52,
       7,    53,    52,    10,    36,    12,    52,     4,     5,     7,
       7,    16,    17,    10,    54,    12,     7,   284,    15,    52,
       4,     5,    54,     7,    52,   453,    10,   312,    12,    54,
     344,   345,    36,    54,   319,    54,    33,    34,    35,   454,
      37,    38,    39,    40,   311,   473,    53,    52,     4,     5,
      54,     7,   366,   367,    10,    54,    53,    54,    36,   474,
       4,     5,    54,     7,   331,   493,    10,    54,    12,    53,
      36,   338,    36,   340,   388,   389,    54,    16,    17,   494,
     347,     4,     5,    36,     7,     4,     5,    10,     7,    12,
      54,    10,   359,   360,    54,   362,   524,    53,    36,   405,
     406,    54,   369,   409,    36,    54,   420,   421,    54,    53,
     525,    36,   405,    52,   381,   382,   409,   384,    52,    53,
       4,     5,    54,     7,   391,   405,    10,    54,    12,    54,
      53,    16,    17,    36,    53,    36,   403,   404,   405,   406,
       4,     5,   409,     7,    16,    17,    10,   414,    12,   416,
     405,    54,    52,    54,   409,    52,   423,    52,   405,    52,
     405,    36,   409,    54,   409,   405,    54,    52,   435,    53,
       4,     5,   439,     7,    52,   405,    10,   405,    12,    54,
       7,   448,    54,    55,    53,    36,    53,     4,     5,    53,
       7,    54,    55,    10,    53,    12,   502,    54,    55,    50,
      53,   468,    54,    37,    38,    39,    40,     4,     5,    53,
       7,    16,    17,    10,    53,    12,    53,    68,    53,    53,
      53,   488,    53,    16,    17,    53,    16,    17,    53,    80,
      81,     4,     5,    84,     7,   502,    53,    10,    89,    12,
      53,    92,    93,    54,    55,    96,    16,    17,    54,    54,
      55,    53,   519,   104,    16,    17,    53,    16,    17,    52,
     111,   567,   568,   114,    54,    55,   117,    54,    55,   120,
       4,     5,    53,     7,   567,   568,    10,    53,    12,    53,
      53,    52,    54,    55,    54,    55,    53,   567,   568,    54,
      52,   597,   598,    53,   145,    54,    55,   148,     8,     9,
     567,   568,   569,   154,   597,   598,    53,   158,    16,    17,
     161,    52,   567,   568,    52,   166,    53,   597,   598,    53,
     567,   568,   567,   568,    16,    17,    53,   567,   568,    53,
     597,   598,    53,    16,    17,    53,   187,   567,   568,   567,
     568,   192,   597,   598,    16,    17,    54,    55,    53,   200,
     597,   598,   597,   598,    54,    55,   207,   597,   598,    54,
      55,   202,    54,    55,    16,    17,    36,   597,   598,   597,
     598,    54,   223,     4,     5,    36,     7,    16,    17,    10,
     231,    12,    54,    55,    36,    54,    55,   238,    11,    12,
      13,    14,   233,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    54,   254,    16,    17,     1,    54,    55,     4,
       5,   262,     7,    52,    36,    10,    36,    12,   269,    52,
      15,    36,    53,   264,    36,    54,    55,    16,    17,    52,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    52,    37,    38,    39,    40,    41,    36,     4,     5,
      52,     7,   303,    54,    10,    54,    12,    52,    53,    15,
     311,    56,    57,     4,     5,    54,     7,   318,    54,    10,
      57,    12,   313,    54,    16,    17,    54,    33,    34,    35,
     331,    37,    38,    39,    40,     4,     5,   338,     7,   340,
      54,    10,   343,    12,    54,   346,   347,    53,    36,   350,
      36,   352,   353,   354,   355,    54,    55,   358,   359,   360,
      52,   362,    53,    36,   365,   356,    36,   368,   369,    16,
      17,   372,    54,   374,   375,   376,   377,    54,    55,   380,
     381,   382,    54,   384,    53,    36,   387,   378,    54,   390,
     391,    36,    54,   394,    54,   396,   397,   398,   399,    16,
      17,   402,   403,   404,    54,    50,    54,    54,    55,   400,
      54,    16,    17,   414,    54,   416,    16,    17,   419,    16,
      17,   422,   423,    16,    17,   426,    54,   428,   429,   430,
     431,    36,    54,   434,   435,    80,    81,    54,   439,    84,
      54,   432,    36,    16,    17,    16,    17,   448,    93,    54,
     451,    16,    17,    54,    54,    55,   457,    54,    55,   450,
       6,    54,    55,    16,    17,   456,    57,   468,    16,    17,
     471,    36,    54,    55,     4,     5,   477,     7,    54,   470,
      10,    54,    12,    54,    55,   476,    54,   488,    36,    54,
     491,    16,    17,    54,    16,    17,   497,    16,    17,   490,
     145,    54,    55,    16,    17,   496,    54,    37,    38,    39,
      40,    36,    54,   158,    36,    54,   161,    36,   519,    16,
      17,   522,    54,    53,    16,    17,    36,   528,    36,    54,
     521,     4,     5,    36,     7,    54,   527,    10,   539,    12,
      54,    54,   187,    54,    36,    16,    17,   192,    54,   550,
     541,    25,   543,    16,    17,   200,    54,    54,    55,    54,
     561,   552,   207,   554,    37,    38,    39,    40,   569,    54,
      16,    17,   563,    36,   565,   576,    16,    17,   223,    54,
      53,    52,    16,    17,    16,    17,   231,   578,    36,   580,
      36,    54,    36,   238,    54,    55,    36,    36,    16,    17,
      54,     1,    36,    54,     4,     5,   409,     7,    54,   254,
      10,    54,    12,    54,    54,    15,    54,   262,    54,    55,
      54,    54,    54,    -1,   269,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    54,    37,    38,    39,
      40,    41,    -1,     4,     5,    -1,     7,    16,    17,    10,
      -1,    12,    52,    53,    15,    -1,    56,    57,   303,    16,
      17,    16,    17,    16,    17,    -1,   311,    16,    17,    -1,
      16,    17,    -1,   318,    16,    17,    37,    38,    39,    40,
      16,    17,    16,    17,    -1,    54,   331,    16,    17,    16,
      17,    -1,    53,   338,    -1,   340,    -1,    54,    -1,    54,
      -1,    54,   347,    16,    17,    54,    52,   352,   353,   354,
     355,    -1,    54,   358,   359,   360,    -1,   362,    54,    -1,
      54,    -1,     0,    36,   369,    54,    -1,    54,    -1,   374,
     375,   376,   377,    -1,    -1,   380,   381,   382,    -1,   384,
      16,    17,    -1,    16,    17,    -1,   391,    25,    26,    27,
      28,   396,   397,   398,   399,    -1,    38,   402,   403,   404,
      16,    17,    -1,    45,    46,    -1,    48,    -1,    50,   414,
      -1,   416,    -1,    -1,    16,    17,    52,    -1,   423,    52,
      16,    17,    -1,   428,   429,   430,   431,    16,    17,   434,
     435,    16,    17,    -1,   439,    -1,    52,    -1,    80,    81,
      36,    -1,    84,   448,    16,    17,   451,    36,    11,    12,
      52,    93,   457,    16,    17,    18,    19,    20,    21,    22,
      23,    16,    17,   468,    36,    -1,   471,    52,    16,    17,
      16,    17,   477,    36,    -1,    -1,     4,     5,    -1,     7,
      -1,    36,    10,   488,    12,    -1,   491,    15,    36,    -1,
      36,    54,   497,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    12,    -1,   145,    15,    33,    34,    35,    -1,    37,
      38,    39,    40,     0,   519,    -1,   158,   522,    -1,   161,
      -1,    -1,    -1,   528,    52,    53,    37,    38,    39,    40,
      16,    17,    18,    19,    20,    21,    22,    23,    25,    26,
      27,    28,    53,     1,    -1,   187,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    12,   197,   198,    15,   200,    25,
      26,    27,    28,    -1,   569,   207,    52,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    -1,   228,   229,    -1,   231,
      -1,    -1,    -1,    -1,    52,    53,   238,    -1,    56,    57,
      -1,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    16,    17,   259,   260,    -1,
     262,    -1,     1,    -1,    -1,     4,     5,   269,     7,    -1,
      -1,    10,    -1,    12,    -1,    36,    15,    -1,    -1,    -1,
     282,    -1,    -1,   285,    54,    55,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    50,    37,    38,
      39,    40,    41,    -1,    -1,    -1,   308,   309,    -1,   311,
      16,    17,    -1,    52,    53,    -1,   318,    56,    57,    16,
      17,    18,    19,    20,    21,    22,    23,    80,    81,   331,
      36,    84,    -1,    16,    17,    -1,   338,    -1,   340,    -1,
      93,     4,     5,    -1,     7,   347,    -1,    10,    -1,    12,
     352,    -1,    15,    36,    -1,    52,   358,   359,   360,     0,
     362,    -1,     4,     5,    -1,     7,    -1,   369,    10,    -1,
      12,    -1,   374,    15,    37,    38,    39,    40,   380,   381,
     382,    -1,   384,    -1,    25,    26,    27,    28,    -1,   391,
      53,     0,   145,    -1,   396,    37,    38,    39,    40,    -1,
     402,   403,   404,     0,    -1,   158,    -1,    -1,   161,    -1,
      -1,    53,   414,    -1,   416,     0,    25,    26,    27,    28,
      -1,   423,    -1,    -1,    -1,     0,   428,    -1,    25,    26,
      27,    28,   434,   435,   187,    -1,    -1,   439,    -1,   192,
      25,    26,    27,    28,    16,    17,   448,   200,    -1,   451,
      25,    26,    27,    28,   207,   457,     0,     4,     5,    -1,
       7,    -1,    -1,    10,    36,    12,   468,    -1,    15,   471,
     223,    -1,    -1,    -1,    -1,   477,    16,    17,   231,    -1,
      -1,    25,    26,    27,    28,   238,   488,    -1,    -1,   491,
      37,    38,    39,    40,    -1,   497,    36,    -1,    -1,    -1,
      -1,   254,    50,    -1,     4,     5,    53,     7,    -1,   262,
      10,    -1,    12,    -1,    -1,    15,   269,   519,    -1,    -1,
     522,    -1,    -1,    -1,    -1,    -1,   528,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    -1,    84,    37,    38,    39,
      40,     4,     5,    -1,     7,    93,    -1,    10,    -1,    12,
     303,    -1,    15,    53,    -1,    -1,    -1,    -1,   311,    -1,
      -1,    -1,    -1,    -1,    -1,   318,    -1,   569,    -1,   117,
      33,    34,    35,    -1,    37,    38,    39,    40,   331,    -1,
      -1,    -1,    -1,    -1,    -1,   338,    -1,   340,    -1,    52,
      53,    -1,    -1,    -1,   347,    -1,    -1,   145,    -1,   352,
     353,   354,   355,    -1,    -1,   358,   359,   360,    -1,   362,
     158,    -1,    -1,   161,    -1,    -1,   369,    -1,    -1,    -1,
      -1,   374,   375,   376,   377,    -1,    -1,   380,   381,   382,
      -1,   384,    -1,    -1,    -1,    -1,    -1,    -1,   391,   187,
      -1,    -1,    -1,   396,   397,   398,   399,    -1,    -1,   402,
     403,   404,   200,    -1,    -1,    -1,    -1,    -1,    -1,   207,
      -1,   414,    -1,   416,    -1,    -1,    -1,    -1,    -1,    -1,
     423,    -1,    -1,    -1,    -1,   428,   429,   430,   431,    -1,
      -1,   434,   435,   231,    -1,    -1,   439,    -1,    -1,    -1,
     238,    -1,    -1,    -1,    -1,   448,    -1,    -1,   451,    -1,
      11,    12,    13,    14,   457,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   262,   468,    -1,    -1,   471,    -1,
      -1,   269,     1,    -1,   477,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    12,    -1,   488,    15,    -1,   491,    -1,
      -1,    -1,    53,    54,   497,    -1,    25,    26,    27,    28,
      29,    50,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,   311,    -1,    -1,   519,    -1,    -1,   522,
     318,    -1,    -1,    52,    53,   528,    -1,    56,    57,    -1,
      -1,    80,    81,   331,    -1,    84,    -1,    -1,    -1,    -1,
     338,    -1,   340,    -1,    93,    -1,    -1,    -1,    -1,   347,
      -1,    -1,    -1,    -1,   352,   353,   354,   355,    -1,    -1,
     358,   359,   360,    -1,   362,   114,   569,    -1,    -1,    -1,
      -1,   369,    -1,    -1,    -1,    -1,   374,   375,   376,   377,
      -1,    -1,   380,   381,   382,    -1,   384,    -1,    -1,    -1,
      -1,    -1,    -1,   391,    -1,    -1,   145,    -1,   396,   397,
     398,   399,    -1,    -1,   402,   403,   404,    -1,    -1,   158,
      -1,    -1,   161,    -1,    -1,    -1,   414,    -1,   416,    -1,
      -1,    -1,    -1,    -1,    -1,   423,    -1,    -1,    -1,    -1,
     428,   429,   430,   431,    -1,    -1,   434,   435,   187,    -1,
      -1,   439,    16,    17,    18,    19,    20,    21,    22,    23,
     448,   200,    -1,   451,    -1,    11,    12,    50,   207,   457,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
     468,    -1,    -1,   471,    -1,    68,    -1,    -1,    52,   477,
      36,    -1,   231,    -1,    -1,    -1,    -1,    80,    81,   238,
     488,    84,    -1,   491,    -1,    -1,    -1,    -1,    54,   497,
      93,    -1,    -1,    -1,     4,     5,    -1,     7,    -1,    -1,
      10,   104,    12,   262,    -1,    15,    -1,    -1,    -1,    -1,
     269,   519,    -1,    -1,   522,    -1,    -1,   120,    -1,    -1,
     528,    -1,    -1,    33,    34,    35,    -1,    37,    38,    39,
      40,    -1,    -1,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    12,   145,    53,    15,   148,    -1,    -1,    -1,    -1,
      -1,   154,   311,    -1,    -1,   158,    -1,    -1,   161,   318,
      -1,   569,    33,    34,    35,    -1,    37,    38,    39,    40,
      -1,    -1,   331,    -1,    -1,    -1,    -1,    -1,    -1,   338,
      -1,   340,    53,    -1,   187,    -1,    -1,    -1,   347,    -1,
      -1,    -1,    -1,   352,   353,   354,    -1,   200,    -1,   358,
     359,   360,    -1,   362,   207,    -1,    -1,    -1,    -1,    -1,
     369,    -1,    -1,    -1,    -1,   374,   375,   376,    -1,    -1,
      -1,   380,   381,   382,    -1,   384,    -1,    -1,   231,    -1,
      -1,    -1,   391,    -1,    -1,   238,    -1,   396,   397,   398,
      -1,    -1,    -1,   402,   403,   404,    -1,    -1,    -1,    -1,
       4,     5,    -1,     7,    -1,   414,    10,   416,    12,   262,
      -1,    15,    -1,    -1,   423,    -1,   269,    -1,    -1,   428,
     429,   430,    -1,    -1,    -1,   434,   435,    -1,    -1,    -1,
     439,    -1,    -1,    37,    38,    39,    40,     4,     5,   448,
       7,    -1,   451,    10,    -1,    12,    -1,    -1,   457,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   311,   468,
      -1,    -1,   471,    -1,    -1,   318,    -1,    -1,   477,    -1,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,   331,   488,
      -1,    -1,   491,    -1,    -1,   338,    53,   340,   497,    -1,
      -1,    -1,    50,    -1,   347,    -1,    -1,    -1,    -1,   352,
      -1,    -1,    -1,    -1,    -1,   358,   359,   360,    -1,   362,
     519,    -1,    -1,   522,    -1,    -1,   369,    -1,    -1,   528,
      -1,   374,    80,    81,    -1,    -1,    84,   380,   381,   382,
      -1,   384,    -1,    -1,    -1,    93,    -1,    -1,   391,    -1,
      -1,    -1,    -1,   396,    -1,    -1,    -1,    -1,    -1,   402,
     403,   404,    -1,   111,    -1,    -1,     4,     5,    -1,     7,
     569,   414,    10,   416,    12,    -1,    -1,    -1,    -1,    -1,
     423,    -1,    -1,    -1,    -1,   428,    -1,     4,     5,    -1,
       7,   434,   435,    10,    -1,    12,   439,   145,    15,    37,
      38,    39,    40,    -1,    -1,   448,    -1,    -1,   451,    -1,
     158,    -1,    -1,   161,   457,    53,    33,    34,    35,    -1,
      37,    38,    39,    40,    -1,   468,    -1,    -1,   471,    -1,
      -1,    -1,    -1,    -1,   477,    52,    53,    -1,    -1,   187,
      -1,    -1,    -1,    -1,    -1,   488,    -1,    -1,   491,    -1,
      -1,    -1,   200,    -1,   497,    -1,    -1,    -1,    50,   207,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   519,    -1,    -1,   522,
      -1,    -1,    -1,   231,    -1,   528,    -1,    -1,    80,    81,
     238,    -1,    84,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    93,    -1,    -1,     1,    -1,    -1,     4,     5,    53,
       7,    -1,    -1,    10,   262,    12,     4,     5,    15,     7,
      -1,   269,    10,    -1,    12,    -1,   569,    15,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    33,    34,    35,    -1,    37,
      38,    39,    40,   145,    -1,    52,    53,    -1,    -1,    56,
      57,    -1,    -1,   311,    52,    53,   158,    -1,    -1,   161,
     318,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,   331,    -1,    -1,    -1,    -1,    -1,    -1,
     338,    36,   340,    -1,    -1,   187,    -1,    -1,    -1,   347,
      -1,    -1,    -1,    -1,   352,   353,    -1,    50,   200,    54,
     358,   359,   360,    -1,   362,    -1,    -1,    -1,    -1,    -1,
      -1,   369,    -1,    -1,    -1,    68,   374,   375,    -1,    -1,
      -1,    -1,   380,   381,   382,    -1,   384,    80,    81,   231,
      -1,    84,    -1,   391,    -1,    -1,    -1,    -1,   396,   397,
      93,    -1,    -1,    -1,   402,   403,   404,    -1,    -1,    -1,
      -1,   104,    -1,    -1,    -1,    -1,   414,    -1,   416,    -1,
     262,    -1,    -1,    -1,    -1,   423,    -1,   120,    -1,    -1,
     428,   429,    -1,    -1,    -1,    -1,   434,   435,    -1,    -1,
      -1,   439,    16,    17,    18,    19,    20,    21,    22,    23,
     448,    -1,   145,   451,    -1,   148,    -1,    -1,    -1,   457,
      -1,   154,    36,    -1,    -1,   158,    -1,    -1,   161,   311,
     468,    -1,    -1,   471,    -1,    -1,    11,    12,    -1,   477,
      54,    16,    17,    18,    19,    20,    21,    22,    23,   331,
     488,    -1,    -1,   491,   187,    -1,   338,    -1,   340,   497,
      -1,    -1,    -1,    -1,    -1,   347,    -1,   200,    -1,    -1,
      -1,    -1,    -1,    50,   207,    -1,    -1,   359,   360,    54,
     362,   519,    -1,    -1,   522,    -1,    -1,   369,    -1,    -1,
     528,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   381,
     382,    -1,   384,    80,    81,   238,    -1,    84,    -1,   391,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,
      -1,   403,   404,    -1,    -1,    -1,    -1,    -1,    -1,   262,
      -1,   569,   414,    -1,   416,    -1,   269,    -1,    -1,    11,
      12,   423,    -1,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,   435,    -1,    -1,    -1,   439,    -1,     4,
       5,    -1,     7,    -1,    -1,    10,   448,    12,   145,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   311,    -1,
      -1,   158,    54,    55,   161,   318,   468,    -1,    33,    34,
      35,    -1,    37,    38,    39,    40,    -1,    -1,   331,    -1,
      -1,    -1,    -1,    -1,    -1,   338,   488,   340,    53,    -1,
     187,    -1,    -1,    -1,   347,    -1,    -1,    -1,    -1,   352,
      -1,    -1,    -1,   200,    -1,   358,   359,   360,    -1,   362,
     207,    -1,    -1,    -1,    -1,    -1,   369,   519,    -1,    -1,
      -1,   374,    -1,    -1,    -1,    -1,    -1,   380,   381,   382,
      -1,   384,    -1,    -1,   231,    -1,    -1,    -1,   391,    -1,
      -1,   238,    -1,   396,    -1,    -1,    -1,    11,    12,   402,
     403,   404,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,   414,    -1,   416,    -1,   262,    -1,   569,    -1,    -1,
     423,    -1,   269,    -1,    -1,   428,    -1,     4,     5,    -1,
       7,   434,   435,    10,    -1,    12,   439,    -1,    15,    -1,
      54,    55,    -1,    -1,    -1,   448,    -1,    -1,   451,    -1,
      -1,    -1,    50,    -1,   457,    -1,    33,    34,    35,    -1,
      37,    38,    39,    40,   311,   468,    -1,    -1,   471,    -1,
      -1,   318,    -1,    -1,   477,    52,    53,    -1,    -1,    -1,
      -1,    -1,    80,    81,   331,   488,    84,    -1,   491,    -1,
      -1,   338,    -1,   340,   497,    93,    -1,    -1,    -1,    -1,
     347,    -1,    -1,    -1,    -1,   352,    -1,    -1,    -1,    -1,
      -1,   358,   359,   360,    -1,   362,   519,    -1,    -1,   522,
      -1,    -1,   369,    -1,    -1,   528,    -1,   374,    -1,    -1,
      -1,    -1,    -1,   380,   381,   382,    -1,   384,    -1,    -1,
      -1,    -1,    -1,    -1,   391,    -1,    -1,   145,    -1,   396,
      -1,    -1,    -1,    -1,    -1,   402,   403,   404,    -1,    -1,
     158,    -1,    -1,   161,    -1,    -1,   569,   414,    -1,   416,
      -1,    -1,    -1,    -1,    -1,    -1,   423,    -1,    -1,    -1,
      -1,   428,    -1,    -1,    -1,    -1,    -1,   434,   435,   187,
      -1,    -1,   439,    16,    17,    18,    19,    20,    21,    22,
      23,   448,   200,    -1,   451,    -1,    11,    12,    50,   207,
     457,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,   468,    -1,    -1,   471,    -1,    -1,    -1,    -1,    -1,
     477,    54,    55,   231,    -1,    -1,    -1,    -1,    80,    81,
     238,   488,    84,    -1,   491,    -1,    -1,    -1,    -1,    54,
     497,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,     4,     5,   262,     7,    -1,    -1,    10,    -1,
      12,   269,   519,    15,    -1,   522,    -1,    -1,    -1,    -1,
      -1,   528,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,     4,     5,   145,     7,    -1,    -1,    10,    -1,    12,
      52,    53,    15,   311,    56,    57,   158,    -1,    -1,   161,
     318,    -1,   569,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,   331,    37,    38,    39,    40,    -1,    -1,
     338,    -1,   340,    -1,    -1,   187,    -1,    -1,    -1,   347,
      53,    -1,    -1,    -1,   352,    -1,    -1,    -1,   200,    -1,
     358,   359,   360,    -1,   362,   207,    -1,    -1,    -1,    -1,
      -1,   369,    -1,    -1,    -1,    -1,   374,    -1,    -1,    -1,
      -1,    -1,   380,   381,   382,    -1,   384,    -1,    -1,   231,
      -1,    -1,    -1,   391,    -1,    -1,   238,    -1,   396,    -1,
      -1,    -1,    -1,    -1,   402,   403,   404,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,   414,    -1,   416,    -1,
     262,    -1,    -1,    -1,    -1,   423,    -1,   269,    -1,    -1,
     428,    -1,     4,     5,    -1,     7,   434,   435,    10,    -1,
      12,   439,    -1,    15,    -1,    54,    55,    -1,    -1,    -1,
     448,    -1,    -1,   451,    -1,    -1,    -1,    50,    -1,   457,
      -1,    33,    34,    35,    -1,    37,    38,    39,    40,   311,
     468,    -1,    -1,   471,    -1,    -1,   318,    -1,    -1,   477,
      52,    53,    -1,    -1,    -1,    -1,    -1,    80,    81,   331,
     488,    84,    -1,   491,    -1,    -1,   338,    -1,   340,   497,
      93,    -1,    -1,    -1,    -1,   347,    -1,    -1,    -1,    -1,
     352,    -1,    -1,    -1,    -1,    -1,   358,   359,   360,    -1,
     362,   519,    -1,    -1,   522,    -1,    -1,   369,    -1,    -1,
     528,    -1,   374,    -1,    -1,    -1,    -1,    -1,   380,   381,
     382,    -1,   384,    -1,    -1,    -1,    -1,    -1,    -1,   391,
      -1,    -1,   145,    -1,   396,    -1,    -1,    -1,    -1,    -1,
     402,   403,   404,    -1,    -1,   158,    -1,    -1,   161,    -1,
      -1,   569,   414,    -1,   416,    -1,    -1,    -1,    -1,    -1,
      -1,   423,    -1,    -1,    -1,    -1,   428,    -1,    -1,    -1,
      -1,    -1,   434,   435,   187,    -1,    -1,   439,    16,    17,
      18,    19,    20,    21,    22,    23,   448,   200,    -1,   451,
      -1,    11,    12,    50,   207,   457,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,   468,    -1,    -1,   471,
      -1,    -1,    -1,    -1,    -1,   477,    54,    55,   231,    -1,
      -1,    -1,    -1,    80,    81,   238,   488,    84,    -1,   491,
      -1,    -1,    52,    -1,    -1,   497,    93,    -1,    -1,    -1,
      -1,    -1,     4,     5,    -1,     7,    -1,   104,    10,   262,
      12,    -1,    -1,    15,    -1,    -1,   269,   519,    -1,    -1,
     522,    -1,    -1,   120,    -1,    -1,   528,    29,    -1,    31,
      -1,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      16,    17,    18,    19,    20,    21,    22,    23,   145,    -1,
      52,    53,    -1,    -1,    56,    -1,    -1,    -1,   311,    -1,
      36,   158,    -1,    -1,   161,   318,    -1,   569,    -1,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,   331,    -1,
      -1,    -1,    -1,    -1,    -1,   338,    -1,   340,    -1,    50,
     187,    -1,    -1,    -1,   347,    -1,    -1,    -1,    -1,   352,
      -1,    -1,    -1,   200,    -1,   358,   359,   360,    54,   362,
      -1,    -1,    -1,    -1,    -1,    -1,   369,    -1,    -1,    80,
      81,   374,    -1,    84,    -1,    -1,    -1,   380,   381,   382,
      -1,   384,    93,    -1,   231,    -1,    -1,    -1,   391,    -1,
      -1,    -1,    -1,   396,    -1,    -1,    -1,    11,    12,   402,
     403,   404,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,   414,    -1,   416,    -1,   262,    -1,    -1,    -1,    -1,
     423,    -1,    -1,    -1,    -1,   428,    -1,    -1,    -1,    -1,
      -1,   434,   435,    -1,   145,    -1,   439,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,   448,    -1,   158,   451,    -1,
     161,    -1,    50,    -1,   457,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,   311,   468,    -1,    -1,   471,    -1,
      -1,    -1,    -1,    -1,   477,    -1,   187,    -1,    -1,    -1,
      -1,    -1,    80,    81,   331,   488,    84,    -1,   491,   200,
      -1,   338,    52,   340,   497,    93,    -1,    -1,    -1,    -1,
     347,    -1,    -1,    -1,    -1,   352,    -1,    -1,    -1,    -1,
      -1,   358,   359,   360,    -1,   362,   519,    -1,    -1,   522,
     231,    -1,   369,    -1,    -1,   528,    -1,   374,    -1,    -1,
      -1,    -1,    -1,   380,   381,   382,    -1,   384,    -1,    -1,
      -1,    -1,    -1,    -1,   391,    -1,    -1,   145,    -1,   396,
      -1,   262,    -1,    -1,    -1,   402,   403,   404,    -1,    -1,
     158,    -1,    -1,   161,    -1,    -1,   569,   414,    -1,   416,
      -1,    -1,    -1,    -1,    -1,    -1,   423,    -1,    -1,    50,
      -1,   428,    -1,    -1,    -1,    -1,    -1,   434,   435,   187,
      -1,    -1,   439,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     311,   448,   200,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,
     331,   468,    93,    -1,    -1,    -1,    -1,   338,    -1,   340,
      -1,    -1,    -1,   231,    -1,    -1,   347,    -1,    -1,    -1,
      -1,   488,    -1,    -1,    -1,    -1,    -1,    -1,   359,   360,
      -1,   362,    -1,    -1,    -1,    -1,    -1,    -1,   369,    -1,
      -1,    -1,    -1,    -1,   262,    -1,    -1,    -1,    -1,    -1,
     381,   382,   519,   384,   145,    -1,    -1,    -1,    -1,    -1,
     391,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,
     161,    -1,   403,   404,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,   414,    -1,   416,    -1,    -1,    -1,    -1,
      -1,    -1,   423,   311,    36,    -1,   187,    -1,    -1,    -1,
      -1,    -1,   569,    -1,   435,    -1,    -1,    -1,   439,   200,
      -1,    -1,    54,   331,    -1,    -1,    -1,   448,    -1,    -1,
     338,    -1,   340,    -1,    -1,     4,     5,    -1,     7,   347,
      -1,    10,    -1,    12,    -1,    -1,    15,   468,    -1,    -1,
     231,   359,   360,    -1,   362,    -1,    -1,    -1,    -1,    -1,
      -1,   369,    -1,    -1,    33,    34,    35,   488,    37,    38,
      39,    40,    -1,   381,   382,    -1,   384,    -1,    -1,    -1,
      -1,   262,    -1,   391,    53,    -1,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,   403,   404,    -1,   519,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   414,    -1,   416,    -1,
      -1,    11,    12,    13,    14,   423,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    54,    55,   435,    -1,    -1,
     311,   439,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
     448,     7,    -1,    -1,    10,    -1,    12,    -1,   569,    15,
     331,    -1,    -1,    53,    54,    55,    -1,   338,    -1,   340,
     468,    -1,    -1,    29,    -1,    31,   347,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,    -1,   359,   360,
     488,   362,    -1,    -1,    -1,    -1,    52,    53,   369,    -1,
      56,    -1,    -1,    -1,    -1,    -1,     4,     5,    -1,     7,
     381,   382,    10,   384,    12,    -1,    -1,    15,    -1,    -1,
     391,   519,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,   403,   404,    -1,    33,    34,    35,    -1,    37,
      38,    39,    40,   414,    -1,   416,    -1,    -1,    -1,    -1,
      -1,    -1,   423,    -1,    -1,    53,     1,    -1,    -1,     4,
       5,    54,     7,    -1,   435,    10,    -1,    12,   439,    -1,
      15,   569,    -1,    -1,    -1,    -1,    -1,   448,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,   468,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    52,    53,    -1,
      -1,    56,    57,    -1,    -1,    -1,    -1,   488,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    12,    54,    55,    15,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   519,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    52,    53,    -1,     1,
      56,    57,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      12,    -1,    -1,    15,    -1,    -1,    -1,    -1,   569,    -1,
      -1,    -1,    52,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      52,    53,    -1,     1,    56,    57,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    25,    26,    27,
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
      16,    17,    18,    19,    20,    21,    22,    23,    -1,     1,
      52,    53,     4,     5,    56,     7,    -1,    -1,    10,    -1,
      12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    54,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,     1,
      52,    53,     4,     5,    56,     7,    -1,    -1,    10,    -1,
      12,    -1,    -1,    15,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    25,    26,    27,    28,    29,    54,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,
      52,    53,    15,    54,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    -1,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    -1,    -1,    56,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    11,    12,    53,    54,    55,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    54,    55,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    11,    12,    -1,    54,    55,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    54,    55,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,
      12,    13,    14,    36,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    36,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    53,    54,    -1,    -1,    -1,    11,    12,    13,    14,
      36,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    36,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    11,    12,    13,    14,    36,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    36,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      11,    12,    13,    14,    36,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    36,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    11,    12,    13,
      14,    36,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    11,    12,    13,    14,    36,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    54,    -1,    -1,    36,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      11,    12,    13,    14,    54,    16,    17,    18,    19,    20,
      21,    22,    23,    54,    55,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    36,    -1,    -1,    -1,    53,
      54,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    11,
      12,    13,    14,    54,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    36,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    36,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    11,    12,    13,
      14,    36,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,    54,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      54,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    54,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,    54,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    14,    54,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    54,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    54,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    14,    54,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    14,    54,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    54,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    54,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    14,    54,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    11,
      12,    13,    14,    54,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    54,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    36,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    53,    -1,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    36,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    53,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
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
      19,    20,    21,    22,    23,    16,    17,    18,    19,    20,
      21,    22,    23,    52,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    36,    16,    17,    18,    19,    20,
      21,    22,    23,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    11,    12,    13,    14,    36,    16,
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
      -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      36,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    25,    26,    27,    28,    59,    60,    61,    62,    63,
      64,    67,     0,    61,    52,     7,    53,    65,     1,    63,
      67,    68,    69,     7,    54,    55,    66,    69,    56,    70,
      71,     1,     4,     5,     7,    10,    12,    15,    29,    31,
      32,    33,    34,    35,    37,    38,    39,    40,    41,    52,
      53,    62,    70,    72,    73,    74,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   103,   106,
      53,    53,    87,   106,    53,    94,    53,    52,    81,    53,
      53,    53,    53,    53,    94,    94,    53,    94,    81,    57,
      74,    52,    16,    17,    89,    18,    19,    20,    21,    22,
      23,    90,    11,    12,    91,    13,    14,    92,    83,    93,
      89,    24,    81,   104,   105,    81,    81,    74,    79,    52,
       7,   106,     8,     9,   102,   102,   106,    81,   106,    70,
      75,    76,    77,    78,    79,    36,    54,    83,    88,    93,
      84,    85,    86,    83,    88,    93,    81,    54,    55,    54,
      30,    79,    54,    54,    54,    54,    36,    81,    83,    93,
      83,    93,    81,    74,    74,    81,   106,    54,    30,    54,
      54,    74,    74,    56,    63,    67,     7,    53,     4,     5,
       7,    10,    12,    33,    34,    35,    37,    38,    39,    40,
      53,    82,    83,    84,    85,    86,    87,    88,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   103,   106,     4,
       5,     7,    10,    12,    33,    34,    35,    37,    38,    39,
      40,    53,    82,    83,    84,    85,    86,    87,    88,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   103,   106,
       4,     5,     7,    10,    12,    33,    34,    35,    37,    38,
      39,    40,    53,    82,    83,    84,    85,    86,    87,    88,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   103,
     106,     1,    29,    31,    32,    41,    52,    56,    62,    63,
      70,    76,    77,    78,    79,    80,    81,    52,    81,     4,
       5,     7,    10,    12,    33,    34,    35,    37,    38,    39,
      40,    53,    82,    83,    84,    85,    86,    87,    88,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   103,   106,
       7,    36,    52,    81,    71,    52,     7,    81,    53,     7,
      53,    87,   106,    53,    53,    53,    53,    53,    94,    94,
      53,    81,    89,    90,    91,    92,    83,    93,    89,    24,
      53,     7,    53,    87,   106,    53,    53,    53,    53,    53,
      94,    94,    53,    81,    89,    90,    91,    92,    83,    93,
      89,    24,    53,     7,    53,    87,   106,    53,    53,    53,
      53,    53,    94,    94,    53,    81,    89,    90,    91,    92,
      83,    93,    89,    24,    53,    94,    53,    52,    81,    94,
      71,    52,    52,    52,    53,     7,    53,    87,   106,    53,
      53,    53,    53,    53,    94,    94,    53,    81,    89,    90,
      91,    92,    83,    93,    89,    24,    81,    52,    72,    36,
     104,    81,   106,   102,   102,   106,    81,   106,    36,    54,
      83,    88,    93,    84,    85,    86,    83,    88,    93,    81,
     104,    81,   106,   102,   102,   106,    81,   106,    36,    54,
      83,    88,    93,    84,    85,    86,    83,    88,    93,    81,
     104,    81,   106,   102,   102,   106,    81,   106,    36,    54,
      83,    88,    93,    84,    85,    86,    83,    88,    93,    81,
      81,    74,    79,    52,    70,    75,    76,    77,    78,    79,
      72,   104,    81,   106,   102,   102,   106,    81,   106,    36,
      54,    83,    88,    93,    84,    85,    86,    83,    88,    93,
      81,    54,    57,    81,    54,    54,    54,    54,    54,    36,
      81,    83,    93,    83,    93,    54,    54,    54,    54,    54,
      36,    81,    83,    93,    83,    93,    54,    54,    54,    54,
      54,    36,    81,    83,    93,    83,    93,    54,    30,    79,
      57,    54,    54,    54,    54,    54,    36,    81,    83,    93,
      83,    93,    54,   106,    54,   106,    54,   106,    54,    74,
      74,    81,   106,    54,    54,    54,    54,    30,    54,    54,
      74,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    62,    63,    65,
      66,    64,    67,    67,    67,    67,    68,    68,    68,    68,
      69,    71,    70,    72,    72,    73,    73,    74,    74,    74,
      74,    74,    74,    74,    74,    75,    75,    75,    75,    75,
      76,    76,    76,    76,    77,    78,    79,    79,    80,    80,
      81,    81,    81,    81,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    83,    84,    84,    85,
      85,    86,    86,    87,    87,    87,    87,    87,    87,    88,
      89,    89,    90,    90,    90,    90,    90,    90,    91,    91,
      92,    92,    93,    93,    93,    93,    93,    94,    95,    96,
      97,    98,    99,    99,   100,   101,   101,   102,   102,   103,
     104,   104,   105,   105,   106
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     2,     0,
       0,     8,     1,     1,     1,     1,     3,     1,     0,     1,
       1,     0,     4,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     7,     3,     5,     7,     3,     2,     1,     2,     3,
       3,     1,     1,     1,     2,     2,     3,     3,     3,     3,
       4,     4,     4,     4,     1,     3,     1,     3,     1,     3,
       1,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     4,     2,
       2,     6,     1,     1,     4,     4,     4,     1,     1,     4,
       1,     0,     3,     1,     1
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
#line 178 "anasin.y"
    {
      // printf("program\n");
      // abstract_tree = $1;
      // tree_node* create_ast_node(rules_types rule, char* type, char* value, struct tree_node* next, struct tree_node* child) 
      (yyval.nt_node) = create_ast_node(PROGRAM, NULL, NULL, NULL, (yyvsp[0].nt_node));
      abstract_tree = (yyval.nt_node);
    }
#line 3564 "anasin.tab.c"
    break;

  case 3: /* declaration-list: declaration-list declaration  */
#line 189 "anasin.y"
    {
      // printf("declaration-list  ->  declaration-list declaration\n");
      (yyval.nt_node) = create_ast_node(DECLARATION_LIST, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3574 "anasin.tab.c"
    break;

  case 4: /* declaration-list: declaration  */
#line 196 "anasin.y"
    {
      // printf("declaration-list  ->  declaration\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3583 "anasin.tab.c"
    break;

  case 5: /* declaration: var-declaration  */
#line 203 "anasin.y"
    {
      // printf("declaration  ->  var-declaration\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3592 "anasin.tab.c"
    break;

  case 6: /* declaration: func-declaration  */
#line 209 "anasin.y"
    {
      // printf("declaration  ->  func-declaration\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3601 "anasin.tab.c"
    break;

  case 7: /* var-declaration: variable ';'  */
#line 216 "anasin.y"
    {
      // printf("var declaration  ->  variable ;\n");
      (yyval.nt_node) = (yyvsp[-1].nt_node);
    }
#line 3610 "anasin.tab.c"
    break;

  case 8: /* variable: type-specifier ID  */
#line 223 "anasin.y"
    { 
      // printf("variable  ->  type-specifier %s\n", $2);
      // NÃO PRECISA CRIAR NÓ NO TYPE-SPECIFIER, SÓ CHAMAR A TT_NAME DA UNION 
      (yyval.nt_node) = create_ast_node(VARIABLE, (char*) (yyvsp[-1].tt_name), (yyvsp[0].tt_name), NULL, NULL);
      if(whitin_parameters) insert_into_symbol_table((yyvsp[0].tt_name), (char*) (yyvsp[-1].tt_name), "parameter");
      else insert_into_symbol_table((yyvsp[0].tt_name), (char*) (yyvsp[-1].tt_name), "variable");
    }
#line 3622 "anasin.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 233 "anasin.y"
    {
      whitin_parameters = 1;
      global_scope_counter++;
      aux_scope = current_scope_seq;
      current_scope_seq = global_scope_counter;
    }
#line 3633 "anasin.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 240 "anasin.y"
    {
      whitin_parameters = 0;
      global_scope_counter--;
      current_scope_seq = aux_scope;
    }
#line 3643 "anasin.tab.c"
    break;

  case 11: /* func-declaration: type-specifier ID '(' $@1 parameter-list ')' $@2 compound-stmt  */
#line 246 "anasin.y"
    {
      // printf("func-declaration  ->  type-specifier %s ( parameters ) compount-stmt\n", $2);
      (yyval.nt_node) = create_ast_node(FUNC_DECLARATION, (yyvsp[-7].tt_name), (yyvsp[-6].tt_name), NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[0].nt_node);
      aux_scope = current_scope_seq;
      current_scope_seq = current_scope->scope_seq;
      insert_into_symbol_table((yyvsp[-6].tt_name), (yyvsp[-7].tt_name), "function");
      current_scope_seq = aux_scope;
      perform_main_validation((yyvsp[-6].tt_name));
    }
#line 3658 "anasin.tab.c"
    break;

  case 12: /* type-specifier: TYPEINT  */
#line 259 "anasin.y"
    {
      // printf("type-specifier  ->  %s\n", $1);
      // $$ = create_ast_node(TYPE_SPECIFIER, $1, NULL, NULL, NULL);
      (yyval.tt_name) = (yyvsp[0].tt_name);
    }
#line 3668 "anasin.tab.c"
    break;

  case 13: /* type-specifier: TYPEFLOAT  */
#line 266 "anasin.y"
    {
      // printf("type-specifier  ->  %s\n", $1);
      // $$ = create_ast_node(TYPE_SPECIFIER, $1, NULL, NULL, NULL);
      (yyval.tt_name) = (yyvsp[0].tt_name);
    }
#line 3678 "anasin.tab.c"
    break;

  case 14: /* type-specifier: TYPEELEM  */
#line 273 "anasin.y"
    {
      // printf("type-specifier  ->  %s\n", $1);
      // $$ = create_ast_node(TYPE_SPECIFIER, $1, NULL, NULL, NULL);
      (yyval.tt_name) = (yyvsp[0].tt_name);
    }
#line 3688 "anasin.tab.c"
    break;

  case 15: /* type-specifier: TYPESET  */
#line 280 "anasin.y"
    {
      // printf("type-specifier  ->  %s\n", $1);
      // $$ = create_ast_node(TYPE_SPECIFIER, $1, NULL, NULL, NULL);
      (yyval.tt_name) = (yyvsp[0].tt_name);
    }
#line 3698 "anasin.tab.c"
    break;

  case 16: /* parameter-list: parameter-list ',' parameter  */
#line 295 "anasin.y"
    {
      // printf("parameter-list  ->  parameter-list , parameter\n");
      (yyval.nt_node) = create_ast_node(PARAMETER_LIST, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3708 "anasin.tab.c"
    break;

  case 17: /* parameter-list: parameter  */
#line 302 "anasin.y"
    {
      // printf("parameter-list  ->  parameter\n");
      (yyval.nt_node) = create_ast_node(PARAMETER_LIST, NULL, NULL, NULL, (yyvsp[0].nt_node));
      // $$ = $1;
    }
#line 3718 "anasin.tab.c"
    break;

  case 18: /* parameter-list: %empty  */
#line 309 "anasin.y"
    {
      // $$ = NULL;
      (yyval.nt_node) = create_ast_node(EMPTY_PARAMETER_LIST, NULL, NULL, NULL, NULL);
    }
#line 3727 "anasin.tab.c"
    break;

  case 19: /* parameter-list: error  */
#line 315 "anasin.y"
    {
      yyerrok;
      (yyval.nt_node) = NULL;
    }
#line 3736 "anasin.tab.c"
    break;

  case 20: /* parameter: variable  */
#line 322 "anasin.y"
    {
      // printf("parameter  ->  variable\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3745 "anasin.tab.c"
    break;

  case 21: /* $@3: %empty  */
#line 329 "anasin.y"
    {
      global_scope_counter++;
      aux_scope = current_scope_seq;
      current_scope_seq = global_scope_counter;
      current_scope = create_scope(current_scope, global_scope_counter);
    }
#line 3756 "anasin.tab.c"
    break;

  case 22: /* compound-stmt: '{' $@3 local-declarations '}'  */
#line 336 "anasin.y"
    {
      // printf("compound-stmt  ->  { local-declarations }\n");
      (yyval.nt_node) = create_ast_node(COMPOUND_STMT, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      current_scope_seq = aux_scope;
      current_scope = current_scope->father;
    }
#line 3767 "anasin.tab.c"
    break;

  case 23: /* local-declarations: statement-list  */
#line 345 "anasin.y"
    {
      // printf("local-declarations  ->  statement-list\n");
      // $$ = create_ast_node(COMPOUND_STMT, NULL, NULL, NULL, $3);
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3777 "anasin.tab.c"
    break;

  case 24: /* local-declarations: %empty  */
#line 352 "anasin.y"
    {
      // printf("local-declarations  ->\n");
      (yyval.nt_node) = NULL;
    }
#line 3786 "anasin.tab.c"
    break;

  case 25: /* statement-list: statement-list statement  */
#line 359 "anasin.y"
    {
      // printf("statement-list  ->  statement-list statement\n");
      (yyval.nt_node) = create_ast_node(STATEMENT_LIST, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3796 "anasin.tab.c"
    break;

  case 26: /* statement-list: statement  */
#line 366 "anasin.y"
    {
      // printf("statement-list  ->  statement\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3805 "anasin.tab.c"
    break;

  case 27: /* statement: compound-stmt  */
#line 373 "anasin.y"
    {
      // printf("statement  ->  compound-stmt \n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3814 "anasin.tab.c"
    break;

  case 28: /* statement: conditional-stmt  */
#line 379 "anasin.y"
    {
      // printf("statement  ->  conditional-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3823 "anasin.tab.c"
    break;

  case 29: /* statement: iteration-stmt  */
#line 385 "anasin.y"
    {
      // printf("statement  ->  iteration-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3832 "anasin.tab.c"
    break;

  case 30: /* statement: expression-stmt  */
#line 391 "anasin.y"
    {
      // printf("statement  ->  expression-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3841 "anasin.tab.c"
    break;

  case 31: /* statement: return-stmt  */
#line 397 "anasin.y"
    {
      // printf("statement  ->  return-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3850 "anasin.tab.c"
    break;

  case 32: /* statement: var-declaration  */
#line 403 "anasin.y"
    {
      // printf("statement  ->  var-declaration \n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3859 "anasin.tab.c"
    break;

  case 33: /* statement: forall-stmt  */
#line 409 "anasin.y"
    {
      // printf("statement  ->  forall-stmt \n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3868 "anasin.tab.c"
    break;

  case 34: /* statement: error  */
#line 415 "anasin.y"
    {
      yyerrok;
      (yyval.nt_node) = NULL;
    }
#line 3877 "anasin.tab.c"
    break;

  case 35: /* forall-statement: compound-stmt  */
#line 422 "anasin.y"
    {
      // printf("statement  ->  compound-stmt \n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3886 "anasin.tab.c"
    break;

  case 36: /* forall-statement: conditional-stmt  */
#line 428 "anasin.y"
    {
      // printf("statement  ->  conditional-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3895 "anasin.tab.c"
    break;

  case 37: /* forall-statement: iteration-stmt  */
#line 434 "anasin.y"
    {
      // printf("statement  ->  iteration-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3904 "anasin.tab.c"
    break;

  case 38: /* forall-statement: expression-stmt  */
#line 440 "anasin.y"
    {
      // printf("statement  ->  expression-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3913 "anasin.tab.c"
    break;

  case 39: /* forall-statement: forall-stmt  */
#line 446 "anasin.y"
    {
      // printf("statement  ->  forall-stmt \n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3922 "anasin.tab.c"
    break;

  case 40: /* conditional-stmt: IF '(' expression ')' statement  */
#line 454 "anasin.y"
    {
      // printf("conditional-stmt  ->  if ( expression ) statement \n");
      (yyval.nt_node) = create_ast_node(CONDITIONAL_IF_STMT, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3932 "anasin.tab.c"
    break;

  case 41: /* conditional-stmt: IF '(' expression ')' statement ELSE statement  */
#line 461 "anasin.y"
    {
      // printf("conditional-stmt  ->  if ( expression ) statement else statement\n");
      (yyval.nt_node) = create_ast_node(CONDITIONAL_IF_ELSE_STMT, NULL, NULL, NULL, (yyvsp[-4].nt_node));
      (yyvsp[-4].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3943 "anasin.tab.c"
    break;

  case 42: /* conditional-stmt: IF setop-in statement  */
#line 469 "anasin.y"
    {
      // printf("conditional-stmt  ->  if ( expression ) statement \n");
      (yyval.nt_node) = create_ast_node(CONDITIONAL_IF_STMT, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3953 "anasin.tab.c"
    break;

  case 43: /* conditional-stmt: IF setop-in statement ELSE statement  */
#line 476 "anasin.y"
    {
      // printf("conditional-stmt  ->  if ( expression ) statement else statement\n");
      (yyval.nt_node) = create_ast_node(CONDITIONAL_IF_ELSE_STMT, NULL, NULL, NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3964 "anasin.tab.c"
    break;

  case 44: /* iteration-stmt: FOR '(' expression-stmt expression-stmt expression ')' statement  */
#line 485 "anasin.y"
    {
      // printf("iteration-stmt  ->  for ( expression ; expression ; expression ) statement\n");
      (yyval.nt_node) = create_ast_node(ITERATION_STMT, NULL, NULL, NULL, (yyvsp[-4].nt_node));
      (yyvsp[-4].nt_node)->next = (yyvsp[-3].nt_node);
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3976 "anasin.tab.c"
    break;

  case 45: /* forall-stmt: FORALL_OP setop-in forall-statement  */
#line 496 "anasin.y"
    {
      // printf("setop-forall  ->  setop-in forall-statement\n");
      (yyval.nt_node) = create_ast_node(FORALL_STMT, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3986 "anasin.tab.c"
    break;

  case 46: /* expression-stmt: expression ';'  */
#line 505 "anasin.y"
    {
      // printf("expression-stmt  ->  expression ;\n");
      (yyval.nt_node) = (yyvsp[-1].nt_node);
    }
#line 3995 "anasin.tab.c"
    break;

  case 47: /* expression-stmt: ';'  */
#line 511 "anasin.y"
    {
      // printf("expression-stmt  ->  ; \n");
      (yyval.nt_node) = NULL;
    }
#line 4004 "anasin.tab.c"
    break;

  case 48: /* return-stmt: RETURN ';'  */
#line 518 "anasin.y"
    {
      // printf("return-stmt  ->  return ; \n");
      (yyval.nt_node) = create_ast_node(RETURN_STMT, NULL, NULL, NULL, NULL);
    }
#line 4013 "anasin.tab.c"
    break;

  case 49: /* return-stmt: RETURN expression ';'  */
#line 524 "anasin.y"
    {
      // printf("return-stmt  ->  return expression ; \n");
      (yyval.nt_node) = create_ast_node(RETURN_STMT, NULL, NULL, NULL, (yyvsp[-1].nt_node));
    }
#line 4022 "anasin.tab.c"
    break;

  case 50: /* expression: var ASSIGN expression  */
#line 540 "anasin.y"
    {
      // printf("expression  ->  var = expression ;\n");
      (yyval.nt_node) = create_ast_node(EQ_T, NULL, (yyvsp[-1].tt_name), NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4032 "anasin.tab.c"
    break;

  case 51: /* expression: simple-expression  */
#line 547 "anasin.y"
    {
      // printf("expression  ->  simple-expression ;\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4041 "anasin.tab.c"
    break;

  case 52: /* expression: set-expression  */
#line 553 "anasin.y"
    {
      // printf("expression  ->  set-expression ;\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4050 "anasin.tab.c"
    break;

  case 53: /* expression: io-expression  */
#line 559 "anasin.y"
    {
      // printf("expression  ->  io-expression ;\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4059 "anasin.tab.c"
    break;

  case 54: /* simple-expression: logop-una relational-exp  */
#line 566 "anasin.y"
    {
      // printf("simple-expression  ->  logop-una relational-exp simple-expression\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4069 "anasin.tab.c"
    break;

  case 55: /* simple-expression: logop-una set-expression  */
#line 573 "anasin.y"
    {
      // printf("simple-expression  ->  logop-una relational-exp simple-expression\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4079 "anasin.tab.c"
    break;

  case 56: /* simple-expression: simple-expression logop-bin relational-exp  */
#line 580 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4090 "anasin.tab.c"
    break;

  case 57: /* simple-expression: simple-expression logop-bin set-expression  */
#line 588 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
      
    }
#line 4102 "anasin.tab.c"
    break;

  case 58: /* simple-expression: set-expression logop-bin relational-exp  */
#line 597 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4113 "anasin.tab.c"
    break;

  case 59: /* simple-expression: set-expression logop-bin set-expression  */
#line 605 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4124 "anasin.tab.c"
    break;

  case 60: /* simple-expression: simple-expression logop-bin logop-una relational-exp  */
#line 613 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[0].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4136 "anasin.tab.c"
    break;

  case 61: /* simple-expression: simple-expression logop-bin logop-una set-expression  */
#line 622 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[0].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4148 "anasin.tab.c"
    break;

  case 62: /* simple-expression: set-expression logop-bin logop-una relational-exp  */
#line 631 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[0].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4160 "anasin.tab.c"
    break;

  case 63: /* simple-expression: set-expression logop-bin logop-una set-expression  */
#line 640 "anasin.y"
    {
      // printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[0].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4172 "anasin.tab.c"
    break;

  case 64: /* simple-expression: relational-exp  */
#line 649 "anasin.y"
    {
      // printf("simple-expression  ->  relational-exp\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4181 "anasin.tab.c"
    break;

  case 65: /* relational-exp: relational-exp relop arithm-add-exp  */
#line 656 "anasin.y"
    {
      // printf("relational-exp  ->  arithm-add-exp relop arithm-add-exp\n");
      (yyval.nt_node) = create_ast_node(RELATIONAL_EXP, NULL, (yyvsp[-1].nt_node)->value, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
      // $2->next = $3;
    }
#line 4192 "anasin.tab.c"
    break;

  case 66: /* relational-exp: arithm-add-exp  */
#line 664 "anasin.y"
    {
      // printf("relational-exp  ->  arithm-add-exp\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4201 "anasin.tab.c"
    break;

  case 67: /* arithm-add-exp: arithm-add-exp ariop-add arithm-mul-exp  */
#line 671 "anasin.y"
    {
      // printf("arithm-add-exp  ->  arithm-add-exp ariop-add arithm-mul-exp\n");
      (yyval.nt_node) = create_ast_node(ARITHM_ADD_EXP, NULL, (yyvsp[-1].nt_node)->value, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
      // $2->next = $3;
    }
#line 4212 "anasin.tab.c"
    break;

  case 68: /* arithm-add-exp: arithm-mul-exp  */
#line 679 "anasin.y"
    {
      // printf("arithm-add-exp  ->  arithm-mul-exp\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4221 "anasin.tab.c"
    break;

  case 69: /* arithm-mul-exp: arithm-mul-exp ariop-mul unary-minus-exp  */
#line 686 "anasin.y"
    {
      // printf("arithm-mul-exp  ->  arithm-mul-exp ariop-mul unary-minus-exp\n");
      (yyval.nt_node) = create_ast_node(ARITHM_MUL_EXP, NULL, (yyvsp[-1].nt_node)->value, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
      // $2->next = $3;
    }
#line 4232 "anasin.tab.c"
    break;

  case 70: /* arithm-mul-exp: unary-minus-exp  */
#line 694 "anasin.y"
    {
      // printf("arithm-mul-exp  ->  unary-minus-exp\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4241 "anasin.tab.c"
    break;

  case 71: /* unary-minus-exp: MINUS factor  */
#line 701 "anasin.y"
    {
      // printf("unary-minus-exp  ->  '-' factor\n");
      // $$ = $2; //CORRIGIR NUMERO NEGATIVO
      (yyval.nt_node) = create_ast_node(UNARY_MINUS_EXP, NULL, (yyvsp[-1].tt_name), NULL, (yyvsp[0].nt_node));
    }
#line 4251 "anasin.tab.c"
    break;

  case 72: /* unary-minus-exp: factor  */
#line 708 "anasin.y"
    {
      // printf("unary-minus-exp  ->  factor\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4260 "anasin.tab.c"
    break;

  case 73: /* factor: '(' expression ')'  */
#line 715 "anasin.y"
    {
      // printf("factor  ->  ( expression )\n");
      (yyval.nt_node) = (yyvsp[-1].nt_node);
    }
#line 4269 "anasin.tab.c"
    break;

  case 74: /* factor: func-call  */
#line 721 "anasin.y"
    {
      // printf("factor  ->  func-call\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4278 "anasin.tab.c"
    break;

  case 75: /* factor: var  */
#line 732 "anasin.y"
    {
      // printf("factor  ->  var\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4287 "anasin.tab.c"
    break;

  case 76: /* factor: INT  */
#line 738 "anasin.y"
    {
      // printf("factor  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(FACTOR, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4296 "anasin.tab.c"
    break;

  case 77: /* factor: FLOAT  */
#line 744 "anasin.y"
    {
      // printf("factor  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(FACTOR, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4305 "anasin.tab.c"
    break;

  case 78: /* factor: EMPTY  */
#line 750 "anasin.y"
    {
      // printf("factor  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(FACTOR, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4314 "anasin.tab.c"
    break;

  case 79: /* logop-una: NOT  */
#line 757 "anasin.y"
    {
      // printf("logop-una  ->  !\n");
      (yyval.nt_node) = create_ast_node(LOGOP_UNA, NULL, (yyvsp[0].tt_name), NULL, NULL);
      // $$ = $1;
    }
#line 4324 "anasin.tab.c"
    break;

  case 80: /* logop-bin: AND  */
#line 765 "anasin.y"
    {
      // printf("logop-bin  ->  &&\n");
      (yyval.nt_node) = create_ast_node(LOGOP_BIN, NULL, (yyvsp[0].tt_name), NULL, NULL);
      // $$ = $1;
    }
#line 4334 "anasin.tab.c"
    break;

  case 81: /* logop-bin: OR  */
#line 772 "anasin.y"
    {
      // printf("logop-bin  ->  ||\n");
      (yyval.nt_node) = create_ast_node(LOGOP_BIN, NULL, (yyvsp[0].tt_name), NULL, NULL);
      // $$ = $1;
    }
#line 4344 "anasin.tab.c"
    break;

  case 82: /* relop: LT  */
#line 780 "anasin.y"
    {
      // printf("relop  ->  <\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
      // $$ = $1;
    }
#line 4354 "anasin.tab.c"
    break;

  case 83: /* relop: LTE  */
#line 787 "anasin.y"
    {
      // printf("relop  ->  <=\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
      // $$ = $1;
    }
#line 4364 "anasin.tab.c"
    break;

  case 84: /* relop: GT  */
#line 794 "anasin.y"
    {
      // printf("relop  ->  >\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
      // $$ = $1;
    }
#line 4374 "anasin.tab.c"
    break;

  case 85: /* relop: GTE  */
#line 801 "anasin.y"
    {
      // printf("relop  ->  >=\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
      // $$ = $1;
    }
#line 4384 "anasin.tab.c"
    break;

  case 86: /* relop: EQ  */
#line 808 "anasin.y"
    {
      // printf("relop  ->  ==\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
      // $$ = $1;
    }
#line 4394 "anasin.tab.c"
    break;

  case 87: /* relop: NEQ  */
#line 815 "anasin.y"
    {
      // printf("relop  ->  !=\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
      // $$ = $1;
    }
#line 4404 "anasin.tab.c"
    break;

  case 88: /* ariop-add: PLUS  */
#line 823 "anasin.y"
    {
      // printf("ariop-add  ->  +\n");
      (yyval.nt_node) = create_ast_node(ARIOP_ADD, NULL, (yyvsp[0].tt_name), NULL, NULL);
      // $$ = $1;
    }
#line 4414 "anasin.tab.c"
    break;

  case 89: /* ariop-add: MINUS  */
#line 830 "anasin.y"
    {
      // printf("ariop-add  ->  -\n");
      (yyval.nt_node) = create_ast_node(ARIOP_ADD, NULL, (yyvsp[0].tt_name), NULL, NULL);
      // $$ = $1;
    }
#line 4424 "anasin.tab.c"
    break;

  case 90: /* ariop-mul: MULT  */
#line 838 "anasin.y"
    {
      // printf("ariop-mul  ->  *\n");
      (yyval.nt_node) = create_ast_node(ARIOP_MUL, NULL, (yyvsp[0].tt_name), NULL, NULL);
      // $$ = $1;
    }
#line 4434 "anasin.tab.c"
    break;

  case 91: /* ariop-mul: DIV  */
#line 845 "anasin.y"
    {
      // printf("ariop-mul  ->  /\n");
      (yyval.nt_node) = create_ast_node(ARIOP_MUL, NULL, (yyvsp[0].tt_name), NULL, NULL);
      // $$ = $1;
    }
#line 4444 "anasin.tab.c"
    break;

  case 92: /* set-expression: setop-in  */
#line 853 "anasin.y"
    {
      // printf("set-expressions  ->  setop-in\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4453 "anasin.tab.c"
    break;

  case 93: /* set-expression: setop-is-set  */
#line 859 "anasin.y"
    {
      // printf("set-expressions  ->  setop-is-set\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4462 "anasin.tab.c"
    break;

  case 94: /* set-expression: setop-add  */
#line 865 "anasin.y"
    {
      // printf("set-expressions  ->  setop-add\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4471 "anasin.tab.c"
    break;

  case 95: /* set-expression: setop-remove  */
#line 871 "anasin.y"
    {
      // printf("set-expressions  ->  setop-remove\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4480 "anasin.tab.c"
    break;

  case 96: /* set-expression: setop-exists  */
#line 877 "anasin.y"
    {
      // printf("set-expressions  ->  setop-exists\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4489 "anasin.tab.c"
    break;

  case 97: /* setop-in: '(' expression IN_OP expression ')'  */
#line 884 "anasin.y"
    {
      // printf("setop-in  ->  ( expression IN_OP expression ) \n");
      (yyval.nt_node) = create_ast_node(SETOP_IN, NULL, (yyvsp[-2].tt_name), NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-1].nt_node);
    }
#line 4499 "anasin.tab.c"
    break;

  case 98: /* setop-is-set: IS_SET_OP '(' var ')'  */
#line 901 "anasin.y"
    {
      // printf("setop-is-set  ->  is_set ( var )\n");
      (yyval.nt_node) = create_ast_node(SETOP_IS_SET, NULL, (yyvsp[-3].tt_name), NULL, (yyvsp[-1].nt_node));
    }
#line 4508 "anasin.tab.c"
    break;

  case 99: /* setop-add: ADD_OP setop-in  */
#line 908 "anasin.y"
    {
      // printf("setop-add  ->  add setop-in\n");
      (yyval.nt_node) = create_ast_node(SETOP_ADD, NULL, (yyvsp[-1].tt_name), NULL, (yyvsp[0].nt_node));
    }
#line 4517 "anasin.tab.c"
    break;

  case 100: /* setop-remove: REMOVE_OP setop-in  */
#line 915 "anasin.y"
    {
      // printf("setop-remove  ->  remove setop-in\n");
      (yyval.nt_node) = create_ast_node(SETOP_REMOVE, NULL, (yyvsp[-1].tt_name), NULL, (yyvsp[0].nt_node));
    }
#line 4526 "anasin.tab.c"
    break;

  case 101: /* setop-exists: EXISTS_OP '(' var IN_OP var ')'  */
#line 939 "anasin.y"
    {
      // printf("setop-exists  ->  exists ( var in var )\n");
      (yyval.nt_node) = create_ast_node(SETOP_EXISTS, NULL, (yyvsp[-5].tt_name), NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-1].nt_node);
    }
#line 4536 "anasin.tab.c"
    break;

  case 102: /* io-expression: ioop-read  */
#line 947 "anasin.y"
    {
      // printf("io-expression  ->  ioop-read\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4545 "anasin.tab.c"
    break;

  case 103: /* io-expression: ioop-write  */
#line 953 "anasin.y"
    {
      // printf("io-expression  ->  ioop-read\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4554 "anasin.tab.c"
    break;

  case 104: /* ioop-read: READ '(' var ')'  */
#line 969 "anasin.y"
    {
      // printf("ioop-read  ->  read ( var ) \n");
      (yyval.nt_node) = create_ast_node(READ_T, NULL, (yyvsp[-3].tt_name), NULL, (yyvsp[-1].nt_node));
    }
#line 4563 "anasin.tab.c"
    break;

  case 105: /* ioop-write: WRITE '(' word ')'  */
#line 976 "anasin.y"
    {
      // printf("ioop-write  ->  write ( word ) \n");
      (yyval.nt_node) = create_ast_node(WRITE_T, NULL, (yyvsp[-3].tt_name), NULL, (yyvsp[-1].nt_node));
    }
#line 4572 "anasin.tab.c"
    break;

  case 106: /* ioop-write: WRITELN '(' word ')'  */
#line 982 "anasin.y"
    {
      // printf("ioop-write  ->  writeln ( word ) \n");
      (yyval.nt_node) = create_ast_node(WRITELN_T, NULL, (yyvsp[-3].tt_name), NULL, (yyvsp[-1].nt_node));
    }
#line 4581 "anasin.tab.c"
    break;

  case 107: /* word: CHAR  */
#line 989 "anasin.y"
    {
      // printf("word  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(CHAR_T, NULL, (yyvsp[0].tt_name), NULL, NULL);
      // $$ = $1;
    }
#line 4591 "anasin.tab.c"
    break;

  case 108: /* word: STRING  */
#line 996 "anasin.y"
    {
      // printf("word  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(STRING_T, NULL, (yyvsp[0].tt_name), NULL, NULL);
      // $$ = $1;
    }
#line 4601 "anasin.tab.c"
    break;

  case 109: /* func-call: ID '(' arguments ')'  */
#line 1004 "anasin.y"
    {
      // printf("func-call  ->  %s ( arguments )\n", $1);
      (yyval.nt_node) = create_ast_node(FUNC_CALL, NULL, (yyvsp[-3].tt_name), NULL, (yyvsp[-1].nt_node));
    }
#line 4610 "anasin.tab.c"
    break;

  case 110: /* arguments: args-list  */
#line 1011 "anasin.y"
    {
      // printf("arguments  ->  args-list\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4619 "anasin.tab.c"
    break;

  case 111: /* arguments: %empty  */
#line 1017 "anasin.y"
    {
      // printf("arguments  ->  empty-set\n");
      (yyval.nt_node) = NULL;
    }
#line 4628 "anasin.tab.c"
    break;

  case 112: /* args-list: args-list ',' expression  */
#line 1024 "anasin.y"
    {
      // printf("args-list  ->  args-list , expression\n");
      (yyval.nt_node) = create_ast_node(ARGS_LIST, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4638 "anasin.tab.c"
    break;

  case 113: /* args-list: expression  */
#line 1031 "anasin.y"
    {
      // printf("args-list  ->  expression\n");
      (yyval.nt_node) = create_ast_node(ARGS_LIST, NULL, NULL, NULL, (yyvsp[0].nt_node));
      // $$ = $1;
    }
#line 4648 "anasin.tab.c"
    break;

  case 114: /* var: ID  */
#line 1039 "anasin.y"
    {
      // printf("var  ->  %s\n", $1);
      (yyval.nt_node) = create_ast_node(VAR, NULL, (yyvsp[0].tt_name), NULL, NULL);
      // $$ = $1;
    }
#line 4658 "anasin.tab.c"
    break;


#line 4662 "anasin.tab.c"

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

#line 1046 "anasin.y"




void yyerror(const char *tt_name) {
  printf("yyerror:%s em linha:%d coluna:%d.\n", tt_name, line, column);
}

int main(int argc, char *argv[]){
  yyin = fopen(argv[1], "r");

  global_scope = initialize_scope();
  current_scope = global_scope;
  initialize_semantic_validations();
  yyparse();
  fclose(yyin);

  //  if(error_count > 0){
  //    printf("\nThe lexical analisys finished with %d errors found.\n", error_count);
  //  }

  run_semantic_validation();

  if(semantic_errors != 1){
    printf("\n\n\n________________| ABSTRACT SYNTAX TREE |________________\n\n");
    print_tree(abstract_tree, 0);
  }
  print_symbol_table();

  printf("\n\n\n________________| SCOPE TREE |________________\n\n");
  print_scope(global_scope, 0);

  free_ast(abstract_tree);
  free_symbol_table();
  free_scope(global_scope);
  
  yylex_destroy();

  return 0;
}

void initialize_semantic_validations() {
  semantics = (semantic_validations*) malloc(sizeof(semantic_validations));

  semantics->main_issue = 1;
  semantics->scope_issue = 0;
  semantics->previous_ref_issue = 0;
  semantics->function_args_issue = 0;
  semantics->implicit_cast_issue = 0;
  semantics->return_type_issue = 0;
}

void run_semantic_validation() {
  if(semantics->main_issue == 1){
    printf("-> SEMANTIC_VALIDATION_ERROR|SE001|: no function 'main' declared.");
    semantic_errors = 1;
  }
}

void perform_main_validation(char* func_name) {
  // if(semantics->main_issue){
  //   printf("-> SEMANTIC_VALIDATION_ERROR: double 'main' function declaration.");
  // }
  // valida se existe main declarada
  // printf("%s\n", func_name);
  // printf("%d %d\n", semantics->main_issue, strcmp(func_name, "main"));
  if(semantics->main_issue && (strcmp(func_name, "main") == 0)) {
    semantics->main_issue = 0;
  }
}
