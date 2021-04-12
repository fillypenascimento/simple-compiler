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

  extern int yylex();
  extern int yylex_destroy();
  extern FILE *yyin;
  extern int line;
  extern int column;
  extern int error_count;
  extern void yyerror(const char *token_name);

  // Entrada da tabela de símbolos
  typedef struct symbol_table_entry {

  } symbol_table_entry;

#line 88 "anasin.tab.c"

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
  YYSYMBOL_78_local_declarations = 78,     /* local-declarations  */
  YYSYMBOL_79_statement_list = 79,         /* statement-list  */
  YYSYMBOL_statement = 80,                 /* statement  */
  YYSYMBOL_81_forall_statement = 81,       /* forall-statement  */
  YYSYMBOL_82_conditional_stmt = 82,       /* conditional-stmt  */
  YYSYMBOL_83_iteration_stmt = 83,         /* iteration-stmt  */
  YYSYMBOL_84_forall_stmt = 84,            /* forall-stmt  */
  YYSYMBOL_85_expression_stmt = 85,        /* expression-stmt  */
  YYSYMBOL_86_return_stmt = 86,            /* return-stmt  */
  YYSYMBOL_expression = 87,                /* expression  */
  YYSYMBOL_88_simple_expression = 88,      /* simple-expression  */
  YYSYMBOL_89_relational_exp = 89,         /* relational-exp  */
  YYSYMBOL_90_arithm_add_exp = 90,         /* arithm-add-exp  */
  YYSYMBOL_91_arithm_mul_exp = 91,         /* arithm-mul-exp  */
  YYSYMBOL_92_unary_minus_exp = 92,        /* unary-minus-exp  */
  YYSYMBOL_factor = 93,                    /* factor  */
  YYSYMBOL_94_logop_una = 94,              /* logop-una  */
  YYSYMBOL_95_logop_bin = 95,              /* logop-bin  */
  YYSYMBOL_relop = 96,                     /* relop  */
  YYSYMBOL_97_ariop_add = 97,              /* ariop-add  */
  YYSYMBOL_98_ariop_mul = 98,              /* ariop-mul  */
  YYSYMBOL_99_set_expression = 99,         /* set-expression  */
  YYSYMBOL_100_setop_in = 100,             /* setop-in  */
  YYSYMBOL_101_setop_is_set = 101,         /* setop-is-set  */
  YYSYMBOL_102_setop_add = 102,            /* setop-add  */
  YYSYMBOL_103_setop_remove = 103,         /* setop-remove  */
  YYSYMBOL_104_setop_exists = 104,         /* setop-exists  */
  YYSYMBOL_105_io_expression = 105,        /* io-expression  */
  YYSYMBOL_106_ioop_read = 106,            /* ioop-read  */
  YYSYMBOL_107_ioop_write = 107,           /* ioop-write  */
  YYSYMBOL_word = 108,                     /* word  */
  YYSYMBOL_109_func_call = 109,            /* func-call  */
  YYSYMBOL_arguments = 110,                /* arguments  */
  YYSYMBOL_111_args_list = 111             /* args-list  */
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
#define YYLAST   7370

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  583

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
       0,   137,   137,   139,   140,   142,   143,   145,   147,   149,
     151,   152,   153,   154,   156,   157,   159,   160,   162,   164,
     166,   167,   169,   170,   172,   173,   174,   175,   176,   177,
     178,   180,   181,   182,   183,   184,   187,   188,   189,   190,
     192,   195,   198,   199,   201,   202,   204,   205,   206,   207,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   221,   222,   224,   225,   230,   231,   233,   234,   236,
     237,   238,   239,   240,   241,   243,   245,   246,   248,   249,
     250,   251,   252,   253,   255,   256,   258,   259,   261,   262,
     263,   264,   265,   267,   269,   271,   273,   275,   277,   278,
     280,   282,   283,   285,   286,   288,   290,   291,   293,   294
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
  "parameter", "compound-stmt", "local-declarations", "statement-list",
  "statement", "forall-statement", "conditional-stmt", "iteration-stmt",
  "forall-stmt", "expression-stmt", "return-stmt", "expression",
  "simple-expression", "relational-exp", "arithm-add-exp",
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

