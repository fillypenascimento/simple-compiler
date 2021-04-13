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

  extern int yylex();
  extern int yylex_destroy();
  extern FILE *yyin;
  extern int line;
  extern int column;
  extern int error_count;
  extern void yyerror(const char *tt_name);


  // SYMBOL TABLE DECLARATIONS
  // Entrada da tabela de símbolos
  typedef struct symbol_table_entry {
    // https://troydhanson.github.io/uthash/ - 12/04
    UT_hash_handle hh;           ///* makes this structure hashable */ garante a utilização de um hash e elimina a necessidade de um ponteiro para a proxima entrada
    char* hash_key;              // Chave única para a entrada da tabela de símbolos que é a concatenação do nome do token e do escopo em que ele está
    char* symbol_name;           // Nome do símbolo
    char* symbol_type;           // Tipo do símbolo: int, float, elem, set
    int symbol_scope;            // Escopo do símbolo TODO
    char* entry_type;            // Tipo de entrada da tabela: var, func
  } symbol_table_entry;

  // Tabela de símbolos definida como uma cadeia de entradas symbol_table_entry
  symbol_table_entry* symbol_table = NULL;
  // symbol_table = NULL;

  // https://steemit.com/programming/@drifter1/writing-a-simple-compiler-on-my-own-using-symbol-tables-in-the-lexer - 13/04
  int current_scope = 0;

  // Symbol Table management functions
  symbol_table_entry* create_symbol_table_entry(char* hash_key, char* symbol_name, char* symbol_type, int symbol_scope, char* entry_type);
  void insert_into_symbol_table(char* symbol_name, char* symbol_type, char* entry_type);
  char* build_hash_key(char* symbol_name, char* symbol_type, char* entry_type);
  void lookup_symbol_table();
  void print_symbol_table();
  void free_symbol_table();


#line 116 "anasin.tab.c"

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
  YYSYMBOL_58_ = 58,                       /* '='  */
  YYSYMBOL_59_ = 59,                       /* '-'  */
  YYSYMBOL_60_ = 60,                       /* '!'  */
  YYSYMBOL_61_ = 61,                       /* '<'  */
  YYSYMBOL_62_ = 62,                       /* '>'  */
  YYSYMBOL_63_ = 63,                       /* '+'  */
  YYSYMBOL_64_ = 64,                       /* '*'  */
  YYSYMBOL_65_ = 65,                       /* '/'  */
  YYSYMBOL_YYACCEPT = 66,                  /* $accept  */
  YYSYMBOL_program = 67,                   /* program  */
  YYSYMBOL_68_declaration_list = 68,       /* declaration-list  */
  YYSYMBOL_declaration = 69,               /* declaration  */
  YYSYMBOL_70_var_declaration = 70,        /* var-declaration  */
  YYSYMBOL_variable = 71,                  /* variable  */
  YYSYMBOL_72_func_declaration = 72,       /* func-declaration  */
  YYSYMBOL_73_type_specifier = 73,         /* type-specifier  */
  YYSYMBOL_parameters = 74,                /* parameters  */
  YYSYMBOL_75_parameter_list = 75,         /* parameter-list  */
  YYSYMBOL_parameter = 76,                 /* parameter  */
  YYSYMBOL_77_compound_stmt = 77,          /* compound-stmt  */
  YYSYMBOL_78_1 = 78,                      /* $@1  */
  YYSYMBOL_79_local_declarations = 79,     /* local-declarations  */
  YYSYMBOL_80_statement_list = 80,         /* statement-list  */
  YYSYMBOL_statement = 81,                 /* statement  */
  YYSYMBOL_82_forall_statement = 82,       /* forall-statement  */
  YYSYMBOL_83_conditional_stmt = 83,       /* conditional-stmt  */
  YYSYMBOL_84_iteration_stmt = 84,         /* iteration-stmt  */
  YYSYMBOL_85_forall_stmt = 85,            /* forall-stmt  */
  YYSYMBOL_86_expression_stmt = 86,        /* expression-stmt  */
  YYSYMBOL_87_return_stmt = 87,            /* return-stmt  */
  YYSYMBOL_expression = 88,                /* expression  */
  YYSYMBOL_89_simple_expression = 89,      /* simple-expression  */
  YYSYMBOL_90_relational_exp = 90,         /* relational-exp  */
  YYSYMBOL_91_arithm_add_exp = 91,         /* arithm-add-exp  */
  YYSYMBOL_92_arithm_mul_exp = 92,         /* arithm-mul-exp  */
  YYSYMBOL_93_unary_minus_exp = 93,        /* unary-minus-exp  */
  YYSYMBOL_factor = 94,                    /* factor  */
  YYSYMBOL_95_logop_una = 95,              /* logop-una  */
  YYSYMBOL_96_logop_bin = 96,              /* logop-bin  */
  YYSYMBOL_relop = 97,                     /* relop  */
  YYSYMBOL_98_ariop_add = 98,              /* ariop-add  */
  YYSYMBOL_99_ariop_mul = 99,              /* ariop-mul  */
  YYSYMBOL_100_set_expression = 100,       /* set-expression  */
  YYSYMBOL_101_setop_in = 101,             /* setop-in  */
  YYSYMBOL_102_setop_is_set = 102,         /* setop-is-set  */
  YYSYMBOL_103_setop_add = 103,            /* setop-add  */
  YYSYMBOL_104_setop_remove = 104,         /* setop-remove  */
  YYSYMBOL_105_setop_exists = 105,         /* setop-exists  */
  YYSYMBOL_106_io_expression = 106,        /* io-expression  */
  YYSYMBOL_107_ioop_read = 107,            /* ioop-read  */
  YYSYMBOL_108_ioop_write = 108,           /* ioop-write  */
  YYSYMBOL_word = 109,                     /* word  */
  YYSYMBOL_110_func_call = 110,            /* func-call  */
  YYSYMBOL_arguments = 111,                /* arguments  */
  YYSYMBOL_112_args_list = 112             /* args-list  */
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
#define YYLAST   7767

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  586

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
       2,     2,     2,    60,     2,     2,     2,     2,     2,     2,
      53,    54,    64,    63,    55,    59,     2,    65,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    52,
      61,    58,    62,     2,     2,     2,     2,     2,     2,     2,
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
       0,   172,   172,   174,   175,   177,   178,   180,   182,   188,
     194,   195,   196,   197,   199,   200,   202,   203,   205,   208,
     207,   217,   218,   220,   221,   223,   224,   225,   226,   227,
     228,   229,   231,   232,   233,   234,   235,   238,   239,   240,
     241,   243,   246,   249,   250,   252,   253,   255,   256,   257,
     258,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   272,   273,   275,   276,   281,   282,   284,   285,
     287,   288,   289,   290,   291,   292,   294,   296,   297,   299,
     300,   301,   302,   303,   304,   306,   307,   309,   310,   312,
     313,   314,   315,   316,   318,   320,   322,   324,   326,   328,
     329,   331,   333,   334,   336,   337,   339,   341,   342,   344,
     345
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
  "NEG", "';'", "'('", "')'", "','", "'{'", "'}'", "'='", "'-'", "'!'",
  "'<'", "'>'", "'+'", "'*'", "'/'", "$accept", "program",
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
  "arguments", "args-list", YY_NULLPTR
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
     305,   306,    59,    40,    41,    44,   123,   125,    61,    45,
      33,    60,    62,    43,    42,    47
};
#endif