#define YYPACT_NINF (-306)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-110)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1401,    -4,    16,    18,    20,    36,  1195,  1363,  1419,    -8,
    1440,    41,  -306,  1471,  1476,   181,   845,   389,    43,     1,
     488,   533,   563,     8,  1401,  4957,  1492,   652,  3619,  6433,
    1922,  6483,    28,    38,   212,    45,    47,    61,    66,    68,
      68,    87,    89,  4995,   754,    30,  1552,  5033,  5071,    37,
    5109,  5147,  5185,  5223,  5261,  5299,  5337,    58,   127,  2764,
     749,  6504,  6536,  6554,  2317,   158,   358,   511,   582,   757,
     813,   111,   117,   139,  6562,   419,   829,   754,  5945,  1106,
    5375,   145,   193,   405,   405,   198,  2453,   827,   874,   202,
    1146,   -25,  3002,  2462,  6570,  1691,  5413,  5451,   253,   423,
    1321,    42,    92,   108,   216,   225,   275,   350,   359,   388,
     350,   491,   542,   350,  3463,   921,  1321,   696,   170,   771,
     176,    17,   155,  1362,  5489,   190,   214,   219,   235,   241,
     257,   234,   281,  5527,  5565,  5603,  5641,  5679,  5717,  2462,
    6586,   268,  3822,  2317,   930,  2912,  6620,  6636,  3846,  2317,
     950,  6644,  2504,  5945,  5983,  2462,   285,   291,   306,  1015,
     338,   311,  3995,  1074,  7203,  1081,   822,   598,  5755,   322,
     326,  1090,  5983,  5983,  1102,  5793,  5831,  4957,   349,   383,
    2453,  1615,  2559,  1007,  2775,   344,   351,   366,   368,   372,
     372,   379,   754,   233,    15,  1066,  1982,  2840,  3633,  3898,
    2549,    22,   116,   679,   702,   781,   788,    21,    31,    70,
    3987,  3762,  3966,  3095,  6047,   381,   387,   402,   418,   424,
     424,   439,   754,   328,    49,  1900,  3684,  6066,  6116,  6128,
    2720,    71,   118,   187,   362,   391,   434,   864,   964,  1049,
    6140,   446,   449,  1608,    89,   876,  4957,  4062,   435,  4121,
    4159,  4197,  4235,  4273,  4311,   453,  2237,   460,  6654,  6704,
    3314,  6712,   462,   473,   478,   483,   498,   498,   507,   754,
     395,   113,  3062,  2630,  6720,  6728,  6736,  2765,   130,   141,
     245,   355,   537,   908,   375,   521,   530,  6786,   934,  6798,
    1212,  6810,   517,   523,   532,   540,   543,   543,   547,   754,
     432,    57,   833,   988,  6860,  6872,  6884,  2885,   100,   182,
     185,   332,   494,   567,   520,   536,   550,  6934,  2462,  2669,
     561,   586,  5869,   593,   613,   419,   754,   649,   405,   405,
     654,  2453,   805,   904,   657,   102,  2343,  2462,  6190,  1372,
     587,   587,   587,  2991,  1060,  1372,   419,  2504,   659,   405,
     405,   662,  2453,   464,   504,   667,   114,  3381,  2462,  6202,
    1685,   655,   655,   655,  2116,   552,  1685,   754,  5945,  1106,
    4349,   625,  1814,   622,  4387,  4425,  2246,   419,  2453,   682,
     405,   405,   692,  2453,   955,  1121,   697,   177,  6224,  2462,
    6942,  1855,   668,   668,   668,  3389,  1131,  1855,   419,  2462,
     703,   405,   405,   706,  2453,   599,   631,   710,   223,  6252,
    2462,  6954,  2071,   676,   676,   676,  3226,   731,  2071,   666,
    2678,  5907,  2462,   670,   260,   683,   687,   700,   715,   694,
     724,  2462,  6274,   723,  3247,  2549,  1063,  2414,  6304,  6325,
    3455,  2549,  1157,   725,  1067,   741,   745,   748,   764,   792,
     796,  2462,  6354,   784,  2924,  2720,   555,  3705,  6375,  6404,
    3117,  2720,   565,   262,  4463,  1362,  4501,  4539,  4577,  4615,
    4653,  4691,  4729,  4767,   786,   812,   804,   824,   830,   873,
     895,   903,  2462,  6964,   898,  7214,  2765,  1152,  2933,  7014,
    7022,  7230,  2765,  1173,   905,   907,   920,   923,   925,   938,
     967,   972,  2462,  7038,   959,  7240,  2885,   736,  7146,  7072,
    7088,  7251,  2885,   844,  6021,   971,  6425,   290,   293,   305,
    1200,  1027,   985,  7156,  1266,  7180,  1270,  6454,  1197,  1203,
    1226,   671,  1037,   992,  3173,   677,  3196,   685,  5945,  5945,
    2462,  7096,  1012,  1016,  1019,  1208,  1050,  1005,  7261,  1305,
    7298,  1313,  7122,  1021,  1032,  1038,   858,  1088,  1054,  7287,
     880,  7308,   926,  2030,  1058,  1291,  1076,   729,  4805,  4843,
    1078,  1080,  1334,  1082,  1046,  1317,   765,  5945,  5945,  1348,
    1196,  4881,  4919
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
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -306,  -306,  -306,  1143,     2,     0,  -306,  1191,  -306,  -306,
    1128,   -22,  -160,  -306,   -45,   701,   -71,   -64,   -48,   -69,
     -74,   -16,  3235,  1611,  1827,  1395,  1117,   623,  3123,   -53,
    1148,  -183,  -182,  2043,   345,  2259,  2475,  2691,  2907,  3451,
    3533,  3655,   -62,   901,  -305,  -306
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,    47,   178,    10,   179,    19,    20,
      21,    48,    49,    50,    51,   134,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,   100,
     107,   110,   113,    65,    66,    67,    68,    69,    70,    71,
      72,    73,   128,    74,   118,   119
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    26,     8,   -10,   254,    96,     9,   250,     8,   253,
     123,   139,   116,   341,   251,   342,    17,   321,    81,   135,
     423,   138,   129,   -11,    17,   -12,   136,   -13,    91,   140,
     252,    98,    99,   122,    28,    29,    12,    92,    98,    99,
      31,   443,   137,   362,    14,   363,   -79,   -79,    15,   -79,
      22,   -47,   -79,   318,   155,    23,   249,   -49,   -48,   117,
     120,   121,   255,   257,    25,    98,    99,   -98,   133,   -47,
     131,   153,   474,    98,    99,   -49,   -48,   141,   248,   254,
     247,    77,   250,    93,   253,   -98,   373,    98,    99,   251,
     393,    79,   394,   494,    95,   -79,   -81,   -81,    82,   -81,
      83,   -79,   -81,   -47,   -47,   252,   -99,   320,   167,   168,
      97,   -47,   -82,   -82,    84,   -82,    98,    99,   -82,    85,
     414,    86,   415,   161,   -99,   -48,   -48,   175,   176,    98,
      99,   249,   -88,   -88,   -88,   -88,   166,   255,   431,   169,
      89,   339,   180,    98,    99,   -81,    98,    99,   345,   -47,
     451,   -81,   -88,   248,   -48,   247,   432,   -88,   -88,   -38,
     -38,   -82,   -38,   -49,   324,   -38,   -48,   -82,   452,   -98,
     -88,   360,   -88,   -88,    98,    99,   335,   -88,   366,   -47,
     -38,   -38,   -38,   -38,   -38,   154,   -38,   -38,   -38,   -38,
     -38,   -99,   -38,   -38,   -38,   -38,   -38,   124,   -88,   -88,
     125,   -89,   -89,   -89,   -89,   130,   356,   -38,   -38,   132,
     -48,   -38,   -38,   482,   -38,   -38,    28,    29,   391,    30,
     -83,   -83,    31,   -83,   151,   397,   -83,   371,   -46,   -78,
     -78,   483,   -78,    -8,    16,   -78,   -88,   181,   182,   -89,
     336,   -89,   -89,   184,   156,    35,    36,    37,   412,    38,
      39,    40,    41,   387,   341,   418,   342,   -77,   -77,   502,
     -77,   -89,   -89,   -77,    80,    44,   426,   427,  -103,   -83,
     139,    45,    46,  -104,   362,   -83,   363,   503,   -78,   -80,
     -80,   -89,   -80,   408,   -78,   -80,   337,   446,   447,   157,
     -77,   -77,   -77,   -77,   254,   158,   -46,   250,   318,   253,
     465,   469,   419,   472,   251,   393,   -77,   394,   470,   117,
     424,   159,   -77,   -77,   -46,   429,   538,   160,   477,   478,
     252,   433,   140,   464,   471,   414,  -100,   415,   -80,  -101,
     117,   444,   211,   212,   -80,   357,   449,  -100,   214,   497,
     498,  -102,   453,  -101,  -100,   170,   249,  -101,   -90,   -90,
     467,   463,   255,   257,    28,    29,   255,    92,  -102,  -102,
      31,   117,   475,   -85,   -85,   171,   -85,   480,   248,   -85,
     247,   -90,   -90,   484,   -88,   -88,   173,    78,   -90,   -90,
     174,   358,   117,   495,    87,    88,   -90,    90,   500,   202,
     323,   -90,   -84,   -84,   504,   -84,   540,   327,   -84,   258,
     259,   322,   388,    93,   328,   261,   515,   -91,   -91,    45,
     -88,   -49,   -85,   126,   127,   522,   -90,   -90,   -85,   329,
     232,   330,   202,   211,   212,   331,   213,   -76,   -76,   214,
     -76,   279,   334,   -76,   348,   533,   288,   289,   309,   409,
     349,   -84,   291,   -18,   -18,   -91,   -91,   -84,   389,   320,
     -92,   -92,   215,   216,   217,   350,   218,   219,   220,   221,
     -76,   -76,   -76,   -76,   254,   254,   547,   250,   250,   253,
     253,   351,   222,  -107,   251,   251,   -76,   352,   223,    46,
     -95,   -95,   -76,   -76,   309,   410,   558,   374,   -92,   -92,
     252,   252,   355,   568,   569,   -86,   -86,   232,   -86,   367,
     309,   -86,   369,   254,   254,   375,   250,   250,   253,   253,
     -91,   -91,   376,   251,   251,   379,   249,   249,   -95,   -95,
     -96,   -96,   255,   255,   570,   279,   380,   -89,   -89,   252,
     252,   381,   581,   582,   332,   333,   382,   202,   248,   248,
     247,   247,   -14,    24,   -86,   202,   -87,   -87,   -91,   -87,
     -86,   383,   -87,   -91,   -91,   249,   249,   -98,   -96,   -96,
     386,   255,   255,   -89,   353,   354,   -99,   202,   -51,   -51,
     400,   -53,   -53,   -91,   -49,   232,   401,   248,   248,   247,
     247,   -55,   -55,   -92,   -92,   402,   368,   -17,   -17,   372,
     -98,   181,   182,   403,   336,   -87,   404,   184,   -90,   -90,
     407,   -87,   -36,   -36,   -99,   -36,   -51,   -51,   -36,   -53,
     -53,   384,   385,   420,   202,   -95,   -95,    -8,    -8,   -55,
     -55,   -92,   279,   -36,   -36,   -36,   -36,   -36,   172,   -36,
     -36,   -36,   -36,   -36,   -90,   -36,   -36,   -36,   -36,   -36,
     337,   405,   406,   421,   202,    -8,   193,   -96,   -96,   422,
     -36,   -36,   309,   -95,   -36,   -36,   425,   -36,   -36,   211,
     212,   428,   357,   309,   430,   214,   445,   199,    94,   448,
     232,   202,   258,   259,   450,   388,   279,   466,   261,   473,
     288,   289,   309,   409,   202,   -96,   291,   -94,   -94,   476,
     202,   232,   232,   -57,   -57,   -89,   -89,   279,   229,   479,
     199,   -59,   -59,   309,   481,   232,   -16,   -16,   358,   276,
     496,   232,   202,   499,   223,   -89,   306,   501,   -90,   -90,
     514,   389,   232,   279,   516,   -94,   -94,   270,   279,   410,
     431,   -57,   -57,   -89,   309,   300,   279,   517,   -90,   -59,
     -59,   518,   279,   232,   309,   -93,   -93,   -51,   -51,   279,
    -109,  -109,   -53,   -53,   519,   309,   -90,   309,   181,   182,
     521,   183,   306,   309,   184,   -62,   -62,   309,   -62,   520,
     -62,   -62,   -62,   -91,   -91,   229,   309,   432,   306,   527,
     202,   -97,   -97,   -93,   -93,   -51,   202,   185,   186,   187,
     -53,   188,   189,   190,   191,   528,   309,   -91,   -91,   529,
     232,   -62,   530,   276,   -92,   -92,   232,   192,   108,   -91,
     -62,   -62,   109,   193,    46,   199,   338,   -91,   531,   -97,
     -97,   -95,   -95,   199,   -92,  -106,   152,   309,   451,   -92,
     -92,   279,   532,    28,    29,   -91,    30,   279,   452,    31,
     541,   -95,   -92,   -95,   -95,   199,   359,   309,   -46,   -60,
     -60,   309,   101,   229,   102,   103,   104,   309,   542,   -95,
     -55,   -55,    35,    36,    37,   -92,    38,    39,    40,    41,
       1,     2,     3,     4,   -94,   -94,  -108,  -108,   543,   -95,
     -43,   -43,    44,   -43,   544,   309,   -43,   -60,    45,    46,
     -96,   -96,   199,   390,   105,   106,   -57,   -57,   -55,   -15,
     276,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -94,   -43,   -43,   -43,   -43,   -43,   -49,   -49,
     -96,   -96,   199,   411,   -92,   -92,   -96,   545,   -43,   -43,
     306,   482,   -43,   -43,   -57,   -43,   -43,   -51,   -51,   546,
     -96,   306,   -59,   -59,   -92,   210,   -53,   -53,   229,   199,
     -72,   -72,   483,   -72,   276,   -72,   -72,   -72,   -96,   552,
     306,   -46,   199,   199,   199,   199,   -55,   -55,   199,   229,
     229,   -95,   -95,   -51,   553,   276,   240,   554,   210,   555,
     -59,   306,   -53,   229,   229,   229,   229,   287,   -72,   229,
     199,   -95,   556,   -72,   317,   -72,   -72,   -72,   -72,   -72,
     229,   276,   -55,   502,   -62,   -62,   276,   -62,   557,   -62,
     -62,   -62,   306,   503,   276,   276,   276,   276,   -98,   -98,
     276,   229,   306,   -71,   -71,   563,   -71,   276,   -71,   -71,
     -71,   -94,   -94,   306,   564,   306,   306,   306,   306,   565,
     317,   306,   -62,   -71,   566,   306,   567,   108,  -100,   -62,
     -62,   109,  -101,   240,   306,  -102,   317,   571,   199,   572,
     325,   -71,   -93,   -93,   199,   326,   -71,   -94,   -71,   -71,
     -71,   -71,   -71,   468,   306,  -100,   -51,   -51,   229,   -53,
     -53,   287,   -60,   -60,   229,   101,  -101,   102,   103,   104,
     -57,   -57,  -102,   210,   210,   573,   -51,   -59,   -59,   -53,
     -93,   210,   -60,   -99,   -99,   306,   -93,   -93,   574,   276,
      28,    29,   575,    30,   -51,   276,    31,   -53,   -97,   -97,
     -60,   -46,   -46,   210,   240,   306,   -57,   105,   106,   306,
     576,   240,   578,   -59,   579,   306,   580,   -96,   -96,    35,
      36,    37,   -93,    38,    39,    40,    41,   -51,   -51,    13,
      28,    29,    27,    30,   -97,     0,    31,   -96,   256,    44,
       0,   198,     0,   306,     0,    45,    46,   -51,   -53,   -53,
     210,   287,     0,   -55,   -55,    32,     0,    33,   287,    35,
      36,    37,     0,    38,    39,    40,    41,    42,   -53,   -55,
     -55,    11,   228,   -55,   198,    -2,     0,    11,    43,    44,
     210,   317,   177,   275,     0,    45,    46,    18,   317,   -55,
     305,   -55,   -97,   -97,     0,    18,   -94,   -94,     0,   317,
       1,     2,     3,     4,   -94,   -94,   240,   210,   -71,   -71,
     147,   -71,   287,   -71,   -71,   -71,   -94,     0,   317,     0,
     210,   210,   210,   210,   -94,     0,   210,   240,   240,     0,
     -97,  -100,  -100,   287,   -94,     0,   305,  -101,  -101,   317,
       0,   240,   240,   240,   240,   398,   -71,   240,   210,   228,
     399,   -71,   305,   -71,   -71,   -71,   -71,   -71,   240,   287,
    -102,  -102,   -57,   -57,   287,     0,   -59,   -59,     0,     0,
     317,     0,   287,   287,   287,   287,     0,   275,   287,   240,
     317,     0,   -57,     0,     0,   287,   -59,   -93,   -93,   198,
       0,   317,     0,   317,   317,   317,   317,   198,     0,   317,
     -57,   -57,   -57,   317,   -59,    28,    29,   -93,    92,   -59,
     -59,    31,   317,   -97,   -97,     0,   210,     0,     0,   198,
       0,   -57,   210,   340,     0,   -93,     0,   228,     0,   -59,
     -93,   -93,   317,   -97,     0,     0,   240,     0,    38,    39,
      40,    41,   240,    -4,   -97,   -97,    28,    29,     0,    30,
     -93,   -97,    31,   361,    44,     0,   181,   182,     0,   336,
      45,    46,   184,   317,   -97,     0,   198,   287,    -4,    -4,
      -4,    -4,     0,   287,   275,    35,    36,    37,     0,    38,
      39,    40,    41,   317,     0,     0,     0,   317,     0,   188,
     189,   190,   191,   317,   319,    44,   198,     0,     0,    -5,
     392,    45,    46,     0,   305,   192,     1,     2,     3,     4,
       0,   193,    46,     0,     0,   305,     0,     0,     0,   197,
      -6,   317,   228,   198,    -5,    -5,    -5,    -5,   275,     0,
     413,     0,     0,     0,   305,     0,   198,   198,   198,   439,
       0,     0,   198,   228,   228,    -6,    -6,    -6,    -6,   275,
     227,    -3,   197,     0,     0,   305,    -7,   228,   228,   228,
     459,   274,     0,   228,   198,     0,     0,     0,   304,     0,
       0,   340,    -9,     0,   228,   275,    -3,    -3,    -3,    -3,
     275,    -7,    -7,    -7,    -7,   146,   305,     0,   275,   275,
     275,   490,   361,     0,   275,   228,   305,    -9,    -9,    -9,
      -9,   275,     0,     0,     0,     0,     0,   305,     0,   305,
     305,   305,   510,     0,   304,   305,     0,     0,     0,   305,
       0,     0,     0,   392,     0,     0,     0,   227,   305,     0,
     304,     0,   198,     0,     0,     0,   -75,   -75,   198,   -75,
       0,     0,   -75,     0,   413,     0,     0,     0,   305,     0,
       0,     0,   228,     0,     0,   274,     0,     0,   228,     0,
       0,     0,   340,     0,     0,     0,     0,   197,   340,   -75,
     -75,   -75,   -75,     0,     0,   197,     0,     0,     0,   305,
       0,     0,   361,   275,     0,   -75,     0,     0,   361,   275,
       0,   -75,    28,    29,     0,    30,     0,   197,    31,   305,
       0,     0,     0,   305,     0,   227,     0,     0,     0,   305,
       0,   -72,   -72,   392,   -72,     0,   -72,   -72,   -72,   392,
       0,    35,    36,    37,     0,    38,    39,    40,    41,     0,
       0,   -72,     0,   413,     0,   195,     0,   305,     0,   413,
     370,    44,     0,     0,   197,     0,     0,    45,    46,   -72,
       0,   340,   274,   340,   -72,   114,   -72,   -72,   -72,   -72,
     -72,     0,   361,     0,   361,     0,   225,     0,   195,   211,
     212,   -19,   357,     0,   197,   214,   392,   272,   392,     0,
       0,     0,   304,     0,   302,     0,     0,   413,     0,   413,
       0,   142,     0,   304,     0,     0,   -19,   -19,   -19,   -19,
     227,   197,   218,   219,   220,   221,   274,   148,     0,     0,
       0,     0,   304,     0,   197,   197,   438,     0,   222,     0,
     197,   227,   227,     0,   223,    46,     0,   274,     0,     0,
     302,     0,     0,   304,   162,   227,   227,   458,     0,     0,
     164,   227,   197,   225,     0,     0,   302,     0,     0,     0,
       0,     0,   227,   274,     0,     0,     0,     0,   274,     0,
       0,     0,     0,     0,   304,     0,   274,   274,   489,     0,
       0,   272,   274,   227,   304,     0,     0,     0,     0,   274,
       0,     0,     0,   195,     0,   304,     0,   304,   304,   509,
       0,   343,     0,   304,     0,     0,     0,   304,    28,    29,
       0,    30,     0,     0,    31,     0,   304,     0,     0,     0,
     197,     0,     0,   195,     0,     0,   197,     0,     0,     0,
       0,   364,     0,   241,     0,   242,   304,    35,    36,    37,
     227,    38,    39,    40,    41,   244,   227,     0,     0,   258,
     259,     0,   388,     0,     0,   261,   245,    44,     0,     0,
     246,   196,     0,    45,    46,     0,     0,   304,     0,     0,
     195,   274,     0,     0,     0,     0,     0,   274,   395,     0,
       0,     0,   265,   266,   267,   268,     0,   304,     0,     0,
       0,   304,   226,     0,   196,     0,     0,   304,   269,     0,
     195,     0,     0,   273,   270,    46,   -60,   -60,   416,   101,
     303,   102,   103,   104,     0,     0,     0,     0,     0,   302,
       0,     0,     0,     0,   145,   304,   225,   195,   -71,   -71,
       0,   -71,   272,   -71,   -71,   -71,     0,     0,   302,     0,
     434,     0,     0,     0,   -60,   -60,   440,   225,   225,     0,
       0,   105,   106,   272,     0,     0,   303,     0,     0,   302,
       0,   454,     0,     0,   -71,    75,     0,   460,   195,   226,
      76,   -71,   303,   -71,   -71,   -71,   -71,   -71,   225,   272,
       0,     0,     0,     0,   272,     0,     0,     0,   -62,   -62,
     302,   -62,   485,   -62,   -62,   -62,     0,   273,   491,   225,
     302,     0,     0,     0,     0,   272,     0,     0,   -62,   196,
       0,   302,     0,   505,     0,     0,     0,   196,     0,   511,
       0,     0,     0,   302,   -93,   -93,   -62,   -93,     0,     0,
     -93,   108,   302,   -62,   -62,   109,   523,     0,     0,   196,
       0,     0,   525,     0,     0,     0,     0,   226,     0,   -93,
       0,   -93,   302,   -93,   -93,   -93,   534,   -93,   -93,   -93,
     -93,   -93,   536,     0,     0,   288,   289,     0,   409,     0,
       0,   291,   -93,   -93,     0,     0,   -93,   201,     0,   -93,
     -93,     0,     0,   302,     0,     0,   196,   548,     0,     0,
       0,     0,     0,   550,   273,     0,     0,   115,   295,   296,
     297,   298,     0,   302,     0,     0,     0,   559,   231,     0,
     201,     0,     0,   561,   299,     0,   196,     0,     0,   278,
     300,    46,   -50,   -50,   303,   101,   308,   102,   103,   104,
       0,     0,     0,   144,     0,   303,     0,     0,     0,     0,
       0,   302,   226,   196,     0,     0,     0,     0,   273,   150,
       0,     0,     0,     0,   303,     0,   196,   437,     0,     0,
     -50,   -50,   196,   226,   226,     0,     0,   105,   106,   273,
       0,     0,   308,     0,     0,   303,   163,   226,   457,     0,
       0,     0,   165,   226,   196,   231,     0,     0,   308,     0,
       0,     0,     0,     0,   226,   273,     0,     0,     0,     0,
     273,     0,     0,     0,     0,     0,   303,     0,   273,   488,
       0,     0,     0,   278,   273,   226,   303,     0,     0,     0,
       0,   273,     0,     0,     0,   201,     0,   303,     0,   303,
     508,   -43,   -43,   344,   -43,   303,     0,   -43,     0,   303,
     -42,   -42,     0,   -42,     0,     0,   -42,     0,   303,     0,
       0,     0,   196,     0,     0,   201,     0,     0,   196,     0,
     -43,   -43,   -43,   365,   -43,   -43,   -43,   -43,   303,   -42,
     -42,   -42,   226,   -42,   -42,   -42,   -42,     0,   226,   -43,
     -43,     0,     0,     0,     0,     0,   -43,   -43,   -42,   -42,
       0,     0,     0,   203,     0,   -42,   -42,     0,     0,   303,
       0,     0,   201,   273,     0,     0,     0,     0,     0,   273,
     396,    28,    29,     0,    92,     0,     0,    31,     0,   303,
       0,     0,     0,   303,   233,     0,   203,     0,     0,   303,
       0,     0,   201,     0,     0,   280,     0,     0,     0,     0,
     417,     0,   310,     0,    38,    39,    40,    41,     0,   -71,
     -71,   308,   -71,     0,   -71,   -71,   -71,   303,   231,   201,
      44,     0,     0,     0,   278,     0,    45,     0,     0,   -71,
     308,     0,   436,     0,     0,     0,     0,     0,   442,   231,
     231,     0,     0,     0,     0,   278,   325,   -71,   310,     0,
       0,   308,   -71,   456,   -71,   -71,   -71,   -71,   -71,   462,
     201,   233,     0,     0,   310,     0,     0,     0,     0,     0,
     231,   278,     0,     0,     0,     0,   278,     0,     0,     0,
     -61,   -61,   308,   -61,   487,   -61,   -61,   -61,     0,   280,
     493,   231,   308,     0,     0,     0,     0,   278,     0,     0,
     -61,   203,     0,   308,     0,   507,     0,   258,   259,   203,
     260,   513,     0,   261,     0,   308,   288,   289,   -61,   290,
       0,     0,   291,   108,   308,   -61,   -61,   109,   524,     0,
       0,   203,     0,     0,   526,     0,   262,   263,   264,   233,
     265,   266,   267,   268,   308,   292,   293,   294,   535,   295,
     296,   297,   298,     0,   537,     0,   269,     0,   211,   212,
       0,   213,   270,    46,   214,   299,     0,     0,     0,   204,
       0,   300,    46,     0,     0,   308,     0,     0,   203,   549,
       0,     0,     0,     0,     0,   551,   280,   215,   216,   217,
       0,   218,   219,   220,   221,   308,     0,     0,     0,   560,
     234,     0,   204,   181,   182,   562,   336,   222,   203,   184,
       0,   281,     0,   223,    46,     0,   310,     0,   311,     0,
       0,     0,     0,     0,     0,   -73,   -73,   310,   -73,     0,
     -73,   -73,   -73,   308,   233,   203,   188,   189,   190,   191,
     280,     0,     0,     0,     0,   -73,   310,     0,   203,     0,
       0,     0,   192,     0,   203,   233,   233,     0,   193,     0,
       0,   280,     0,   -73,   311,     0,     0,   310,   -73,   233,
     -73,   -73,   -73,   -73,   -73,   233,   203,   234,     0,     0,
     311,     0,     0,     0,     0,     0,   233,   280,     0,     0,
       0,     0,   280,     0,     0,     0,   -62,   -62,   310,   -62,
     280,   -62,   -62,   -62,     0,   281,   280,   233,   310,     0,
       0,     0,     0,   280,     0,     0,   -62,   204,     0,   310,
       0,   310,     0,   -43,   -43,   204,   -43,   310,     0,   -43,
       0,   310,   -42,   -42,     0,   -42,     0,     0,   -42,   108,
     310,   -62,   -62,   109,   203,     0,     0,   204,     0,     0,
     203,     0,   -43,   -43,   -43,   234,   -43,   -43,   -43,   -43,
     310,   -42,   -42,   -42,   233,   -42,   -42,   -42,   -42,     0,
     233,     0,   -43,     0,   211,   212,     0,   357,   -43,   -43,
     214,   -42,     0,     0,     0,   205,     0,   -42,   -42,     0,
       0,   310,     0,     0,   204,   280,     0,     0,     0,     0,
       0,   280,   281,     0,     0,     0,     0,   218,   219,   220,
     221,   310,     0,     0,     0,   310,   235,     0,   205,   258,
     259,   310,   388,   222,   204,   261,     0,   282,     0,   223,
     -60,   -60,   311,   101,   312,   102,   103,   104,     0,     0,
       0,   -74,   -74,   311,   -74,     0,   -74,   -74,   -74,   310,
     234,   204,   265,   266,   267,   268,   281,     0,     0,     0,
       0,   -74,   311,     0,   204,     0,   -60,     0,   269,     0,
     204,   234,   234,     0,   270,   105,   106,   281,     0,   -74,
     312,     0,     0,   311,   -74,   234,   -74,   -74,   -74,   -74,
     -74,   234,   204,   235,     0,     0,   312,     0,     0,     0,
       0,     0,   234,   281,     0,     0,   -64,   -64,   281,   -64,
       0,   -64,   -64,   -64,   311,     0,   281,     0,     0,     0,
       0,   282,   281,   234,   311,     0,   -64,     0,     0,   281,
       0,     0,     0,   205,     0,   311,     0,   311,     0,   288,
     289,   205,   409,   311,   -64,   291,     0,   311,     0,   -64,
       0,   -64,   -64,   -64,   111,   112,   311,     0,     0,     0,
     204,     0,     0,   205,     0,     0,   204,     0,     0,     0,
       0,   235,   295,   296,   297,   298,   311,     0,   -61,   -61,
     234,   -61,     0,   -61,   -61,   -61,   234,     0,   299,     0,
     -52,   -52,     0,   101,   300,   102,   103,   104,     0,   -61,
     -61,   206,   -61,     0,   -61,   -61,   -61,   311,     0,     0,
     205,   281,     0,     0,   -61,     0,     0,   281,   282,   -61,
       0,   108,     0,   -61,   -61,   109,     0,   311,   -52,   -52,
       0,   311,   236,     0,   206,   105,   106,   311,     0,     0,
     205,     0,   108,   283,   -61,   -61,   109,     0,   312,     0,
     313,     0,     0,     0,     0,     0,     0,   -50,   -50,   312,
     101,     0,   102,   103,   104,   311,   235,   205,   -71,   -71,
       0,   -71,   282,   -71,   -71,   -71,     0,   -50,   312,     0,
     205,     0,     0,     0,     0,     0,   205,   235,   235,     0,
       0,     0,     0,   282,     0,   -50,   313,     0,     0,   312,
       0,   235,   105,   106,   -71,    75,     0,   235,   205,   236,
       0,   -71,   313,   -71,   -71,   -71,   -71,   -71,   235,   282,
       0,     0,     0,     0,   282,     0,     0,     0,   -60,   -60,
     312,   101,   282,   102,   103,   104,     0,   283,   282,   235,
     312,     0,     0,     0,     0,   282,     0,     0,   -60,   206,
       0,   312,     0,   312,     0,     0,     0,   206,     0,   312,
       0,   -71,   -71,   312,   -71,     0,   -71,   -71,   -71,     0,
       0,     0,   312,   105,   106,     0,   205,     0,     0,   206,
       0,     0,   205,   -54,   -54,     0,   101,   236,   102,   103,
     104,     0,   312,     0,     0,     0,   235,     0,   346,   -71,
     -71,     0,   235,   347,   -71,     0,   -71,   -71,   -71,   -71,
     -71,     0,     0,     0,     0,     0,     0,   200,     0,     0,
       0,   -54,   -54,   312,     0,     0,   206,   282,   105,   106,
       0,     0,     0,   282,   283,     0,     0,     0,     0,   -56,
     -56,     0,   101,   312,   102,   103,   104,   312,   230,     0,
     200,     0,     0,   312,     0,     0,   206,     0,     0,   277,
       0,     0,   -58,   -58,   313,   101,   307,   102,   103,   104,
       0,     0,     0,   143,     0,   313,     0,   -56,   -56,     0,
       0,   312,   236,   206,   105,   106,     0,     0,   283,   149,
       0,     0,   -50,   -50,   313,   101,   206,   102,   103,   104,
     -58,   -58,   206,   236,   236,     0,     0,   105,   106,   283,
       0,     0,   307,   -52,   -52,   313,   101,   236,   102,   103,
     104,     0,     0,   236,   206,   230,     0,     0,   307,   194,
     -50,     0,     0,   -52,   236,   283,     0,   105,   106,     0,
     283,     0,     0,     0,     0,     0,   313,     0,   283,     0,
       0,   -52,     0,   277,   283,   236,   313,     0,   105,   106,
     224,   283,   194,     0,     0,   200,     0,   313,     0,   313,
       0,   271,     0,     0,     0,   313,     0,     0,   301,   313,
     -71,   -71,     0,   -71,     0,   -71,   -71,   -71,   313,     0,
       0,     0,   206,     0,     0,   200,     0,     0,   206,     0,
     -71,     0,     0,     0,     0,     0,     0,     0,   313,     0,
       0,     0,   236,     0,     0,     0,     0,   377,   236,     0,
       0,     0,   378,   -71,   301,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,     0,     0,     0,   224,     0,   313,
     301,     0,   200,   283,     0,     0,     0,   -71,   -71,   283,
     -71,     0,   -71,   -71,   -71,   -50,   -50,     0,   101,   313,
     102,   103,   104,   313,     0,   271,     0,     0,     0,   313,
       0,     0,   200,     0,     0,   -50,     0,   194,     0,     0,
       0,     0,     0,     0,   346,   -71,   -71,     0,     0,     0,
     -71,   307,   -71,   -71,   -71,   -71,   -71,   313,   230,   200,
     105,   106,     0,     0,   277,     0,     0,   194,     0,     0,
     307,     0,   435,     0,     0,     0,     0,     0,   441,   230,
     230,   -54,   -54,     0,   101,   277,   102,   103,   104,   -50,
     -50,   307,   101,   455,   102,   103,   104,     0,     0,   461,
     200,   -54,     0,     0,     0,   207,     0,     0,     0,     0,
     230,   277,     0,     0,   194,     0,   277,     0,     0,   -54,
       0,     0,   307,     0,   486,   -50,   105,   106,     0,     0,
     492,   230,   307,     0,   105,   106,   237,   277,   207,     0,
       0,     0,     0,   307,   194,   506,     0,   284,     0,     0,
       0,   512,     0,     0,   314,   307,     0,     0,     0,     0,
       0,     0,     0,   301,   307,     0,     0,     0,     0,     0,
     224,   194,     0,     0,     0,     0,   271,     0,     0,     0,
       0,     0,   301,     0,   307,     0,     0,   208,     0,     0,
       0,   224,   224,     0,     0,     0,     0,   271,     0,     0,
     314,     0,     0,   301,     0,     0,     0,     0,     0,     0,
       0,     0,   194,   237,     0,   307,   314,     0,   238,     0,
     208,     0,   224,   271,     0,     0,     0,     0,   271,   285,
       0,     0,     0,     0,   301,   307,   315,     0,     0,     0,
       0,   284,     0,   224,   301,   -72,   -72,     0,   -72,   271,
     -72,   -72,   -72,   207,     0,   301,     0,     0,     0,   -66,
     -66,     0,   -66,     0,   -66,   -66,   -66,   301,     0,     0,
       0,     0,     0,   307,     0,     0,   301,     0,     0,   -66,
       0,   -72,   315,   207,     0,     0,     0,     0,   -72,     0,
     -72,   -72,   -72,   -72,   -72,   238,   301,   -66,   315,     0,
       0,     0,   -66,     0,   -66,   -66,   -66,   -66,   -66,   209,
     -62,   -62,     0,   -62,     0,   -62,   -62,   -62,     0,     0,
       0,     0,     0,   285,     0,     0,     0,   301,     0,     0,
     207,   -61,   -61,     0,   -61,   208,   -61,   -61,   -61,     0,
     239,     0,   209,     0,     0,     0,     0,   301,   -62,   -62,
       0,   286,     0,   108,     0,   -62,   -62,   109,   316,     0,
     207,     0,     0,     0,     0,   208,     0,     0,     0,   -61,
     -61,     0,     0,     0,   108,     0,   -61,   -61,   109,   314,
       0,     0,     0,     0,     0,   301,   237,   207,   -72,   -72,
       0,   -72,   284,   -72,   -72,   -72,     0,     0,   314,     0,
       0,     0,     0,     0,   316,     0,     0,   237,   237,     0,
       0,     0,   208,   284,     0,     0,     0,   239,     0,   314,
     316,     0,     0,     0,     0,     0,   -72,   -72,   207,     0,
       0,   -72,     0,   -72,   -72,   -72,   -72,   -72,   237,   284,
       0,     0,   208,     0,   284,   286,     0,     0,   -52,   -52,
     314,   101,     0,   102,   103,   104,     0,   209,     0,   237,
     314,   315,     0,     0,     0,   284,     0,     0,   238,   208,
       0,   314,   -54,   -54,   285,   101,     0,   102,   103,   104,
     315,     0,     0,   314,   -52,     0,     0,   209,     0,   238,
     238,     0,   314,   105,   106,   285,     0,     0,     0,     0,
       0,   315,     0,     0,     0,     0,     0,     0,   -54,     0,
     208,     0,   314,     0,     0,     0,     0,   105,   106,     0,
     238,   285,     0,     0,   -68,   -68,   285,   -68,     0,   -68,
     -68,   -68,   315,     0,   209,     0,     0,     0,     0,     0,
       0,   238,   315,   314,   -68,     0,     0,   285,     0,     0,
       0,     0,     0,   315,     0,     0,     0,     0,     0,     0,
       0,     0,   -68,   314,   209,   315,     0,   -68,     0,   -68,
     -68,   -68,   -68,   -68,   315,     0,     0,     0,     0,     0,
       0,     0,     0,   316,     0,     0,     0,     0,     0,     0,
     239,   209,   -73,   -73,   315,   -73,   286,   -73,   -73,   -73,
       0,   314,   316,     0,     0,     0,     0,     0,     0,     0,
       0,   239,   239,   -70,   -70,     0,   -70,   286,   -70,   -70,
     -70,   -56,   -56,   316,   101,   315,   102,   103,   104,     0,
     -73,   -73,   209,   -70,     0,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   239,   286,     0,   315,     0,     0,   286,     0,
       0,   -70,     0,     0,   316,     0,   -70,   -56,   -70,   -70,
     -70,   -70,   -70,   239,   316,     0,   105,   106,     0,   286,
       0,     0,     0,     0,     0,   316,   -29,   -29,     0,   -29,
       0,     0,   -29,   315,     0,     0,     0,   316,     0,     0,
       0,     0,     0,     0,     0,     0,   316,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,
     -29,   -29,   -29,   -29,     0,     0,   316,     0,     0,     0,
       0,     0,     0,     0,   -29,   -29,     0,     0,   -29,   -29,
       0,   -29,   -29,     0,     0,   -24,   -24,     0,   -24,     0,
       0,   -24,     0,     0,     0,     0,     0,   316,     0,     0,
       0,     0,     0,     0,     0,     0,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   316,   -24,   -24,
     -24,   -24,   -24,   -25,   -25,     0,   -25,     0,     0,   -25,
       0,     0,     0,   -24,   -24,     0,     0,   -24,   -24,     0,
     -24,   -24,     0,     0,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,   316,   -25,   -25,   -25,   -25,
     -25,   -26,   -26,     0,   -26,     0,     0,   -26,     0,     0,
       0,   -25,   -25,     0,     0,   -25,   -25,     0,   -25,   -25,
       0,     0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -30,
     -30,     0,   -30,     0,     0,   -30,     0,     0,     0,   -26,
     -26,     0,     0,   -26,   -26,     0,   -26,   -26,     0,     0,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   -30,   -30,   -27,   -27,     0,
     -27,     0,     0,   -27,     0,     0,     0,   -30,   -30,     0,
       0,   -30,   -30,     0,   -30,   -30,     0,     0,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,
     -27,   -27,   -27,   -27,   -27,   -28,   -28,     0,   -28,     0,
       0,   -28,     0,     0,     0,   -27,   -27,     0,     0,   -27,
     -27,     0,   -27,   -27,     0,     0,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   -44,   -44,     0,   -44,     0,     0,   -44,
       0,     0,     0,   -28,   -28,     0,     0,   -28,   -28,     0,
     -28,   -28,     0,     0,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,
     -44,    -7,    -7,     0,    -7,     0,     0,    -7,     0,     0,
       0,   -44,   -44,     0,     0,   -44,   -44,     0,   -44,   -44,
       0,     0,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,   -42,
     -42,     0,   -42,     0,     0,   -42,     0,     0,     0,    -7,
      -7,     0,     0,    -7,    -7,     0,    -7,    -7,     0,     0,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,     0,   -42,   -42,   -42,   -42,   -42,   -38,   -38,     0,
     -38,     0,     0,   -38,     0,     0,     0,   -42,   -42,     0,
       0,   -42,   -42,     0,   -42,   -42,     0,     0,   -38,   -38,
     -38,   -38,   -38,   539,   -38,   -38,   -38,   -38,   -38,     0,
     -38,   -38,   -38,   -38,   -38,   -45,   -45,     0,   -45,     0,
       0,   -45,     0,     0,     0,   -38,   -38,     0,     0,   -38,
     -38,     0,   -38,   -38,     0,     0,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,
     -45,   -45,   -45,   -31,   -31,     0,   -31,     0,     0,   -31,
       0,     0,     0,   -45,   -45,     0,     0,   -45,   -45,     0,
     -45,   -45,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,
     -31,   -41,   -41,     0,   -41,     0,     0,   -41,     0,     0,
       0,   -31,   -31,     0,     0,   -31,   -31,     0,   -31,   -31,
       0,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -32,
     -32,     0,   -32,     0,     0,   -32,     0,     0,     0,   -41,
     -41,     0,     0,   -41,   -41,     0,   -41,   -41,     0,     0,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -32,   -33,   -33,     0,
     -33,     0,     0,   -33,     0,     0,     0,   -32,   -32,     0,
       0,   -32,   -32,     0,   -32,   -32,     0,     0,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   -33,   -33,   -33,   -33,   -35,   -35,     0,   -35,     0,
       0,   -35,     0,     0,     0,   -33,   -33,     0,     0,   -33,
     -33,     0,   -33,   -33,     0,     0,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,
     -35,   -35,   -35,   -34,   -34,     0,   -34,     0,     0,   -34,
       0,     0,     0,   -35,   -35,     0,     0,   -35,   -35,     0,
     -35,   -35,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,
     -34,   -19,   -19,     0,   -19,     0,     0,   -19,     0,     0,
       0,   -34,   -34,     0,     0,   -34,   -34,     0,   -34,   -34,
       0,     0,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,   -36,
     -36,     0,   -36,     0,     0,   -36,     0,     0,     0,   -19,
     -19,     0,     0,   -19,   -19,     0,   -19,   -19,     0,     0,
     -36,   -36,   -36,   -36,   -36,   577,   -36,   -36,   -36,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -36,   -39,   -39,     0,
     -39,     0,     0,   -39,     0,     0,     0,   -36,   -36,     0,
       0,   -36,   -36,     0,   -36,   -36,     0,     0,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,
     -39,   -39,   -39,   -39,   -39,   -37,   -37,     0,   -37,     0,
       0,   -37,     0,     0,     0,   -39,   -39,     0,     0,   -39,
     -39,     0,   -39,   -39,     0,     0,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -40,   -40,     0,   -40,     0,     0,   -40,
       0,     0,     0,   -37,   -37,     0,     0,   -37,   -37,     0,
     -37,   -37,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,
     -40,    28,    29,     0,    30,     0,     0,    31,     0,     0,
       0,   -40,   -40,     0,     0,   -40,   -40,     0,   -40,   -40,
       0,     0,     1,     2,     3,     4,    32,     0,    33,    34,
      35,    36,    37,     0,    38,    39,    40,    41,    42,   -43,
     -43,     0,   -43,     0,     0,   -43,     0,     0,     0,    43,
      44,     0,     0,   177,   -21,     0,    45,    46,     0,     0,
     -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,
     -43,     0,   -43,   -43,   -43,   -43,   -43,   -29,   -29,     0,
     -29,     0,     0,   -29,     0,     0,     0,   -43,   -43,     0,
       0,   -43,   -43,     0,   -43,   -43,     0,     0,   -29,   -29,
     -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,     0,
     -29,   -29,   -29,   -29,   -29,   -24,   -24,     0,   -24,     0,
       0,   -24,     0,     0,     0,   -29,   -29,     0,     0,   -29,
     -29,     0,   -29,   -29,     0,     0,   -24,   -24,   -24,   -24,
     -24,     0,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
     -24,   -24,   -24,    28,    29,     0,    30,     0,     0,    31,
       0,     0,     0,   -24,   -24,     0,     0,   -24,   -24,     0,
     -24,   -24,     0,     0,     1,     2,     3,     4,    32,     0,
      33,    34,    35,    36,    37,     0,    38,    39,    40,    41,
      42,   -23,   -23,     0,   -23,     0,     0,   -23,     0,     0,
       0,    43,    44,     0,     0,   177,   -20,     0,    45,    46,
       0,     0,   -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,
     -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -25,
     -25,     0,   -25,     0,     0,   -25,     0,     0,     0,   -23,
     -23,     0,     0,   -23,   -23,     0,   -23,   -23,     0,     0,
     -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -26,   -26,     0,
     -26,     0,     0,   -26,     0,     0,     0,   -25,   -25,     0,
       0,   -25,   -25,     0,   -25,   -25,     0,     0,   -26,   -26,
     -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,
     -26,   -26,   -26,   -26,   -26,   -30,   -30,     0,   -30,     0,
       0,   -30,     0,     0,     0,   -26,   -26,     0,     0,   -26,
     -26,     0,   -26,   -26,     0,     0,   -30,   -30,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   -27,   -27,     0,   -27,     0,     0,   -27,
       0,     0,     0,   -30,   -30,     0,     0,   -30,   -30,     0,
     -30,   -30,     0,     0,   -27,   -27,   -27,   -27,   -27,     0,
     -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,
     -27,   -28,   -28,     0,   -28,     0,     0,   -28,     0,     0,
       0,   -27,   -27,     0,     0,   -27,   -27,     0,   -27,   -27,
       0,     0,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -44,
     -44,     0,   -44,     0,     0,   -44,     0,     0,     0,   -28,
     -28,     0,     0,   -28,   -28,     0,   -28,   -28,     0,     0,
     -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,
     -44,     0,   -44,   -44,   -44,   -44,   -44,   -22,   -22,     0,
     -22,     0,     0,   -22,     0,     0,     0,   -44,   -44,     0,
       0,   -44,   -44,     0,   -44,   -44,     0,     0,   -22,   -22,
     -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,   -22,     0,
     -22,   -22,   -22,   -22,   -22,   -42,   -42,     0,   -42,     0,
       0,   -42,     0,     0,     0,   -22,   -22,     0,     0,   -22,
     -22,     0,   -22,   -22,     0,     0,   -42,   -42,   -42,   -42,
     -42,     0,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,
     -42,   -42,   -42,   -45,   -45,     0,   -45,     0,     0,   -45,
       0,     0,     0,   -42,   -42,     0,     0,   -42,   -42,     0,
     -42,   -42,     0,     0,   -45,   -45,   -45,   -45,   -45,     0,
     -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,
     -45,   -31,   -31,     0,   -31,     0,     0,   -31,     0,     0,
       0,   -45,   -45,     0,     0,   -45,   -45,     0,   -45,   -45,
       0,     0,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -41,
     -41,     0,   -41,     0,     0,   -41,     0,     0,     0,   -31,
     -31,     0,     0,   -31,   -31,     0,   -31,   -31,     0,     0,
     -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,
     -41,     0,   -41,   -41,   -41,   -41,   -41,   -32,   -32,     0,
     -32,     0,     0,   -32,     0,     0,     0,   -41,   -41,     0,
       0,   -41,   -41,     0,   -41,   -41,     0,     0,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   -33,   -33,     0,   -33,     0,
       0,   -33,     0,     0,     0,   -32,   -32,     0,     0,   -32,
     -32,     0,   -32,   -32,     0,     0,   -33,   -33,   -33,   -33,
     -33,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,
     -33,   -33,   -33,   -35,   -35,     0,   -35,     0,     0,   -35,
       0,     0,     0,   -33,   -33,     0,     0,   -33,   -33,     0,
     -33,   -33,     0,     0,   -35,   -35,   -35,   -35,   -35,     0,
     -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,
     -35,   -34,   -34,     0,   -34,     0,     0,   -34,     0,     0,
       0,   -35,   -35,     0,     0,   -35,   -35,     0,   -35,   -35,
       0,     0,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -39,
     -39,     0,   -39,     0,     0,   -39,     0,     0,     0,   -34,
     -34,     0,     0,   -34,   -34,     0,   -34,   -34,     0,     0,
     -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,
     -39,     0,   -39,   -39,   -39,   -39,   -39,   -37,   -37,     0,
     -37,     0,     0,   -37,     0,     0,     0,   -39,   -39,     0,
       0,   -39,   -39,     0,   -39,   -39,     0,     0,   -37,   -37,
     -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,
     -37,   -37,   -37,   -37,   -37,   -40,   -40,     0,   -40,     0,
       0,   -40,     0,     0,     0,   -37,   -37,     0,     0,   -37,
     -37,     0,   -37,   -37,     0,     0,   -40,   -40,   -40,   -40,
     -40,     0,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,
     -40,   -40,   -40,    -7,    -7,     0,    -7,     0,     0,    -7,
       0,     0,     0,   -40,   -40,     0,     0,   -40,   -40,     0,
     -40,   -40,     0,     0,    -7,    -7,    -7,    -7,    -7,     0,
      -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,    -7,
      -7,   -19,   -19,     0,   -19,     0,     0,   -19,     0,     0,
       0,    -7,    -7,     0,     0,    -7,    -7,     0,    -7,    -7,
       0,     0,   -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,
     -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,    28,
      29,     0,    30,     0,     0,    31,     0,     0,     0,   -19,
     -19,     0,     0,   -19,   -19,     0,   -19,   -19,     0,     0,
       1,     2,     3,     4,   241,     0,   242,   243,    35,    36,
      37,     0,    38,    39,    40,    41,   244,    28,    29,     0,
      30,     0,     0,    31,     0,     0,     0,   245,    44,     0,
       0,   246,     0,     0,    45,    46,     0,     0,     1,     2,
       3,     4,    32,     0,    33,    34,    35,    36,    37,     0,
      38,    39,    40,    41,    42,   -93,   -93,     0,   -93,     0,
       0,   -93,     0,     0,     0,    43,    44,     0,     0,   177,
       0,     0,    45,    46,     0,     0,   -93,   -93,   -93,   -93,
     -93,     0,   -93,   -93,   -93,   -93,   -93,     0,   -93,   -93,
     -93,   -93,   -93,   -74,   -74,     0,   -74,     0,   -74,   -74,
     -74,     0,     0,   -93,   -93,     0,     0,   -93,     0,     0,
     -93,   -93,   -64,   -64,     0,   -64,     0,   -64,   -64,   -64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -74,   -74,     0,     0,     0,   -74,     0,   -74,   -74,
     -74,   -74,   -74,     0,     0,     0,     0,     0,     0,     0,
     -64,   -64,     0,     0,     0,   -64,     0,   -64,   -64,   -64,
     111,   112,   -66,   -66,     0,   -66,     0,   -66,   -66,   -66,
       0,     0,     0,     0,   -68,   -68,     0,   -68,     0,   -68,
     -68,   -68,     0,     0,     0,     0,   -70,   -70,     0,   -70,
       0,   -70,   -70,   -70,     0,     0,     0,     0,     0,     0,
     -66,   -66,     0,     0,     0,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -68,   -68,     0,     0,     0,   -68,     0,   -68,
     -68,   -68,   -68,   -68,   -70,   -70,     0,     0,     0,   -70,
       0,   -70,   -70,   -70,   -70,   -70,   -67,   -67,     0,   -67,
       0,   -67,   -67,   -67,     0,     0,     0,     0,   -67,   -67,
       0,   -67,     0,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -71,   -71,     0,   -71,   -67,   -71,   -71,   -71,     0,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,
     -71,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -71,   -71,
       0,   -71,     0,   -71,   -71,   -71,     0,   377,     0,     0,
       0,     0,     0,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -69,   -69,     0,   -69,     0,   -69,   -69,   -69,     0,     0,
       0,     0,     0,     0,     0,   398,   -71,     0,     0,     0,
     -69,   -71,     0,   -71,   -71,   -71,   -71,   -71,     0,     0,
     -63,   -63,     0,   -63,     0,   -63,   -63,   -63,   -69,     0,
       0,     0,     0,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     -63,   -65,   -65,     0,   -65,     0,   -65,   -65,   -65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -63,     0,
       0,   -65,     0,   -63,     0,   -63,   -63,   -63,   111,   112,
     -69,   -69,     0,   -69,     0,   -69,   -69,   -69,     0,   -65,
       0,     0,     0,     0,   -65,     0,   -65,   -65,   -65,   -65,
     -65,   -63,   -63,     0,   -63,     0,   -63,   -63,   -63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -69,   -69,
       0,     0,     0,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     -65,   -65,     0,   -65,     0,   -65,   -65,   -65,     0,   -63,
     -63,     0,     0,     0,   -63,     0,   -63,   -63,   -63,   111,
     112,  -105,  -105,     0,  -105,     0,  -105,  -105,  -105,   -73,
     -73,     0,   -73,     0,   -73,   -73,   -73,     0,   -65,   -65,
       0,  -105,     0,   -65,     0,   -65,   -65,   -65,   -65,   -65,
    -105,  -105,     0,  -105,     0,  -105,  -105,  -105,     0,  -105,
       0,     0,     0,     0,  -105,   -73,  -105,  -105,  -105,  -105,
    -105,     0,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -74,
     -74,     0,   -74,     0,   -74,   -74,   -74,     0,  -105,  -105,
       0,     0,     0,  -105,     0,  -105,  -105,  -105,  -105,  -105,
     -64,   -64,     0,   -64,     0,   -64,   -64,   -64,     0,     0,
       0,     0,     0,     0,     0,   -74,     0,     0,     0,     0,
       0,     0,   -74,     0,   -74,   -74,   -74,   -74,   -74,     0,
       0,     0,   -66,   -66,     0,   -66,   -64,   -66,   -66,   -66,
       0,     0,     0,   -64,     0,   -64,   -64,   -64,   111,   112,
     -68,   -68,     0,   -68,     0,   -68,   -68,   -68,   -70,   -70,
       0,   -70,     0,   -70,   -70,   -70,   -67,   -67,   -66,   -67,
       0,   -67,   -67,   -67,     0,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -69,   -69,     0,   -69,   -68,   -69,   -69,   -69,
       0,     0,     0,   -68,   -70,   -68,   -68,   -68,   -68,   -68,
       0,   -70,   -67,   -70,   -70,   -70,   -70,   -70,     0,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -63,   -63,   -69,   -63,
       0,   -63,   -63,   -63,     0,   -69,     0,   -69,   -69,   -69,
     -69,   -69,   -65,   -65,     0,   -65,     0,   -65,   -65,   -65,
    -105,  -105,     0,  -105,     0,  -105,  -105,  -105,     0,     0,
     -72,   -72,   -63,   -72,     0,   -72,   -72,   -72,     0,   -63,
       0,   -63,   -63,   -63,   111,   112,     0,     0,   -65,     0,
     -72,     0,     0,     0,     0,   -65,  -105,   -65,   -65,   -65,
     -65,   -65,     0,  -105,     0,  -105,  -105,  -105,  -105,  -105,
       0,     0,     0,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -73,   -73,     0,   -73,     0,   -73,   -73,   -73,   -74,   -74,
       0,   -74,     0,   -74,   -74,   -74,   -64,   -64,     0,   -64,
     -73,   -64,   -64,   -64,   -66,   -66,     0,   -66,   -74,   -66,
     -66,   -66,   -68,   -68,     0,   -68,   -64,   -68,   -68,   -68,
       0,     0,     0,   -73,   -66,   -73,   -73,   -73,   -73,   -73,
       0,   -74,   -68,   -74,   -74,   -74,   -74,   -74,     0,   -64,
       0,   -64,   -64,   -64,   111,   112,     0,   -66,     0,   -66,
     -66,   -66,   -66,   -66,     0,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -70,   -70,     0,   -70,     0,   -70,   -70,   -70,
       0,     0,     0,     0,   -73,   -73,     0,   -73,     0,   -73,
     -73,   -73,   -70,     0,     0,     0,   -74,   -74,     0,   -74,
       0,   -74,   -74,   -74,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -73,     0,     0,     0,     0,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -74,     0,     0,     0,     0,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -64,   -64,     0,   -64,
       0,   -64,   -64,   -64,     0,     0,     0,     0,   -66,   -66,
       0,   -66,     0,   -66,   -66,   -66,     0,     0,     0,     0,
     -68,   -68,     0,   -68,     0,   -68,   -68,   -68,     0,     0,
       0,     0,     0,     0,   -64,     0,     0,     0,     0,   -64,
       0,   -64,   -64,   -64,   111,   112,   -66,     0,     0,     0,
       0,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -68,     0,
       0,     0,     0,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     -70,   -70,     0,   -70,     0,   -70,   -70,   -70,   -67,   -67,
       0,   -67,     0,   -67,   -67,   -67,     0,     0,     0,     0,
     -67,   -67,     0,   -67,     0,   -67,   -67,   -67,   -67,     0,
     -69,   -69,     0,   -69,     0,   -69,   -69,   -69,   -70,     0,
       0,     0,     0,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -69,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,     0,   -67,     0,   -67,   -67,   -67,   -67,   -67,
       0,     0,     0,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     -63,   -63,     0,   -63,     0,   -63,   -63,   -63,   -65,   -65,
       0,   -65,     0,   -65,   -65,   -65,     0,     0,     0,     0,
     -63,     0,     0,     0,   -69,   -69,     0,   -69,   -65,   -69,
     -69,   -69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -63,     0,   -63,   -63,   -63,   111,   112,
       0,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -63,   -63,
       0,   -63,   -69,   -63,   -63,   -63,     0,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -65,   -65,     0,   -65,     0,   -65,
     -65,   -65,  -105,  -105,     0,  -105,     0,  -105,  -105,  -105,
       0,     0,     0,     0,     0,     0,   -63,     0,     0,     0,
       0,   -63,  -105,   -63,   -63,   -63,   111,   112,  -105,  -105,
       0,  -105,   -65,  -105,  -105,  -105,     0,   -65,     0,   -65,
     -65,   -65,   -65,   -65,     0,  -105,     0,  -105,  -105,  -105,
    -105,  -105,   -61,   -61,     0,   -61,     0,   -61,   -61,   -61,
       0,     0,   -56,   -56,     0,   101,  -105,   102,   103,   104,
       0,  -105,     0,  -105,  -105,  -105,  -105,  -105,     0,     0,
       0,     0,   -56,     0,     0,     0,   -58,   -58,     0,   101,
     -61,   102,   103,   104,     0,   108,     0,   -61,   -61,   109,
     -56,     0,     0,     0,     0,     0,   -58,   105,   106,   -58,
     -58,     0,   101,     0,   102,   103,   104,     0,     0,     0,
     -52,   -52,     0,   101,   -58,   102,   103,   104,     0,     0,
       0,   105,   106,     0,     0,     0,   -54,   -54,     0,   101,
     -52,   102,   103,   104,     0,   -58,   -52,   -52,     0,   101,
       0,   102,   103,   104,   105,   106,   -54,   -54,   -54,     0,
     101,     0,   102,   103,   104,   105,   106,   -56,   -56,     0,
     101,     0,   102,   103,   104,     0,     0,     0,     0,     0,
       0,   105,   106,     0,   -52,     0,     0,   -56,     0,     0,
       0,   105,   106,   -56,   -56,   -54,   101,     0,   102,   103,
     104,     0,   105,   106,   -58,   -58,     0,   101,     0,   102,
     103,   104,   105,   106,   -58,   -58,     0,   101,     0,   102,
     103,   104,     0,     0,   -58,     0,     0,     0,     0,     0,
       0,   -56,     0,     0,     0,     0,     0,     0,   105,   106,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   105,
     106,     0,   -58,     0,     0,     0,     0,     0,     0,   105,
     106
};

static const yytype_int16 yycheck[] =
{
       0,    23,     0,     7,    78,    50,     6,    78,     6,    78,
      79,    36,    65,   196,    78,   197,    16,   177,    34,    90,
     325,    90,    84,     7,    24,     7,    90,     7,    44,    54,
      78,    16,    17,    78,     4,     5,     0,     7,    16,    17,
      10,   346,    90,   226,    52,   227,     4,     5,     7,     7,
       7,    36,    10,    36,   123,    54,    78,    36,    36,    75,
      76,    77,    78,    79,    56,    16,    17,    36,    90,    54,
      86,    54,   377,    16,    17,    54,    54,    93,    78,   153,
      78,    53,   153,    53,   153,    54,   246,    16,    17,   153,
     273,    53,   274,   398,    57,    53,     4,     5,    53,     7,
      53,    59,    10,    54,    55,   153,    36,   123,   153,   154,
      52,    54,     4,     5,    53,     7,    16,    17,    10,    53,
     303,    53,   304,   139,    54,    54,    55,   172,   173,    16,
      17,   153,    16,    17,    16,    17,   152,   153,    36,   155,
      53,   194,    53,    16,    17,    53,    16,    17,   201,    36,
      36,    59,    36,   153,    54,   153,    54,    16,    17,     4,
       5,    53,     7,    52,   180,    10,    36,    59,    54,    52,
      54,   224,    54,    55,    16,    17,   192,    36,   231,    52,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    52,    37,    38,    39,    40,    41,    52,    16,    17,
       7,    16,    17,    16,    17,     7,   222,    52,    53,     7,
      52,    56,    57,    36,    59,    60,     4,     5,   271,     7,
       4,     5,    10,     7,    54,   278,    10,   243,    52,     4,
       5,    54,     7,    52,    53,    10,    54,     4,     5,    54,
       7,    54,    55,    10,    54,    33,    34,    35,   301,    37,
      38,    39,    40,   269,   437,   308,   438,     4,     5,    36,
       7,    16,    17,    10,    52,    53,   328,   329,    54,    53,
      36,    59,    60,    54,   457,    59,   458,    54,    53,     4,
       5,    36,     7,   299,    59,    10,    53,   349,   350,    54,
      37,    38,    39,    40,   368,    54,    36,   368,    36,   368,
     369,   372,   318,   372,   368,   488,    53,   489,   372,   325,
     326,    54,    59,    60,    54,   331,    54,    36,   380,   381,
     368,   337,    54,   368,   372,   508,    36,   509,    53,    36,
     346,   347,     4,     5,    59,     7,   352,    52,    10,   401,
     402,    36,   358,    52,    54,     7,   368,    54,    16,    17,
     372,   367,   368,   369,     4,     5,   372,     7,    52,    54,
      10,   377,   378,     4,     5,    54,     7,   383,   368,    10,
     368,    16,    17,   389,    16,    17,    54,    32,    16,    17,
      54,    53,   398,   399,    39,    40,    54,    42,   404,    44,
       7,    36,     4,     5,   410,     7,   465,    53,    10,     4,
       5,    52,     7,    53,    53,    10,   422,    16,    17,    59,
      52,    36,    53,     8,     9,   431,    54,    55,    59,    53,
      75,    53,    77,     4,     5,    53,     7,     4,     5,    10,
       7,    86,    53,    10,    53,   451,     4,     5,    93,     7,
      53,    53,    10,    54,    55,    54,    55,    59,    53,   465,
      16,    17,    33,    34,    35,    53,    37,    38,    39,    40,
      37,    38,    39,    40,   538,   539,   482,   538,   539,   538,
     539,    53,    53,    54,   538,   539,    53,    53,    59,    60,
      16,    17,    59,    60,   139,    53,   502,    52,    54,    55,
     538,   539,    53,   538,   539,     4,     5,   152,     7,    53,
     155,    10,    53,   577,   578,    52,   577,   578,   577,   578,
      16,    17,    52,   577,   578,    53,   538,   539,    54,    55,
      16,    17,   538,   539,   540,   180,    53,    16,    17,   577,
     578,    53,   577,   578,   189,   190,    53,   192,   538,   539,
     538,   539,    54,    55,    53,   200,     4,     5,    54,     7,
      59,    53,    10,    16,    17,   577,   578,    36,    54,    55,
      53,   577,   578,    52,   219,   220,    36,   222,    16,    17,
      53,    16,    17,    36,    54,   230,    53,   577,   578,   577,
     578,    16,    17,    16,    17,    53,   241,    54,    55,   244,
      54,     4,     5,    53,     7,    53,    53,    10,    16,    17,
      53,    59,     4,     5,    54,     7,    54,    55,    10,    54,
      55,   266,   267,    52,   269,    16,    17,    54,    55,    54,
      55,    54,   277,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    52,    37,    38,    39,    40,    41,
      53,   296,   297,    57,   299,    52,    59,    16,    17,    36,
      52,    53,   307,    54,    56,    57,     7,    59,    60,     4,
       5,     7,     7,   318,     7,    10,     7,    44,    45,     7,
     325,   326,     4,     5,     7,     7,   331,    52,    10,    57,
       4,     5,   337,     7,   339,    54,    10,    16,    17,     7,
     345,   346,   347,    16,    17,    16,    17,   352,    75,     7,
      77,    16,    17,   358,     7,   360,    54,    55,    53,    86,
       7,   366,   367,     7,    59,    36,    93,     7,    16,    17,
      54,    53,   377,   378,    54,    54,    55,    59,   383,    53,
      36,    54,    55,    54,   389,    59,   391,    54,    36,    54,
      55,    54,   397,   398,   399,    16,    17,    16,    17,   404,
      54,    55,    16,    17,    54,   410,    54,   412,     4,     5,
      36,     7,   139,   418,    10,    16,    17,   422,    19,    54,
      21,    22,    23,    16,    17,   152,   431,    54,   155,    54,
     435,    16,    17,    54,    55,    54,   441,    33,    34,    35,
      54,    37,    38,    39,    40,    54,   451,    16,    17,    54,
     455,    52,    54,   180,    16,    17,   461,    53,    59,    52,
      61,    62,    63,    59,    60,   192,   193,    36,    54,    54,
      55,    16,    17,   200,    36,    54,    55,   482,    36,    16,
      17,   486,    36,     4,     5,    54,     7,   492,    54,    10,
      54,    36,    54,    16,    17,   222,   223,   502,    36,    16,
      17,   506,    19,   230,    21,    22,    23,   512,    54,    54,
      16,    17,    33,    34,    35,    52,    37,    38,    39,    40,
      25,    26,    27,    28,    16,    17,    54,    55,    54,    52,
       4,     5,    53,     7,    54,   540,    10,    54,    59,    60,
      16,    17,   269,   270,    61,    62,    16,    17,    54,    54,
     277,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    54,    37,    38,    39,    40,    41,    54,    55,
      16,    17,   299,   300,    16,    17,    52,    54,    52,    53,
     307,    36,    56,    57,    54,    59,    60,    16,    17,    36,
      36,   318,    16,    17,    36,    44,    16,    17,   325,   326,
      16,    17,    54,    19,   331,    21,    22,    23,    54,    54,
     337,    54,   339,   340,   341,   342,    16,    17,   345,   346,
     347,    16,    17,    52,    54,   352,    75,    54,    77,    54,
      54,   358,    52,   360,   361,   362,   363,    86,    54,   366,
     367,    36,    54,    59,    93,    61,    62,    63,    64,    65,
     377,   378,    52,    36,    16,    17,   383,    19,    36,    21,
      22,    23,   389,    54,   391,   392,   393,   394,    54,    55,
     397,   398,   399,    16,    17,    54,    19,   404,    21,    22,
      23,    16,    17,   410,     7,   412,   413,   414,   415,    54,
     139,   418,    54,    36,     7,   422,    54,    59,    36,    61,
      62,    63,    36,   152,   431,    36,   155,     7,   435,    54,
      53,    54,    16,    17,   441,    58,    59,    52,    61,    62,
      63,    64,    65,   372,   451,    54,    16,    17,   455,    16,
      17,   180,    16,    17,   461,    19,    54,    21,    22,    23,
      16,    17,    54,   192,   193,     7,    36,    16,    17,    36,
      54,   200,    36,    54,    55,   482,    16,    17,    54,   486,
       4,     5,    54,     7,    54,   492,    10,    54,    16,    17,
      54,    54,    55,   222,   223,   502,    52,    61,    62,   506,
      54,   230,    54,    52,    54,   512,    54,    16,    17,    33,
      34,    35,    52,    37,    38,    39,    40,    16,    17,     6,
       4,     5,    24,     7,    52,    -1,    10,    36,    52,    53,
      -1,    44,    -1,   540,    -1,    59,    60,    36,    16,    17,
     269,   270,    -1,    16,    17,    29,    -1,    31,   277,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    36,    16,
      17,     0,    75,    36,    77,     0,    -1,     6,    52,    53,
     299,   300,    56,    86,    -1,    59,    60,    16,   307,    36,
      93,    54,    16,    17,    -1,    24,    16,    17,    -1,   318,
      25,    26,    27,    28,    16,    17,   325,   326,    16,    17,
     113,    19,   331,    21,    22,    23,    36,    -1,   337,    -1,
     339,   340,   341,   342,    36,    -1,   345,   346,   347,    -1,
      54,    54,    55,   352,    54,    -1,   139,    54,    55,   358,
      -1,   360,   361,   362,   363,    53,    54,   366,   367,   152,
      58,    59,   155,    61,    62,    63,    64,    65,   377,   378,
      54,    55,    16,    17,   383,    -1,    16,    17,    -1,    -1,
     389,    -1,   391,   392,   393,   394,    -1,   180,   397,   398,
     399,    -1,    36,    -1,    -1,   404,    36,    16,    17,   192,
      -1,   410,    -1,   412,   413,   414,   415,   200,    -1,   418,
      54,    16,    17,   422,    54,     4,     5,    36,     7,    16,
      17,    10,   431,    16,    17,    -1,   435,    -1,    -1,   222,
      -1,    36,   441,   195,    -1,    54,    -1,   230,    -1,    36,
      16,    17,   451,    36,    -1,    -1,   455,    -1,    37,    38,
      39,    40,   461,     0,    16,    17,     4,     5,    -1,     7,
      36,    54,    10,   225,    53,    -1,     4,     5,    -1,     7,
      59,    60,    10,   482,    36,    -1,   269,   486,    25,    26,
      27,    28,    -1,   492,   277,    33,    34,    35,    -1,    37,
      38,    39,    40,   502,    -1,    -1,    -1,   506,    -1,    37,
      38,    39,    40,   512,    52,    53,   299,    -1,    -1,     0,
     272,    59,    60,    -1,   307,    53,    25,    26,    27,    28,
      -1,    59,    60,    -1,    -1,   318,    -1,    -1,    -1,    44,
       0,   540,   325,   326,    25,    26,    27,    28,   331,    -1,
     302,    -1,    -1,    -1,   337,    -1,   339,   340,   341,   342,
      -1,    -1,   345,   346,   347,    25,    26,    27,    28,   352,
      75,     0,    77,    -1,    -1,   358,     0,   360,   361,   362,
     363,    86,    -1,   366,   367,    -1,    -1,    -1,    93,    -1,
      -1,   343,     0,    -1,   377,   378,    25,    26,    27,    28,
     383,    25,    26,    27,    28,   110,   389,    -1,   391,   392,
     393,   394,   364,    -1,   397,   398,   399,    25,    26,    27,
      28,   404,    -1,    -1,    -1,    -1,    -1,   410,    -1,   412,
     413,   414,   415,    -1,   139,   418,    -1,    -1,    -1,   422,
      -1,    -1,    -1,   395,    -1,    -1,    -1,   152,   431,    -1,
     155,    -1,   435,    -1,    -1,    -1,     4,     5,   441,     7,
      -1,    -1,    10,    -1,   416,    -1,    -1,    -1,   451,    -1,
      -1,    -1,   455,    -1,    -1,   180,    -1,    -1,   461,    -1,
      -1,    -1,   434,    -1,    -1,    -1,    -1,   192,   440,    37,
      38,    39,    40,    -1,    -1,   200,    -1,    -1,    -1,   482,
      -1,    -1,   454,   486,    -1,    53,    -1,    -1,   460,   492,
      -1,    59,     4,     5,    -1,     7,    -1,   222,    10,   502,
      -1,    -1,    -1,   506,    -1,   230,    -1,    -1,    -1,   512,
      -1,    16,    17,   485,    19,    -1,    21,    22,    23,   491,
      -1,    33,    34,    35,    -1,    37,    38,    39,    40,    -1,
      -1,    36,    -1,   505,    -1,    44,    -1,   540,    -1,   511,
      52,    53,    -1,    -1,   269,    -1,    -1,    59,    60,    54,
      -1,   523,   277,   525,    59,    64,    61,    62,    63,    64,
      65,    -1,   534,    -1,   536,    -1,    75,    -1,    77,     4,
       5,     0,     7,    -1,   299,    10,   548,    86,   550,    -1,
      -1,    -1,   307,    -1,    93,    -1,    -1,   559,    -1,   561,
      -1,   100,    -1,   318,    -1,    -1,    25,    26,    27,    28,
     325,   326,    37,    38,    39,    40,   331,   116,    -1,    -1,
      -1,    -1,   337,    -1,   339,   340,   341,    -1,    53,    -1,
     345,   346,   347,    -1,    59,    60,    -1,   352,    -1,    -1,
     139,    -1,    -1,   358,   143,   360,   361,   362,    -1,    -1,
     149,   366,   367,   152,    -1,    -1,   155,    -1,    -1,    -1,
      -1,    -1,   377,   378,    -1,    -1,    -1,    -1,   383,    -1,
      -1,    -1,    -1,    -1,   389,    -1,   391,   392,   393,    -1,
      -1,   180,   397,   398,   399,    -1,    -1,    -1,    -1,   404,
      -1,    -1,    -1,   192,    -1,   410,    -1,   412,   413,   414,
      -1,   200,    -1,   418,    -1,    -1,    -1,   422,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,   431,    -1,    -1,    -1,
     435,    -1,    -1,   222,    -1,    -1,   441,    -1,    -1,    -1,
      -1,   230,    -1,    29,    -1,    31,   451,    33,    34,    35,
     455,    37,    38,    39,    40,    41,   461,    -1,    -1,     4,
       5,    -1,     7,    -1,    -1,    10,    52,    53,    -1,    -1,
      56,    44,    -1,    59,    60,    -1,    -1,   482,    -1,    -1,
     269,   486,    -1,    -1,    -1,    -1,    -1,   492,   277,    -1,
      -1,    -1,    37,    38,    39,    40,    -1,   502,    -1,    -1,
      -1,   506,    75,    -1,    77,    -1,    -1,   512,    53,    -1,
     299,    -1,    -1,    86,    59,    60,    16,    17,   307,    19,
      93,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,   318,
      -1,    -1,    -1,    -1,   107,   540,   325,   326,    16,    17,
      -1,    19,   331,    21,    22,    23,    -1,    -1,   337,    -1,
     339,    -1,    -1,    -1,    54,    55,   345,   346,   347,    -1,
      -1,    61,    62,   352,    -1,    -1,   139,    -1,    -1,   358,
      -1,   360,    -1,    -1,    52,    53,    -1,   366,   367,   152,
      58,    59,   155,    61,    62,    63,    64,    65,   377,   378,
      -1,    -1,    -1,    -1,   383,    -1,    -1,    -1,    16,    17,
     389,    19,   391,    21,    22,    23,    -1,   180,   397,   398,
     399,    -1,    -1,    -1,    -1,   404,    -1,    -1,    36,   192,
      -1,   410,    -1,   412,    -1,    -1,    -1,   200,    -1,   418,
      -1,    -1,    -1,   422,     4,     5,    54,     7,    -1,    -1,
      10,    59,   431,    61,    62,    63,   435,    -1,    -1,   222,
      -1,    -1,   441,    -1,    -1,    -1,    -1,   230,    -1,    29,
      -1,    31,   451,    33,    34,    35,   455,    37,    38,    39,
      40,    41,   461,    -1,    -1,     4,     5,    -1,     7,    -1,
      -1,    10,    52,    53,    -1,    -1,    56,    44,    -1,    59,
      60,    -1,    -1,   482,    -1,    -1,   269,   486,    -1,    -1,
      -1,    -1,    -1,   492,   277,    -1,    -1,    64,    37,    38,
      39,    40,    -1,   502,    -1,    -1,    -1,   506,    75,    -1,
      77,    -1,    -1,   512,    53,    -1,   299,    -1,    -1,    86,
      59,    60,    16,    17,   307,    19,    93,    21,    22,    23,
      -1,    -1,    -1,   100,    -1,   318,    -1,    -1,    -1,    -1,
      -1,   540,   325,   326,    -1,    -1,    -1,    -1,   331,   116,
      -1,    -1,    -1,    -1,   337,    -1,   339,   340,    -1,    -1,
      54,    55,   345,   346,   347,    -1,    -1,    61,    62,   352,
      -1,    -1,   139,    -1,    -1,   358,   143,   360,   361,    -1,
      -1,    -1,   149,   366,   367,   152,    -1,    -1,   155,    -1,
      -1,    -1,    -1,    -1,   377,   378,    -1,    -1,    -1,    -1,
     383,    -1,    -1,    -1,    -1,    -1,   389,    -1,   391,   392,
      -1,    -1,    -1,   180,   397,   398,   399,    -1,    -1,    -1,
      -1,   404,    -1,    -1,    -1,   192,    -1,   410,    -1,   412,
     413,     4,     5,   200,     7,   418,    -1,    10,    -1,   422,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,   431,    -1,
      -1,    -1,   435,    -1,    -1,   222,    -1,    -1,   441,    -1,
      33,    34,    35,   230,    37,    38,    39,    40,   451,    33,
      34,    35,   455,    37,    38,    39,    40,    -1,   461,    52,
      53,    -1,    -1,    -1,    -1,    -1,    59,    60,    52,    53,
      -1,    -1,    -1,    44,    -1,    59,    60,    -1,    -1,   482,
      -1,    -1,   269,   486,    -1,    -1,    -1,    -1,    -1,   492,
     277,     4,     5,    -1,     7,    -1,    -1,    10,    -1,   502,
      -1,    -1,    -1,   506,    75,    -1,    77,    -1,    -1,   512,
      -1,    -1,   299,    -1,    -1,    86,    -1,    -1,    -1,    -1,
     307,    -1,    93,    -1,    37,    38,    39,    40,    -1,    16,
      17,   318,    19,    -1,    21,    22,    23,   540,   325,   326,
      53,    -1,    -1,    -1,   331,    -1,    59,    -1,    -1,    36,
     337,    -1,   339,    -1,    -1,    -1,    -1,    -1,   345,   346,
     347,    -1,    -1,    -1,    -1,   352,    53,    54,   139,    -1,
      -1,   358,    59,   360,    61,    62,    63,    64,    65,   366,
     367,   152,    -1,    -1,   155,    -1,    -1,    -1,    -1,    -1,
     377,   378,    -1,    -1,    -1,    -1,   383,    -1,    -1,    -1,
      16,    17,   389,    19,   391,    21,    22,    23,    -1,   180,
     397,   398,   399,    -1,    -1,    -1,    -1,   404,    -1,    -1,
      36,   192,    -1,   410,    -1,   412,    -1,     4,     5,   200,
       7,   418,    -1,    10,    -1,   422,     4,     5,    54,     7,
      -1,    -1,    10,    59,   431,    61,    62,    63,   435,    -1,
      -1,   222,    -1,    -1,   441,    -1,    33,    34,    35,   230,
      37,    38,    39,    40,   451,    33,    34,    35,   455,    37,
      38,    39,    40,    -1,   461,    -1,    53,    -1,     4,     5,
      -1,     7,    59,    60,    10,    53,    -1,    -1,    -1,    44,
      -1,    59,    60,    -1,    -1,   482,    -1,    -1,   269,   486,
      -1,    -1,    -1,    -1,    -1,   492,   277,    33,    34,    35,
      -1,    37,    38,    39,    40,   502,    -1,    -1,    -1,   506,
      75,    -1,    77,     4,     5,   512,     7,    53,   299,    10,
      -1,    86,    -1,    59,    60,    -1,   307,    -1,    93,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,   318,    19,    -1,
      21,    22,    23,   540,   325,   326,    37,    38,    39,    40,
     331,    -1,    -1,    -1,    -1,    36,   337,    -1,   339,    -1,
      -1,    -1,    53,    -1,   345,   346,   347,    -1,    59,    -1,
      -1,   352,    -1,    54,   139,    -1,    -1,   358,    59,   360,
      61,    62,    63,    64,    65,   366,   367,   152,    -1,    -1,
     155,    -1,    -1,    -1,    -1,    -1,   377,   378,    -1,    -1,
      -1,    -1,   383,    -1,    -1,    -1,    16,    17,   389,    19,
     391,    21,    22,    23,    -1,   180,   397,   398,   399,    -1,
      -1,    -1,    -1,   404,    -1,    -1,    36,   192,    -1,   410,
      -1,   412,    -1,     4,     5,   200,     7,   418,    -1,    10,
      -1,   422,     4,     5,    -1,     7,    -1,    -1,    10,    59,
     431,    61,    62,    63,   435,    -1,    -1,   222,    -1,    -1,
     441,    -1,    33,    34,    35,   230,    37,    38,    39,    40,
     451,    33,    34,    35,   455,    37,    38,    39,    40,    -1,
     461,    -1,    53,    -1,     4,     5,    -1,     7,    59,    60,
      10,    53,    -1,    -1,    -1,    44,    -1,    59,    60,    -1,
      -1,   482,    -1,    -1,   269,   486,    -1,    -1,    -1,    -1,
      -1,   492,   277,    -1,    -1,    -1,    -1,    37,    38,    39,
      40,   502,    -1,    -1,    -1,   506,    75,    -1,    77,     4,
       5,   512,     7,    53,   299,    10,    -1,    86,    -1,    59,
      16,    17,   307,    19,    93,    21,    22,    23,    -1,    -1,
      -1,    16,    17,   318,    19,    -1,    21,    22,    23,   540,
     325,   326,    37,    38,    39,    40,   331,    -1,    -1,    -1,
      -1,    36,   337,    -1,   339,    -1,    52,    -1,    53,    -1,
     345,   346,   347,    -1,    59,    61,    62,   352,    -1,    54,
     139,    -1,    -1,   358,    59,   360,    61,    62,    63,    64,
      65,   366,   367,   152,    -1,    -1,   155,    -1,    -1,    -1,
      -1,    -1,   377,   378,    -1,    -1,    16,    17,   383,    19,
      -1,    21,    22,    23,   389,    -1,   391,    -1,    -1,    -1,
      -1,   180,   397,   398,   399,    -1,    36,    -1,    -1,   404,
      -1,    -1,    -1,   192,    -1,   410,    -1,   412,    -1,     4,
       5,   200,     7,   418,    54,    10,    -1,   422,    -1,    59,
      -1,    61,    62,    63,    64,    65,   431,    -1,    -1,    -1,
     435,    -1,    -1,   222,    -1,    -1,   441,    -1,    -1,    -1,
      -1,   230,    37,    38,    39,    40,   451,    -1,    16,    17,
     455,    19,    -1,    21,    22,    23,   461,    -1,    53,    -1,
      16,    17,    -1,    19,    59,    21,    22,    23,    -1,    16,
      17,    44,    19,    -1,    21,    22,    23,   482,    -1,    -1,
     269,   486,    -1,    -1,    52,    -1,    -1,   492,   277,    36,
      -1,    59,    -1,    61,    62,    63,    -1,   502,    54,    55,
      -1,   506,    75,    -1,    77,    61,    62,   512,    -1,    -1,
     299,    -1,    59,    86,    61,    62,    63,    -1,   307,    -1,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,   318,
      19,    -1,    21,    22,    23,   540,   325,   326,    16,    17,
      -1,    19,   331,    21,    22,    23,    -1,    36,   337,    -1,
     339,    -1,    -1,    -1,    -1,    -1,   345,   346,   347,    -1,
      -1,    -1,    -1,   352,    -1,    54,   139,    -1,    -1,   358,
      -1,   360,    61,    62,    52,    53,    -1,   366,   367,   152,
      -1,    59,   155,    61,    62,    63,    64,    65,   377,   378,
      -1,    -1,    -1,    -1,   383,    -1,    -1,    -1,    16,    17,
     389,    19,   391,    21,    22,    23,    -1,   180,   397,   398,
     399,    -1,    -1,    -1,    -1,   404,    -1,    -1,    36,   192,
      -1,   410,    -1,   412,    -1,    -1,    -1,   200,    -1,   418,
      -1,    16,    17,   422,    19,    -1,    21,    22,    23,    -1,
      -1,    -1,   431,    61,    62,    -1,   435,    -1,    -1,   222,
      -1,    -1,   441,    16,    17,    -1,    19,   230,    21,    22,
      23,    -1,   451,    -1,    -1,    -1,   455,    -1,    53,    54,
      55,    -1,   461,    58,    59,    -1,    61,    62,    63,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    54,    55,   482,    -1,    -1,   269,   486,    61,    62,
      -1,    -1,    -1,   492,   277,    -1,    -1,    -1,    -1,    16,
      17,    -1,    19,   502,    21,    22,    23,   506,    75,    -1,
      77,    -1,    -1,   512,    -1,    -1,   299,    -1,    -1,    86,
      -1,    -1,    16,    17,   307,    19,    93,    21,    22,    23,
      -1,    -1,    -1,   100,    -1,   318,    -1,    54,    55,    -1,
      -1,   540,   325,   326,    61,    62,    -1,    -1,   331,   116,
      -1,    -1,    16,    17,   337,    19,   339,    21,    22,    23,
      54,    55,   345,   346,   347,    -1,    -1,    61,    62,   352,
      -1,    -1,   139,    16,    17,   358,    19,   360,    21,    22,
      23,    -1,    -1,   366,   367,   152,    -1,    -1,   155,    44,
      54,    -1,    -1,    36,   377,   378,    -1,    61,    62,    -1,
     383,    -1,    -1,    -1,    -1,    -1,   389,    -1,   391,    -1,
      -1,    54,    -1,   180,   397,   398,   399,    -1,    61,    62,
      75,   404,    77,    -1,    -1,   192,    -1,   410,    -1,   412,
      -1,    86,    -1,    -1,    -1,   418,    -1,    -1,    93,   422,
      16,    17,    -1,    19,    -1,    21,    22,    23,   431,    -1,
      -1,    -1,   435,    -1,    -1,   222,    -1,    -1,   441,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   451,    -1,
      -1,    -1,   455,    -1,    -1,    -1,    -1,    53,   461,    -1,
      -1,    -1,    58,    59,   139,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,   482,
     155,    -1,   269,   486,    -1,    -1,    -1,    16,    17,   492,
      19,    -1,    21,    22,    23,    16,    17,    -1,    19,   502,
      21,    22,    23,   506,    -1,   180,    -1,    -1,    -1,   512,
      -1,    -1,   299,    -1,    -1,    36,    -1,   192,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    -1,    -1,    -1,
      59,   318,    61,    62,    63,    64,    65,   540,   325,   326,
      61,    62,    -1,    -1,   331,    -1,    -1,   222,    -1,    -1,
     337,    -1,   339,    -1,    -1,    -1,    -1,    -1,   345,   346,
     347,    16,    17,    -1,    19,   352,    21,    22,    23,    16,
      17,   358,    19,   360,    21,    22,    23,    -1,    -1,   366,
     367,    36,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,
     377,   378,    -1,    -1,   269,    -1,   383,    -1,    -1,    54,
      -1,    -1,   389,    -1,   391,    52,    61,    62,    -1,    -1,
     397,   398,   399,    -1,    61,    62,    75,   404,    77,    -1,
      -1,    -1,    -1,   410,   299,   412,    -1,    86,    -1,    -1,
      -1,   418,    -1,    -1,    93,   422,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   318,   431,    -1,    -1,    -1,    -1,    -1,
     325,   326,    -1,    -1,    -1,    -1,   331,    -1,    -1,    -1,
      -1,    -1,   337,    -1,   451,    -1,    -1,    44,    -1,    -1,
      -1,   346,   347,    -1,    -1,    -1,    -1,   352,    -1,    -1,
     139,    -1,    -1,   358,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   367,   152,    -1,   482,   155,    -1,    75,    -1,
      77,    -1,   377,   378,    -1,    -1,    -1,    -1,   383,    86,
      -1,    -1,    -1,    -1,   389,   502,    93,    -1,    -1,    -1,
      -1,   180,    -1,   398,   399,    16,    17,    -1,    19,   404,
      21,    22,    23,   192,    -1,   410,    -1,    -1,    -1,    16,
      17,    -1,    19,    -1,    21,    22,    23,   422,    -1,    -1,
      -1,    -1,    -1,   540,    -1,    -1,   431,    -1,    -1,    36,
      -1,    52,   139,   222,    -1,    -1,    -1,    -1,    59,    -1,
      61,    62,    63,    64,    65,   152,   451,    54,   155,    -1,
      -1,    -1,    59,    -1,    61,    62,    63,    64,    65,    44,
      16,    17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,   180,    -1,    -1,    -1,   482,    -1,    -1,
     269,    16,    17,    -1,    19,   192,    21,    22,    23,    -1,
      75,    -1,    77,    -1,    -1,    -1,    -1,   502,    54,    55,
      -1,    86,    -1,    59,    -1,    61,    62,    63,    93,    -1,
     299,    -1,    -1,    -1,    -1,   222,    -1,    -1,    -1,    54,
      55,    -1,    -1,    -1,    59,    -1,    61,    62,    63,   318,
      -1,    -1,    -1,    -1,    -1,   540,   325,   326,    16,    17,
      -1,    19,   331,    21,    22,    23,    -1,    -1,   337,    -1,
      -1,    -1,    -1,    -1,   139,    -1,    -1,   346,   347,    -1,
      -1,    -1,   269,   352,    -1,    -1,    -1,   152,    -1,   358,
     155,    -1,    -1,    -1,    -1,    -1,    54,    55,   367,    -1,
      -1,    59,    -1,    61,    62,    63,    64,    65,   377,   378,
      -1,    -1,   299,    -1,   383,   180,    -1,    -1,    16,    17,
     389,    19,    -1,    21,    22,    23,    -1,   192,    -1,   398,
     399,   318,    -1,    -1,    -1,   404,    -1,    -1,   325,   326,
      -1,   410,    16,    17,   331,    19,    -1,    21,    22,    23,
     337,    -1,    -1,   422,    52,    -1,    -1,   222,    -1,   346,
     347,    -1,   431,    61,    62,   352,    -1,    -1,    -1,    -1,
      -1,   358,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
     367,    -1,   451,    -1,    -1,    -1,    -1,    61,    62,    -1,
     377,   378,    -1,    -1,    16,    17,   383,    19,    -1,    21,
      22,    23,   389,    -1,   269,    -1,    -1,    -1,    -1,    -1,
      -1,   398,   399,   482,    36,    -1,    -1,   404,    -1,    -1,
      -1,    -1,    -1,   410,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,   502,   299,   422,    -1,    59,    -1,    61,
      62,    63,    64,    65,   431,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   318,    -1,    -1,    -1,    -1,    -1,    -1,
     325,   326,    16,    17,   451,    19,   331,    21,    22,    23,
      -1,   540,   337,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   346,   347,    16,    17,    -1,    19,   352,    21,    22,
      23,    16,    17,   358,    19,   482,    21,    22,    23,    -1,
      54,    55,   367,    36,    -1,    59,    -1,    61,    62,    63,
      64,    65,   377,   378,    -1,   502,    -1,    -1,   383,    -1,
      -1,    54,    -1,    -1,   389,    -1,    59,    52,    61,    62,
      63,    64,    65,   398,   399,    -1,    61,    62,    -1,   404,
      -1,    -1,    -1,    -1,    -1,   410,     4,     5,    -1,     7,
      -1,    -1,    10,   540,    -1,    -1,    -1,   422,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   431,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,    -1,   451,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,    57,
      -1,    59,    60,    -1,    -1,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,   482,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,   502,    37,    38,
      39,    40,    41,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    -1,    -1,    52,    53,    -1,    -1,    56,    57,    -1,
      59,    60,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,   540,    37,    38,    39,    40,
      41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,
      -1,    52,    53,    -1,    -1,    56,    57,    -1,    59,    60,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    52,
      53,    -1,    -1,    56,    57,    -1,    59,    60,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    -1,    -1,    52,    53,    -1,
      -1,    56,    57,    -1,    59,    60,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,
      57,    -1,    59,    60,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    -1,    -1,    52,    53,    -1,    -1,    56,    57,    -1,
      59,    60,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,
      -1,    52,    53,    -1,    -1,    56,    57,    -1,    59,    60,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    52,
      53,    -1,    -1,    56,    57,    -1,    59,    60,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    -1,    -1,    52,    53,    -1,
      -1,    56,    57,    -1,    59,    60,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,
      57,    -1,    59,    60,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    -1,    -1,    52,    53,    -1,    -1,    56,    57,    -1,
      59,    60,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,
      -1,    52,    53,    -1,    -1,    56,    57,    -1,    59,    60,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    52,
      53,    -1,    -1,    56,    57,    -1,    59,    60,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    -1,    -1,    52,    53,    -1,
      -1,    56,    57,    -1,    59,    60,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,
      57,    -1,    59,    60,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    -1,    -1,    52,    53,    -1,    -1,    56,    57,    -1,
      59,    60,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,
      -1,    52,    53,    -1,    -1,    56,    57,    -1,    59,    60,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    52,
      53,    -1,    -1,    56,    57,    -1,    59,    60,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    -1,    -1,    52,    53,    -1,
      -1,    56,    57,    -1,    59,    60,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,
      57,    -1,    59,    60,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    -1,    -1,    52,    53,    -1,    -1,    56,    57,    -1,
      59,    60,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,
      -1,    52,    53,    -1,    -1,    56,    57,    -1,    59,    60,
      -1,    -1,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    52,
      53,    -1,    -1,    56,    57,    -1,    59,    60,    -1,    -1,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    -1,    -1,    52,    53,    -1,
      -1,    56,    57,    -1,    59,    60,    -1,    -1,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,
      57,    -1,    59,    60,    -1,    -1,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    -1,    -1,    52,    53,    -1,    -1,    56,    57,    -1,
      59,    60,    -1,    -1,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,
      -1,    52,    53,    -1,    -1,    56,    57,    -1,    59,    60,
      -1,    -1,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    52,
      53,    -1,    -1,    56,    57,    -1,    59,    60,    -1,    -1,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    -1,    -1,    52,    53,    -1,
      -1,    56,    57,    -1,    59,    60,    -1,    -1,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,
      57,    -1,    59,    60,    -1,    -1,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    -1,    -1,    52,    53,    -1,    -1,    56,    57,    -1,
      59,    60,    -1,    -1,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,
      -1,    52,    53,    -1,    -1,    56,    57,    -1,    59,    60,
      -1,    -1,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    52,
      53,    -1,    -1,    56,    57,    -1,    59,    60,    -1,    -1,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    -1,    -1,    52,    53,    -1,
      -1,    56,    57,    -1,    59,    60,    -1,    -1,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,
      57,    -1,    59,    60,    -1,    -1,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    -1,    -1,    52,    53,    -1,    -1,    56,    57,    -1,
      59,    60,    -1,    -1,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,
      -1,    52,    53,    -1,    -1,    56,    57,    -1,    59,    60,
      -1,    -1,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    52,
      53,    -1,    -1,    56,    57,    -1,    59,    60,    -1,    -1,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    -1,    -1,    52,    53,    -1,
      -1,    56,    57,    -1,    59,    60,    -1,    -1,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,
      57,    -1,    59,    60,    -1,    -1,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    -1,    -1,    52,    53,    -1,    -1,    56,    57,    -1,
      59,    60,    -1,    -1,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,
      -1,    52,    53,    -1,    -1,    56,    57,    -1,    59,    60,
      -1,    -1,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    52,
      53,    -1,    -1,    56,    57,    -1,    59,    60,    -1,    -1,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    -1,    -1,    52,    53,    -1,
      -1,    56,    57,    -1,    59,    60,    -1,    -1,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,
      57,    -1,    59,    60,    -1,    -1,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    -1,    -1,    52,    53,    -1,    -1,    56,    57,    -1,
      59,    60,    -1,    -1,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,
      -1,    52,    53,    -1,    -1,    56,    57,    -1,    59,    60,
      -1,    -1,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    52,
      53,    -1,    -1,    56,    57,    -1,    59,    60,    -1,    -1,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    -1,    -1,    52,    53,    -1,
      -1,    56,    -1,    -1,    59,    60,    -1,    -1,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,
      -1,    -1,    59,    60,    -1,    -1,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    16,    17,    -1,    19,    -1,    21,    22,
      23,    -1,    -1,    52,    53,    -1,    -1,    56,    -1,    -1,
      59,    60,    16,    17,    -1,    19,    -1,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    -1,    -1,    -1,    59,    -1,    61,    62,
      63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    -1,    -1,    -1,    59,    -1,    61,    62,    63,
      64,    65,    16,    17,    -1,    19,    -1,    21,    22,    23,
      -1,    -1,    -1,    -1,    16,    17,    -1,    19,    -1,    21,
      22,    23,    -1,    -1,    -1,    -1,    16,    17,    -1,    19,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    -1,    -1,    -1,    59,    -1,    61,    62,    63,
      64,    65,    54,    55,    -1,    -1,    -1,    59,    -1,    61,
      62,    63,    64,    65,    54,    55,    -1,    -1,    -1,    59,
      -1,    61,    62,    63,    64,    65,    16,    17,    -1,    19,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    16,    17,
      -1,    19,    -1,    21,    22,    23,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    17,    -1,    19,    54,    21,    22,    23,    -1,    59,
      -1,    61,    62,    63,    64,    65,    54,    55,    -1,    -1,
      36,    59,    -1,    61,    62,    63,    64,    65,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,    65,
      16,    17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,
      36,    59,    -1,    61,    62,    63,    64,    65,    -1,    -1,
      16,    17,    -1,    19,    -1,    21,    22,    23,    54,    -1,
      -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,    65,
      36,    16,    17,    -1,    19,    -1,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    36,    -1,    59,    -1,    61,    62,    63,    64,    65,
      16,    17,    -1,    19,    -1,    21,    22,    23,    -1,    54,
      -1,    -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,
      65,    16,    17,    -1,    19,    -1,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,    65,
      16,    17,    -1,    19,    -1,    21,    22,    23,    -1,    54,
      55,    -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,
      65,    16,    17,    -1,    19,    -1,    21,    22,    23,    16,
      17,    -1,    19,    -1,    21,    22,    23,    -1,    54,    55,
      -1,    36,    -1,    59,    -1,    61,    62,    63,    64,    65,
      16,    17,    -1,    19,    -1,    21,    22,    23,    -1,    54,
      -1,    -1,    -1,    -1,    59,    52,    61,    62,    63,    64,
      65,    -1,    59,    -1,    61,    62,    63,    64,    65,    16,
      17,    -1,    19,    -1,    21,    22,    23,    -1,    54,    55,
      -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,    65,
      16,    17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    16,    17,    -1,    19,    52,    21,    22,    23,
      -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,    65,
      16,    17,    -1,    19,    -1,    21,    22,    23,    16,    17,
      -1,    19,    -1,    21,    22,    23,    16,    17,    52,    19,
      -1,    21,    22,    23,    -1,    59,    -1,    61,    62,    63,
      64,    65,    16,    17,    -1,    19,    52,    21,    22,    23,
      -1,    -1,    -1,    59,    52,    61,    62,    63,    64,    65,
      -1,    59,    52,    61,    62,    63,    64,    65,    -1,    59,
      -1,    61,    62,    63,    64,    65,    16,    17,    52,    19,
      -1,    21,    22,    23,    -1,    59,    -1,    61,    62,    63,
      64,    65,    16,    17,    -1,    19,    -1,    21,    22,    23,
      16,    17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,
      16,    17,    52,    19,    -1,    21,    22,    23,    -1,    59,
      -1,    61,    62,    63,    64,    65,    -1,    -1,    52,    -1,
      36,    -1,    -1,    -1,    -1,    59,    52,    61,    62,    63,
      64,    65,    -1,    59,    -1,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,    65,
      16,    17,    -1,    19,    -1,    21,    22,    23,    16,    17,
      -1,    19,    -1,    21,    22,    23,    16,    17,    -1,    19,
      36,    21,    22,    23,    16,    17,    -1,    19,    36,    21,
      22,    23,    16,    17,    -1,    19,    36,    21,    22,    23,
      -1,    -1,    -1,    59,    36,    61,    62,    63,    64,    65,
      -1,    59,    36,    61,    62,    63,    64,    65,    -1,    59,
      -1,    61,    62,    63,    64,    65,    -1,    59,    -1,    61,
      62,    63,    64,    65,    -1,    59,    -1,    61,    62,    63,
      64,    65,    16,    17,    -1,    19,    -1,    21,    22,    23,
      -1,    -1,    -1,    -1,    16,    17,    -1,    19,    -1,    21,
      22,    23,    36,    -1,    -1,    -1,    16,    17,    -1,    19,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    61,    62,    63,
      64,    65,    54,    -1,    -1,    -1,    -1,    59,    -1,    61,
      62,    63,    64,    65,    54,    -1,    -1,    -1,    -1,    59,
      -1,    61,    62,    63,    64,    65,    16,    17,    -1,    19,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      16,    17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      -1,    61,    62,    63,    64,    65,    54,    -1,    -1,    -1,
      -1,    59,    -1,    61,    62,    63,    64,    65,    54,    -1,
      -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,    65,
      16,    17,    -1,    19,    -1,    21,    22,    23,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      16,    17,    -1,    19,    -1,    21,    22,    23,    36,    -1,
      16,    17,    -1,    19,    -1,    21,    22,    23,    54,    -1,
      -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,    65,
      36,    59,    -1,    61,    62,    63,    64,    65,    54,    -1,
      -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,    65,
      16,    17,    -1,    19,    -1,    21,    22,    23,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    16,    17,    -1,    19,    36,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    61,    62,    63,    64,    65,
      -1,    59,    -1,    61,    62,    63,    64,    65,    16,    17,
      -1,    19,    54,    21,    22,    23,    -1,    59,    -1,    61,
      62,    63,    64,    65,    16,    17,    -1,    19,    -1,    21,
      22,    23,    16,    17,    -1,    19,    -1,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    59,    36,    61,    62,    63,    64,    65,    16,    17,
      -1,    19,    54,    21,    22,    23,    -1,    59,    -1,    61,
      62,    63,    64,    65,    -1,    59,    -1,    61,    62,    63,
      64,    65,    16,    17,    -1,    19,    -1,    21,    22,    23,
      -1,    -1,    16,    17,    -1,    19,    54,    21,    22,    23,
      -1,    59,    -1,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    16,    17,    -1,    19,
      54,    21,    22,    23,    -1,    59,    -1,    61,    62,    63,
      54,    -1,    -1,    -1,    -1,    -1,    36,    61,    62,    16,
      17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,
      16,    17,    -1,    19,    54,    21,    22,    23,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    16,    17,    -1,    19,
      36,    21,    22,    23,    -1,    52,    16,    17,    -1,    19,
      -1,    21,    22,    23,    61,    62,    36,    16,    17,    -1,
      19,    -1,    21,    22,    23,    61,    62,    16,    17,    -1,
      19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    54,    -1,    -1,    36,    -1,    -1,
      -1,    61,    62,    16,    17,    54,    19,    -1,    21,    22,
      23,    -1,    61,    62,    16,    17,    -1,    19,    -1,    21,
      22,    23,    61,    62,    16,    17,    -1,    19,    -1,    21,
      22,    23,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    25,    26,    27,    28,    67,    68,    69,    70,    71,
      72,    73,     0,    69,    52,     7,    53,    71,    73,    74,
      75,    76,     7,    54,    55,    56,    77,    76,     4,     5,
       7,    10,    29,    31,    32,    33,    34,    35,    37,    38,
      39,    40,    41,    52,    53,    59,    60,    70,    77,    78,
      79,    80,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   109,    53,    58,    53,   100,    53,
      52,    87,    53,    53,    53,    53,    53,   100,   100,    53,
     100,    87,     7,    53,    93,    57,    80,    52,    16,    17,
      95,    19,    21,    22,    23,    61,    62,    96,    59,    63,
      97,    64,    65,    98,    89,    99,    95,    87,   110,   111,
      87,    87,    80,    85,    52,     7,     8,     9,   108,   108,
       7,    87,     7,    77,    81,    82,    83,    84,    85,    36,
      54,    87,    89,    94,    99,    90,    91,    92,    89,    94,
      99,    54,    55,    54,    30,    85,    54,    54,    54,    54,
      36,    87,    89,    99,    89,    99,    87,    80,    80,    87,
       7,    54,    30,    54,    54,    80,    80,    56,    71,    73,
      53,     4,     5,     7,    10,    33,    34,    35,    37,    38,
      39,    40,    53,    59,    88,    89,    90,    91,    92,    93,
      94,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     109,     4,     5,     7,    10,    33,    34,    35,    37,    38,
      39,    40,    53,    59,    88,    89,    90,    91,    92,    93,
      94,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     109,    29,    31,    32,    41,    52,    56,    70,    71,    77,
      82,    83,    84,    85,    86,    87,    52,    87,     4,     5,
       7,    10,    33,    34,    35,    37,    38,    39,    40,    53,
      59,    88,    89,    90,    91,    92,    93,    94,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   109,     4,     5,
       7,    10,    33,    34,    35,    37,    38,    39,    40,    53,
      59,    88,    89,    90,    91,    92,    93,    94,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   109,    36,    52,
      87,    78,    52,     7,    87,    53,    58,    53,    53,    53,
      53,    53,   100,   100,    53,    87,     7,    53,    93,    95,
      96,    97,    98,    89,    99,    95,    53,    58,    53,    53,
      53,    53,    53,   100,   100,    53,    87,     7,    53,    93,
      95,    96,    97,    98,    89,    99,    95,    53,   100,    53,
      52,    87,   100,    78,    52,    52,    52,    53,    58,    53,
      53,    53,    53,    53,   100,   100,    53,    87,     7,    53,
      93,    95,    96,    97,    98,    89,    99,    95,    53,    58,
      53,    53,    53,    53,    53,   100,   100,    53,    87,     7,
      53,    93,    95,    96,    97,    98,    89,    99,    95,    87,
      52,    57,    36,   110,    87,     7,   108,   108,     7,    87,
       7,    36,    54,    87,    89,    94,    99,    90,    91,    92,
      89,    94,    99,   110,    87,     7,   108,   108,     7,    87,
       7,    36,    54,    87,    89,    94,    99,    90,    91,    92,
      89,    94,    99,    87,    80,    85,    52,    77,    81,    82,
      83,    84,    85,    57,   110,    87,     7,   108,   108,     7,
      87,     7,    36,    54,    87,    89,    94,    99,    90,    91,
      92,    89,    94,    99,   110,    87,     7,   108,   108,     7,
      87,     7,    36,    54,    87,    89,    94,    99,    90,    91,
      92,    89,    94,    99,    54,    87,    54,    54,    54,    54,
      54,    36,    87,    89,    99,    89,    99,    54,    54,    54,
      54,    54,    36,    87,    89,    99,    89,    99,    54,    30,
      85,    54,    54,    54,    54,    54,    36,    87,    89,    99,
      89,    99,    54,    54,    54,    54,    54,    36,    87,    89,
      99,    89,    99,    54,     7,    54,     7,    54,    80,    80,
      87,     7,    54,     7,    54,    54,    54,    30,    54,    54,
      54,    80,    80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    68,    68,    69,    69,    70,    71,    72,
      73,    73,    73,    73,    74,    74,    75,    75,    76,    77,
      78,    78,    79,    79,    80,    80,    80,    80,    80,    80,
      80,    81,    81,    81,    81,    81,    82,    82,    82,    82,
      83,    84,    85,    85,    86,    86,    87,    87,    87,    87,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    89,    89,    90,    90,    91,    91,    92,    92,    93,
      93,    93,    93,    93,    93,    94,    95,    95,    96,    96,
      96,    96,    96,    96,    97,    97,    98,    98,    99,    99,
      99,    99,    99,   100,   101,   102,   103,   104,   105,   105,
     106,   107,   107,   108,   108,   109,   110,   110,   111,   111
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     2,     6,
       1,     1,     1,     1,     1,     0,     3,     1,     1,     3,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     7,     3,     5,
       7,     3,     2,     1,     2,     3,     3,     1,     1,     1,
       2,     2,     3,     3,     3,     3,     4,     4,     4,     4,
       1,     3,     1,     3,     1,     3,     1,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     4,     2,     2,     6,     1,     1,
       4,     4,     4,     1,     1,     4,     1,     0,     3,     1
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
#line 137 "anasin.y"
                          { printf("program\n"); }
#line 3251 "anasin.tab.c"
    break;

  case 3: /* declaration-list: declaration-list declaration  */
#line 139 "anasin.y"
                                               { printf("declaration-list  ->  declaration-list declaration\n"); }
#line 3257 "anasin.tab.c"
    break;

  case 4: /* declaration-list: declaration  */
#line 140 "anasin.y"
                              { printf("declaration-list  ->  declaration\n"); }
#line 3263 "anasin.tab.c"
    break;

  case 5: /* declaration: var-declaration  */
#line 142 "anasin.y"
                             { printf("declaration  ->  var-declaration\n"); }
#line 3269 "anasin.tab.c"
    break;

  case 6: /* declaration: func-declaration  */
#line 143 "anasin.y"
                              { printf("declaration  ->  func-declaration\n"); }
#line 3275 "anasin.tab.c"
    break;

  case 7: /* var-declaration: variable ';'  */
#line 145 "anasin.y"
                              { printf("var declaration  ->  variable ;\n"); }
#line 3281 "anasin.tab.c"
    break;

  case 8: /* variable: type-specifier ID  */
#line 147 "anasin.y"
                            { printf("variable  ->  type-specifier %s\n", (yyvsp[0].token_name)); }
#line 3287 "anasin.tab.c"
    break;

  case 9: /* func-declaration: type-specifier ID '(' parameters ')' compound-stmt  */
#line 149 "anasin.y"
                                                                     { printf("func-declaration  ->  type-specifier %s ( parameters ) compount-stmt\n", (yyvsp[-4].token_name)); }
#line 3293 "anasin.tab.c"
    break;

  case 10: /* type-specifier: TYPEINT  */
#line 151 "anasin.y"
                        { printf("type-specifier  ->  %s\n", (yyvsp[0].token_name)); }
#line 3299 "anasin.tab.c"
    break;

  case 11: /* type-specifier: TYPEFLOAT  */
#line 152 "anasin.y"
                          { printf("type-specifier  ->  %s\n", (yyvsp[0].token_name)); }
#line 3305 "anasin.tab.c"
    break;

  case 12: /* type-specifier: TYPEELEM  */
#line 153 "anasin.y"
                         { printf("type-specifier  ->  %s\n", (yyvsp[0].token_name)); }
#line 3311 "anasin.tab.c"
    break;

  case 13: /* type-specifier: TYPESET  */
#line 154 "anasin.y"
                        { printf("type-specifier  ->  %s\n", (yyvsp[0].token_name)); }
#line 3317 "anasin.tab.c"
    break;

  case 14: /* parameters: parameter-list  */
#line 156 "anasin.y"
                           { printf("parameters  ->  parameter-list\n"); }
#line 3323 "anasin.tab.c"
    break;

  case 15: /* parameters: %empty  */
#line 157 "anasin.y"
                   { printf("parameters  ->\n"); }
#line 3329 "anasin.tab.c"
    break;

  case 16: /* parameter-list: parameter-list ',' parameter  */
#line 159 "anasin.y"
                                             { printf("parameter-list  ->  parameter-list , parameter\n"); }
#line 3335 "anasin.tab.c"
    break;

  case 17: /* parameter-list: parameter  */
#line 160 "anasin.y"
                          { printf("parameter-list  ->  parameter\n"); }
#line 3341 "anasin.tab.c"
    break;

  case 18: /* parameter: variable  */
#line 162 "anasin.y"
                    { printf("parameter  ->  variable\n"); }
#line 3347 "anasin.tab.c"
    break;

  case 19: /* compound-stmt: '{' local-declarations '}'  */
#line 164 "anasin.y"
                                          { printf("compound-stmt  ->  { local-declarations }\n"); }
#line 3353 "anasin.tab.c"
    break;

  case 20: /* local-declarations: statement-list  */
#line 166 "anasin.y"
                                   { printf("local-declarations  ->  statement-list\n"); }
#line 3359 "anasin.tab.c"
    break;

  case 21: /* local-declarations: %empty  */
#line 167 "anasin.y"
                           { printf("local-declarations  ->\n"); }
#line 3365 "anasin.tab.c"
    break;

  case 22: /* statement-list: statement-list statement  */
#line 169 "anasin.y"
                                         { printf("statement-list  ->  statement-list statement\n"); }
#line 3371 "anasin.tab.c"
    break;

  case 23: /* statement-list: statement  */
#line 170 "anasin.y"
                          { printf("statement-list  ->  statement\n"); }
#line 3377 "anasin.tab.c"
    break;

  case 24: /* statement: compound-stmt  */
#line 172 "anasin.y"
                         { printf("statement  ->  compound-stmt \n"); }
#line 3383 "anasin.tab.c"
    break;

  case 25: /* statement: conditional-stmt  */
#line 173 "anasin.y"
                            { printf("statement  ->  conditional-stmt \n" ); }
#line 3389 "anasin.tab.c"
    break;

  case 26: /* statement: iteration-stmt  */
#line 174 "anasin.y"
                          { printf("statement  ->  iteration-stmt \n" ); }
#line 3395 "anasin.tab.c"
    break;

  case 27: /* statement: expression-stmt  */
#line 175 "anasin.y"
                           { printf("statement  ->  expression-stmt \n" ); }
#line 3401 "anasin.tab.c"
    break;

  case 28: /* statement: return-stmt  */
#line 176 "anasin.y"
                       { printf("statement  ->  return-stmt \n" ); }
#line 3407 "anasin.tab.c"
    break;

  case 29: /* statement: var-declaration  */
#line 177 "anasin.y"
                           { printf("statement  ->  var-declaration \n"); }
#line 3413 "anasin.tab.c"
    break;

  case 30: /* statement: forall-stmt  */
#line 178 "anasin.y"
                       { printf("statement  ->  forall-stmt \n"); }
#line 3419 "anasin.tab.c"
    break;

  case 31: /* forall-statement: compound-stmt  */
#line 180 "anasin.y"
                                { printf("statement  ->  compound-stmt \n"); }
#line 3425 "anasin.tab.c"
    break;

  case 32: /* forall-statement: conditional-stmt  */
#line 181 "anasin.y"
                                   { printf("statement  ->  conditional-stmt \n" ); }
#line 3431 "anasin.tab.c"
    break;

  case 33: /* forall-statement: iteration-stmt  */
#line 182 "anasin.y"
                                 { printf("statement  ->  iteration-stmt \n" ); }
#line 3437 "anasin.tab.c"
    break;

  case 34: /* forall-statement: expression-stmt  */
#line 183 "anasin.y"
                                  { printf("statement  ->  expression-stmt \n" ); }
#line 3443 "anasin.tab.c"
    break;

  case 35: /* forall-statement: forall-stmt  */
#line 184 "anasin.y"
                              { printf("statement  ->  forall-stmt \n"); }
#line 3449 "anasin.tab.c"
    break;

  case 36: /* conditional-stmt: IF '(' expression ')' statement  */
#line 187 "anasin.y"
                                                            { printf("conditional-stmt  ->  if ( expression ) statement \n"); }
#line 3455 "anasin.tab.c"
    break;

  case 37: /* conditional-stmt: IF '(' expression ')' statement ELSE statement  */
#line 188 "anasin.y"
                                                                 { printf("conditional-stmt  ->  if ( expression ) statement else statement\n"); }
#line 3461 "anasin.tab.c"
    break;

  case 38: /* conditional-stmt: IF setop-in statement  */
#line 189 "anasin.y"
                                                  { printf("conditional-stmt  ->  if ( expression ) statement \n"); }
#line 3467 "anasin.tab.c"
    break;

  case 39: /* conditional-stmt: IF setop-in statement ELSE statement  */
#line 190 "anasin.y"
                                                       { printf("conditional-stmt  ->  if ( expression ) statement else statement\n"); }
#line 3473 "anasin.tab.c"
    break;

  case 40: /* iteration-stmt: FOR '(' expression-stmt expression-stmt expression ')' statement  */
#line 192 "anasin.y"
                                                                                 { printf("iteration-stmt  ->  for ( expression ; expression ; expression ) statement\n"); }
#line 3479 "anasin.tab.c"
    break;

  case 41: /* forall-stmt: FORALL_OP setop-in forall-statement  */
#line 195 "anasin.y"
                                                 { printf("setop-forall  ->  setop-in forall-statement\n"); }
#line 3485 "anasin.tab.c"
    break;

  case 42: /* expression-stmt: expression ';'  */
#line 198 "anasin.y"
                                { printf("expression-stmt  ->  expression ;\n"); }
#line 3491 "anasin.tab.c"
    break;

  case 43: /* expression-stmt: ';'  */
#line 199 "anasin.y"
                     { printf("expression-stmt  ->  ; \n"); }
#line 3497 "anasin.tab.c"
    break;

  case 44: /* return-stmt: RETURN ';'  */
#line 201 "anasin.y"
                        { printf("return-stmt  ->  return ; \n"); }
#line 3503 "anasin.tab.c"
    break;

  case 45: /* return-stmt: RETURN expression ';'  */
#line 202 "anasin.y"
                                   { printf("return-stmt  ->  return expression ; \n"); }
#line 3509 "anasin.tab.c"
    break;

  case 46: /* expression: ID '=' expression  */
#line 204 "anasin.y"
                              { printf("expression  ->  %s = expression ;\n", (yyvsp[-2].token_name)); }
#line 3515 "anasin.tab.c"
    break;

  case 47: /* expression: simple-expression  */
#line 205 "anasin.y"
                              { printf("expression  ->  simple-expression ;\n"); }
#line 3521 "anasin.tab.c"
    break;

  case 48: /* expression: set-expression  */
#line 206 "anasin.y"
                           { printf("expression  ->  set-expression ;\n"); }
#line 3527 "anasin.tab.c"
    break;

  case 49: /* expression: io-expression  */
#line 207 "anasin.y"
                          { printf("expression  ->  io-expression ;\n"); }
#line 3533 "anasin.tab.c"
    break;

  case 50: /* simple-expression: logop-una relational-exp  */
#line 209 "anasin.y"
                                            { printf("simple-expression  ->  logop-una relational-exp simple-expression\n"); }
#line 3539 "anasin.tab.c"
    break;

  case 51: /* simple-expression: logop-una set-expression  */
#line 210 "anasin.y"
                                            { printf("simple-expression  ->  logop-una relational-exp simple-expression\n"); }
#line 3545 "anasin.tab.c"
    break;

  case 52: /* simple-expression: simple-expression logop-bin relational-exp  */
#line 211 "anasin.y"
                                                              { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3551 "anasin.tab.c"
    break;

  case 53: /* simple-expression: simple-expression logop-bin set-expression  */
#line 212 "anasin.y"
                                                              { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3557 "anasin.tab.c"
    break;

  case 54: /* simple-expression: set-expression logop-bin relational-exp  */
#line 213 "anasin.y"
                                                           { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3563 "anasin.tab.c"
    break;

  case 55: /* simple-expression: set-expression logop-bin set-expression  */
#line 214 "anasin.y"
                                                           { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3569 "anasin.tab.c"
    break;

  case 56: /* simple-expression: simple-expression logop-bin logop-una relational-exp  */
#line 215 "anasin.y"
                                                                        { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3575 "anasin.tab.c"
    break;

  case 57: /* simple-expression: simple-expression logop-bin logop-una set-expression  */
#line 216 "anasin.y"
                                                                        { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3581 "anasin.tab.c"
    break;

  case 58: /* simple-expression: set-expression logop-bin logop-una relational-exp  */
#line 217 "anasin.y"
                                                                     { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3587 "anasin.tab.c"
    break;

  case 59: /* simple-expression: set-expression logop-bin logop-una set-expression  */
#line 218 "anasin.y"
                                                                     { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3593 "anasin.tab.c"
    break;

  case 60: /* simple-expression: relational-exp  */
#line 219 "anasin.y"
                                  { printf("simple-expression  ->  relational-exp\n"); }
#line 3599 "anasin.tab.c"
    break;

  case 61: /* relational-exp: relational-exp relop arithm-add-exp  */
#line 221 "anasin.y"
                                                    { printf("relational-exp  ->  arithm-add-exp relop arithm-add-exp\n"); }
#line 3605 "anasin.tab.c"
    break;

  case 62: /* relational-exp: arithm-add-exp  */
#line 222 "anasin.y"
                               { printf("relational-exp  ->  arithm-add-exp\n"); }
#line 3611 "anasin.tab.c"
    break;

  case 63: /* arithm-add-exp: arithm-add-exp ariop-add arithm-mul-exp  */
#line 224 "anasin.y"
                                                        { printf("arithm-add-exp  ->  arithm-add-exp ariop-add arithm-mul-exp\n"); }
#line 3617 "anasin.tab.c"
    break;

  case 64: /* arithm-add-exp: arithm-mul-exp  */
#line 225 "anasin.y"
                               { printf("arithm-add-exp  ->  arithm-mul-exp\n"); }
#line 3623 "anasin.tab.c"
    break;

  case 65: /* arithm-mul-exp: arithm-mul-exp ariop-mul unary-minus-exp  */
#line 230 "anasin.y"
                                                         { printf("arithm-mul-exp  ->  arithm-mul-exp ariop-mul unary-minus-exp\n"); }
#line 3629 "anasin.tab.c"
    break;

  case 66: /* arithm-mul-exp: unary-minus-exp  */
#line 231 "anasin.y"
                                { printf("arithm-mul-exp  ->  unary-minus-exp\n"); }
#line 3635 "anasin.tab.c"
    break;

  case 67: /* unary-minus-exp: '-' factor  */
#line 233 "anasin.y"
                                      { printf("unary-minus-exp  ->  '-' factor\n"); }
#line 3641 "anasin.tab.c"
    break;

  case 68: /* unary-minus-exp: factor  */
#line 234 "anasin.y"
                       { printf("unary-minus-exp  ->  factor\n"); }
#line 3647 "anasin.tab.c"
    break;

  case 69: /* factor: '(' expression ')'  */
#line 236 "anasin.y"
                           { printf("factor  ->  ( expression )\n"); }
#line 3653 "anasin.tab.c"
    break;

  case 70: /* factor: func-call  */
#line 237 "anasin.y"
                  { printf("factor  ->  func-call\n"); }
#line 3659 "anasin.tab.c"
    break;

  case 71: /* factor: ID  */
#line 238 "anasin.y"
           { printf("factor  ->  %s\n", (yyvsp[0].token_name)); }
#line 3665 "anasin.tab.c"
    break;

  case 72: /* factor: INT  */
#line 239 "anasin.y"
            { printf("factor  ->  %s\n", (yyvsp[0].token_name)); }
#line 3671 "anasin.tab.c"
    break;

  case 73: /* factor: FLOAT  */
#line 240 "anasin.y"
              { printf("factor  ->  %s\n", (yyvsp[0].token_name)); }
#line 3677 "anasin.tab.c"
    break;

  case 74: /* factor: EMPTY  */
#line 241 "anasin.y"
              { printf("factor  ->  %s\n", (yyvsp[0].token_name)); }
#line 3683 "anasin.tab.c"
    break;

  case 75: /* logop-una: '!'  */
#line 243 "anasin.y"
                { printf("logop-una  ->  !\n"); }
#line 3689 "anasin.tab.c"
    break;

  case 76: /* logop-bin: AND  */
#line 245 "anasin.y"
               { printf("logop-bin  ->  &&\n"); }
#line 3695 "anasin.tab.c"
    break;

  case 77: /* logop-bin: OR  */
#line 246 "anasin.y"
              { printf("logop-bin  ->  ||\n"); }
#line 3701 "anasin.tab.c"
    break;

  case 78: /* relop: '<'  */
#line 248 "anasin.y"
           { printf("relop  ->  <\n"); }
#line 3707 "anasin.tab.c"
    break;

  case 79: /* relop: LTE  */
#line 249 "anasin.y"
           { printf("relop  ->  <=\n"); }
#line 3713 "anasin.tab.c"
    break;

  case 80: /* relop: '>'  */
#line 250 "anasin.y"
           { printf("relop  ->  >\n"); }
#line 3719 "anasin.tab.c"
    break;

  case 81: /* relop: GTE  */
#line 251 "anasin.y"
           { printf("relop  ->  >=\n"); }
#line 3725 "anasin.tab.c"
    break;

  case 82: /* relop: EQ  */
#line 252 "anasin.y"
          { printf("relop  ->  ==\n"); }
#line 3731 "anasin.tab.c"
    break;

  case 83: /* relop: NEQ  */
#line 253 "anasin.y"
           { printf("relop  ->  !=\n"); }
#line 3737 "anasin.tab.c"
    break;

  case 84: /* ariop-add: '+'  */
#line 255 "anasin.y"
               { printf("ariop-add  ->  +\n"); }
#line 3743 "anasin.tab.c"
    break;

  case 85: /* ariop-add: '-'  */
#line 256 "anasin.y"
                { printf("ariop-add  ->  -\n"); }
#line 3749 "anasin.tab.c"
    break;

  case 86: /* ariop-mul: '*'  */
#line 258 "anasin.y"
               { printf("ariop-mul  ->  *\n"); }
#line 3755 "anasin.tab.c"
    break;

  case 87: /* ariop-mul: '/'  */
#line 259 "anasin.y"
               { printf("ariop-mul  ->  /\n"); }
#line 3761 "anasin.tab.c"
    break;

  case 88: /* set-expression: setop-in  */
#line 261 "anasin.y"
                         { printf("set-expressions  ->  setop-in\n"); }
#line 3767 "anasin.tab.c"
    break;

  case 89: /* set-expression: setop-is-set  */
#line 262 "anasin.y"
                             { printf("set-expressions  ->  setop-is-set\n"); }
#line 3773 "anasin.tab.c"
    break;

  case 90: /* set-expression: setop-add  */
#line 263 "anasin.y"
                          { printf("set-expressions  ->  setop-add\n"); }
#line 3779 "anasin.tab.c"
    break;

  case 91: /* set-expression: setop-remove  */
#line 264 "anasin.y"
                             { printf("set-expressions  ->  setop-remove\n"); }
#line 3785 "anasin.tab.c"
    break;

  case 92: /* set-expression: setop-exists  */
#line 265 "anasin.y"
                             { printf("set-expressions  ->  setop-exists\n"); }
#line 3791 "anasin.tab.c"
    break;

  case 93: /* setop-in: '(' expression IN_OP expression ')'  */
#line 267 "anasin.y"
                                              { printf("setop-in  ->  ( expression IN_OP expression ) \n"); }
#line 3797 "anasin.tab.c"
    break;

  case 94: /* setop-is-set: IS_SET_OP '(' ID ')'  */
#line 269 "anasin.y"
                                   { printf("setop-is-set  ->  is_set ( %s )\n", (yyvsp[-1].token_name)); }
#line 3803 "anasin.tab.c"
    break;

  case 95: /* setop-add: ADD_OP setop-in  */
#line 271 "anasin.y"
                           { printf("setop-add  ->  add setop-in\n"); }
#line 3809 "anasin.tab.c"
    break;

  case 96: /* setop-remove: REMOVE_OP setop-in  */
#line 273 "anasin.y"
                                 { printf("setop-remove  ->  remove setop-in\n"); }
#line 3815 "anasin.tab.c"
    break;

  case 97: /* setop-exists: EXISTS_OP '(' ID IN_OP ID ')'  */
#line 275 "anasin.y"
                                            { printf("setop-exists  ->  exists ( %s in %s )\n", (yyvsp[-3].token_name), (yyvsp[-1].token_name)); }
#line 3821 "anasin.tab.c"
    break;

  case 98: /* io-expression: ioop-read  */
#line 277 "anasin.y"
                         { printf("io-expression  ->  ioop-read\n"); }
#line 3827 "anasin.tab.c"
    break;

  case 99: /* io-expression: ioop-write  */
#line 278 "anasin.y"
                          { printf("io-expression  ->  ioop-read\n"); }
#line 3833 "anasin.tab.c"
    break;

  case 100: /* ioop-read: READ '(' ID ')'  */
#line 280 "anasin.y"
                           { printf("ioop-read  ->  read ( %s ) \n", (yyvsp[-1].token_name)); }
#line 3839 "anasin.tab.c"
    break;

  case 101: /* ioop-write: WRITE '(' word ')'  */
#line 282 "anasin.y"
                               { printf("ioop-write  ->  write ( word ) \n"); }
#line 3845 "anasin.tab.c"
    break;

  case 102: /* ioop-write: WRITELN '(' word ')'  */
#line 283 "anasin.y"
                                 { printf("ioop-write  ->  writeln ( word ) \n"); }
#line 3851 "anasin.tab.c"
    break;

  case 103: /* word: CHAR  */
#line 285 "anasin.y"
           { printf("word  ->  %s\n", (yyvsp[0].token_name)); }
#line 3857 "anasin.tab.c"
    break;

  case 104: /* word: STRING  */
#line 286 "anasin.y"
             { printf("word  ->  %s\n", (yyvsp[0].token_name)); }
#line 3863 "anasin.tab.c"
    break;

  case 105: /* func-call: ID '(' arguments ')'  */
#line 288 "anasin.y"
                                { printf("func-call  ->  %s ( arguments )\n", (yyvsp[-3].token_name)); }
#line 3869 "anasin.tab.c"
    break;

  case 106: /* arguments: args-list  */
#line 290 "anasin.y"
                     { printf("arguments  ->  args-list\n"); }
#line 3875 "anasin.tab.c"
    break;

  case 107: /* arguments: %empty  */
#line 291 "anasin.y"
                  { printf("arguments  ->  empty-set\n"); }
#line 3881 "anasin.tab.c"
    break;

  case 108: /* args-list: args-list ',' expression  */
#line 293 "anasin.y"
                                    { printf("args-list  ->  args-list , expression\n"); }
#line 3887 "anasin.tab.c"
    break;

  case 109: /* args-list: expression  */
#line 294 "anasin.y"
                      { printf("args-list  ->  expression\n"); }
#line 3893 "anasin.tab.c"
    break;


#line 3897 "anasin.tab.c"

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

#line 297 "anasin.y"


void yyerror(const char *token_name) {
    printf("yyerror: %s em linha: %d coluna: %d.\n", token_name, line, column);

}

int main(int argc, char *argv[]){
   yyin = fopen(argv[1], "r");

   yyparse();
   fclose(yyin);
   yylex_destroy();

  //  if(error_count > 0){
  //    printf("\nThe lexical analisys finished with %d errors found.\n", error_count);
  //  }

   return 0;
}