#define YYPACT_NINF (-310)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-111)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1433,    13,    25,    31,    33,    45,   148,  1204,  1439,   -27,
    1444,    61,  -310,  1510,  1618,   109,  1173,   241,    76,    40,
     332,   336,   363,    44,  1433,  3847,  1649,   378,  4481,  2228,
    3091,  1699,  3369,    74,   100,    83,   106,   117,   136,   150,
     161,   161,   164,   170,  5074,  2326,    23,   567,  5112,  5150,
      89,  5188,  5226,  5264,  5302,  5340,  5378,  5416,   177,    87,
     461,  2321,  3647,  4393,  4685,   699,   203,   325,   377,   469,
     511,   585,   182,   188,   194,  6798,   162,  2911,  2326,  6024,
     371,  5454,   201,   249,   406,   406,   261,  3189,   667,   683,
     279,  2751,   -19,  4066,  3264,  6806,  1654,  5492,  5530,   220,
     232,   360,    92,   145,   240,   302,   441,   448,   507,   544,
     718,   507,   796,   811,   507,  1264,   815,   360,   419,   246,
     564,   265,   -13,   153,  1157,  5568,   266,   269,   271,   290,
     292,   296,   320,   324,  5606,  5644,  5682,  5720,  5758,  5796,
    3264,  6856,   318,  1936,   699,   977,  2906,  6864,  6872,  2548,
     699,   980,  6880,  3467,  6024,  6062,  3264,   340,   391,   397,
     986,   381,   358,  3699,  1029,  3794,  1032,   631,   617,  5834,
     384,   400,  1044,  6062,  6062,  1124,  5872,  5910,  3847,   404,
     450,  3189,  4528,  4800,  1057,  6222,   418,   426,   436,   438,
     457,   457,   467,  2326,    48,   679,  1116,  7366,  6252,  6273,
    6303,  1268,   691,   773,   806,   822,   883,   905,    18,    30,
      41,  6324,  6353,  6374,  1679,  6403,   478,   486,   491,   504,
     520,   520,   523,  2326,   228,    -5,  2821,  4380,  6424,  6453,
    6474,  2491,    58,   235,   247,   260,   405,   409,   635,   720,
     725,  6503,   533,   535,  1779,   170,  1208,  3847,  1389,   540,
    1474,  1514,  1552,  1830,  2011,  2096,   556,  2401,   561,  6930,
    6938,  4040,  6946,   543,   570,   577,   581,   600,   600,   610,
    2326,   375,    69,  4706,  3145,  6954,  6962,  7012,  2792,   258,
     553,   593,   595,   740,   874,   466,   644,   646,  7020,  1606,
    7036,  4698,  7070,   618,   640,   648,   657,   661,   661,   663,
    2326,   437,    -7,  1314,  7428,  7086,  7098,  7120,  3857,    26,
     114,   319,   342,   386,   445,   670,   675,   697,  7148,  3264,
    3542,   702,  4481,  5948,   708,   734,   162,  2326,   756,   406,
     406,   776,  3189,   954,  1005,   778,    56,  4167,  3264,  6524,
     628,   864,   864,   864,  2842,  1109,   628,   162,  3467,   784,
     406,   406,   797,  3189,   449,   513,   801,    79,  6202,  3264,
    6553,   908,   875,   875,   875,  3901,   536,   908,  2326,  6024,
     371,  2136,   745,  6138,  4481,  2174,  2452,  2986,   162,  3189,
     813,   406,   406,   817,  3189,   888,  1081,   828,    93,  4313,
    3264,  7170,   947,   971,   971,   971,  7575,  1166,   947,   162,
    3264,   840,   406,   406,   847,  3189,   562,   695,   852,   172,
    6574,  3264,  7182,  1869,  1048,  1048,  1048,  3977,   748,  1869,
     760,  3745,   772,  3264,   818,   195,   821,   832,   844,   848,
     870,   873,  3264,  6624,   857,  3804,  1268,  1130,  7394,  6636,
    6648,  4368,  1268,  1132,   862,   733,   866,   879,   881,   885,
     913,   920,  3264,  6698,   890,  7476,  2491,   539,  7415,  6710,
    6722,  7490,  2491,   545,   207,  2633,  1157,  2713,  3037,  3315,
    3593,  4636,  4773,  4845,   901,   906,   926,   911,   923,   925,
     928,   938,   952,  3264,  7201,   929,  7611,  2792,  1238,  3423,
    7232,  7253,  7622,  2792,  1367,   935,   951,   955,   957,   969,
     973,   956,   965,  3264,  7265,   988,  4591,  3857,   794,  7442,
    7282,  7316,  7632,  3857,   824,  6100,  5986,   989,  6772,   229,
     291,   312,  1171,  1040,  1003,  7499,  1284,  7546,  1335,  6784,
     790,   807,   829,   624,  1056,  1014,  7555,   643,  7564,   714,
    6024,  6024,  3264,  4883,  7332,  1033,  1039,  1046,  1415,  1082,
    1038,  7640,  1419,  7687,  1457,  7344,  1045,  1051,  1055,   835,
    1087,  1058,  7658,   876,  7705,   909,  6176,  1059,  1341,  1069,
     727,  4922,  4960,  1073,  1075,  1460,  1076,   915,  1343,   779,
    6024,  6024,  1559,  1000,  4998,  5036
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
       0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -310,  -310,  -310,  1094,     2,     0,  -310,  1374,  -310,  -310,
    1078,   -22,  -174,  -309,  -310,   -48,   763,   -45,   -43,   -35,
     -65,   -72,   -16,  3941,  1916,  2194,  1572,  1294,   672,  3814,
     -61,   402,  -176,  -161,  2501,   394,  2779,  3057,  3335,  3613,
    4100,  4227,  4386,   -63,   950,  -308,  -310
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,    48,   179,    10,   180,    19,    20,
      21,    49,    28,    50,    51,    52,   135,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
     101,   108,   111,   114,    66,    67,    68,    69,    70,    71,
      72,    73,    74,   129,    75,   119,   120
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    26,     8,    97,   322,   117,     9,   255,     8,    99,
     100,    99,   100,   422,   254,   124,    17,   140,   424,    82,
     -10,   342,   130,   319,    17,    14,   139,    29,    30,    92,
      93,   123,   -11,    32,   251,   141,   252,   343,   -12,   444,
     -13,   154,    99,   100,   253,    12,   136,   -48,   137,   -48,
     -48,   363,   182,   183,   -50,   337,   138,   250,   185,   156,
     118,   121,   122,   256,   258,   474,   -99,   364,    15,   134,
     475,   132,   -50,   374,    99,   100,    94,  -100,   142,   249,
     -49,   248,   255,    22,   -99,    99,   100,    29,    30,   254,
      31,   495,   432,    32,    23,  -100,   -80,   -80,   394,   -80,
      25,   338,   -80,    99,   100,   -48,   168,   169,   321,   251,
     433,   252,   -49,   -49,   395,   452,    36,    37,    38,   253,
      39,    40,    41,    42,   162,   176,   177,    78,   415,   483,
     -89,   -89,   250,   453,   340,    81,    45,   167,   256,   -48,
     170,   346,    46,    47,   416,   -80,    96,   484,    -2,   -82,
     -82,   -80,   -82,    80,   249,   -82,   248,   -39,   -39,    83,
     -39,    -8,    16,   -39,   361,   325,   212,   213,   -89,   214,
      84,   367,   215,     1,     2,     3,     4,   336,   -39,   -39,
     -39,   -39,   -39,   155,   -39,   -39,   -39,   -39,   -39,    85,
     -39,   -39,   -39,   -39,   -39,   216,   217,   218,   -82,   219,
     220,   221,   222,    86,   -82,   -39,   -39,   357,   503,   -39,
     -39,   392,   -39,   -39,    87,   223,  -108,    90,   398,    99,
     100,   224,    47,   181,   -78,   -78,   504,   -78,   372,    98,
     -78,   -47,   212,   213,   -50,   358,   -77,   -77,   215,   -77,
     -99,   413,   -77,   319,   -83,   -83,  -100,   -83,   419,   -47,
     -83,   -89,   -89,   125,   388,   -49,   126,   -78,   -78,   -78,
     -78,   540,   342,   -90,   -90,  -101,   427,   428,   131,   -77,
     -77,   -77,   -77,   -78,    99,   100,   -91,   -91,   343,   -78,
     -78,   359,   363,  -101,   409,   -77,   133,   447,   448,   -89,
     -89,   -77,   -77,   -83,   -49,   -18,   -18,   255,   364,   -83,
     152,   -90,   -90,   420,   254,   466,   -84,   -84,   473,   -84,
     118,   425,   -84,   394,   -91,   -91,   430,   -47,   478,   479,
     157,   465,   434,  -104,   251,  -105,   252,  -102,   470,   395,
     471,   118,   445,   415,   253,   -90,   -90,   450,   472,   498,
     499,   -89,   -89,   454,   158,  -102,   159,   250,  -103,   416,
     160,   468,   464,   256,   258,   -84,   140,   256,   -91,   -91,
     161,   -84,   118,   476,    29,    30,  -103,    93,   481,   249,
      32,   248,   141,   -90,   485,    29,    30,   -89,    31,   259,
     260,    32,   389,   118,   496,   262,   -14,    24,   171,   501,
     -17,   -17,  -101,   -90,   -90,   505,   -91,    39,    40,    41,
      42,   542,   -92,   -92,    36,    37,    38,   517,    39,    40,
      41,    42,   172,    45,   127,   128,   524,    -8,    -8,    46,
      47,   -92,   -92,   257,    45,   -93,   -93,    79,   390,   -90,
      46,    47,   -16,   -16,    88,    89,   535,    91,   174,   203,
     -92,   289,   290,  -102,   410,   -79,   -79,   292,   -79,  -103,
     321,   -79,   -81,   -81,   175,   -81,   323,   324,   -81,   -92,
     -92,   -93,   -93,   -93,   -93,   -96,   -96,   550,   255,   255,
     233,   328,   203,  -110,  -110,   254,   254,   -61,   -61,   329,
     102,   280,   103,   104,   105,   -91,   -91,   561,   310,   330,
     411,   331,   571,   572,   -79,   251,   251,   252,   252,   -93,
     -79,   -81,   -50,   -96,   -96,   253,   253,   -81,   255,   255,
     332,    29,    30,   -61,    93,   254,   254,    32,   250,   250,
     335,   -91,   106,   107,   256,   256,   573,   -92,   -92,   -97,
     -97,   349,   584,   585,   310,   251,   251,   252,   252,   350,
     249,   249,   248,   248,   351,   253,   253,   233,   -86,   -86,
     310,   -86,   -52,   -52,   -86,   -54,   -54,   352,   250,   250,
      94,   -56,   -56,   -92,   256,   256,    46,   -97,   -97,   -89,
     -89,   -76,   -76,   353,   -76,   280,   356,   -76,   -96,   -96,
     249,   249,   248,   248,   333,   334,   368,   203,   370,   -89,
     -52,   -52,   375,   -54,   -54,   203,   380,   -86,   341,   -56,
     -56,   -93,   -93,   -86,   -76,   -76,   -76,   -76,   376,   -90,
     -90,   -91,   -91,   377,   354,   355,   -96,   203,  -107,   153,
     -76,   -37,   -37,   381,   -37,   233,   -76,   -37,   362,   -90,
     382,   -91,   182,   183,   383,   337,   369,   -93,   185,   373,
     -95,   -95,   -37,   -37,   -37,   -37,   -37,   173,   -37,   -37,
     -37,   -37,   -37,   384,   -37,   -37,   -37,   -37,   -37,   -58,
     -58,   385,   386,   387,   203,   189,   190,   191,   192,   -37,
     -37,   401,   280,   -37,   -37,   393,   -37,   -37,   -95,   -95,
     -99,   193,  -100,   -96,   -96,  -109,  -109,   194,    47,   -50,
     -50,   406,   407,   402,   203,    99,   100,   -58,   -58,   -97,
     -97,   403,   310,    29,    30,   414,    93,    99,   100,    32,
     404,   -97,   -97,   310,   405,   -48,   408,   200,    95,   -96,
     233,   203,   -85,   -85,   -50,   -85,   280,   -49,   -85,   -99,
     -60,   -60,   310,   -48,   203,   -97,    39,    40,    41,    42,
     203,   233,   233,   -94,   -94,   -49,   341,   280,   230,   -97,
     200,  -100,    45,   310,   421,   233,   -92,   -92,    46,   277,
      -8,   233,   203,   426,   -52,   -52,   307,   362,   -60,   -60,
     423,   -85,   233,   280,   -99,   -99,   -92,   -85,   280,  -100,
    -100,   -94,   -94,   429,   310,   431,   280,   -47,   -47,   -89,
     -89,   446,   280,   233,   310,   -98,   -98,   467,   393,   280,
     -87,   -87,   -52,   -87,   449,   310,   -87,   310,   451,   -89,
     -54,   -54,   307,   310,   515,   -88,   -88,   310,   -88,   414,
     477,   -88,   -90,   -90,   480,   230,   310,   -89,   307,   516,
     203,   -52,   -52,   -98,   -98,   482,   203,   341,   -91,   -91,
     -56,   -56,   -90,   341,  -101,  -101,   310,   497,   -54,   -87,
     233,   -95,   -95,   277,   500,   -87,   233,   362,   -91,   502,
     -90,  -102,  -102,   362,   -88,   200,   339,   -52,   182,   183,
     -88,   337,   518,   200,   185,   519,   -91,   310,   -56,   212,
     213,   280,   358,  -103,  -103,   215,   520,   280,   393,   -95,
     -93,   -93,   -58,   -58,   393,   200,   360,   310,   521,   -92,
     -92,   310,   522,   230,   -96,   -96,   432,   310,   414,   523,
     -93,   433,   212,   213,   414,   358,   529,   338,   215,   -92,
     530,   -93,   -93,   194,   -96,   -60,   -60,   341,   359,   341,
     -58,   -94,   -94,   531,   224,   532,   310,   -92,   362,   533,
     362,   -93,   200,   391,   453,   219,   220,   221,   222,   452,
     277,   259,   260,   393,   389,   393,   534,   262,   543,   -93,
     544,   223,   -47,   -60,   414,   545,   414,   224,    47,   -94,
     -96,   -96,   200,   412,   483,   259,   260,   546,   389,   547,
     307,   262,   548,   484,   266,   267,   268,   269,   549,   555,
     -96,   307,   503,   -54,   -54,   211,   -56,   -56,   230,   200,
     270,   560,   -95,   -95,   277,   -47,   271,    47,   -96,   556,
     307,   557,   200,   200,   200,   200,   -98,   -98,   200,   230,
     230,   -97,   -97,   558,   390,   277,   241,   559,   211,   -54,
     271,   307,   -56,   230,   230,   230,   230,   288,   -95,   230,
     200,   -97,   504,   566,   318,   -58,   -58,   567,   -60,   -60,
     230,   277,   289,   290,   -98,   410,   277,   568,   292,   -97,
     -94,   -94,   307,   569,   277,   277,   277,   277,   570,  -101,
     277,   230,   307,   -72,   -72,  -102,   -72,   277,   -72,   -72,
     -72,   -58,  -103,   307,   -60,   307,   307,   307,   307,   574,
     318,   307,   575,   -72,   576,   307,   -94,   -97,   -97,  -101,
      13,   411,    27,   241,   307,  -102,   318,   301,   200,  -103,
     326,   -72,   577,   578,   200,   327,   -72,   -97,   -72,   -72,
     -72,   -72,   -72,   579,   307,   -52,   -52,   581,   230,   582,
     583,   288,   -61,   -61,   230,   102,   469,   103,   104,   105,
     -98,   -98,     0,   211,   211,   -52,   -54,   -54,   -56,   -56,
       0,   211,   -61,     0,     0,   307,     0,     0,     0,   277,
       0,    29,    30,   -52,    31,   277,   -54,    32,   -56,     0,
     -61,     0,     0,   211,   241,   307,   -98,   106,   107,   307,
       0,   241,   -52,   -52,   -54,   307,   -56,   -95,   -95,     0,
      36,    37,    38,     0,    39,    40,    41,    42,     1,     2,
       3,     4,   -52,     0,    -4,     0,     0,   -95,     0,   320,
      45,     0,   -44,   -44,   307,   -44,    46,    47,   -44,     0,
     211,   288,     0,     0,     0,   -95,     0,   -15,   288,    -4,
      -4,    -4,    -4,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,
     211,   318,     0,     0,   -54,   -54,     0,     0,   318,     0,
     -44,   -44,     0,     0,   -44,   -44,     0,   -44,   -44,   318,
       0,     0,   182,   183,   -54,   337,   241,   211,   185,     0,
     -51,   -51,   288,   102,     0,   103,   104,   105,   318,     0,
     211,   211,   211,   211,     0,     0,   211,   241,   241,     0,
     -58,   -58,     0,   288,     0,   189,   190,   191,   192,   318,
       0,   241,   241,   241,   241,     0,   -51,   241,   211,     0,
     -58,   193,     0,     0,     0,   106,   107,   194,   241,   288,
     -61,   -61,     0,   102,   288,   103,   104,   105,   -58,   199,
     318,     0,   288,   288,   288,   288,     0,     0,   288,   241,
     318,   -60,   -60,     0,     0,   288,     0,   -94,   -94,   -98,
     -98,   318,     0,   318,   318,   318,   318,     0,   -61,   318,
     229,   -60,   199,   318,    11,   106,   107,   -94,     0,   -98,
      11,   276,   318,   -56,   -56,     0,   211,     0,   306,   -60,
      18,     0,   211,   -30,   -30,   -94,   -30,   -98,    18,   -30,
       0,     0,   318,   -56,     0,     0,   241,     0,   148,     0,
       0,     0,   241,     0,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,   -95,   -95,   318,   306,   -58,   -58,   288,     0,    -5,
       0,   -30,   -30,   288,    -6,   -30,   -30,   229,   -30,   -30,
     306,   -95,     0,   318,     0,   -58,     0,   318,     1,     2,
       3,     4,     0,   318,    -5,    -5,    -5,    -5,     0,    -6,
      -6,    -6,    -6,   -60,   -60,   276,   -94,   -94,   -25,   -25,
       0,   -25,     0,     0,   -25,     0,     0,   199,     0,     0,
       0,     0,   318,   -60,     0,   199,   -94,     0,     0,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
      -3,   -25,   -25,   -25,   -25,   -25,     0,   199,   -26,   -26,
       0,   -26,     0,     0,   -26,   229,   -25,   -25,     0,     0,
     -25,   -25,     0,   -25,   -25,    -3,    -3,    -3,    -3,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -27,   -27,     0,   -27,
       0,     0,   -27,     0,   199,     0,   -26,   -26,     0,     0,
     -26,   -26,   276,   -26,   -26,   -98,   -98,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   199,   -98,     0,     0,     0,     0,
       0,     0,   306,     0,   -27,   -27,     0,     0,   -27,   -27,
       0,   -27,   -27,   306,     0,     0,     0,   198,    -7,     0,
     229,   199,   -73,   -73,     0,   -73,   276,   -73,   -73,   -73,
       0,     0,   306,     0,   199,   199,   199,   440,     0,     0,
     199,   229,   229,    -7,    -7,    -7,    -7,   276,   228,    -9,
     198,     0,     0,   306,   -20,   229,   229,   229,   460,   275,
     -73,   229,   199,     0,     0,   -73,   305,   -73,   -73,   -73,
     -73,   -73,   229,   276,    -9,    -9,    -9,    -9,   276,   -20,
     -20,   -20,   -20,   147,   306,     0,   276,   276,   276,   491,
       0,     0,   276,   229,   306,   -72,   -72,     0,   -72,   276,
     -72,   -72,   -72,     0,     0,   306,     0,   306,   306,   306,
     511,     0,   305,   306,     0,   -72,   -72,   306,   -72,     0,
     -72,   -72,   -72,     0,     0,   228,   306,     0,   305,     0,
     199,     0,   347,   -72,   -72,     0,   199,   348,   -72,     0,
     -72,   -72,   -72,   -72,   -72,     0,   306,     0,     0,     0,
     229,   -72,    76,   275,     0,     0,   229,    77,   -72,     0,
     -72,   -72,   -72,   -72,   -72,   198,     0,     0,     0,     0,
       0,     0,     0,   198,     0,     0,     0,   306,     0,     0,
       0,   276,     0,    29,    30,     0,    31,   276,     0,    32,
       0,     0,     0,     0,     0,   198,     0,   306,     0,     0,
       0,   306,     0,   228,     0,     0,     0,   306,     0,     0,
       0,     0,    36,    37,    38,     0,    39,    40,    41,    42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   371,    45,     0,   -31,   -31,   306,   -31,    46,    47,
     -31,     0,   198,     0,     0,     0,     0,     0,     0,     0,
     275,     0,     0,     0,     0,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,
     -31,   -31,   198,   289,   290,     0,   410,     0,     0,   292,
     305,     0,   -31,   -31,     0,     0,   -31,   -31,     0,   -31,
     -31,   305,     0,     0,     0,     0,     0,     0,   228,   198,
       0,     0,     0,     0,   275,     0,   296,   297,   298,   299,
     305,     0,   198,   198,   439,     0,     0,     0,   198,   228,
     228,     0,   300,     0,     0,   275,     0,     0,   301,    47,
       0,   305,     0,   228,   228,   459,     0,     0,     0,   228,
     198,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     228,   275,   -53,   -53,     0,   102,   275,   103,   104,   105,
       0,   196,   305,     0,   275,   275,   490,     0,     0,     0,
     275,   228,   305,     0,     0,     0,     0,   275,     0,     0,
       0,   115,     0,   305,     0,   305,   305,   510,   -53,     0,
       0,   305,   226,     0,   196,   305,     0,   106,   107,     0,
       0,     0,     0,   273,   305,     0,     0,     0,   198,     0,
     303,     0,     0,     0,   198,   -28,   -28,   143,   -28,     0,
       0,   -28,     0,     0,   305,     0,     0,     0,   228,     0,
       0,     0,     0,   149,   228,     0,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,     0,     0,   305,   303,     0,     0,   275,
     163,     0,     0,   -28,   -28,   275,   165,   -28,   -28,   226,
     -28,   -28,   303,     0,     0,   305,     0,     0,     0,   305,
       0,     0,     0,     0,     0,   305,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   273,     0,     0,
     -29,   -29,     0,   -29,     0,     0,   -29,     0,     0,   196,
       0,     0,     0,     0,   305,     0,     0,   344,     0,     0,
       0,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,     0,   196,
     -45,   -45,     0,   -45,     0,     0,   -45,   365,   -29,   -29,
       0,     0,   -29,   -29,     0,   -29,   -29,     0,     0,     0,
       0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,    -7,    -7,
       0,    -7,     0,     0,    -7,     0,   196,     0,   -45,   -45,
       0,     0,   -45,   -45,   396,   -45,   -45,     0,     0,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
       0,    -7,    -7,    -7,    -7,    -7,   196,     0,     0,     0,
       0,     0,     0,     0,   417,     0,    -7,    -7,     0,     0,
      -7,    -7,     0,    -7,    -7,   303,     0,     0,     0,   197,
       0,     0,   226,   196,   -73,   -73,     0,   -73,   273,   -73,
     -73,   -73,     0,     0,   303,     0,   435,     0,     0,     0,
       0,     0,   441,   226,   226,     0,     0,     0,     0,   273,
     227,     0,   197,     0,     0,   303,     0,   455,     0,     0,
     -73,   274,     0,   461,   196,     0,     0,   -73,   304,   -73,
     -73,   -73,   -73,   -73,   226,   273,     0,     0,     0,     0,
     273,     0,   146,     0,     0,     0,   303,     0,   486,     0,
       0,     0,     0,     0,   492,   226,   303,     0,     0,     0,
       0,   273,     0,     0,     0,     0,     0,   303,     0,   506,
     182,   183,     0,   184,   304,   512,   185,   -63,   -63,   303,
     -63,     0,   -63,   -63,   -63,     0,     0,   227,   303,     0,
     304,     0,   525,     0,     0,     0,     0,     0,   527,   186,
     187,   188,     0,   189,   190,   191,   192,     0,   303,     0,
       0,     0,   536,   -63,     0,   274,     0,     0,   538,   193,
     109,     0,   -63,   -63,   110,   194,    47,   197,     0,     0,
       0,     0,     0,     0,     0,   197,     0,     0,     0,   303,
       0,     0,     0,   551,     0,   -44,   -44,     0,   -44,   553,
       0,   -44,     0,     0,     0,     0,     0,   197,     0,   303,
       0,     0,     0,   562,     0,   227,     0,     0,     0,   564,
       0,     0,     0,     0,   -44,   -44,   -44,     0,   -44,   -44,
     -44,   -44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -44,   -44,     0,   -43,   -43,   303,   -43,
     -44,   -44,   -43,     0,   197,     0,     0,     0,     0,     0,
       0,     0,   274,     0,     0,     0,     0,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,   197,   212,   213,     0,   358,     0,
       0,   215,   304,     0,   -43,   -43,     0,     0,   -43,   -43,
       0,   -43,   -43,   304,     0,     0,     0,     0,     0,     0,
     227,   197,     0,     0,     0,     0,   274,     0,   219,   220,
     221,   222,   304,     0,   197,   438,     0,     0,     0,     0,
     197,   227,   227,     0,   223,     0,   202,   274,     0,     0,
     224,     0,     0,   304,     0,   227,   458,     0,     0,     0,
       0,   227,   197,     0,   -55,   -55,   116,   102,     0,   103,
     104,   105,   227,   274,     0,     0,     0,   232,   274,   202,
       0,     0,     0,     0,   304,     0,   274,   489,   279,     0,
       0,     0,   274,   227,   304,   309,     0,     0,     0,   274,
     -55,     0,   145,     0,     0,   304,     0,   304,   509,   106,
     107,     0,     0,   304,     0,     0,     0,   304,   151,     0,
       0,     0,     0,     0,     0,     0,   304,     0,     0,     0,
     197,     0,     0,     0,     0,     0,   197,   -39,   -39,     0,
     -39,   309,     0,   -39,     0,   164,   304,     0,     0,     0,
     227,   166,     0,     0,   232,     0,   227,   309,   -39,   -39,
     -39,   -39,   -39,   541,   -39,   -39,   -39,   -39,   -39,     0,
     -39,   -39,   -39,   -39,   -39,     0,     0,   304,     0,     0,
       0,   274,   279,     0,     0,   -39,   -39,   274,     0,   -39,
     -39,     0,   -39,   -39,   202,     0,     0,   304,     0,     0,
       0,   304,   345,     0,     0,     0,     0,   304,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -46,   -46,     0,
     -46,     0,     0,   -46,   202,     0,     0,     0,     0,     0,
       0,     0,   366,     0,     0,     0,   304,     0,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,
     -46,   -46,   -46,   -46,   -46,    29,    30,     0,    31,     0,
       0,    32,     0,     0,     0,   -46,   -46,     0,     0,   -46,
     -46,   202,   -46,   -46,     0,     0,     0,     0,     0,   397,
      33,     0,    34,     0,    36,    37,    38,     0,    39,    40,
      41,    42,    43,     0,     0,     0,   259,   260,     0,   389,
       0,   202,   262,    44,    45,     0,     0,   178,     0,   418,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
     309,     0,     0,     0,   204,     0,     0,   232,   202,   266,
     267,   268,   269,   279,     0,     0,     0,   -61,   -61,   309,
     102,   437,   103,   104,   105,   270,     0,   443,   232,   232,
       0,   271,     0,     0,   279,   234,     0,   204,   -51,   -51,
     309,   102,   457,   103,   104,   105,   281,     0,   463,   202,
       0,     0,     0,   311,     0,   -61,   -61,     0,   -51,   232,
     279,     0,   106,   107,     0,   279,     0,     0,     0,     0,
       0,   309,     0,   488,     0,     0,   -51,     0,     0,   494,
     232,   309,     0,   106,   107,     0,   279,     0,     0,     0,
       0,     0,   309,     0,   508,    29,    30,     0,    31,   311,
     514,    32,   -62,   -62,   309,   -62,     0,   -62,   -62,   -62,
       0,     0,   234,   309,     0,   311,     0,   526,     0,     0,
       0,     0,     0,   528,    36,    37,    38,     0,    39,    40,
      41,    42,     0,   309,     0,     0,     0,   537,   -62,     0,
     281,     0,     0,   539,    45,   109,     0,   -62,   -62,   110,
      46,    47,   204,     0,     0,     0,     0,     0,     0,     0,
     204,     0,     0,     0,   309,     0,     0,     0,   552,     0,
     -43,   -43,     0,   -43,   554,     0,   -43,     0,     0,     0,
       0,     0,   204,     0,   309,     0,     0,     0,   563,     0,
     234,     0,     0,     0,   565,     0,     0,     0,     0,   -43,
     -43,   -43,     0,   -43,   -43,   -43,   -43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -43,   -43,
       0,   -32,   -32,   309,   -32,   -43,   -43,   -32,     0,   204,
       0,     0,     0,     0,     0,     0,     0,   281,     0,     0,
       0,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   204,
       0,     0,     0,     0,     0,     0,     0,   311,     0,   -32,
     -32,     0,     0,   -32,   -32,     0,   -32,   -32,   311,     0,
       0,     0,   205,     0,     0,   234,   204,   -74,   -74,     0,
     -74,   281,   -74,   -74,   -74,     0,     0,   311,     0,   204,
       0,     0,     0,     0,     0,   204,   234,   234,     0,     0,
       0,     0,   281,   235,     0,   205,     0,     0,   311,     0,
     234,     0,     0,   -74,   282,     0,   234,   204,     0,     0,
     -74,   312,   -74,   -74,   -74,   -74,   -74,   234,   281,     0,
       0,   -63,   -63,   281,   -63,     0,   -63,   -63,   -63,   311,
       0,   281,     0,     0,     0,     0,     0,   281,   234,   311,
       0,   -63,     0,     0,   281,     0,     0,     0,     0,     0,
     311,     0,   311,   259,   260,     0,   261,   312,   311,   262,
       0,     0,   311,     0,   109,     0,   -63,   -63,   110,     0,
     235,   311,     0,   312,     0,   204,     0,     0,     0,     0,
       0,   204,   263,   264,   265,     0,   266,   267,   268,   269,
       0,   311,     0,     0,     0,   234,     0,     0,   282,     0,
       0,   234,   270,     0,     0,     0,     0,     0,   271,    47,
     205,     0,     0,     0,     0,     0,     0,     0,   205,     0,
       0,     0,   311,     0,     0,     0,   281,     0,   289,   290,
       0,   291,   281,     0,   292,     0,     0,     0,     0,     0,
     205,     0,   311,     0,     0,     0,   311,     0,   235,     0,
       0,     0,   311,     0,     0,     0,     0,   293,   294,   295,
       0,   296,   297,   298,   299,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   300,     0,   -42,
     -42,   311,   -42,   301,    47,   -42,     0,   205,     0,     0,
       0,     0,     0,     0,     0,   282,     0,     0,     0,     0,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,     0,   -42,   -42,   -42,   -42,   -42,   205,     0,     0,
       0,     0,     0,     0,     0,   312,     0,   -42,   -42,     0,
       0,   -42,   -42,     0,   -42,   -42,   312,     0,     0,     0,
     206,     0,     0,   235,   205,   -75,   -75,     0,   -75,   282,
     -75,   -75,   -75,     0,     0,   312,     0,   205,     0,     0,
       0,     0,     0,   205,   235,   235,     0,     0,     0,     0,
     282,   236,     0,   206,     0,     0,   312,     0,   235,     0,
       0,   -75,   283,     0,   235,   205,     0,     0,   -75,   313,
     -75,   -75,   -75,   -75,   -75,   235,   282,     0,     0,   -62,
     -62,   282,   -62,     0,   -62,   -62,   -62,   312,     0,   282,
       0,     0,     0,     0,     0,   282,   235,   312,     0,   -62,
       0,     0,   282,     0,     0,     0,     0,     0,   312,     0,
     312,   212,   213,     0,   214,   313,   312,   215,     0,     0,
     312,     0,   109,     0,   -62,   -62,   110,     0,   236,   312,
       0,   313,     0,   205,     0,     0,     0,     0,     0,   205,
     216,   217,   218,     0,   219,   220,   221,   222,     0,   312,
       0,     0,     0,   235,     0,     0,   283,     0,     0,   235,
     223,     0,     0,     0,     0,     0,   224,    47,   206,     0,
       0,     0,     0,     0,     0,     0,   206,     0,     0,     0,
     312,     0,     0,     0,   282,     0,   -44,   -44,     0,   -44,
     282,     0,   -44,     0,     0,     0,     0,     0,   206,     0,
     312,     0,     0,     0,   312,     0,   236,     0,     0,     0,
     312,     0,     0,     0,     0,   -44,   -44,   -44,     0,   -44,
     -44,   -44,   -44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -44,     0,   -33,   -33,   312,
     -33,   -44,   -44,   -33,     0,   206,     0,     0,     0,     0,
       0,     0,     0,   283,     0,     0,     0,     0,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   -33,   -33,   -33,   -33,   206,     0,     0,     0,     0,
       0,     0,     0,   313,     0,   -33,   -33,     0,     0,   -33,
     -33,     0,   -33,   -33,   313,     0,     0,     0,   207,     0,
       0,   236,   206,   -65,   -65,     0,   -65,   283,   -65,   -65,
     -65,     0,     0,   313,     0,   206,     0,     0,     0,     0,
       0,   206,   236,   236,     0,     0,     0,     0,   283,   237,
       0,   207,     0,     0,   313,     0,   236,     0,     0,   -65,
     284,     0,   236,   206,     0,     0,   -65,   314,   -65,   -65,
     -65,   112,   113,   236,   283,   -57,   -57,     0,   102,   283,
     103,   104,   105,     0,     0,   313,     0,   283,     0,     0,
       0,     0,     0,   283,   236,   313,     0,     0,     0,     0,
     283,     0,     0,     0,     0,     0,   313,     0,   313,   -43,
     -43,   -57,   -43,   314,   313,   -43,     0,     0,   313,     0,
     106,   107,     0,     0,     0,     0,   237,   313,     0,   314,
       0,   206,     0,     0,     0,     0,     0,   206,   -43,   -43,
     -43,     0,   -43,   -43,   -43,   -43,     0,   313,     0,     0,
       0,   236,     0,     0,   284,     0,     0,   236,   -43,     0,
       0,     0,     0,     0,   -43,   -43,   207,     0,     0,     0,
     -59,   -59,     0,   102,   207,   103,   104,   105,   313,     0,
     -53,   -53,   283,   102,     0,   103,   104,   105,   283,     0,
       0,     0,     0,     0,     0,     0,   207,     0,   313,     0,
     -53,     0,   313,     0,   237,     0,   -59,     0,   313,     0,
       0,   -19,   -19,     0,   -19,   106,   107,   -19,   -53,   201,
       0,   289,   290,     0,   410,   106,   107,   292,     0,     0,
       0,     0,   -19,   -19,   -19,   -19,   -19,   313,   -19,   -19,
     -19,   -19,   -19,   207,   -19,   -19,   -19,   -19,   -19,     0,
     231,   284,   201,     0,   296,   297,   298,   299,     0,   -19,
     -19,   278,     0,   -19,   -19,     0,   -19,   -19,   308,     0,
     300,     0,     0,   207,     0,   144,   301,   -51,   -51,     0,
     102,   314,   103,   104,   105,     0,     0,     0,     0,     0,
       0,   150,   314,     0,     0,     0,     0,     0,     0,   237,
     207,     0,     0,     0,     0,   284,     0,     0,     0,     0,
       0,   314,     0,   207,   308,   -51,   -51,     0,     0,   207,
     237,   237,   106,   107,     0,     0,   284,   231,     0,     0,
     308,     0,   314,     0,   237,     0,     0,     0,     0,     0,
     237,   207,     0,     0,     0,     0,   195,     0,     0,     0,
       0,   237,   284,   -51,   -51,   278,   102,   284,   103,   104,
     105,     0,     0,   314,     0,   284,     0,   201,     0,     0,
       0,   284,   237,   314,     0,     0,     0,   225,   284,   195,
       0,     0,     0,     0,   314,     0,   314,     0,   272,     0,
       0,   -51,   314,     0,     0,   302,   314,   201,   106,   107,
       0,     0,     0,     0,     0,   314,     0,     0,     0,   207,
       0,     0,     0,     0,     0,   207,   -72,   -72,     0,   -72,
       0,   -72,   -72,   -72,     0,   314,     0,     0,     0,   237,
       0,     0,     0,     0,     0,   237,   -72,     0,     0,     0,
       0,   302,   -72,   -72,   201,   -72,     0,   -72,   -72,   -72,
       0,     0,     0,   378,   225,     0,   314,   302,   379,   -72,
     284,   -72,   -72,   -72,   -72,   -72,   284,     0,     0,     0,
       0,     0,     0,     0,   201,     0,   314,     0,   -72,    76,
     314,     0,   272,     0,     0,   -72,   314,   -72,   -72,   -72,
     -72,   -72,     0,   308,   195,     0,     0,     0,     0,     0,
     231,   201,     0,     0,     0,   208,   278,     0,     0,     0,
       0,     0,   308,     0,   436,   314,     0,     0,     0,     0,
     442,   231,   231,     0,   195,     0,     0,   278,     0,     0,
       0,     0,     0,   308,     0,   456,   238,     0,   208,     0,
       0,   462,   201,   -72,   -72,     0,   -72,   285,   -72,   -72,
     -72,     0,   231,   278,   315,     0,     0,     0,   278,     0,
       0,     0,     0,   -72,   308,     0,   487,     0,     0,     0,
       0,   195,   493,   231,   308,     0,     0,     0,     0,   278,
     326,   -72,     0,     0,     0,   308,   -72,   507,   -72,   -72,
     -72,   -72,   -72,   513,     0,     0,     0,   308,     0,     0,
     315,   195,     0,     0,     0,     0,   308,     0,     0,     0,
       0,     0,     0,   238,     0,     0,   315,     0,     0,     0,
     302,     0,     0,     0,     0,     0,   308,   225,   195,     0,
       0,     0,   209,   272,     0,     0,     0,     0,     0,   302,
       0,   285,     0,     0,     0,     0,     0,     0,   225,   225,
       0,     0,     0,   208,   272,     0,     0,   308,     0,     0,
     302,     0,     0,   239,     0,   209,     0,     0,     0,   195,
       0,     0,     0,     0,   286,     0,     0,   308,     0,   225,
     272,   316,     0,   208,     0,   272,     0,     0,     0,   -72,
     -72,   302,   -72,     0,   -72,   -72,   -72,     0,     0,     0,
     225,   302,     0,     0,     0,     0,   272,     0,     0,   -72,
       0,     0,   302,     0,     0,     0,   308,     0,     0,     0,
       0,     0,     0,     0,   302,     0,   378,   316,     0,     0,
     208,     0,   -72,   302,   -72,   -72,   -72,   -72,   -72,     0,
     239,     0,     0,   316,   -55,   -55,     0,   102,     0,   103,
     104,   105,     0,   302,     0,     0,   -63,   -63,     0,   -63,
     208,   -63,   -63,   -63,   -55,     0,     0,     0,   286,   -67,
     -67,     0,   -67,     0,   -67,   -67,   -67,     0,     0,   315,
     209,     0,   -55,     0,   302,     0,   238,   208,     0,   106,
     107,   210,   285,     0,   -63,   -63,     0,     0,   315,   109,
       0,   -63,   -63,   110,   302,   -67,     0,   238,   238,     0,
     209,     0,   -67,   285,   -67,   -67,   -67,   -67,   -67,   315,
       0,     0,   240,     0,   210,     0,     0,     0,   208,     0,
       0,     0,     0,   287,     0,     0,     0,     0,   238,   285,
     317,     0,     0,   302,   285,    29,    30,     0,    31,     0,
     315,    32,     0,     0,     0,     0,     0,   209,     0,   238,
     315,     0,     0,     0,     0,   285,     1,     2,     3,     4,
      33,   315,    34,    35,    36,    37,    38,     0,    39,    40,
      41,    42,    43,   315,     0,     0,   317,   209,     0,     0,
       0,     0,   315,    44,    45,     0,     0,   178,   -22,   240,
      46,    47,   317,     0,   -73,   -73,   316,   -73,     0,   -73,
     -73,   -73,   315,   239,   209,     0,     0,     0,     0,   286,
       0,     0,     0,     0,   -73,   316,     0,   287,     0,     0,
       0,     0,     0,     0,   239,   239,     0,     0,     0,   210,
     286,     0,   -73,   315,     0,     0,   316,   -73,     0,   -73,
     -73,   -73,   -73,   -73,     0,   209,     0,     0,     0,     0,
       0,     0,     0,   315,     0,   239,   286,   -53,   -53,   210,
     102,   286,   103,   104,   105,     0,     0,   316,     0,     0,
       0,     0,     0,     0,     0,     0,   239,   316,     0,     0,
       0,     0,   286,     0,     0,     0,     0,     0,   316,     0,
     -34,   -34,   315,   -34,     0,   -53,   -34,     0,     0,     0,
     316,     0,   106,   107,     0,     0,   210,     0,     0,   316,
       0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,     0,   316,
       0,     0,     0,     0,     0,     0,   210,     0,   -34,   -34,
       0,     0,   -34,   -34,     0,   -34,   -34,     0,     0,     0,
       0,   -69,   -69,     0,   -69,   317,   -69,   -69,   -69,     0,
     316,     0,   240,   210,   -72,   -72,     0,   -72,   287,   -72,
     -72,   -72,   -61,   -61,   317,   102,     0,   103,   104,   105,
     316,     0,     0,   240,   240,     0,     0,   -69,     0,   287,
       0,     0,   -61,     0,   -69,   317,   -69,   -69,   -69,   -69,
     -69,   399,   -72,     0,   210,     0,   400,   -72,     0,   -72,
     -72,   -72,   -72,   -72,   240,   287,     0,   106,   107,   316,
     287,     0,     0,     0,     0,     0,   317,   -36,   -36,     0,
     -36,     0,     0,   -36,     0,   240,   317,     0,     0,     0,
       0,   287,     0,     0,     0,     0,     0,   317,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   317,
     -36,   -36,   -36,   -36,   -36,     0,   -74,   -74,   317,   -74,
       0,   -74,   -74,   -74,     0,   -36,   -36,     0,     0,   -36,
     -36,     0,   -36,   -36,     0,     0,   -74,     0,   317,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -35,
     -35,     0,   -35,     0,   -74,   -35,     0,     0,     0,   -74,
       0,   -74,   -74,   -74,   -74,   -74,     0,     0,     0,   317,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -20,   -20,   317,
     -20,     0,     0,   -20,     0,     0,     0,   -35,   -35,     0,
       0,   -35,   -35,     0,   -35,   -35,     0,     0,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   -20,   -20,     0,   -37,   -37,   317,   -37,
       0,     0,   -37,     0,     0,   -20,   -20,     0,     0,   -20,
     -20,     0,   -20,   -20,     0,     0,     0,   -37,   -37,   -37,
     -37,   -37,   580,   -37,   -37,   -37,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -40,   -40,     0,   -40,     0,     0,
     -40,     0,     0,     0,   -37,   -37,     0,     0,   -37,   -37,
       0,   -37,   -37,     0,     0,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,
     -40,   -40,   -38,   -38,     0,   -38,     0,     0,   -38,     0,
       0,     0,   -40,   -40,     0,     0,   -40,   -40,     0,   -40,
     -40,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,
     -41,   -41,     0,   -41,     0,     0,   -41,     0,     0,     0,
     -38,   -38,     0,     0,   -38,   -38,     0,   -38,   -38,     0,
       0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -44,   -44,
       0,   -44,     0,     0,   -44,     0,     0,     0,   -41,   -41,
       0,     0,   -41,   -41,     0,   -41,   -41,     0,     0,   -44,
     -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,
       0,   -44,   -44,   -44,   -44,   -44,   -30,   -30,     0,   -30,
       0,     0,   -30,     0,     0,     0,   -44,   -44,     0,     0,
     -44,   -44,     0,   -44,   -44,     0,     0,   -30,   -30,   -30,
     -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -25,   -25,     0,   -25,     0,     0,
     -25,     0,     0,     0,   -30,   -30,     0,     0,   -30,   -30,
       0,   -30,   -30,     0,     0,   -25,   -25,   -25,   -25,   -25,
       0,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,
     -25,   -25,    29,    30,     0,    31,     0,     0,    32,     0,
       0,     0,   -25,   -25,     0,     0,   -25,   -25,     0,   -25,
     -25,     0,     0,     1,     2,     3,     4,    33,     0,    34,
      35,    36,    37,    38,     0,    39,    40,    41,    42,    43,
     -24,   -24,     0,   -24,     0,     0,   -24,     0,     0,     0,
      44,    45,     0,     0,   178,   -21,     0,    46,    47,     0,
       0,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,
     -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -26,   -26,
       0,   -26,     0,     0,   -26,     0,     0,     0,   -24,   -24,
       0,     0,   -24,   -24,     0,   -24,   -24,     0,     0,   -26,
     -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -27,   -27,     0,   -27,
       0,     0,   -27,     0,     0,     0,   -26,   -26,     0,     0,
     -26,   -26,     0,   -26,   -26,     0,     0,   -27,   -27,   -27,
     -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -31,   -31,     0,   -31,     0,     0,
     -31,     0,     0,     0,   -27,   -27,     0,     0,   -27,   -27,
       0,   -27,   -27,     0,     0,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,
     -31,   -31,   -28,   -28,     0,   -28,     0,     0,   -28,     0,
       0,     0,   -31,   -31,     0,     0,   -31,   -31,     0,   -31,
     -31,     0,     0,   -28,   -28,   -28,   -28,   -28,     0,   -28,
     -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
     -29,   -29,     0,   -29,     0,     0,   -29,     0,     0,     0,
     -28,   -28,     0,     0,   -28,   -28,     0,   -28,   -28,     0,
       0,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,   -45,   -45,
       0,   -45,     0,     0,   -45,     0,     0,     0,   -29,   -29,
       0,     0,   -29,   -29,     0,   -29,   -29,     0,     0,   -45,
     -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,
       0,   -45,   -45,   -45,   -45,   -45,   -23,   -23,     0,   -23,
       0,     0,   -23,     0,     0,     0,   -45,   -45,     0,     0,
     -45,   -45,     0,   -45,   -45,     0,     0,   -23,   -23,   -23,
     -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,     0,   -23,
     -23,   -23,   -23,   -23,   -43,   -43,     0,   -43,     0,     0,
     -43,     0,     0,     0,   -23,   -23,     0,     0,   -23,   -23,
       0,   -23,   -23,     0,     0,   -43,   -43,   -43,   -43,   -43,
       0,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,
     -43,   -43,   -46,   -46,     0,   -46,     0,     0,   -46,     0,
       0,     0,   -43,   -43,     0,     0,   -43,   -43,     0,   -43,
     -43,     0,     0,   -46,   -46,   -46,   -46,   -46,     0,   -46,
     -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,
     -32,   -32,     0,   -32,     0,     0,   -32,     0,     0,     0,
     -46,   -46,     0,     0,   -46,   -46,     0,   -46,   -46,     0,
       0,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,
     -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -42,   -42,
       0,   -42,     0,     0,   -42,     0,     0,     0,   -32,   -32,
       0,     0,   -32,   -32,     0,   -32,   -32,     0,     0,   -42,
     -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,
       0,   -42,   -42,   -42,   -42,   -42,   -33,   -33,     0,   -33,
       0,     0,   -33,     0,     0,     0,   -42,   -42,     0,     0,
     -42,   -42,     0,   -42,   -42,     0,     0,   -33,   -33,   -33,
     -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   -34,   -34,     0,   -34,     0,     0,
     -34,     0,     0,     0,   -33,   -33,     0,     0,   -33,   -33,
       0,   -33,   -33,     0,     0,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -34,   -36,   -36,     0,   -36,     0,     0,   -36,     0,
       0,     0,   -34,   -34,     0,     0,   -34,   -34,     0,   -34,
     -34,     0,     0,   -36,   -36,   -36,   -36,   -36,     0,   -36,
     -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
     -35,   -35,     0,   -35,     0,     0,   -35,     0,     0,     0,
     -36,   -36,     0,     0,   -36,   -36,     0,   -36,   -36,     0,
       0,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,
     -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -40,   -40,
       0,   -40,     0,     0,   -40,     0,     0,     0,   -35,   -35,
       0,     0,   -35,   -35,     0,   -35,   -35,     0,     0,   -40,
     -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,
       0,   -40,   -40,   -40,   -40,   -40,   -38,   -38,     0,   -38,
       0,     0,   -38,     0,     0,     0,   -40,   -40,     0,     0,
     -40,   -40,     0,   -40,   -40,     0,     0,   -38,   -38,   -38,
     -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,     0,   -38,
     -38,   -38,   -38,   -38,   -41,   -41,     0,   -41,     0,     0,
     -41,     0,     0,     0,   -38,   -38,     0,     0,   -38,   -38,
       0,   -38,   -38,     0,     0,   -41,   -41,   -41,   -41,   -41,
       0,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,
     -41,   -41,    -7,    -7,     0,    -7,     0,     0,    -7,     0,
       0,     0,   -41,   -41,     0,     0,   -41,   -41,     0,   -41,
     -41,     0,     0,    -7,    -7,    -7,    -7,    -7,     0,    -7,
      -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,
     -20,   -20,     0,   -20,     0,     0,   -20,     0,     0,     0,
      -7,    -7,     0,     0,    -7,    -7,     0,    -7,    -7,     0,
       0,   -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,
     -20,   -20,     0,   -20,   -20,   -20,   -20,   -20,    29,    30,
       0,    31,     0,     0,    32,     0,     0,     0,   -20,   -20,
       0,     0,   -20,   -20,     0,   -20,   -20,     0,     0,     1,
       2,     3,     4,   242,     0,   243,   244,    36,    37,    38,
       0,    39,    40,    41,    42,   245,    29,    30,     0,    31,
       0,     0,    32,     0,     0,     0,   246,    45,     0,     0,
     247,     0,     0,    46,    47,     0,     0,     1,     2,     3,
       4,    33,     0,    34,    35,    36,    37,    38,     0,    39,
      40,    41,    42,    43,   -94,   -94,     0,   -94,     0,     0,
     -94,     0,     0,     0,    44,    45,     0,     0,   178,     0,
       0,    46,    47,     0,     0,   -94,   -94,   -94,   -94,   -94,
       0,   -94,   -94,   -94,   -94,   -94,     0,   -94,   -94,   -94,
     -94,   -94,    29,    30,     0,    31,     0,     0,    32,     0,
       0,     0,   -94,   -94,     0,     0,   -94,     0,     0,   -94,
     -94,     0,     0,     0,     0,     0,     0,   242,     0,   243,
       0,    36,    37,    38,     0,    39,    40,    41,    42,   245,
     -94,   -94,     0,   -94,     0,     0,   -94,     0,     0,     0,
     246,    45,     0,     0,   247,     0,     0,    46,    47,     0,
       0,     0,     0,     0,     0,   -94,     0,   -94,     0,   -94,
     -94,   -94,     0,   -94,   -94,   -94,   -94,   -94,   -72,   -72,
       0,   -72,     0,   -72,   -72,   -72,     0,     0,   -94,   -94,
       0,     0,   -94,     0,     0,   -94,   -94,     0,   -75,   -75,
       0,   -75,     0,   -75,   -75,   -75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   347,   -72,   -72,   -75,     0,
       0,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -65,   -65,
       0,   -65,     0,   -65,   -65,   -65,   -75,     0,     0,     0,
       0,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -65,   -67,
     -67,     0,   -67,     0,   -67,   -67,   -67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -65,     0,     0,   -67,
       0,   -65,     0,   -65,   -65,   -65,   112,   113,     0,   -69,
     -69,     0,   -69,     0,   -69,   -69,   -69,   -67,     0,     0,
       0,     0,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -69,
     -71,   -71,     0,   -71,     0,   -71,   -71,   -71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -69,     0,     0,
     -71,     0,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -73,
     -73,     0,   -73,     0,   -73,   -73,   -73,     0,   -71,     0,
       0,     0,     0,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -74,   -74,     0,   -74,     0,   -74,   -74,   -74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -73,   -73,     0,
       0,     0,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -75,
     -75,     0,   -75,     0,   -75,   -75,   -75,     0,   -74,   -74,
       0,     0,     0,   -74,     0,   -74,   -74,   -74,   -74,   -74,
     -65,   -65,     0,   -65,     0,   -65,   -65,   -65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -75,   -75,     0,
       0,     0,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -67,
     -67,     0,   -67,     0,   -67,   -67,   -67,     0,   -65,   -65,
       0,     0,     0,   -65,     0,   -65,   -65,   -65,   112,   113,
     -69,   -69,     0,   -69,     0,   -69,   -69,   -69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -67,   -67,     0,
       0,     0,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -71,
     -71,     0,   -71,     0,   -71,   -71,   -71,     0,   -69,   -69,
       0,     0,     0,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     -68,   -68,     0,   -68,     0,   -68,   -68,   -68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -71,   -71,     0,
     -68,     0,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -68,
     -68,     0,   -68,     0,   -68,   -68,   -68,     0,   -68,     0,
       0,     0,     0,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     -72,   -72,     0,   -72,     0,   -72,   -72,   -72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -68,   -68,     0,
       0,     0,   -68,     0,   -68,   -68,   -68,   -68,   -68,     0,
       0,     0,     0,     0,     0,     0,     0,   399,   -72,     0,
       0,     0,     0,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -70,   -70,     0,   -70,     0,   -70,   -70,   -70,     0,     0,
       0,     0,   -64,   -64,     0,   -64,     0,   -64,   -64,   -64,
     -70,     0,     0,     0,   -66,   -66,     0,   -66,     0,   -66,
     -66,   -66,   -64,     0,     0,     0,     0,     0,   -70,     0,
       0,     0,     0,   -70,   -66,   -70,   -70,   -70,   -70,   -70,
     -64,     0,     0,     0,     0,   -64,     0,   -64,   -64,   -64,
     112,   113,   -66,     0,     0,     0,     0,   -66,     0,   -66,
     -66,   -66,   -66,   -66,   -70,   -70,     0,   -70,     0,   -70,
     -70,   -70,     0,     0,     0,     0,   -64,   -64,     0,   -64,
       0,   -64,   -64,   -64,     0,     0,     0,     0,   -66,   -66,
       0,   -66,     0,   -66,   -66,   -66,     0,     0,     0,     0,
       0,     0,   -70,   -70,     0,     0,     0,   -70,     0,   -70,
     -70,   -70,   -70,   -70,   -64,   -64,     0,     0,     0,   -64,
       0,   -64,   -64,   -64,   112,   113,   -66,   -66,     0,     0,
       0,   -66,     0,   -66,   -66,   -66,   -66,   -66,  -106,  -106,
       0,  -106,     0,  -106,  -106,  -106,     0,     0,     0,     0,
    -106,  -106,     0,  -106,     0,  -106,  -106,  -106,  -106,     0,
       0,     0,     0,     0,   -71,   -71,     0,   -71,     0,   -71,
     -71,   -71,   -68,   -68,     0,   -68,  -106,   -68,   -68,   -68,
       0,  -106,     0,  -106,  -106,  -106,  -106,  -106,  -106,  -106,
       0,     0,     0,  -106,     0,  -106,  -106,  -106,  -106,  -106,
     -71,     0,     0,     0,     0,     0,     0,   -71,   -68,   -71,
     -71,   -71,   -71,   -71,     0,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -70,   -70,     0,   -70,     0,   -70,   -70,   -70,
     -64,   -64,     0,   -64,     0,   -64,   -64,   -64,   -66,   -66,
       0,   -66,     0,   -66,   -66,   -66,  -106,  -106,     0,  -106,
       0,  -106,  -106,  -106,     0,     0,     0,     0,   -70,     0,
       0,     0,     0,     0,     0,   -70,   -64,   -70,   -70,   -70,
     -70,   -70,     0,   -64,   -66,   -64,   -64,   -64,   112,   113,
       0,   -66,  -106,   -66,   -66,   -66,   -66,   -66,     0,  -106,
       0,  -106,  -106,  -106,  -106,  -106,   -73,   -73,     0,   -73,
       0,   -73,   -73,   -73,   -74,   -74,     0,   -74,     0,   -74,
     -74,   -74,   -75,   -75,     0,   -75,   -73,   -75,   -75,   -75,
     -65,   -65,     0,   -65,   -74,   -65,   -65,   -65,   -67,   -67,
       0,   -67,   -75,   -67,   -67,   -67,     0,     0,     0,   -73,
     -65,   -73,   -73,   -73,   -73,   -73,     0,   -74,   -67,   -74,
     -74,   -74,   -74,   -74,     0,   -75,     0,   -75,   -75,   -75,
     -75,   -75,     0,   -65,     0,   -65,   -65,   -65,   112,   113,
       0,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -69,   -69,
       0,   -69,     0,   -69,   -69,   -69,   -71,   -71,     0,   -71,
       0,   -71,   -71,   -71,     0,     0,     0,     0,   -69,     0,
       0,     0,   -74,   -74,     0,   -74,   -71,   -74,   -74,   -74,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -69,     0,   -69,   -69,   -69,   -69,   -69,     0,   -71,
       0,   -71,   -71,   -71,   -71,   -71,   -75,   -75,     0,   -75,
     -74,   -75,   -75,   -75,     0,   -74,     0,   -74,   -74,   -74,
     -74,   -74,   -65,   -65,     0,   -65,     0,   -65,   -65,   -65,
       0,     0,     0,     0,   -67,   -67,     0,   -67,     0,   -67,
     -67,   -67,     0,     0,   -75,     0,     0,     0,     0,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -69,   -69,     0,   -69,
     -65,   -69,   -69,   -69,     0,   -65,     0,   -65,   -65,   -65,
     112,   113,   -67,     0,     0,     0,     0,   -67,     0,   -67,
     -67,   -67,   -67,   -67,   -71,   -71,     0,   -71,     0,   -71,
     -71,   -71,     0,     0,   -69,     0,     0,     0,     0,   -69,
       0,   -69,   -69,   -69,   -69,   -69,   -68,   -68,     0,   -68,
       0,   -68,   -68,   -68,     0,     0,     0,     0,   -68,   -68,
       0,   -68,   -71,   -68,   -68,   -68,   -68,   -71,     0,   -71,
     -71,   -71,   -71,   -71,     0,     0,     0,   -70,   -70,     0,
     -70,     0,   -70,   -70,   -70,     0,     0,     0,     0,   -68,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -70,     0,     0,
       0,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -64,   -64,
       0,   -64,     0,   -64,   -64,   -64,     0,     0,     0,     0,
     -70,     0,   -70,   -70,   -70,   -70,   -70,     0,   -64,   -66,
     -66,     0,   -66,     0,   -66,   -66,   -66,     0,     0,     0,
       0,   -70,   -70,     0,   -70,     0,   -70,   -70,   -70,   -66,
       0,   -64,     0,   -64,   -64,   -64,   112,   113,   -64,   -64,
       0,   -64,     0,   -64,   -64,   -64,     0,     0,     0,     0,
       0,     0,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -70,
       0,     0,     0,     0,   -70,     0,   -70,   -70,   -70,   -70,
     -70,     0,   -66,   -66,     0,   -66,   -64,   -66,   -66,   -66,
       0,   -64,     0,   -64,   -64,   -64,   112,   113,  -106,  -106,
       0,  -106,     0,  -106,  -106,  -106,     0,     0,     0,     0,
    -106,  -106,     0,  -106,     0,  -106,  -106,  -106,  -106,     0,
     -66,     0,     0,     0,     0,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -63,   -63,     0,   -63,     0,   -63,   -63,   -63,
       0,  -106,     0,  -106,  -106,  -106,  -106,  -106,  -106,     0,
       0,     0,   -63,  -106,     0,  -106,  -106,  -106,  -106,  -106,
     -62,   -62,     0,   -62,     0,   -62,   -62,   -62,     0,     0,
     -63,     0,     0,     0,     0,   109,     0,   -63,   -63,   110,
     -62,   -62,   -62,     0,   -62,     0,   -62,   -62,   -62,     0,
       0,     0,     0,     0,   -63,   -63,     0,   -63,   -62,   -63,
     -63,   -63,     0,   109,     0,   -62,   -62,   110,   -62,   -62,
       0,   -62,     0,   -62,   -62,   -62,     0,     0,     0,   -62,
     -62,     0,     0,     0,   109,     0,   -62,   -62,   110,     0,
       0,     0,   -63,     0,     0,     0,     0,   109,     0,   -63,
     -63,   110,   -53,   -53,     0,   102,   -62,   103,   104,   105,
       0,   109,     0,   -62,   -62,   110,   -55,   -55,     0,   102,
       0,   103,   104,   105,     0,   -57,   -57,     0,   102,     0,
     103,   104,   105,     0,     0,     0,     0,     0,     0,     0,
     -53,   -53,     0,     0,     0,   -57,     0,   106,   107,     0,
       0,     0,     0,     0,   -55,   -55,     0,     0,     0,     0,
       0,   106,   107,   -57,     0,     0,     0,     0,     0,     0,
     106,   107,   -59,   -59,     0,   102,     0,   103,   104,   105,
       0,   -57,   -57,     0,   102,     0,   103,   104,   105,     0,
     -59,   -59,   -59,   102,     0,   103,   104,   105,     0,     0,
       0,   -51,   -51,     0,   102,     0,   103,   104,   105,     0,
     -59,     0,     0,     0,     0,     0,     0,   106,   107,   -57,
     -57,   -51,     0,     0,     0,     0,   106,   107,   -59,   -59,
       0,     0,     0,     0,     0,   106,   107,   -53,   -53,     0,
     102,     0,   103,   104,   105,     0,   106,   107,   -55,   -55,
       0,   102,     0,   103,   104,   105,     0,   -53,   -55,   -55,
       0,   102,     0,   103,   104,   105,   -57,   -57,   -55,   102,
       0,   103,   104,   105,     0,     0,     0,     0,     0,     0,
       0,     0,   106,   107,   -57,   -57,   -57,   102,     0,   103,
     104,   105,     0,   106,   107,     0,   -55,     0,     0,     0,
       0,     0,     0,   106,   107,     0,     0,     0,     0,     0,
       0,   106,   107,   -59,   -59,     0,   102,     0,   103,   104,
     105,     0,   -57,     0,     0,     0,     0,     0,     0,   106,
     107,   -59,   -59,   -59,   102,     0,   103,   104,   105,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   106,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -59,
       0,     0,     0,     0,     0,     0,   106,   107
};

static const yytype_int16 yycheck[] =
{
       0,    23,     0,    51,   178,    66,     6,    79,     6,    16,
      17,    16,    17,   322,    79,    80,    16,    36,   326,    35,
       7,   197,    85,    36,    24,    52,    91,     4,     5,    45,
       7,    79,     7,    10,    79,    54,    79,   198,     7,   347,
       7,    54,    16,    17,    79,     0,    91,    54,    91,    54,
      55,   227,     4,     5,    36,     7,    91,    79,    10,   124,
      76,    77,    78,    79,    80,   374,    36,   228,     7,    91,
     378,    87,    54,   247,    16,    17,    53,    36,    94,    79,
      54,    79,   154,     7,    54,    16,    17,     4,     5,   154,
       7,   399,    36,    10,    54,    54,     4,     5,   274,     7,
      56,    53,    10,    16,    17,    36,   154,   155,   124,   154,
      54,   154,    54,    55,   275,    36,    33,    34,    35,   154,
      37,    38,    39,    40,   140,   173,   174,    53,   304,    36,
      16,    17,   154,    54,   195,    52,    53,   153,   154,    52,
     156,   202,    59,    60,   305,    53,    57,    54,     0,     4,
       5,    59,     7,    53,   154,    10,   154,     4,     5,    53,
       7,    52,    53,    10,   225,   181,     4,     5,    54,     7,
      53,   232,    10,    25,    26,    27,    28,   193,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    53,
      37,    38,    39,    40,    41,    33,    34,    35,    53,    37,
      38,    39,    40,    53,    59,    52,    53,   223,    36,    56,
      57,   272,    59,    60,    53,    53,    54,    53,   279,    16,
      17,    59,    60,    53,     4,     5,    54,     7,   244,    52,
      10,    36,     4,     5,    52,     7,     4,     5,    10,     7,
      52,   302,    10,    36,     4,     5,    52,     7,   309,    54,
      10,    16,    17,    52,   270,    52,     7,    37,    38,    39,
      40,    54,   438,    16,    17,    36,   329,   330,     7,    37,
      38,    39,    40,    53,    16,    17,    16,    17,   439,    59,
      60,    53,   458,    54,   300,    53,     7,   350,   351,    54,
      55,    59,    60,    53,    36,    54,    55,   369,   459,    59,
      54,    54,    55,   319,   369,   370,     4,     5,   373,     7,
     326,   327,    10,   489,    54,    55,   332,    52,   381,   382,
      54,   369,   338,    54,   369,    54,   369,    36,   373,   490,
     373,   347,   348,   509,   369,    16,    17,   353,   373,   402,
     403,    16,    17,   359,    54,    54,    54,   369,    36,   510,
      54,   373,   368,   369,   370,    53,    36,   373,    16,    17,
      36,    59,   378,   379,     4,     5,    54,     7,   384,   369,
      10,   369,    54,    54,   390,     4,     5,    52,     7,     4,
       5,    10,     7,   399,   400,    10,    54,    55,     7,   405,
      54,    55,    52,    16,    17,   411,    54,    37,    38,    39,
      40,   466,    16,    17,    33,    34,    35,   423,    37,    38,
      39,    40,    54,    53,     8,     9,   432,    54,    55,    59,
      60,    16,    17,    52,    53,    16,    17,    33,    53,    52,
      59,    60,    54,    55,    40,    41,   452,    43,    54,    45,
      54,     4,     5,    52,     7,     4,     5,    10,     7,    52,
     466,    10,     4,     5,    54,     7,    52,     7,    10,    54,
      55,    16,    17,    54,    55,    16,    17,   483,   540,   541,
      76,    53,    78,    54,    55,   540,   541,    16,    17,    53,
      19,    87,    21,    22,    23,    16,    17,   503,    94,    53,
      53,    53,   540,   541,    53,   540,   541,   540,   541,    54,
      59,    53,    36,    54,    55,   540,   541,    59,   580,   581,
      53,     4,     5,    52,     7,   580,   581,    10,   540,   541,
      53,    52,    61,    62,   540,   541,   542,    16,    17,    16,
      17,    53,   580,   581,   140,   580,   581,   580,   581,    53,
     540,   541,   540,   541,    53,   580,   581,   153,     4,     5,
     156,     7,    16,    17,    10,    16,    17,    53,   580,   581,
      53,    16,    17,    52,   580,   581,    59,    54,    55,    16,
      17,     4,     5,    53,     7,   181,    53,    10,    16,    17,
     580,   581,   580,   581,   190,   191,    53,   193,    53,    36,
      54,    55,    52,    54,    55,   201,    53,    53,   196,    54,
      55,    16,    17,    59,    37,    38,    39,    40,    52,    16,
      17,    16,    17,    52,   220,   221,    54,   223,    54,    55,
      53,     4,     5,    53,     7,   231,    59,    10,   226,    36,
      53,    36,     4,     5,    53,     7,   242,    52,    10,   245,
      16,    17,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    53,    37,    38,    39,    40,    41,    16,
      17,   267,   268,    53,   270,    37,    38,    39,    40,    52,
      53,    53,   278,    56,    57,   273,    59,    60,    54,    55,
      36,    53,    36,    16,    17,    54,    55,    59,    60,    54,
      55,   297,   298,    53,   300,    16,    17,    54,    55,    16,
      17,    53,   308,     4,     5,   303,     7,    16,    17,    10,
      53,    16,    17,   319,    53,    36,    53,    45,    46,    52,
     326,   327,     4,     5,    54,     7,   332,    36,    10,    54,
      16,    17,   338,    54,   340,    52,    37,    38,    39,    40,
     346,   347,   348,    16,    17,    54,   344,   353,    76,    54,
      78,    54,    53,   359,    52,   361,    16,    17,    59,    87,
      52,   367,   368,     7,    16,    17,    94,   365,    54,    55,
      36,    53,   378,   379,    54,    55,    36,    59,   384,    54,
      55,    54,    55,     7,   390,     7,   392,    54,    55,    16,
      17,     7,   398,   399,   400,    16,    17,    52,   396,   405,
       4,     5,    54,     7,     7,   411,    10,   413,     7,    36,
      16,    17,   140,   419,    54,     4,     5,   423,     7,   417,
       7,    10,    16,    17,     7,   153,   432,    54,   156,    57,
     436,    16,    17,    54,    55,     7,   442,   435,    16,    17,
      16,    17,    36,   441,    54,    55,   452,     7,    54,    53,
     456,    16,    17,   181,     7,    59,   462,   455,    36,     7,
      54,    54,    55,   461,    53,   193,   194,    52,     4,     5,
      59,     7,    54,   201,    10,    54,    54,   483,    54,     4,
       5,   487,     7,    54,    55,    10,    54,   493,   486,    54,
      16,    17,    16,    17,   492,   223,   224,   503,    54,    16,
      17,   507,    54,   231,    16,    17,    36,   513,   506,    36,
      36,    54,     4,     5,   512,     7,    54,    53,    10,    36,
      54,    16,    17,    59,    36,    16,    17,   525,    53,   527,
      54,    16,    17,    54,    59,    54,   542,    54,   536,    54,
     538,    36,   270,   271,    54,    37,    38,    39,    40,    36,
     278,     4,     5,   551,     7,   553,    36,    10,    57,    54,
      54,    53,    36,    54,   562,    54,   564,    59,    60,    54,
      16,    17,   300,   301,    36,     4,     5,    54,     7,    54,
     308,    10,    54,    54,    37,    38,    39,    40,    36,    54,
      36,   319,    36,    16,    17,    45,    16,    17,   326,   327,
      53,    36,    16,    17,   332,    54,    59,    60,    54,    54,
     338,    54,   340,   341,   342,   343,    16,    17,   346,   347,
     348,    16,    17,    54,    53,   353,    76,    54,    78,    52,
      59,   359,    52,   361,   362,   363,   364,    87,    52,   367,
     368,    36,    54,    54,    94,    16,    17,     7,    16,    17,
     378,   379,     4,     5,    54,     7,   384,    54,    10,    54,
      16,    17,   390,     7,   392,   393,   394,   395,    54,    36,
     398,   399,   400,    16,    17,    36,    19,   405,    21,    22,
      23,    52,    36,   411,    52,   413,   414,   415,   416,     7,
     140,   419,    54,    36,     7,   423,    52,    16,    17,    54,
       6,    53,    24,   153,   432,    54,   156,    59,   436,    54,
      53,    54,    54,    54,   442,    58,    59,    36,    61,    62,
      63,    64,    65,    54,   452,    16,    17,    54,   456,    54,
      54,   181,    16,    17,   462,    19,   373,    21,    22,    23,
      16,    17,    -1,   193,   194,    36,    16,    17,    16,    17,
      -1,   201,    36,    -1,    -1,   483,    -1,    -1,    -1,   487,
      -1,     4,     5,    54,     7,   493,    36,    10,    36,    -1,
      54,    -1,    -1,   223,   224,   503,    52,    61,    62,   507,
      -1,   231,    16,    17,    54,   513,    54,    16,    17,    -1,
      33,    34,    35,    -1,    37,    38,    39,    40,    25,    26,
      27,    28,    36,    -1,     0,    -1,    -1,    36,    -1,    52,
      53,    -1,     4,     5,   542,     7,    59,    60,    10,    -1,
     270,   271,    -1,    -1,    -1,    54,    -1,    54,   278,    25,
      26,    27,    28,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
     300,   301,    -1,    -1,    16,    17,    -1,    -1,   308,    -1,
      52,    53,    -1,    -1,    56,    57,    -1,    59,    60,   319,
      -1,    -1,     4,     5,    36,     7,   326,   327,    10,    -1,
      16,    17,   332,    19,    -1,    21,    22,    23,   338,    -1,
     340,   341,   342,   343,    -1,    -1,   346,   347,   348,    -1,
      16,    17,    -1,   353,    -1,    37,    38,    39,    40,   359,
      -1,   361,   362,   363,   364,    -1,    52,   367,   368,    -1,
      36,    53,    -1,    -1,    -1,    61,    62,    59,   378,   379,
      16,    17,    -1,    19,   384,    21,    22,    23,    54,    45,
     390,    -1,   392,   393,   394,   395,    -1,    -1,   398,   399,
     400,    16,    17,    -1,    -1,   405,    -1,    16,    17,    16,
      17,   411,    -1,   413,   414,   415,   416,    -1,    54,   419,
      76,    36,    78,   423,     0,    61,    62,    36,    -1,    36,
       6,    87,   432,    16,    17,    -1,   436,    -1,    94,    54,
      16,    -1,   442,     4,     5,    54,     7,    54,    24,    10,
      -1,    -1,   452,    36,    -1,    -1,   456,    -1,   114,    -1,
      -1,    -1,   462,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    16,    17,   483,   140,    16,    17,   487,    -1,     0,
      -1,    52,    53,   493,     0,    56,    57,   153,    59,    60,
     156,    36,    -1,   503,    -1,    36,    -1,   507,    25,    26,
      27,    28,    -1,   513,    25,    26,    27,    28,    -1,    25,
      26,    27,    28,    16,    17,   181,    16,    17,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,   193,    -1,    -1,
      -1,    -1,   542,    36,    -1,   201,    36,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
       0,    37,    38,    39,    40,    41,    -1,   223,     4,     5,
      -1,     7,    -1,    -1,    10,   231,    52,    53,    -1,    -1,
      56,    57,    -1,    59,    60,    25,    26,    27,    28,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,   270,    -1,    52,    53,    -1,    -1,
      56,    57,   278,    59,    60,    16,    17,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,   300,    36,    -1,    -1,    -1,    -1,
      -1,    -1,   308,    -1,    52,    53,    -1,    -1,    56,    57,
      -1,    59,    60,   319,    -1,    -1,    -1,    45,     0,    -1,
     326,   327,    16,    17,    -1,    19,   332,    21,    22,    23,
      -1,    -1,   338,    -1,   340,   341,   342,   343,    -1,    -1,
     346,   347,   348,    25,    26,    27,    28,   353,    76,     0,
      78,    -1,    -1,   359,     0,   361,   362,   363,   364,    87,
      54,   367,   368,    -1,    -1,    59,    94,    61,    62,    63,
      64,    65,   378,   379,    25,    26,    27,    28,   384,    25,
      26,    27,    28,   111,   390,    -1,   392,   393,   394,   395,
      -1,    -1,   398,   399,   400,    16,    17,    -1,    19,   405,
      21,    22,    23,    -1,    -1,   411,    -1,   413,   414,   415,
     416,    -1,   140,   419,    -1,    16,    17,   423,    19,    -1,
      21,    22,    23,    -1,    -1,   153,   432,    -1,   156,    -1,
     436,    -1,    53,    54,    55,    -1,   442,    58,    59,    -1,
      61,    62,    63,    64,    65,    -1,   452,    -1,    -1,    -1,
     456,    52,    53,   181,    -1,    -1,   462,    58,    59,    -1,
      61,    62,    63,    64,    65,   193,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   201,    -1,    -1,    -1,   483,    -1,    -1,
      -1,   487,    -1,     4,     5,    -1,     7,   493,    -1,    10,
      -1,    -1,    -1,    -1,    -1,   223,    -1,   503,    -1,    -1,
      -1,   507,    -1,   231,    -1,    -1,    -1,   513,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,     4,     5,   542,     7,    59,    60,
      10,    -1,   270,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     278,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,   300,     4,     5,    -1,     7,    -1,    -1,    10,
     308,    -1,    52,    53,    -1,    -1,    56,    57,    -1,    59,
      60,   319,    -1,    -1,    -1,    -1,    -1,    -1,   326,   327,
      -1,    -1,    -1,    -1,   332,    -1,    37,    38,    39,    40,
     338,    -1,   340,   341,   342,    -1,    -1,    -1,   346,   347,
     348,    -1,    53,    -1,    -1,   353,    -1,    -1,    59,    60,
      -1,   359,    -1,   361,   362,   363,    -1,    -1,    -1,   367,
     368,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     378,   379,    16,    17,    -1,    19,   384,    21,    22,    23,
      -1,    45,   390,    -1,   392,   393,   394,    -1,    -1,    -1,
     398,   399,   400,    -1,    -1,    -1,    -1,   405,    -1,    -1,
      -1,    65,    -1,   411,    -1,   413,   414,   415,    52,    -1,
      -1,   419,    76,    -1,    78,   423,    -1,    61,    62,    -1,
      -1,    -1,    -1,    87,   432,    -1,    -1,    -1,   436,    -1,
      94,    -1,    -1,    -1,   442,     4,     5,   101,     7,    -1,
      -1,    10,    -1,    -1,   452,    -1,    -1,    -1,   456,    -1,
      -1,    -1,    -1,   117,   462,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    -1,    -1,   483,   140,    -1,    -1,   487,
     144,    -1,    -1,    52,    53,   493,   150,    56,    57,   153,
      59,    60,   156,    -1,    -1,   503,    -1,    -1,    -1,   507,
      -1,    -1,    -1,    -1,    -1,   513,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,   193,
      -1,    -1,    -1,    -1,   542,    -1,    -1,   201,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,   223,
       4,     5,    -1,     7,    -1,    -1,    10,   231,    52,    53,
      -1,    -1,    56,    57,    -1,    59,    60,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,   270,    -1,    52,    53,
      -1,    -1,    56,    57,   278,    59,    60,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,   300,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   308,    -1,    52,    53,    -1,    -1,
      56,    57,    -1,    59,    60,   319,    -1,    -1,    -1,    45,
      -1,    -1,   326,   327,    16,    17,    -1,    19,   332,    21,
      22,    23,    -1,    -1,   338,    -1,   340,    -1,    -1,    -1,
      -1,    -1,   346,   347,   348,    -1,    -1,    -1,    -1,   353,
      76,    -1,    78,    -1,    -1,   359,    -1,   361,    -1,    -1,
      52,    87,    -1,   367,   368,    -1,    -1,    59,    94,    61,
      62,    63,    64,    65,   378,   379,    -1,    -1,    -1,    -1,
     384,    -1,   108,    -1,    -1,    -1,   390,    -1,   392,    -1,
      -1,    -1,    -1,    -1,   398,   399,   400,    -1,    -1,    -1,
      -1,   405,    -1,    -1,    -1,    -1,    -1,   411,    -1,   413,
       4,     5,    -1,     7,   140,   419,    10,    16,    17,   423,
      19,    -1,    21,    22,    23,    -1,    -1,   153,   432,    -1,
     156,    -1,   436,    -1,    -1,    -1,    -1,    -1,   442,    33,
      34,    35,    -1,    37,    38,    39,    40,    -1,   452,    -1,
      -1,    -1,   456,    52,    -1,   181,    -1,    -1,   462,    53,
      59,    -1,    61,    62,    63,    59,    60,   193,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,   483,
      -1,    -1,    -1,   487,    -1,     4,     5,    -1,     7,   493,
      -1,    10,    -1,    -1,    -1,    -1,    -1,   223,    -1,   503,
      -1,    -1,    -1,   507,    -1,   231,    -1,    -1,    -1,   513,
      -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,     4,     5,   542,     7,
      59,    60,    10,    -1,   270,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   278,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,   300,     4,     5,    -1,     7,    -1,
      -1,    10,   308,    -1,    52,    53,    -1,    -1,    56,    57,
      -1,    59,    60,   319,    -1,    -1,    -1,    -1,    -1,    -1,
     326,   327,    -1,    -1,    -1,    -1,   332,    -1,    37,    38,
      39,    40,   338,    -1,   340,   341,    -1,    -1,    -1,    -1,
     346,   347,   348,    -1,    53,    -1,    45,   353,    -1,    -1,
      59,    -1,    -1,   359,    -1,   361,   362,    -1,    -1,    -1,
      -1,   367,   368,    -1,    16,    17,    65,    19,    -1,    21,
      22,    23,   378,   379,    -1,    -1,    -1,    76,   384,    78,
      -1,    -1,    -1,    -1,   390,    -1,   392,   393,    87,    -1,
      -1,    -1,   398,   399,   400,    94,    -1,    -1,    -1,   405,
      52,    -1,   101,    -1,    -1,   411,    -1,   413,   414,    61,
      62,    -1,    -1,   419,    -1,    -1,    -1,   423,   117,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   432,    -1,    -1,    -1,
     436,    -1,    -1,    -1,    -1,    -1,   442,     4,     5,    -1,
       7,   140,    -1,    10,    -1,   144,   452,    -1,    -1,    -1,
     456,   150,    -1,    -1,   153,    -1,   462,   156,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    -1,    -1,   483,    -1,    -1,
      -1,   487,   181,    -1,    -1,    52,    53,   493,    -1,    56,
      57,    -1,    59,    60,   193,    -1,    -1,   503,    -1,    -1,
      -1,   507,   201,    -1,    -1,    -1,    -1,   513,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,    -1,
       7,    -1,    -1,    10,   223,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,    -1,    -1,    -1,   542,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,
      57,   270,    59,    60,    -1,    -1,    -1,    -1,    -1,   278,
      29,    -1,    31,    -1,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    -1,    -1,    -1,     4,     5,    -1,     7,
      -1,   300,    10,    52,    53,    -1,    -1,    56,    -1,   308,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     319,    -1,    -1,    -1,    45,    -1,    -1,   326,   327,    37,
      38,    39,    40,   332,    -1,    -1,    -1,    16,    17,   338,
      19,   340,    21,    22,    23,    53,    -1,   346,   347,   348,
      -1,    59,    -1,    -1,   353,    76,    -1,    78,    16,    17,
     359,    19,   361,    21,    22,    23,    87,    -1,   367,   368,
      -1,    -1,    -1,    94,    -1,    54,    55,    -1,    36,   378,
     379,    -1,    61,    62,    -1,   384,    -1,    -1,    -1,    -1,
      -1,   390,    -1,   392,    -1,    -1,    54,    -1,    -1,   398,
     399,   400,    -1,    61,    62,    -1,   405,    -1,    -1,    -1,
      -1,    -1,   411,    -1,   413,     4,     5,    -1,     7,   140,
     419,    10,    16,    17,   423,    19,    -1,    21,    22,    23,
      -1,    -1,   153,   432,    -1,   156,    -1,   436,    -1,    -1,
      -1,    -1,    -1,   442,    33,    34,    35,    -1,    37,    38,
      39,    40,    -1,   452,    -1,    -1,    -1,   456,    52,    -1,
     181,    -1,    -1,   462,    53,    59,    -1,    61,    62,    63,
      59,    60,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     201,    -1,    -1,    -1,   483,    -1,    -1,    -1,   487,    -1,
       4,     5,    -1,     7,   493,    -1,    10,    -1,    -1,    -1,
      -1,    -1,   223,    -1,   503,    -1,    -1,    -1,   507,    -1,
     231,    -1,    -1,    -1,   513,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,     4,     5,   542,     7,    59,    60,    10,    -1,   270,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   278,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,   300,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    52,
      53,    -1,    -1,    56,    57,    -1,    59,    60,   319,    -1,
      -1,    -1,    45,    -1,    -1,   326,   327,    16,    17,    -1,
      19,   332,    21,    22,    23,    -1,    -1,   338,    -1,   340,
      -1,    -1,    -1,    -1,    -1,   346,   347,   348,    -1,    -1,
      -1,    -1,   353,    76,    -1,    78,    -1,    -1,   359,    -1,
     361,    -1,    -1,    52,    87,    -1,   367,   368,    -1,    -1,
      59,    94,    61,    62,    63,    64,    65,   378,   379,    -1,
      -1,    16,    17,   384,    19,    -1,    21,    22,    23,   390,
      -1,   392,    -1,    -1,    -1,    -1,    -1,   398,   399,   400,
      -1,    36,    -1,    -1,   405,    -1,    -1,    -1,    -1,    -1,
     411,    -1,   413,     4,     5,    -1,     7,   140,   419,    10,
      -1,    -1,   423,    -1,    59,    -1,    61,    62,    63,    -1,
     153,   432,    -1,   156,    -1,   436,    -1,    -1,    -1,    -1,
      -1,   442,    33,    34,    35,    -1,    37,    38,    39,    40,
      -1,   452,    -1,    -1,    -1,   456,    -1,    -1,   181,    -1,
      -1,   462,    53,    -1,    -1,    -1,    -1,    -1,    59,    60,
     193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,
      -1,    -1,   483,    -1,    -1,    -1,   487,    -1,     4,     5,
      -1,     7,   493,    -1,    10,    -1,    -1,    -1,    -1,    -1,
     223,    -1,   503,    -1,    -1,    -1,   507,    -1,   231,    -1,
      -1,    -1,   513,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,     4,
       5,   542,     7,    59,    60,    10,    -1,   270,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   278,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,   300,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   308,    -1,    52,    53,    -1,
      -1,    56,    57,    -1,    59,    60,   319,    -1,    -1,    -1,
      45,    -1,    -1,   326,   327,    16,    17,    -1,    19,   332,
      21,    22,    23,    -1,    -1,   338,    -1,   340,    -1,    -1,
      -1,    -1,    -1,   346,   347,   348,    -1,    -1,    -1,    -1,
     353,    76,    -1,    78,    -1,    -1,   359,    -1,   361,    -1,
      -1,    52,    87,    -1,   367,   368,    -1,    -1,    59,    94,
      61,    62,    63,    64,    65,   378,   379,    -1,    -1,    16,
      17,   384,    19,    -1,    21,    22,    23,   390,    -1,   392,
      -1,    -1,    -1,    -1,    -1,   398,   399,   400,    -1,    36,
      -1,    -1,   405,    -1,    -1,    -1,    -1,    -1,   411,    -1,
     413,     4,     5,    -1,     7,   140,   419,    10,    -1,    -1,
     423,    -1,    59,    -1,    61,    62,    63,    -1,   153,   432,
      -1,   156,    -1,   436,    -1,    -1,    -1,    -1,    -1,   442,
      33,    34,    35,    -1,    37,    38,    39,    40,    -1,   452,
      -1,    -1,    -1,   456,    -1,    -1,   181,    -1,    -1,   462,
      53,    -1,    -1,    -1,    -1,    -1,    59,    60,   193,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,
     483,    -1,    -1,    -1,   487,    -1,     4,     5,    -1,     7,
     493,    -1,    10,    -1,    -1,    -1,    -1,    -1,   223,    -1,
     503,    -1,    -1,    -1,   507,    -1,   231,    -1,    -1,    -1,
     513,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,     4,     5,   542,
       7,    59,    60,    10,    -1,   270,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   278,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,   300,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   308,    -1,    52,    53,    -1,    -1,    56,
      57,    -1,    59,    60,   319,    -1,    -1,    -1,    45,    -1,
      -1,   326,   327,    16,    17,    -1,    19,   332,    21,    22,
      23,    -1,    -1,   338,    -1,   340,    -1,    -1,    -1,    -1,
      -1,   346,   347,   348,    -1,    -1,    -1,    -1,   353,    76,
      -1,    78,    -1,    -1,   359,    -1,   361,    -1,    -1,    52,
      87,    -1,   367,   368,    -1,    -1,    59,    94,    61,    62,
      63,    64,    65,   378,   379,    16,    17,    -1,    19,   384,
      21,    22,    23,    -1,    -1,   390,    -1,   392,    -1,    -1,
      -1,    -1,    -1,   398,   399,   400,    -1,    -1,    -1,    -1,
     405,    -1,    -1,    -1,    -1,    -1,   411,    -1,   413,     4,
       5,    52,     7,   140,   419,    10,    -1,    -1,   423,    -1,
      61,    62,    -1,    -1,    -1,    -1,   153,   432,    -1,   156,
      -1,   436,    -1,    -1,    -1,    -1,    -1,   442,    33,    34,
      35,    -1,    37,    38,    39,    40,    -1,   452,    -1,    -1,
      -1,   456,    -1,    -1,   181,    -1,    -1,   462,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,   193,    -1,    -1,    -1,
      16,    17,    -1,    19,   201,    21,    22,    23,   483,    -1,
      16,    17,   487,    19,    -1,    21,    22,    23,   493,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,   503,    -1,
      36,    -1,   507,    -1,   231,    -1,    52,    -1,   513,    -1,
      -1,     4,     5,    -1,     7,    61,    62,    10,    54,    45,
      -1,     4,     5,    -1,     7,    61,    62,    10,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,   542,    31,    32,
      33,    34,    35,   270,    37,    38,    39,    40,    41,    -1,
      76,   278,    78,    -1,    37,    38,    39,    40,    -1,    52,
      53,    87,    -1,    56,    57,    -1,    59,    60,    94,    -1,
      53,    -1,    -1,   300,    -1,   101,    59,    16,    17,    -1,
      19,   308,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,   117,   319,    -1,    -1,    -1,    -1,    -1,    -1,   326,
     327,    -1,    -1,    -1,    -1,   332,    -1,    -1,    -1,    -1,
      -1,   338,    -1,   340,   140,    54,    55,    -1,    -1,   346,
     347,   348,    61,    62,    -1,    -1,   353,   153,    -1,    -1,
     156,    -1,   359,    -1,   361,    -1,    -1,    -1,    -1,    -1,
     367,   368,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,   378,   379,    16,    17,   181,    19,   384,    21,    22,
      23,    -1,    -1,   390,    -1,   392,    -1,   193,    -1,    -1,
      -1,   398,   399,   400,    -1,    -1,    -1,    76,   405,    78,
      -1,    -1,    -1,    -1,   411,    -1,   413,    -1,    87,    -1,
      -1,    54,   419,    -1,    -1,    94,   423,   223,    61,    62,
      -1,    -1,    -1,    -1,    -1,   432,    -1,    -1,    -1,   436,
      -1,    -1,    -1,    -1,    -1,   442,    16,    17,    -1,    19,
      -1,    21,    22,    23,    -1,   452,    -1,    -1,    -1,   456,
      -1,    -1,    -1,    -1,    -1,   462,    36,    -1,    -1,    -1,
      -1,   140,    16,    17,   270,    19,    -1,    21,    22,    23,
      -1,    -1,    -1,    53,   153,    -1,   483,   156,    58,    59,
     487,    61,    62,    63,    64,    65,   493,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   300,    -1,   503,    -1,    52,    53,
     507,    -1,   181,    -1,    -1,    59,   513,    61,    62,    63,
      64,    65,    -1,   319,   193,    -1,    -1,    -1,    -1,    -1,
     326,   327,    -1,    -1,    -1,    45,   332,    -1,    -1,    -1,
      -1,    -1,   338,    -1,   340,   542,    -1,    -1,    -1,    -1,
     346,   347,   348,    -1,   223,    -1,    -1,   353,    -1,    -1,
      -1,    -1,    -1,   359,    -1,   361,    76,    -1,    78,    -1,
      -1,   367,   368,    16,    17,    -1,    19,    87,    21,    22,
      23,    -1,   378,   379,    94,    -1,    -1,    -1,   384,    -1,
      -1,    -1,    -1,    36,   390,    -1,   392,    -1,    -1,    -1,
      -1,   270,   398,   399,   400,    -1,    -1,    -1,    -1,   405,
      53,    54,    -1,    -1,    -1,   411,    59,   413,    61,    62,
      63,    64,    65,   419,    -1,    -1,    -1,   423,    -1,    -1,
     140,   300,    -1,    -1,    -1,    -1,   432,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,   156,    -1,    -1,    -1,
     319,    -1,    -1,    -1,    -1,    -1,   452,   326,   327,    -1,
      -1,    -1,    45,   332,    -1,    -1,    -1,    -1,    -1,   338,
      -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,   347,   348,
      -1,    -1,    -1,   193,   353,    -1,    -1,   483,    -1,    -1,
     359,    -1,    -1,    76,    -1,    78,    -1,    -1,    -1,   368,
      -1,    -1,    -1,    -1,    87,    -1,    -1,   503,    -1,   378,
     379,    94,    -1,   223,    -1,   384,    -1,    -1,    -1,    16,
      17,   390,    19,    -1,    21,    22,    23,    -1,    -1,    -1,
     399,   400,    -1,    -1,    -1,    -1,   405,    -1,    -1,    36,
      -1,    -1,   411,    -1,    -1,    -1,   542,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   423,    -1,    53,   140,    -1,    -1,
     270,    -1,    59,   432,    61,    62,    63,    64,    65,    -1,
     153,    -1,    -1,   156,    16,    17,    -1,    19,    -1,    21,
      22,    23,    -1,   452,    -1,    -1,    16,    17,    -1,    19,
     300,    21,    22,    23,    36,    -1,    -1,    -1,   181,    16,
      17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,   319,
     193,    -1,    54,    -1,   483,    -1,   326,   327,    -1,    61,
      62,    45,   332,    -1,    54,    55,    -1,    -1,   338,    59,
      -1,    61,    62,    63,   503,    52,    -1,   347,   348,    -1,
     223,    -1,    59,   353,    61,    62,    63,    64,    65,   359,
      -1,    -1,    76,    -1,    78,    -1,    -1,    -1,   368,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,   378,   379,
      94,    -1,    -1,   542,   384,     4,     5,    -1,     7,    -1,
     390,    10,    -1,    -1,    -1,    -1,    -1,   270,    -1,   399,
     400,    -1,    -1,    -1,    -1,   405,    25,    26,    27,    28,
      29,   411,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,   423,    -1,    -1,   140,   300,    -1,    -1,
      -1,    -1,   432,    52,    53,    -1,    -1,    56,    57,   153,
      59,    60,   156,    -1,    16,    17,   319,    19,    -1,    21,
      22,    23,   452,   326,   327,    -1,    -1,    -1,    -1,   332,
      -1,    -1,    -1,    -1,    36,   338,    -1,   181,    -1,    -1,
      -1,    -1,    -1,    -1,   347,   348,    -1,    -1,    -1,   193,
     353,    -1,    54,   483,    -1,    -1,   359,    59,    -1,    61,
      62,    63,    64,    65,    -1,   368,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   503,    -1,   378,   379,    16,    17,   223,
      19,   384,    21,    22,    23,    -1,    -1,   390,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   399,   400,    -1,    -1,
      -1,    -1,   405,    -1,    -1,    -1,    -1,    -1,   411,    -1,
       4,     5,   542,     7,    -1,    54,    10,    -1,    -1,    -1,
     423,    -1,    61,    62,    -1,    -1,   270,    -1,    -1,   432,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,   452,
      -1,    -1,    -1,    -1,    -1,    -1,   300,    -1,    52,    53,
      -1,    -1,    56,    57,    -1,    59,    60,    -1,    -1,    -1,
      -1,    16,    17,    -1,    19,   319,    21,    22,    23,    -1,
     483,    -1,   326,   327,    16,    17,    -1,    19,   332,    21,
      22,    23,    16,    17,   338,    19,    -1,    21,    22,    23,
     503,    -1,    -1,   347,   348,    -1,    -1,    52,    -1,   353,
      -1,    -1,    36,    -1,    59,   359,    61,    62,    63,    64,
      65,    53,    54,    -1,   368,    -1,    58,    59,    -1,    61,
      62,    63,    64,    65,   378,   379,    -1,    61,    62,   542,
     384,    -1,    -1,    -1,    -1,    -1,   390,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,   399,   400,    -1,    -1,    -1,
      -1,   405,    -1,    -1,    -1,    -1,    -1,   411,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,   423,
      37,    38,    39,    40,    41,    -1,    16,    17,   432,    19,
      -1,    21,    22,    23,    -1,    52,    53,    -1,    -1,    56,
      57,    -1,    59,    60,    -1,    -1,    36,    -1,   452,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,    -1,     7,    -1,    54,    10,    -1,    -1,    -1,    59,
      -1,    61,    62,    63,    64,    65,    -1,    -1,    -1,   483,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,     4,     5,   503,
       7,    -1,    -1,    10,    -1,    -1,    -1,    52,    53,    -1,
      -1,    56,    57,    -1,    59,    60,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    -1,     4,     5,   542,     7,
      -1,    -1,    10,    -1,    -1,    52,    53,    -1,    -1,    56,
      57,    -1,    59,    60,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,    57,
      -1,    59,    60,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    -1,    52,    53,    -1,    -1,    56,    57,    -1,    59,
      60,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,
      52,    53,    -1,    -1,    56,    57,    -1,    59,    60,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    52,    53,
      -1,    -1,    56,    57,    -1,    59,    60,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    52,    53,    -1,    -1,
      56,    57,    -1,    59,    60,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,    57,
      -1,    59,    60,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    -1,    52,    53,    -1,    -1,    56,    57,    -1,    59,
      60,    -1,    -1,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,
      52,    53,    -1,    -1,    56,    57,    -1,    59,    60,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    52,    53,
      -1,    -1,    56,    57,    -1,    59,    60,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    52,    53,    -1,    -1,
      56,    57,    -1,    59,    60,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,    57,
      -1,    59,    60,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    -1,    52,    53,    -1,    -1,    56,    57,    -1,    59,
      60,    -1,    -1,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,
      52,    53,    -1,    -1,    56,    57,    -1,    59,    60,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    52,    53,
      -1,    -1,    56,    57,    -1,    59,    60,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    52,    53,    -1,    -1,
      56,    57,    -1,    59,    60,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,    57,
      -1,    59,    60,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    -1,    52,    53,    -1,    -1,    56,    57,    -1,    59,
      60,    -1,    -1,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,
      52,    53,    -1,    -1,    56,    57,    -1,    59,    60,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    52,    53,
      -1,    -1,    56,    57,    -1,    59,    60,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    52,    53,    -1,    -1,
      56,    57,    -1,    59,    60,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,    57,
      -1,    59,    60,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    -1,    52,    53,    -1,    -1,    56,    57,    -1,    59,
      60,    -1,    -1,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,
      52,    53,    -1,    -1,    56,    57,    -1,    59,    60,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    52,    53,
      -1,    -1,    56,    57,    -1,    59,    60,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    52,    53,    -1,    -1,
      56,    57,    -1,    59,    60,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,    57,
      -1,    59,    60,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    -1,    52,    53,    -1,    -1,    56,    57,    -1,    59,
      60,    -1,    -1,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,
      52,    53,    -1,    -1,    56,    57,    -1,    59,    60,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    52,    53,
      -1,    -1,    56,    57,    -1,    59,    60,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    52,    53,    -1,    -1,
      56,    -1,    -1,    59,    60,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,    -1,
      -1,    59,    60,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    -1,    52,    53,    -1,    -1,    56,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      -1,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,
      52,    53,    -1,    -1,    56,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    -1,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    -1,    52,    53,
      -1,    -1,    56,    -1,    -1,    59,    60,    -1,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    36,    -1,
      -1,    59,    -1,    61,    62,    63,    64,    65,    16,    17,
      -1,    19,    -1,    21,    22,    23,    54,    -1,    -1,    -1,
      -1,    59,    -1,    61,    62,    63,    64,    65,    36,    16,
      17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    36,
      -1,    59,    -1,    61,    62,    63,    64,    65,    -1,    16,
      17,    -1,    19,    -1,    21,    22,    23,    54,    -1,    -1,
      -1,    -1,    59,    -1,    61,    62,    63,    64,    65,    36,
      16,    17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      36,    -1,    59,    -1,    61,    62,    63,    64,    65,    16,
      17,    -1,    19,    -1,    21,    22,    23,    -1,    54,    -1,
      -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,    65,
      16,    17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,
      -1,    -1,    59,    -1,    61,    62,    63,    64,    65,    16,
      17,    -1,    19,    -1,    21,    22,    23,    -1,    54,    55,
      -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,    65,
      16,    17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,
      -1,    -1,    59,    -1,    61,    62,    63,    64,    65,    16,
      17,    -1,    19,    -1,    21,    22,    23,    -1,    54,    55,
      -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,    65,
      16,    17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,
      -1,    -1,    59,    -1,    61,    62,    63,    64,    65,    16,
      17,    -1,    19,    -1,    21,    22,    23,    -1,    54,    55,
      -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,    65,
      16,    17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,
      36,    -1,    59,    -1,    61,    62,    63,    64,    65,    16,
      17,    -1,    19,    -1,    21,    22,    23,    -1,    54,    -1,
      -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,    65,
      16,    17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,
      -1,    -1,    59,    -1,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,
      -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,    65,
      16,    17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,
      -1,    -1,    16,    17,    -1,    19,    -1,    21,    22,    23,
      36,    -1,    -1,    -1,    16,    17,    -1,    19,    -1,    21,
      22,    23,    36,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    36,    61,    62,    63,    64,    65,
      54,    -1,    -1,    -1,    -1,    59,    -1,    61,    62,    63,
      64,    65,    54,    -1,    -1,    -1,    -1,    59,    -1,    61,
      62,    63,    64,    65,    16,    17,    -1,    19,    -1,    21,
      22,    23,    -1,    -1,    -1,    -1,    16,    17,    -1,    19,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    -1,    -1,    -1,    59,    -1,    61,
      62,    63,    64,    65,    54,    55,    -1,    -1,    -1,    59,
      -1,    61,    62,    63,    64,    65,    54,    55,    -1,    -1,
      -1,    59,    -1,    61,    62,    63,    64,    65,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      16,    17,    -1,    19,    -1,    21,    22,    23,    36,    -1,
      -1,    -1,    -1,    -1,    16,    17,    -1,    19,    -1,    21,
      22,    23,    16,    17,    -1,    19,    54,    21,    22,    23,
      -1,    59,    -1,    61,    62,    63,    64,    65,    54,    55,
      -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,    65,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    59,    52,    61,
      62,    63,    64,    65,    -1,    59,    -1,    61,    62,    63,
      64,    65,    16,    17,    -1,    19,    -1,    21,    22,    23,
      16,    17,    -1,    19,    -1,    21,    22,    23,    16,    17,
      -1,    19,    -1,    21,    22,    23,    16,    17,    -1,    19,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    52,    61,    62,    63,
      64,    65,    -1,    59,    52,    61,    62,    63,    64,    65,
      -1,    59,    52,    61,    62,    63,    64,    65,    -1,    59,
      -1,    61,    62,    63,    64,    65,    16,    17,    -1,    19,
      -1,    21,    22,    23,    16,    17,    -1,    19,    -1,    21,
      22,    23,    16,    17,    -1,    19,    36,    21,    22,    23,
      16,    17,    -1,    19,    36,    21,    22,    23,    16,    17,
      -1,    19,    36,    21,    22,    23,    -1,    -1,    -1,    59,
      36,    61,    62,    63,    64,    65,    -1,    59,    36,    61,
      62,    63,    64,    65,    -1,    59,    -1,    61,    62,    63,
      64,    65,    -1,    59,    -1,    61,    62,    63,    64,    65,
      -1,    59,    -1,    61,    62,    63,    64,    65,    16,    17,
      -1,    19,    -1,    21,    22,    23,    16,    17,    -1,    19,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    16,    17,    -1,    19,    36,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    61,    62,    63,    64,    65,    -1,    59,
      -1,    61,    62,    63,    64,    65,    16,    17,    -1,    19,
      54,    21,    22,    23,    -1,    59,    -1,    61,    62,    63,
      64,    65,    16,    17,    -1,    19,    -1,    21,    22,    23,
      -1,    -1,    -1,    -1,    16,    17,    -1,    19,    -1,    21,
      22,    23,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      -1,    61,    62,    63,    64,    65,    16,    17,    -1,    19,
      54,    21,    22,    23,    -1,    59,    -1,    61,    62,    63,
      64,    65,    54,    -1,    -1,    -1,    -1,    59,    -1,    61,
      62,    63,    64,    65,    16,    17,    -1,    19,    -1,    21,
      22,    23,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      -1,    61,    62,    63,    64,    65,    16,    17,    -1,    19,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    16,    17,
      -1,    19,    54,    21,    22,    23,    36,    59,    -1,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    16,    17,    -1,
      19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,    59,
      -1,    61,    62,    63,    64,    65,    54,    36,    -1,    -1,
      -1,    59,    -1,    61,    62,    63,    64,    65,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      59,    -1,    61,    62,    63,    64,    65,    -1,    36,    16,
      17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,
      -1,    16,    17,    -1,    19,    -1,    21,    22,    23,    36,
      -1,    59,    -1,    61,    62,    63,    64,    65,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    61,    62,    63,    64,    65,    54,
      -1,    -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,
      65,    -1,    16,    17,    -1,    19,    54,    21,    22,    23,
      -1,    59,    -1,    61,    62,    63,    64,    65,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      16,    17,    -1,    19,    -1,    21,    22,    23,    36,    -1,
      54,    -1,    -1,    -1,    -1,    59,    -1,    61,    62,    63,
      64,    65,    16,    17,    -1,    19,    -1,    21,    22,    23,
      -1,    59,    -1,    61,    62,    63,    64,    65,    54,    -1,
      -1,    -1,    36,    59,    -1,    61,    62,    63,    64,    65,
      16,    17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    -1,    61,    62,    63,
      36,    16,    17,    -1,    19,    -1,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    16,    17,    -1,    19,    54,    21,
      22,    23,    -1,    59,    -1,    61,    62,    63,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,    54,
      55,    -1,    -1,    -1,    59,    -1,    61,    62,    63,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    -1,    61,
      62,    63,    16,    17,    -1,    19,    54,    21,    22,    23,
      -1,    59,    -1,    61,    62,    63,    16,    17,    -1,    19,
      -1,    21,    22,    23,    -1,    16,    17,    -1,    19,    -1,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    -1,    -1,    -1,    36,    -1,    61,    62,    -1,
      -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,
      -1,    61,    62,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    16,    17,    -1,    19,    -1,    21,    22,    23,
      -1,    16,    17,    -1,    19,    -1,    21,    22,    23,    -1,
      16,    17,    36,    19,    -1,    21,    22,    23,    -1,    -1,
      -1,    16,    17,    -1,    19,    -1,    21,    22,    23,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    54,
      55,    36,    -1,    -1,    -1,    -1,    61,    62,    54,    55,
      -1,    -1,    -1,    -1,    -1,    61,    62,    16,    17,    -1,
      19,    -1,    21,    22,    23,    -1,    61,    62,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    36,    16,    17,
      -1,    19,    -1,    21,    22,    23,    16,    17,    36,    19,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    16,    17,    36,    19,    -1,    21,
      22,    23,    -1,    61,    62,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    16,    17,    -1,    19,    -1,    21,    22,
      23,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    16,    17,    36,    19,    -1,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    25,    26,    27,    28,    67,    68,    69,    70,    71,
      72,    73,     0,    69,    52,     7,    53,    71,    73,    74,
      75,    76,     7,    54,    55,    56,    77,    76,    78,     4,
       5,     7,    10,    29,    31,    32,    33,    34,    35,    37,
      38,    39,    40,    41,    52,    53,    59,    60,    70,    77,
      79,    80,    81,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   110,    53,    58,    53,   101,
      53,    52,    88,    53,    53,    53,    53,    53,   101,   101,
      53,   101,    88,     7,    53,    94,    57,    81,    52,    16,
      17,    96,    19,    21,    22,    23,    61,    62,    97,    59,
      63,    98,    64,    65,    99,    90,   100,    96,    88,   111,
     112,    88,    88,    81,    86,    52,     7,     8,     9,   109,
     109,     7,    88,     7,    77,    82,    83,    84,    85,    86,
      36,    54,    88,    90,    95,   100,    91,    92,    93,    90,
      95,   100,    54,    55,    54,    30,    86,    54,    54,    54,
      54,    36,    88,    90,   100,    90,   100,    88,    81,    81,
      88,     7,    54,    30,    54,    54,    81,    81,    56,    71,
      73,    53,     4,     5,     7,    10,    33,    34,    35,    37,
      38,    39,    40,    53,    59,    89,    90,    91,    92,    93,
      94,    95,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   110,     4,     5,     7,    10,    33,    34,    35,    37,
      38,    39,    40,    53,    59,    89,    90,    91,    92,    93,
      94,    95,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   110,    29,    31,    32,    41,    52,    56,    70,    71,
      77,    83,    84,    85,    86,    87,    88,    52,    88,     4,
       5,     7,    10,    33,    34,    35,    37,    38,    39,    40,
      53,    59,    89,    90,    91,    92,    93,    94,    95,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   110,     4,
       5,     7,    10,    33,    34,    35,    37,    38,    39,    40,
      53,    59,    89,    90,    91,    92,    93,    94,    95,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   110,    36,
      52,    88,    78,    52,     7,    88,    53,    58,    53,    53,
      53,    53,    53,   101,   101,    53,    88,     7,    53,    94,
      96,    97,    98,    99,    90,   100,    96,    53,    58,    53,
      53,    53,    53,    53,   101,   101,    53,    88,     7,    53,
      94,    96,    97,    98,    99,    90,   100,    96,    53,   101,
      53,    52,    88,   101,    78,    52,    52,    52,    53,    58,
      53,    53,    53,    53,    53,   101,   101,    53,    88,     7,
      53,    94,    96,    97,    98,    99,    90,   100,    96,    53,
      58,    53,    53,    53,    53,    53,   101,   101,    53,    88,
       7,    53,    94,    96,    97,    98,    99,    90,   100,    96,
      88,    52,    79,    36,   111,    88,     7,   109,   109,     7,
      88,     7,    36,    54,    88,    90,    95,   100,    91,    92,
      93,    90,    95,   100,   111,    88,     7,   109,   109,     7,
      88,     7,    36,    54,    88,    90,    95,   100,    91,    92,
      93,    90,    95,   100,    88,    81,    86,    52,    77,    82,
      83,    84,    85,    86,    79,   111,    88,     7,   109,   109,
       7,    88,     7,    36,    54,    88,    90,    95,   100,    91,
      92,    93,    90,    95,   100,   111,    88,     7,   109,   109,
       7,    88,     7,    36,    54,    88,    90,    95,   100,    91,
      92,    93,    90,    95,   100,    54,    57,    88,    54,    54,
      54,    54,    54,    36,    88,    90,   100,    90,   100,    54,
      54,    54,    54,    54,    36,    88,    90,   100,    90,   100,
      54,    30,    86,    57,    54,    54,    54,    54,    54,    36,
      88,    90,   100,    90,   100,    54,    54,    54,    54,    54,
      36,    88,    90,   100,    90,   100,    54,     7,    54,     7,
      54,    81,    81,    88,     7,    54,     7,    54,    54,    54,
      30,    54,    54,    54,    81,    81
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    68,    68,    69,    69,    70,    71,    72,
      73,    73,    73,    73,    74,    74,    75,    75,    76,    78,
      77,    79,    79,    80,    80,    81,    81,    81,    81,    81,
      81,    81,    82,    82,    82,    82,    82,    83,    83,    83,
      83,    84,    85,    86,    86,    87,    87,    88,    88,    88,
      88,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    90,    90,    91,    91,    92,    92,    93,    93,
      94,    94,    94,    94,    94,    94,    95,    96,    96,    97,
      97,    97,    97,    97,    97,    98,    98,    99,    99,   100,
     100,   100,   100,   100,   101,   102,   103,   104,   105,   106,
     106,   107,   108,   108,   109,   109,   110,   111,   111,   112,
     112
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     2,     6,
       1,     1,     1,     1,     1,     0,     3,     1,     1,     0,
       4,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     7,     3,
       5,     7,     3,     2,     1,     2,     3,     3,     1,     1,
       1,     2,     2,     3,     3,     3,     3,     4,     4,     4,
       4,     1,     3,     1,     3,     1,     3,     1,     2,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     4,     2,     2,     6,     1,
       1,     4,     4,     4,     1,     1,     4,     1,     0,     3,
       1
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
#line 172 "anasin.y"
                          { printf("program\n"); }
#line 3361 "anasin.tab.c"
    break;

  case 3: /* declaration-list: declaration-list declaration  */
#line 174 "anasin.y"
                                               { printf("declaration-list  ->  declaration-list declaration\n"); }
#line 3367 "anasin.tab.c"
    break;

  case 4: /* declaration-list: declaration  */
#line 175 "anasin.y"
                              { printf("declaration-list  ->  declaration\n"); }
#line 3373 "anasin.tab.c"
    break;

  case 5: /* declaration: var-declaration  */
#line 177 "anasin.y"
                             { printf("declaration  ->  var-declaration\n"); }
#line 3379 "anasin.tab.c"
    break;

  case 6: /* declaration: func-declaration  */
#line 178 "anasin.y"
                              { printf("declaration  ->  func-declaration\n"); }
#line 3385 "anasin.tab.c"
    break;

  case 7: /* var-declaration: variable ';'  */
#line 180 "anasin.y"
                              { printf("var declaration  ->  variable ;\n"); }
#line 3391 "anasin.tab.c"
    break;

  case 8: /* variable: type-specifier ID  */
#line 183 "anasin.y"
          { 
            printf("variable  ->  type-specifier %s\n", (yyvsp[0].tt_name));
            insert_into_symbol_table((yyvsp[0].tt_name), "var_type", "var");
          }
#line 3400 "anasin.tab.c"
    break;

  case 9: /* func-declaration: type-specifier ID '(' parameters ')' compound-stmt  */
#line 189 "anasin.y"
                  {
                    printf("func-declaration  ->  type-specifier %s ( parameters ) compount-stmt\n", (yyvsp[-4].tt_name));
                    insert_into_symbol_table((yyvsp[-4].tt_name), "func_type", "func");
                  }
#line 3409 "anasin.tab.c"
    break;

  case 10: /* type-specifier: TYPEINT  */
#line 194 "anasin.y"
                        { printf("type-specifier  ->  %s\n", (yyvsp[0].tt_name)); }
#line 3415 "anasin.tab.c"
    break;

  case 11: /* type-specifier: TYPEFLOAT  */
#line 195 "anasin.y"
                          { printf("type-specifier  ->  %s\n", (yyvsp[0].tt_name)); }
#line 3421 "anasin.tab.c"
    break;

  case 12: /* type-specifier: TYPEELEM  */
#line 196 "anasin.y"
                         { printf("type-specifier  ->  %s\n", (yyvsp[0].tt_name)); }
#line 3427 "anasin.tab.c"
    break;

  case 13: /* type-specifier: TYPESET  */
#line 197 "anasin.y"
                        { printf("type-specifier  ->  %s\n", (yyvsp[0].tt_name)); }
#line 3433 "anasin.tab.c"
    break;

  case 14: /* parameters: parameter-list  */
#line 199 "anasin.y"
                           { printf("parameters  ->  parameter-list\n"); }
#line 3439 "anasin.tab.c"
    break;

  case 15: /* parameters: %empty  */
#line 200 "anasin.y"
                   { printf("parameters  ->\n"); }
#line 3445 "anasin.tab.c"
    break;

  case 16: /* parameter-list: parameter-list ',' parameter  */
#line 202 "anasin.y"
                                             { printf("parameter-list  ->  parameter-list , parameter\n"); }
#line 3451 "anasin.tab.c"
    break;

  case 17: /* parameter-list: parameter  */
#line 203 "anasin.y"
                          { printf("parameter-list  ->  parameter\n"); }
#line 3457 "anasin.tab.c"
    break;

  case 18: /* parameter: variable  */
#line 205 "anasin.y"
                    { printf("parameter  ->  variable\n"); }
#line 3463 "anasin.tab.c"
    break;

  case 19: /* $@1: %empty  */
#line 208 "anasin.y"
                 {
                   current_scope+=1;
                 }
#line 3471 "anasin.tab.c"
    break;

  case 20: /* compound-stmt: '{' $@1 local-declarations '}'  */
#line 212 "anasin.y"
                 {
                   printf("compound-stmt  ->  { local-declarations }\n");
                   current_scope-=1;
                 }
#line 3480 "anasin.tab.c"
    break;

  case 21: /* local-declarations: statement-list  */
#line 217 "anasin.y"
                                   { printf("local-declarations  ->  statement-list\n"); }
#line 3486 "anasin.tab.c"
    break;

  case 22: /* local-declarations: %empty  */
#line 218 "anasin.y"
                           { printf("local-declarations  ->\n"); }
#line 3492 "anasin.tab.c"
    break;

  case 23: /* statement-list: statement-list statement  */
#line 220 "anasin.y"
                                         { printf("statement-list  ->  statement-list statement\n"); }
#line 3498 "anasin.tab.c"
    break;

  case 24: /* statement-list: statement  */
#line 221 "anasin.y"
                          { printf("statement-list  ->  statement\n"); }
#line 3504 "anasin.tab.c"
    break;

  case 25: /* statement: compound-stmt  */
#line 223 "anasin.y"
                         { printf("statement  ->  compound-stmt \n"); }
#line 3510 "anasin.tab.c"
    break;

  case 26: /* statement: conditional-stmt  */
#line 224 "anasin.y"
                            { printf("statement  ->  conditional-stmt \n" ); }
#line 3516 "anasin.tab.c"
    break;

  case 27: /* statement: iteration-stmt  */
#line 225 "anasin.y"
                          { printf("statement  ->  iteration-stmt \n" ); }
#line 3522 "anasin.tab.c"
    break;

  case 28: /* statement: expression-stmt  */
#line 226 "anasin.y"
                           { printf("statement  ->  expression-stmt \n" ); }
#line 3528 "anasin.tab.c"
    break;

  case 29: /* statement: return-stmt  */
#line 227 "anasin.y"
                       { printf("statement  ->  return-stmt \n" ); }
#line 3534 "anasin.tab.c"
    break;

  case 30: /* statement: var-declaration  */
#line 228 "anasin.y"
                           { printf("statement  ->  var-declaration \n"); }
#line 3540 "anasin.tab.c"
    break;

  case 31: /* statement: forall-stmt  */
#line 229 "anasin.y"
                       { printf("statement  ->  forall-stmt \n"); }
#line 3546 "anasin.tab.c"
    break;

  case 32: /* forall-statement: compound-stmt  */
#line 231 "anasin.y"
                                { printf("statement  ->  compound-stmt \n"); }
#line 3552 "anasin.tab.c"
    break;

  case 33: /* forall-statement: conditional-stmt  */
#line 232 "anasin.y"
                                   { printf("statement  ->  conditional-stmt \n" ); }
#line 3558 "anasin.tab.c"
    break;

  case 34: /* forall-statement: iteration-stmt  */
#line 233 "anasin.y"
                                 { printf("statement  ->  iteration-stmt \n" ); }
#line 3564 "anasin.tab.c"
    break;

  case 35: /* forall-statement: expression-stmt  */
#line 234 "anasin.y"
                                  { printf("statement  ->  expression-stmt \n" ); }
#line 3570 "anasin.tab.c"
    break;

  case 36: /* forall-statement: forall-stmt  */
#line 235 "anasin.y"
                              { printf("statement  ->  forall-stmt \n"); }
#line 3576 "anasin.tab.c"
    break;

  case 37: /* conditional-stmt: IF '(' expression ')' statement  */
#line 238 "anasin.y"
                                                            { printf("conditional-stmt  ->  if ( expression ) statement \n"); }
#line 3582 "anasin.tab.c"
    break;

  case 38: /* conditional-stmt: IF '(' expression ')' statement ELSE statement  */
#line 239 "anasin.y"
                                                                 { printf("conditional-stmt  ->  if ( expression ) statement else statement\n"); }
#line 3588 "anasin.tab.c"
    break;

  case 39: /* conditional-stmt: IF setop-in statement  */
#line 240 "anasin.y"
                                                  { printf("conditional-stmt  ->  if ( expression ) statement \n"); }
#line 3594 "anasin.tab.c"
    break;

  case 40: /* conditional-stmt: IF setop-in statement ELSE statement  */
#line 241 "anasin.y"
                                                       { printf("conditional-stmt  ->  if ( expression ) statement else statement\n"); }
#line 3600 "anasin.tab.c"
    break;

  case 41: /* iteration-stmt: FOR '(' expression-stmt expression-stmt expression ')' statement  */
#line 243 "anasin.y"
                                                                                 { printf("iteration-stmt  ->  for ( expression ; expression ; expression ) statement\n"); }
#line 3606 "anasin.tab.c"
    break;

  case 42: /* forall-stmt: FORALL_OP setop-in forall-statement  */
#line 246 "anasin.y"
                                                 { printf("setop-forall  ->  setop-in forall-statement\n"); }
#line 3612 "anasin.tab.c"
    break;

  case 43: /* expression-stmt: expression ';'  */
#line 249 "anasin.y"
                                { printf("expression-stmt  ->  expression ;\n"); }
#line 3618 "anasin.tab.c"
    break;

  case 44: /* expression-stmt: ';'  */
#line 250 "anasin.y"
                     { printf("expression-stmt  ->  ; \n"); }
#line 3624 "anasin.tab.c"
    break;

  case 45: /* return-stmt: RETURN ';'  */
#line 252 "anasin.y"
                        { printf("return-stmt  ->  return ; \n"); }
#line 3630 "anasin.tab.c"
    break;

  case 46: /* return-stmt: RETURN expression ';'  */
#line 253 "anasin.y"
                                   { printf("return-stmt  ->  return expression ; \n"); }
#line 3636 "anasin.tab.c"
    break;

  case 47: /* expression: ID '=' expression  */
#line 255 "anasin.y"
                              { printf("expression  ->  %s = expression ;\n", (yyvsp[-2].tt_name)); }
#line 3642 "anasin.tab.c"
    break;

  case 48: /* expression: simple-expression  */
#line 256 "anasin.y"
                              { printf("expression  ->  simple-expression ;\n"); }
#line 3648 "anasin.tab.c"
    break;

  case 49: /* expression: set-expression  */
#line 257 "anasin.y"
                           { printf("expression  ->  set-expression ;\n"); }
#line 3654 "anasin.tab.c"
    break;

  case 50: /* expression: io-expression  */
#line 258 "anasin.y"
                          { printf("expression  ->  io-expression ;\n"); }
#line 3660 "anasin.tab.c"
    break;

  case 51: /* simple-expression: logop-una relational-exp  */
#line 260 "anasin.y"
                                            { printf("simple-expression  ->  logop-una relational-exp simple-expression\n"); }
#line 3666 "anasin.tab.c"
    break;

  case 52: /* simple-expression: logop-una set-expression  */
#line 261 "anasin.y"
                                            { printf("simple-expression  ->  logop-una relational-exp simple-expression\n"); }
#line 3672 "anasin.tab.c"
    break;

  case 53: /* simple-expression: simple-expression logop-bin relational-exp  */
#line 262 "anasin.y"
                                                              { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3678 "anasin.tab.c"
    break;

  case 54: /* simple-expression: simple-expression logop-bin set-expression  */
#line 263 "anasin.y"
                                                              { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3684 "anasin.tab.c"
    break;

  case 55: /* simple-expression: set-expression logop-bin relational-exp  */
#line 264 "anasin.y"
                                                           { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3690 "anasin.tab.c"
    break;

  case 56: /* simple-expression: set-expression logop-bin set-expression  */
#line 265 "anasin.y"
                                                           { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3696 "anasin.tab.c"
    break;

  case 57: /* simple-expression: simple-expression logop-bin logop-una relational-exp  */
#line 266 "anasin.y"
                                                                        { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3702 "anasin.tab.c"
    break;

  case 58: /* simple-expression: simple-expression logop-bin logop-una set-expression  */
#line 267 "anasin.y"
                                                                        { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3708 "anasin.tab.c"
    break;

  case 59: /* simple-expression: set-expression logop-bin logop-una relational-exp  */
#line 268 "anasin.y"
                                                                     { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3714 "anasin.tab.c"
    break;

  case 60: /* simple-expression: set-expression logop-bin logop-una set-expression  */
#line 269 "anasin.y"
                                                                     { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3720 "anasin.tab.c"
    break;

  case 61: /* simple-expression: relational-exp  */
#line 270 "anasin.y"
                                  { printf("simple-expression  ->  relational-exp\n"); }
#line 3726 "anasin.tab.c"
    break;

  case 62: /* relational-exp: relational-exp relop arithm-add-exp  */
#line 272 "anasin.y"
                                                    { printf("relational-exp  ->  arithm-add-exp relop arithm-add-exp\n"); }
#line 3732 "anasin.tab.c"
    break;

  case 63: /* relational-exp: arithm-add-exp  */
#line 273 "anasin.y"
                               { printf("relational-exp  ->  arithm-add-exp\n"); }
#line 3738 "anasin.tab.c"
    break;

  case 64: /* arithm-add-exp: arithm-add-exp ariop-add arithm-mul-exp  */
#line 275 "anasin.y"
                                                        { printf("arithm-add-exp  ->  arithm-add-exp ariop-add arithm-mul-exp\n"); }
#line 3744 "anasin.tab.c"
    break;

  case 65: /* arithm-add-exp: arithm-mul-exp  */
#line 276 "anasin.y"
                               { printf("arithm-add-exp  ->  arithm-mul-exp\n"); }
#line 3750 "anasin.tab.c"
    break;

  case 66: /* arithm-mul-exp: arithm-mul-exp ariop-mul unary-minus-exp  */
#line 281 "anasin.y"
                                                         { printf("arithm-mul-exp  ->  arithm-mul-exp ariop-mul unary-minus-exp\n"); }
#line 3756 "anasin.tab.c"
    break;

  case 67: /* arithm-mul-exp: unary-minus-exp  */
#line 282 "anasin.y"
                                { printf("arithm-mul-exp  ->  unary-minus-exp\n"); }
#line 3762 "anasin.tab.c"
    break;

  case 68: /* unary-minus-exp: '-' factor  */
#line 284 "anasin.y"
                                      { printf("unary-minus-exp  ->  '-' factor\n"); }
#line 3768 "anasin.tab.c"
    break;

  case 69: /* unary-minus-exp: factor  */
#line 285 "anasin.y"
                       { printf("unary-minus-exp  ->  factor\n"); }
#line 3774 "anasin.tab.c"
    break;

  case 70: /* factor: '(' expression ')'  */
#line 287 "anasin.y"
                           { printf("factor  ->  ( expression )\n"); }
#line 3780 "anasin.tab.c"
    break;

  case 71: /* factor: func-call  */
#line 288 "anasin.y"
                  { printf("factor  ->  func-call\n"); }
#line 3786 "anasin.tab.c"
    break;

  case 72: /* factor: ID  */
#line 289 "anasin.y"
           { printf("factor  ->  %s\n", (yyvsp[0].tt_name)); }
#line 3792 "anasin.tab.c"
    break;

  case 73: /* factor: INT  */
#line 290 "anasin.y"
            { printf("factor  ->  %s\n", (yyvsp[0].tt_name)); }
#line 3798 "anasin.tab.c"
    break;

  case 74: /* factor: FLOAT  */
#line 291 "anasin.y"
              { printf("factor  ->  %s\n", (yyvsp[0].tt_name)); }
#line 3804 "anasin.tab.c"
    break;

  case 75: /* factor: EMPTY  */
#line 292 "anasin.y"
              { printf("factor  ->  %s\n", (yyvsp[0].tt_name)); }
#line 3810 "anasin.tab.c"
    break;

  case 76: /* logop-una: '!'  */
#line 294 "anasin.y"
                { printf("logop-una  ->  !\n"); }
#line 3816 "anasin.tab.c"
    break;

  case 77: /* logop-bin: AND  */
#line 296 "anasin.y"
               { printf("logop-bin  ->  &&\n"); }
#line 3822 "anasin.tab.c"
    break;

  case 78: /* logop-bin: OR  */
#line 297 "anasin.y"
              { printf("logop-bin  ->  ||\n"); }
#line 3828 "anasin.tab.c"
    break;

  case 79: /* relop: '<'  */
#line 299 "anasin.y"
           { printf("relop  ->  <\n"); }
#line 3834 "anasin.tab.c"
    break;

  case 80: /* relop: LTE  */
#line 300 "anasin.y"
           { printf("relop  ->  <=\n"); }
#line 3840 "anasin.tab.c"
    break;

  case 81: /* relop: '>'  */
#line 301 "anasin.y"
           { printf("relop  ->  >\n"); }
#line 3846 "anasin.tab.c"
    break;

  case 82: /* relop: GTE  */
#line 302 "anasin.y"
           { printf("relop  ->  >=\n"); }
#line 3852 "anasin.tab.c"
    break;

  case 83: /* relop: EQ  */
#line 303 "anasin.y"
          { printf("relop  ->  ==\n"); }
#line 3858 "anasin.tab.c"
    break;

  case 84: /* relop: NEQ  */
#line 304 "anasin.y"
           { printf("relop  ->  !=\n"); }
#line 3864 "anasin.tab.c"
    break;

  case 85: /* ariop-add: '+'  */
#line 306 "anasin.y"
               { printf("ariop-add  ->  +\n"); }
#line 3870 "anasin.tab.c"
    break;

  case 86: /* ariop-add: '-'  */
#line 307 "anasin.y"
                { printf("ariop-add  ->  -\n"); }
#line 3876 "anasin.tab.c"
    break;

  case 87: /* ariop-mul: '*'  */
#line 309 "anasin.y"
               { printf("ariop-mul  ->  *\n"); }
#line 3882 "anasin.tab.c"
    break;

  case 88: /* ariop-mul: '/'  */
#line 310 "anasin.y"
               { printf("ariop-mul  ->  /\n"); }
#line 3888 "anasin.tab.c"
    break;

  case 89: /* set-expression: setop-in  */
#line 312 "anasin.y"
                         { printf("set-expressions  ->  setop-in\n"); }
#line 3894 "anasin.tab.c"
    break;

  case 90: /* set-expression: setop-is-set  */
#line 313 "anasin.y"
                             { printf("set-expressions  ->  setop-is-set\n"); }
#line 3900 "anasin.tab.c"
    break;

  case 91: /* set-expression: setop-add  */
#line 314 "anasin.y"
                          { printf("set-expressions  ->  setop-add\n"); }
#line 3906 "anasin.tab.c"
    break;

  case 92: /* set-expression: setop-remove  */
#line 315 "anasin.y"
                             { printf("set-expressions  ->  setop-remove\n"); }
#line 3912 "anasin.tab.c"
    break;

  case 93: /* set-expression: setop-exists  */
#line 316 "anasin.y"
                             { printf("set-expressions  ->  setop-exists\n"); }
#line 3918 "anasin.tab.c"
    break;

  case 94: /* setop-in: '(' expression IN_OP expression ')'  */
#line 318 "anasin.y"
                                              { printf("setop-in  ->  ( expression IN_OP expression ) \n"); }
#line 3924 "anasin.tab.c"
    break;

  case 95: /* setop-is-set: IS_SET_OP '(' ID ')'  */
#line 320 "anasin.y"
                                   { printf("setop-is-set  ->  is_set ( %s )\n", (yyvsp[-1].tt_name)); }
#line 3930 "anasin.tab.c"
    break;

  case 96: /* setop-add: ADD_OP setop-in  */
#line 322 "anasin.y"
                           { printf("setop-add  ->  add setop-in\n"); }
#line 3936 "anasin.tab.c"
    break;

  case 97: /* setop-remove: REMOVE_OP setop-in  */
#line 324 "anasin.y"
                                 { printf("setop-remove  ->  remove setop-in\n"); }
#line 3942 "anasin.tab.c"
    break;

  case 98: /* setop-exists: EXISTS_OP '(' ID IN_OP ID ')'  */
#line 326 "anasin.y"
                                            { printf("setop-exists  ->  exists ( %s in %s )\n", (yyvsp[-3].tt_name), (yyvsp[-1].tt_name)); }
#line 3948 "anasin.tab.c"
    break;

  case 99: /* io-expression: ioop-read  */
#line 328 "anasin.y"
                         { printf("io-expression  ->  ioop-read\n"); }
#line 3954 "anasin.tab.c"
    break;

  case 100: /* io-expression: ioop-write  */
#line 329 "anasin.y"
                          { printf("io-expression  ->  ioop-read\n"); }
#line 3960 "anasin.tab.c"
    break;

  case 101: /* ioop-read: READ '(' ID ')'  */
#line 331 "anasin.y"
                           { printf("ioop-read  ->  read ( %s ) \n", (yyvsp[-1].tt_name)); }
#line 3966 "anasin.tab.c"
    break;

  case 102: /* ioop-write: WRITE '(' word ')'  */
#line 333 "anasin.y"
                               { printf("ioop-write  ->  write ( word ) \n"); }
#line 3972 "anasin.tab.c"
    break;

  case 103: /* ioop-write: WRITELN '(' word ')'  */
#line 334 "anasin.y"
                                 { printf("ioop-write  ->  writeln ( word ) \n"); }
#line 3978 "anasin.tab.c"
    break;

  case 104: /* word: CHAR  */
#line 336 "anasin.y"
           { printf("word  ->  %s\n", (yyvsp[0].tt_name)); }
#line 3984 "anasin.tab.c"
    break;

  case 105: /* word: STRING  */
#line 337 "anasin.y"
             { printf("word  ->  %s\n", (yyvsp[0].tt_name)); }
#line 3990 "anasin.tab.c"
    break;

  case 106: /* func-call: ID '(' arguments ')'  */
#line 339 "anasin.y"
                                { printf("func-call  ->  %s ( arguments )\n", (yyvsp[-3].tt_name)); }
#line 3996 "anasin.tab.c"
    break;

  case 107: /* arguments: args-list  */
#line 341 "anasin.y"
                     { printf("arguments  ->  args-list\n"); }
#line 4002 "anasin.tab.c"
    break;

  case 108: /* arguments: %empty  */
#line 342 "anasin.y"
                  { printf("arguments  ->  empty-set\n"); }
#line 4008 "anasin.tab.c"
    break;

  case 109: /* args-list: args-list ',' expression  */
#line 344 "anasin.y"
                                    { printf("args-list  ->  args-list , expression\n"); }
#line 4014 "anasin.tab.c"
    break;

  case 110: /* args-list: expression  */
#line 345 "anasin.y"
                      { printf("args-list  ->  expression\n"); }
#line 4020 "anasin.tab.c"
    break;


#line 4024 "anasin.tab.c"

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

#line 348 "anasin.y"


symbol_table_entry* create_symbol_table_entry(char* hash_key, char* symbol_name, char* symbol_type, int symbol_scope, char* entry_type) {
  symbol_table_entry* new_entry = (symbol_table_entry*) malloc(sizeof (symbol_table_entry));
  printf("created new entry\n");

  new_entry->hash_key = hash_key;
  new_entry->symbol_name = symbol_name;
  new_entry->symbol_type = symbol_type;
  new_entry->symbol_scope = symbol_scope;
  new_entry->entry_type = entry_type;

  return new_entry;
}

void insert_into_symbol_table(char* symbol_name, char* symbol_type, char* entry_type) {
  symbol_table_entry* new_entry = NULL;
  char* hash_key = build_hash_key(symbol_name, symbol_type, entry_type);
  // char hash_key[5] = "hash" ;

  lookup_symbol_table(hash_key, new_entry);

  if(new_entry == NULL) {
    new_entry = create_symbol_table_entry(hash_key, symbol_name, symbol_type, current_scope, entry_type);
    HASH_ADD_STR(symbol_table, hash_key, new_entry);
  } else {
    printf("Symbol of type %s \"%s %s\" entry already exists for scope %d in the Symbol Table.\n", entry_type, symbol_type, symbol_name, current_scope);
  }
}

char* build_hash_key(char* symbol_name, char* symbol_type, char* entry_type) {
  // https://stackoverflow.com/questions/8257714/how-to-convert-an-int-to-string-in-c
  char* scope = malloc(sizeof(char));
  sprintf(scope, "%d", current_scope);
  // https://stackoverflow.com/questions/8465006/how-do-i-concatenate-two-strings-in-c
  int key_size = strlen(scope) + strlen(entry_type) + strlen(symbol_type) + strlen(symbol_name) + 6; 

  // Cada chave hash a ser utilizada no uthash tem o formato "(scope)entry_type::symbol_type.symbol_name"
  char* new_key = (char*) malloc(sizeof(key_size));
  strcpy(new_key, "(");
  strcat(new_key, scope);
  strcat(new_key, ")");
  strcat(new_key, entry_type);
  strcat(new_key, "::");
  strcat(new_key, symbol_type);
  strcat(new_key, ".");
  strcat(new_key, symbol_name);

  return new_key;
}

void lookup_symbol_table(char* hash_key, symbol_table_entry* result_entry) {
  HASH_FIND_STR(symbol_table, hash_key, result_entry);
}

void print_symbol_table() {
  symbol_table_entry* entry;
  
  printf("\n\n________________ SYMBOL TABLE ________________\n\n");
  for(entry = symbol_table; entry != NULL; entry = entry->hh.next) {
    printf("Table Entry =>   < HASH_KEY: %s >     < SYMBOL_NAME: %s >     < SYMBOL_TYPE: %s >     < SYMBOL_SCOPE: %d >     < ENTRY_TYPE: %s >\n", entry->hash_key, entry->symbol_name, entry->symbol_type, entry->symbol_scope, entry->entry_type);
  }
}

void free_symbol_table(){
  symbol_table_entry* entry;
  symbol_table_entry* aux_entry;

  HASH_ITER(hh, symbol_table, entry, aux_entry) {
    HASH_DEL(symbol_table, entry);
    free(entry);
  }
}


void yyerror(const char *tt_name) {
    printf("yyerror: %s em linha: %d coluna: %d.\n", tt_name, line, column);

}

int main(int argc, char *argv[]){
  yyin = fopen(argv[1], "r");

  yyparse();
  fclose(yyin);
  yylex_destroy();

  //  if(error_count > 0){
  //    printf("\nThe lexical analisys finished with %d errors found.\n", error_count);
  //  }

  print_symbol_table();
  free_symbol_table();

  return 0;
}
