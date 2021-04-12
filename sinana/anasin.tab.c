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

#line 83 "anasin.tab.c"

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
  YYSYMBOL_51_ = 51,                       /* ';'  */
  YYSYMBOL_52_ = 52,                       /* '('  */
  YYSYMBOL_53_ = 53,                       /* ')'  */
  YYSYMBOL_54_ = 54,                       /* ','  */
  YYSYMBOL_55_ = 55,                       /* '{'  */
  YYSYMBOL_56_ = 56,                       /* '}'  */
  YYSYMBOL_57_ = 57,                       /* '='  */
  YYSYMBOL_58_ = 58,                       /* '!'  */
  YYSYMBOL_59_ = 59,                       /* '<'  */
  YYSYMBOL_60_ = 60,                       /* '>'  */
  YYSYMBOL_61_ = 61,                       /* '+'  */
  YYSYMBOL_62_ = 62,                       /* '-'  */
  YYSYMBOL_63_ = 63,                       /* '*'  */
  YYSYMBOL_64_ = 64,                       /* '/'  */
  YYSYMBOL_YYACCEPT = 65,                  /* $accept  */
  YYSYMBOL_program = 66,                   /* program  */
  YYSYMBOL_67_declaration_list = 67,       /* declaration-list  */
  YYSYMBOL_declaration = 68,               /* declaration  */
  YYSYMBOL_69_var_declaration = 69,        /* var-declaration  */
  YYSYMBOL_variable = 70,                  /* variable  */
  YYSYMBOL_71_func_declaration = 71,       /* func-declaration  */
  YYSYMBOL_72_type_specifier = 72,         /* type-specifier  */
  YYSYMBOL_parameters = 73,                /* parameters  */
  YYSYMBOL_74_parameter_list = 74,         /* parameter-list  */
  YYSYMBOL_parameter = 75,                 /* parameter  */
  YYSYMBOL_76_compound_stmt = 76,          /* compound-stmt  */
  YYSYMBOL_77_local_declarations = 77,     /* local-declarations  */
  YYSYMBOL_78_statement_list = 78,         /* statement-list  */
  YYSYMBOL_statement = 79,                 /* statement  */
  YYSYMBOL_80_forall_statement = 80,       /* forall-statement  */
  YYSYMBOL_81_conditional_stmt = 81,       /* conditional-stmt  */
  YYSYMBOL_82_iteration_stmt = 82,         /* iteration-stmt  */
  YYSYMBOL_83_forall_stmt = 83,            /* forall-stmt  */
  YYSYMBOL_84_expression_stmt = 84,        /* expression-stmt  */
  YYSYMBOL_85_return_stmt = 85,            /* return-stmt  */
  YYSYMBOL_expression = 86,                /* expression  */
  YYSYMBOL_87_simple_expression = 87,      /* simple-expression  */
  YYSYMBOL_88_relational_exp = 88,         /* relational-exp  */
  YYSYMBOL_89_arithm_add_exp = 89,         /* arithm-add-exp  */
  YYSYMBOL_90_arithm_mul_exp = 90,         /* arithm-mul-exp  */
  YYSYMBOL_factor = 91,                    /* factor  */
  YYSYMBOL_92_logop_una = 92,              /* logop-una  */
  YYSYMBOL_93_logop_bin = 93,              /* logop-bin  */
  YYSYMBOL_relop = 94,                     /* relop  */
  YYSYMBOL_95_ariop_add = 95,              /* ariop-add  */
  YYSYMBOL_96_ariop_mul = 96,              /* ariop-mul  */
  YYSYMBOL_97_set_expression = 97,         /* set-expression  */
  YYSYMBOL_98_setop_in = 98,               /* setop-in  */
  YYSYMBOL_99_setop_is_set = 99,           /* setop-is-set  */
  YYSYMBOL_100_setop_add = 100,            /* setop-add  */
  YYSYMBOL_101_setop_remove = 101,         /* setop-remove  */
  YYSYMBOL_102_setop_exists = 102,         /* setop-exists  */
  YYSYMBOL_103_io_expression = 103,        /* io-expression  */
  YYSYMBOL_104_ioop_read = 104,            /* ioop-read  */
  YYSYMBOL_105_ioop_write = 105,           /* ioop-write  */
  YYSYMBOL_word = 106,                     /* word  */
  YYSYMBOL_107_func_call = 107,            /* func-call  */
  YYSYMBOL_arguments = 108,                /* arguments  */
  YYSYMBOL_109_args_list = 109             /* args-list  */
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
#define YYLAST   7206

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  568

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


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
       2,     2,     2,    58,     2,     2,     2,     2,     2,     2,
      52,    53,    63,    61,    54,    62,     2,    64,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    51,
      59,    57,    60,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,    56,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    84,    84,    86,    87,    89,    90,    92,    94,    96,
      98,    99,   100,   101,   103,   104,   106,   107,   109,   111,
     113,   114,   116,   117,   119,   120,   121,   122,   123,   124,
     125,   127,   128,   129,   130,   131,   134,   135,   136,   137,
     139,   142,   145,   146,   148,   149,   151,   152,   153,   154,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   168,   169,   171,   172,   174,   175,   177,   178,   179,
     180,   181,   182,   184,   186,   187,   189,   190,   191,   192,
     193,   194,   196,   197,   199,   200,   202,   203,   204,   205,
     206,   208,   210,   212,   214,   216,   218,   219,   221,   223,
     224,   226,   227,   229,   231,   232,   234,   235
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
  "';'", "'('", "')'", "','", "'{'", "'}'", "'='", "'!'", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "$accept", "program", "declaration-list",
  "declaration", "var-declaration", "variable", "func-declaration",
  "type-specifier", "parameters", "parameter-list", "parameter",
  "compound-stmt", "local-declarations", "statement-list", "statement",
  "forall-statement", "conditional-stmt", "iteration-stmt", "forall-stmt",
  "expression-stmt", "return-stmt", "expression", "simple-expression",
  "relational-exp", "arithm-add-exp", "arithm-mul-exp", "factor",
  "logop-una", "logop-bin", "relop", "ariop-add", "ariop-mul",
  "set-expression", "setop-in", "setop-is-set", "setop-add",
  "setop-remove", "setop-exists", "io-expression", "ioop-read",
  "ioop-write", "word", "func-call", "arguments", "args-list", YY_NULLPTR
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
     305,    59,    40,    41,    44,   123,   125,    61,    33,    60,
      62,    43,    45,    42,    47
};
#endif

#define YYPACT_NINF (-301)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-108)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     464,    -4,    27,    29,    31,    18,  1055,  1166,  1200,    16,
    1263,    84,  -301,  1269,  1328,   -20,   117,   213,    88,    44,
     307,   318,   505,    49,   464,  4714,  1372,   532,  6381,  6412,
    3502,  6430,    73,    76,  1492,    85,    89,   109,   121,   134,
     134,   144,   160,  4752,  1734,   193,  4790,  4828,   110,  4866,
    4904,  4942,  4980,  5018,  5056,  5094,   165,    28,   821,   879,
    6445,  6461,  1119,    69,   178,   328,   349,   369,   491,   167,
     176,   183,  6494,   737,  2212,  1734,  1556,  1613,  5132,   189,
     239,   654,   654,   241,  2478,   550,   557,   253,   218,   -31,
    1402,  5170,  5208,   344,   409,   572,    51,    77,    95,   210,
     278,   363,   370,   450,   526,   370,   540,   544,   370,   414,
    1496,   582,   572,   615,   221,   624,   212,    10,   150,  2004,
    5246,   228,   246,   252,   254,   259,   262,   235,   285,  5284,
    5322,  5360,  5398,  5436,  5474,  2611,  6510,  2325,  1119,   780,
    2611,  2445,  6525,  6543,  2965,  1119,   852,  6574,  3386,  1556,
    5702,  2611,   290,   301,   311,   905,   329,   316,  3036,   942,
     341,  3770,   944,   648,  1061,  5512,   348,   358,   965,  5702,
    5702,   994,  5550,  5588,  4714,   346,   411,  2478,  5841,  5890,
    1223,  5902,   377,   380,   382,   390,   399,   399,   404,  1734,
      -6,  1622,  2128,  5923,  5952,  1381,     4,    56,   100,   114,
     387,   770,    24,    53,    65,  5973,  5985,  6001,  3779,  6050,
     406,   420,   431,   436,   443,   443,   453,  1734,    54,  2238,
    1288,  6062,  6074,  1439,   105,   118,   226,   270,   303,   372,
     682,   738,   782,  6123,   461,   466,  2909,   160,  2067,  4714,
    3840,   373,  3878,  3916,  3954,  3992,  4030,  4068,   478,  3195,
     481,  6592,  6623,  3714,  6641,   487,   494,   508,   539,   545,
     545,   555,  1734,  1031,  1961,  2527,  6652,  6673,  1682,  1105,
    1116,  1129,  1168,  1185,  1197,   479,   534,   548,  6702,  2611,
    3539,   551,  6723,  6735,  5766,  6751,   575,   577,   606,   618,
     631,   631,   655,  1734,    11,  5857,  1945,  6784,  6800,  1772,
      58,   146,   219,   222,   248,   323,   600,   619,   634,  6812,
     671,  5626,   660,   679,   737,  1734,   725,   654,   654,   731,
    2478,   901,   919,   733,   103,   583,   699,   699,   699,  5780,
    2010,   935,   583,   737,  3386,   745,   654,   654,   746,  2478,
     374,   428,   751,   112,   685,   709,   709,   709,  5829,  2637,
     503,   685,  1734,  1556,  1613,  4106,   694,   609,   712,  4144,
    4182,  3296,   737,  2478,   766,   654,   654,   777,  2478,  1218,
    1300,   787,   157,   775,   752,   752,   752,  6136,  6993,  1321,
     775,   754,  3604,   737,  2611,   798,   654,   654,   802,  2478,
     463,   552,   804,   168,   940,   815,   815,   815,  6152,  7021,
     635,   940,  5664,  2611,   763,   171,   768,   773,   788,   796,
     792,   816,  2611,  6201,  2724,  1381,   948,  2611,  2146,  6213,
    6234,  2779,  1381,   973,   813,   808,   818,   839,   844,   856,
     880,   893,  2611,  6262,  2976,  1439,   518,  2611,  1816,  6283,
    6311,  3257,  1439,   578,   173,  4220,  2004,  4258,  4296,  4334,
    4372,  4410,  4448,  4486,  4524,   878,   897,   889,   904,   909,
     914,   933,   938,  2611,  6833,  7039,  1682,  1343,  2611,  2545,
    6862,  6883,  7047,  1682,  1354,  5740,   923,   932,   934,   943,
     947,   960,   955,   978,  2611,  6895,  7068,  1772,   659,  2611,
    2344,  6911,  6944,  7092,  1772,   668,   964,  6332,   257,   281,
     297,  1006,   881,   966,  2827,  1024,   968,  3440,  1091,  6360,
     820,   837,   953,   601,  1021,   981,  3652,   620,   990,  3668,
     677,  1556,  1556,  2611,  6960,  1010,  1015,  1025,  1388,  1050,
    1009,  7101,  1423,  1011,  7113,  1434,  6972,  1016,  1017,  1019,
     680,  1056,  1023,  7125,   747,  1026,  7146,   749,   998,  1032,
    1094,  1051,   831,  4562,  4600,  1053,  1062,  1436,  1065,   801,
    1137,   870,  1556,  1556,  1438,   896,  4638,  4676
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
       0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -301,  -301,  -301,  1068,     2,     0,  -301,   393,  -301,  -301,
    1054,   -22,  -170,  -301,   -37,   774,   -59,   -53,   -35,   -51,
     -69,   -25,  3005,  1363,  1528,  1000,   531,  2786,   -50,  3318,
    -177,  -128,  1841,   366,  2006,  2240,  2405,  2639,  3066,  3218,
    3331,   -40,   835,  -300,  -301
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,    46,   175,    10,   176,    19,    20,
      21,    47,    48,    49,    50,   130,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    95,   102,
     105,   108,    63,    64,    65,    66,    67,    68,    69,    70,
      71,   124,    72,   114,   115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    26,     8,   -10,   310,   135,     9,   247,     8,    79,
      93,    94,    91,   112,   404,   327,    17,   243,    12,    89,
      93,    94,   136,   244,    17,   246,   119,    93,    94,   131,
     -47,    -8,    16,   424,   -11,   132,   -12,   134,   -13,   118,
     -48,   245,   125,   346,    93,    94,   279,   -47,   113,   116,
     117,   248,   250,   133,   242,   -77,   -77,   -48,   -77,   127,
     -49,   -77,   455,   149,   -47,   328,   129,    14,   151,   358,
      93,    94,   -86,   -86,    93,    94,   241,   -49,   240,   -47,
     247,   -79,   -79,   476,   -79,    93,    94,   -79,   375,   -96,
     243,    15,   -86,   347,   281,    22,   244,    23,   246,   -80,
     -80,   -97,   -80,   -77,    25,   -80,   -96,   -47,   -47,   -86,
     157,   -48,   164,   165,   245,   160,   -87,   -87,   -97,   396,
     -48,    93,    94,   163,   248,    75,   166,   242,    77,   -79,
     -88,   -88,   172,   173,   -86,   -86,   -87,    80,   376,   412,
     325,    81,     1,     2,     3,     4,   332,   -80,   432,   241,
     -88,   240,   313,   -87,   -38,   -38,   413,   -38,   -48,   -48,
     -38,    82,   -86,   -86,   324,   433,    90,   -88,   344,   397,
     -15,   -86,   -86,    83,   351,   -38,   -38,   -38,   -38,   -38,
     150,   -38,   -38,   -38,   -38,   -38,    84,   -38,   -38,   -38,
     -38,   -38,   343,   463,   -86,   -86,    87,   -73,   -73,   -86,
     -73,   -38,   -38,   -73,   484,   -38,   -38,   -46,   -38,   279,
     464,   356,   177,   373,   -81,   -81,    92,   -81,   -49,   380,
     -81,   485,    28,    29,   -46,    30,   521,   -96,    31,   -86,
     -73,   -73,   -73,   -73,   -97,   -87,   -87,   372,   -88,   -88,
     120,   327,   -87,   -87,   394,   -73,   121,    32,   126,    33,
     401,    35,    36,    37,   381,    38,    39,    40,    41,    42,
     128,   346,   -81,   -46,   -89,   -89,   -18,   -18,   393,    43,
      44,   135,   -87,   174,   147,   -88,    45,   407,   408,   -87,
     -87,   152,   -76,   -76,   247,   -76,   -88,   -88,   -76,   113,
     405,   328,   375,   -98,   243,   410,   427,   428,   450,  -101,
     244,   -89,   246,   446,   451,  -102,   453,   153,   113,   425,
     -98,   347,   154,   396,   430,   155,   445,   -99,   245,   -89,
     -89,   156,   452,   -88,   -88,   458,   459,   444,   248,   250,
     -76,   242,   248,  -100,   -99,   448,   167,   113,   456,   -90,
     -90,   -98,   376,   461,   -87,   -87,   479,   480,   -75,   -75,
    -100,   -75,   -99,   241,   -75,   240,   -89,   -89,   113,   477,
     -14,    24,  -100,   397,   482,   -88,   -88,   -78,   -78,   168,
     -78,   -17,   -17,   -78,    28,    29,   -90,   109,   496,   -87,
      31,   -75,   -75,   -75,   -75,   -89,   -89,   503,   -90,   -90,
     -93,   -93,   506,    11,   136,   523,   -75,   311,    76,    11,
     -88,   170,   -75,   -89,   -89,    85,    86,   515,    88,    18,
     197,   171,   518,   -74,   -74,   -78,   -74,    18,   312,   -74,
     -89,   281,   140,   -89,   359,   -90,   -90,   -93,   -93,   316,
     -69,   -69,   317,   -69,   318,   -69,   -69,   -69,   530,   225,
     -89,   197,   319,   533,   -94,   -94,   -74,   -74,   -74,   -74,
     270,   320,   247,   247,   -82,   -82,   323,   -82,   335,   542,
     -82,   -74,   243,   243,   545,   -69,    73,   -74,   244,   244,
     246,   246,   336,   -69,   -69,   -69,   -69,   -69,   -69,   -93,
     -93,   -94,   -94,   337,   553,   554,   245,   245,   338,     1,
       2,     3,     4,   247,   247,   339,   248,   248,   555,   242,
     242,   301,   -82,   243,   243,   342,   301,   -90,   -90,   244,
     244,   246,   246,   352,   225,   -49,   -93,   301,   354,   -51,
     -51,   241,   241,   240,   240,   566,   567,   245,   245,   360,
     -83,   -83,   361,   -83,   -53,   -53,   -83,   248,   248,   364,
     242,   242,   -90,   270,   -84,   -84,   365,   -84,   -85,   -85,
     -84,   -85,   321,   322,   -85,   197,   -51,   -51,    -8,    -8,
     366,   197,   241,   241,   240,   240,   -93,   -93,   -94,   -94,
     -96,   -53,   -53,   -94,   -94,   194,    28,    29,   -83,   109,
     340,   341,    31,   197,   -97,   -16,   -16,   178,   179,   225,
     329,   367,   -84,   181,   -55,   -55,   -85,   368,   -51,   -51,
     353,   -93,   382,   357,   222,   -94,   194,   371,   -94,    38,
      39,    40,    41,    28,    29,   267,    30,   -92,   -92,    31,
     185,   186,   187,   188,    44,   369,   370,   385,   197,   386,
      45,   -55,   -55,   -51,   270,   189,   -57,   -57,   234,   143,
     235,    45,    35,    36,    37,   301,    38,    39,    40,    41,
     237,   -51,   -51,   -49,   -92,   -92,   390,   391,   387,   197,
     238,    44,   122,   123,   239,   301,   298,    45,  -107,  -107,
     388,   298,   -96,   -57,   -57,   -53,   -53,  -104,   148,   222,
     225,   197,   298,   389,   -55,   -55,   270,   -97,   -51,   206,
     207,   197,   348,   -59,   -59,   209,   -92,   -92,   197,   225,
     225,  -106,  -106,   178,   179,   270,   329,   392,   267,   181,
     225,    -8,   -53,   206,   207,   403,   348,   225,   197,   209,
     194,   -55,   213,   214,   215,   216,   194,   402,   225,   270,
     -59,   -59,   406,   -92,   270,   -49,   -49,   217,   409,   270,
     411,   206,   207,    45,   208,   447,   270,   209,   194,   225,
     301,   417,   426,   429,   222,   270,   251,   252,   431,   377,
     301,   437,   254,   -57,   -57,   -59,   -59,   301,   454,   301,
     210,   211,   212,   457,   213,   214,   215,   216,   301,   251,
     252,   197,   377,   301,   460,   254,   -90,   -90,   197,   217,
    -105,   -96,   -96,   194,   462,    45,   -53,   -53,   301,   267,
     -57,   225,   -59,   301,   468,   478,   -90,   475,   225,   481,
     298,   483,   258,   259,   260,   261,   497,   -91,   -91,   282,
     283,   498,   398,   -90,   194,   285,   499,   262,   412,   301,
     298,   -53,   270,    45,   301,   -97,   -97,   -60,   -60,   270,
      96,   500,    97,    98,    99,   222,   194,   -91,   -91,   501,
     301,   267,   502,   301,   -91,   301,   194,   194,   194,   420,
     301,   -46,   -46,   194,   222,   222,   509,   489,   -55,   -55,
     267,   510,   -60,   -98,   -98,   222,   222,   222,   440,   205,
     100,   101,   222,   194,   -91,   -91,   -95,   -95,   549,   301,
     -99,   -99,   511,   222,   267,   -62,   -62,   512,   -62,   267,
     -62,   -62,   -62,   -55,   267,   267,   267,   471,   233,   513,
     205,   267,   -95,   -95,   222,   298,   432,   -93,   -93,   278,
     267,   -92,   -92,   -95,   -95,   298,   298,   298,   492,   514,
     -62,   524,   298,   -46,   298,   -94,   -94,   -93,   -62,   -62,
     103,   104,   525,   298,   282,   283,   194,   398,   298,   -95,
     285,   -51,   -51,   194,   -93,   -94,   -92,   526,   -57,   -57,
     -59,   -59,   527,   298,   -53,   -53,   222,   528,   298,   463,
     309,   -51,   -94,   222,   529,   309,   536,   289,   290,   291,
     292,   -91,   -91,   233,   -53,   -46,   309,   537,   -51,   -55,
     -55,   484,   293,   -57,   298,   -59,   538,   267,    45,   298,
     539,   -53,   -91,   -91,   267,   -91,  -100,  -100,   -91,   -55,
     -95,   -95,   278,   540,   541,   298,   -91,   548,   298,   550,
     298,   413,   -92,   -92,   205,   298,   -55,   -91,   551,   -91,
     205,   -91,   -91,   -91,   552,   -91,   -91,   -91,   -91,   -91,
     -57,   -57,   -92,   433,   193,   -95,   -98,    93,    94,   -91,
     -91,   -99,   205,   -91,   298,    -2,   -91,   556,   233,   -92,
     -57,  -100,   557,   558,   464,   -36,   -36,   -47,   -36,   -98,
     -99,   -36,  -100,   221,    13,   193,   559,   -57,    27,   485,
       1,     2,     3,     4,   266,   560,   -36,   -36,   -36,   -36,
     -36,   169,   -36,   -36,   -36,   -36,   -36,   205,   -36,   -36,
     -36,   -36,   -36,   278,   561,   142,   563,   -59,   -59,     0,
     -91,   -91,   -36,   -36,   309,   564,   -36,   -36,   565,   -36,
       0,    93,    94,    28,    29,     0,   109,   -59,   205,    31,
     -91,   449,   -86,   -86,   309,   297,     0,     0,     0,     0,
     297,   -48,     0,     0,   -59,   -87,   -87,   -91,   221,   233,
     205,   297,   -86,   -95,   -95,   278,    38,    39,    40,    41,
     205,   205,   205,   205,     0,   -87,    -4,   205,   233,   233,
       0,    44,     0,   -95,   278,     0,     0,   266,     0,   233,
     233,   233,   233,     0,   -88,   -88,   233,   205,     0,   193,
     -95,    -4,    -4,    -4,    -4,   193,     0,   233,   278,     0,
      -5,   -89,   -89,   278,   -88,     0,     0,     0,   278,   278,
     278,   278,     0,   -90,   -90,   278,     0,   193,   233,   309,
       0,   -89,     0,   221,   278,    -5,    -5,    -5,    -5,   309,
     309,   309,   309,   -90,   -93,   -93,   309,     0,   309,   -69,
     -69,     0,   -69,     0,   -69,   -69,   -69,   309,     0,     0,
     205,     0,   309,     0,   -93,     0,     0,   205,     0,   -69,
       0,     0,   193,    -6,     0,     0,     0,   309,   266,    -3,
     233,     0,   309,     0,     0,   314,   -69,   233,     0,   297,
     315,     0,   -69,   -69,   -69,   -69,   -69,   -69,    -6,    -6,
      -6,    -6,     0,   193,    -3,    -3,    -3,    -3,   309,   297,
       0,   278,     0,   309,   -62,   -62,     0,   -62,   278,   -62,
     -62,   -62,     0,     0,   221,   193,   -94,   -94,     0,   309,
     266,     0,   309,     0,   309,   193,   193,   419,    -7,   309,
       0,     0,   193,   221,   221,     0,   -94,   -51,   -51,   266,
       0,   -62,   -62,     0,   221,   221,   439,   -62,   -62,   103,
     104,   221,   193,    -7,    -7,    -7,    -7,   -51,   309,   -53,
     -53,     0,   221,   266,     0,     0,     0,     0,   266,     0,
     -55,   -55,    -9,   266,   266,   470,     0,     0,     0,   -53,
     266,     0,     0,   221,   297,   178,   179,     0,   329,   266,
     -55,   181,     0,     0,   297,   297,   491,    -9,    -9,    -9,
      -9,   297,   -19,   297,   -92,   -92,     0,   191,     0,     0,
       0,     0,   297,     0,     0,   193,     0,   297,   185,   186,
     187,   188,   193,     0,   -92,   110,     0,   -19,   -19,   -19,
     -19,     0,   297,   189,     0,   221,   219,   297,   191,   -57,
     -57,     0,   221,   206,   207,     0,   348,   264,     0,   209,
     -59,   -59,   -91,   -91,   -95,   -95,     0,     0,   137,   -57,
       0,     0,     0,   297,     0,     0,   266,     0,   297,     0,
     -59,     0,   -91,   266,   -95,   144,   213,   214,   215,   216,
       0,     0,     0,     0,   297,     0,     0,   297,     0,   297,
       0,   217,     0,     0,   297,     0,    28,    29,   295,    30,
       0,   158,    31,   295,     0,     0,     0,     0,   161,     0,
       0,   219,   -50,   -50,   295,    96,     0,    97,    98,    99,
       0,     0,     0,   297,     0,    35,    36,    37,     0,    38,
      39,    40,    41,     0,     0,     0,     0,     0,     0,     0,
     264,     0,     0,    78,    44,     0,     0,   -50,     0,     0,
      45,     0,   191,     0,     0,   100,   101,     0,   330,     0,
      28,    29,     0,    30,     0,     0,    31,     0,     0,     0,
       0,     0,   192,     0,     0,     0,     0,     0,     0,     0,
     191,     1,     2,     3,     4,   234,   349,   235,   236,    35,
      36,    37,     0,    38,    39,    40,    41,   237,     0,     0,
       0,   220,     0,   192,     0,     0,     0,   238,    44,     0,
       0,   239,   265,     0,    45,     0,     0,    28,    29,     0,
      30,     0,     0,    31,     0,   191,     0,     0,     0,     0,
     141,   378,     0,     0,     0,     0,     0,     0,   -60,   -60,
       0,    96,   295,    97,    98,    99,    35,    36,    37,     0,
      38,    39,    40,    41,     0,     0,   191,     0,   -60,     0,
       0,     0,   399,   296,   249,    44,     0,     0,   296,     0,
       0,    45,     0,     0,     0,   -60,   220,   219,   191,   296,
       0,   100,   101,   264,     0,     0,   251,   252,   414,   377,
       0,     0,   254,     0,     0,   421,   219,   219,     0,     0,
       0,     0,   264,     0,     0,   265,     0,   434,     0,     0,
       0,     0,     0,     0,   441,   191,     0,   192,     0,   258,
     259,   260,   261,   192,     0,   219,   264,     0,     0,     0,
       0,   264,     0,     0,   262,     0,   465,     0,   178,   179,
       0,   180,     0,   472,   181,   192,   219,   295,     0,     0,
       0,   220,   264,     0,     0,     0,     0,   486,     0,     0,
       0,     0,     0,     0,   493,     0,   295,   182,   183,   184,
       0,   185,   186,   187,   188,   295,   282,   283,   504,   398,
     295,     0,   285,     0,     0,   507,   189,     0,     0,     0,
     192,     0,    45,     0,     0,   295,   265,     0,   516,     0,
     295,     0,     0,     0,     0,   519,     0,   296,     0,   289,
     290,   291,   292,     0,     0,     0,     0,     0,     0,     0,
       0,   192,     0,     0,   293,     0,   295,   296,     0,   531,
       0,   295,   -61,   -61,     0,   -61,   534,   -61,   -61,   -61,
       0,     0,   220,   192,     0,     0,     0,   295,   265,     0,
     543,     0,   295,   192,   418,     0,     0,   546,     0,     0,
     192,   220,   220,     0,     0,     0,     0,   265,     0,   -61,
     -61,     0,   220,   438,     0,   -61,   -61,   103,   104,   220,
     192,     0,     0,     0,     0,   196,   295,     0,     0,     0,
     220,   265,     0,     0,     0,     0,   265,     0,     0,     0,
       0,   265,   469,   111,     0,     0,     0,     0,   265,     0,
       0,   220,   296,     0,   224,     0,   196,   265,     0,     0,
       0,     0,   296,   490,     0,   269,     0,     0,     0,   296,
       0,   296,     0,     0,     0,     0,   139,     0,     0,     0,
     296,     0,     0,   192,     0,   296,     0,     0,     0,     0,
     192,     0,     0,   146,     0,     0,     0,     0,     0,     0,
     296,   -62,   -62,   220,   -62,   296,   -62,   -62,   -62,     0,
     220,     0,     0,     0,     0,     0,   300,   -60,   -60,   159,
      96,   300,    97,    98,    99,     0,   162,     0,     0,   224,
       0,   296,   300,     0,   265,     0,   296,   -60,   -62,     0,
       0,   265,     0,     0,   -62,   -62,   103,   104,    28,    29,
       0,    30,   296,     0,    31,   296,     0,   296,   269,     0,
     100,   101,   296,     0,     0,     0,   -50,   -50,     0,    96,
     196,    97,    98,    99,     0,     0,   331,    35,    36,    37,
       0,    38,    39,    40,    41,     0,   -50,     0,     0,     0,
     198,   296,     0,     0,     0,   280,    44,     0,   196,     0,
       0,     0,    45,   -50,   350,     0,     0,     0,     0,   100,
     101,   -43,   -43,     0,   -43,     0,     0,   -43,     0,   226,
       0,   198,     0,     0,     0,     0,     0,     0,     0,     0,
     271,     0,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   196,   -43,   -43,   -43,   -43,   -43,   379,
       0,     0,     0,     0,     0,     0,     0,     0,   -43,   -43,
     300,     0,   -43,   -43,     0,   -43,     0,     0,     0,     0,
       0,     0,     0,     0,   196,     0,     0,     0,     0,     0,
     400,   302,     0,     0,   -62,   -62,   302,   -62,     0,   -62,
     -62,   -62,     0,     0,   226,   224,   196,   302,     0,     0,
       0,   269,   -61,   -61,   -62,   -61,   416,   -61,   -61,   -61,
       0,     0,     0,   423,   224,   224,     0,     0,     0,     0,
     269,   -62,   -61,   271,     0,   436,     0,   -62,   -62,   103,
     104,     0,   443,   196,     0,   198,     0,     0,     0,   -61,
       0,   198,     0,   224,   269,   -61,   -61,   103,   104,   269,
       0,     0,     0,     0,   467,     0,    28,    29,     0,    30,
       0,   474,    31,   198,   224,   300,     0,     0,     0,   226,
     269,     0,     0,     0,     0,   488,     0,     0,     0,     0,
       0,     0,   495,     0,   300,    35,    36,    37,     0,    38,
      39,    40,    41,   300,   -60,   -60,   505,    96,   300,    97,
      98,    99,     0,   508,    44,     0,     0,     0,   198,     0,
      45,     0,     0,   300,   271,     0,   517,     0,   300,     0,
       0,     0,     0,   520,   199,   302,     0,     0,     0,     0,
       0,   -60,   -60,     0,     0,     0,     0,   100,   101,   198,
       0,     0,     0,     0,   300,   302,     0,   532,     0,   300,
       0,     0,     0,   227,   535,   199,     0,     0,     0,     0,
     226,   198,     0,     0,   272,   300,   271,     0,   544,     0,
     300,   198,     0,     0,     0,   547,     0,     0,   198,   226,
     226,   -52,   -52,     0,    96,   271,    97,    98,    99,     0,
     226,     0,     0,     0,     0,     0,     0,   226,   198,     0,
     -61,   -61,     0,   -61,   300,   -61,   -61,   -61,   226,   271,
       0,     0,     0,     0,   271,   303,   -52,     0,     0,   271,
     303,     0,     0,     0,   100,   101,   271,     0,   227,   226,
     302,   303,     0,     0,     0,   271,     0,   -61,     0,     0,
     302,     0,     0,   -61,   -61,   103,   104,   302,     0,   302,
       0,     0,     0,     0,     0,     0,     0,   272,   302,     0,
       0,   198,     0,   302,     0,     0,     0,     0,   198,   199,
       0,     0,     0,     0,     0,   199,     0,     0,   302,     0,
       0,   226,     0,   302,     0,     0,     0,     0,   226,   200,
       0,     0,     0,     0,     0,     0,     0,   199,     0,     0,
       0,   -61,   -61,   227,   -61,     0,   -61,   -61,   -61,   302,
       0,     0,   271,     0,   302,     0,     0,     0,   228,   271,
     200,     0,   251,   252,     0,   253,     0,     0,   254,   273,
     302,     0,     0,   302,     0,   302,   -61,     0,     0,     0,
     302,     0,   199,     0,   -61,   -61,   103,   104,   272,     0,
       0,   255,   256,   257,     0,   258,   259,   260,   261,   303,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   302,
     262,     0,     0,   199,     0,     0,    45,     0,     0,   303,
     304,     0,     0,   -62,   -62,   304,   -62,     0,   -62,   -62,
     -62,     0,     0,   228,   227,   199,   304,     0,     0,     0,
     272,   -61,   -61,   -62,   -61,   199,   -61,   -61,   -61,     0,
       0,     0,   199,   227,   227,     0,     0,     0,     0,   272,
       0,   -61,   273,     0,   227,     0,   -62,   -62,   103,   104,
       0,   227,   199,     0,   200,     0,     0,     0,     0,     0,
     200,     0,   227,   272,   -61,   -61,   103,   104,   272,     0,
       0,     0,     0,   272,     0,   282,   283,     0,   284,     0,
     272,   285,   200,   227,   303,     0,     0,     0,   228,   272,
       0,     0,     0,     0,   303,     0,     0,     0,     0,     0,
       0,   303,     0,   303,   286,   287,   288,     0,   289,   290,
     291,   292,   303,   -50,   -50,   199,    96,   303,    97,    98,
      99,     0,   199,   293,     0,     0,     0,   200,     0,    45,
       0,     0,   303,   273,     0,   227,     0,   303,     0,     0,
       0,     0,   227,   201,   304,     0,     0,     0,     0,     0,
     -50,   -50,     0,     0,     0,     0,   100,   101,   200,     0,
       0,     0,     0,   303,   304,     0,   272,     0,   303,     0,
       0,     0,   229,   272,   201,     0,     0,     0,     0,   228,
     200,     0,     0,   274,   303,   273,     0,   303,     0,   303,
     200,     0,     0,     0,   303,     0,     0,   200,   228,   228,
     -52,   -52,     0,    96,   273,    97,    98,    99,     0,   228,
       0,     0,     0,     0,     0,     0,   228,   200,     0,     0,
     -52,     0,     0,   303,     0,     0,     0,   228,   273,     0,
       0,     0,     0,   273,   305,     0,     0,   -52,   273,   305,
       0,     0,     0,   100,   101,   273,     0,   229,   228,   304,
     305,     0,     0,     0,   273,   -54,   -54,     0,    96,   304,
      97,    98,    99,     0,     0,     0,   304,     0,   304,     0,
       0,     0,     0,     0,     0,   -54,   274,   304,     0,     0,
     200,     0,   304,     0,     0,     0,     0,   200,   201,     0,
     195,     0,   -54,     0,   201,     0,     0,   304,   100,   101,
     228,     0,   304,   -56,   -56,     0,    96,   228,    97,    98,
      99,     0,     0,     0,     0,     0,   201,     0,     0,   223,
       0,   195,   229,   -56,     0,     0,     0,     0,   304,     0,
     268,   273,     0,   304,     0,     0,     0,     0,   273,     0,
     -56,   138,     0,     0,     0,     0,   100,   101,     0,   304,
       0,     0,   304,     0,   304,     0,     0,     0,   145,   304,
       0,   201,     0,     0,     0,     0,     0,   274,     0,     0,
       0,     0,     0,    28,    29,     0,    30,     0,   305,    31,
       0,   299,     0,     0,     0,     0,   299,     0,   304,     0,
       0,     0,   201,     0,   223,     0,     0,   299,   305,     0,
       0,     0,    35,    36,    37,     0,    38,    39,    40,    41,
       0,     0,     0,   229,   201,     0,     0,     0,     0,   274,
     355,    44,     0,   268,   201,     0,     0,    45,     0,     0,
       0,   201,   229,   229,     0,   195,     0,     0,   274,     0,
       0,   -54,   -54,   229,    96,     0,    97,    98,    99,     0,
     229,   201,   -52,   -52,     0,    96,     0,    97,    98,    99,
       0,   229,   274,   195,     0,     0,     0,   274,     0,     0,
       0,     0,   274,     0,     0,     0,   -54,     0,     0,   274,
       0,     0,   229,   305,   100,   101,     0,     0,   274,   -52,
     -52,     0,     0,   305,     0,   100,   101,     0,     0,     0,
     305,     0,   305,     0,     0,     0,     0,     0,   195,   190,
       0,   305,   -56,   -56,   201,    96,   305,    97,    98,    99,
       0,   201,     0,     0,     0,   299,     0,     0,     0,     0,
       0,   305,     0,     0,   229,     0,   305,     0,   218,   195,
     190,   229,     0,     0,     0,     0,     0,   -56,     0,   263,
       0,     0,     0,     0,     0,   100,   101,     0,     0,     0,
     223,   195,   305,     0,     0,   274,   268,   305,     0,     0,
     202,   415,   274,     0,     0,     0,     0,     0,   422,   223,
     223,     0,     0,   305,     0,   268,   305,     0,   305,     0,
     435,     0,     0,   305,     0,     0,     0,   442,   195,   230,
     294,   202,     0,     0,     0,   294,     0,     0,   223,   268,
     275,     0,     0,   218,   268,     0,   294,     0,     0,   466,
       0,     0,   305,     0,     0,     0,   473,     0,     0,   223,
     299,     0,     0,     0,     0,   268,     0,     0,     0,     0,
     487,     0,   263,     0,     0,     0,     0,   494,     0,   299,
       0,     0,     0,     0,   190,     0,     0,     0,   299,   -43,
     -43,   306,   -43,   299,     0,   -43,   306,     0,     0,     0,
       0,     0,     0,     0,   230,     0,     0,   306,   299,     0,
       0,     0,   190,   299,     0,     0,     0,     0,   -43,   -43,
     -43,     0,   -43,   -43,   -43,   -43,     0,     0,     0,     0,
       0,     0,     0,   275,     0,     0,   -43,   -43,     0,   299,
       0,     0,     0,   -43,   299,   202,     0,     0,     0,     0,
       0,     0,   203,     0,     0,     0,     0,   190,     0,     0,
     299,     0,     0,   -54,   -54,   299,    96,     0,    97,    98,
      99,     0,     0,   202,   294,     0,     0,     0,     0,     0,
       0,   231,     0,   203,     0,     0,     0,     0,   190,     0,
     -42,   -42,   276,   -42,     0,     0,   -42,     0,     0,   299,
     -54,   -54,     0,     0,     0,     0,   100,   101,     0,   218,
     190,     0,     0,     0,     0,   263,     0,     0,   202,   -42,
     -42,   -42,     0,   -42,   -42,   -42,   -42,     0,   218,   218,
       0,     0,     0,     0,   263,   306,     0,   -42,   -42,     0,
       0,     0,     0,   307,   -42,     0,     0,   190,   307,   202,
       0,     0,     0,     0,     0,     0,   231,   218,   263,   307,
       0,     0,     0,   263,     0,   204,     0,     0,     0,     0,
     230,   202,     0,     0,     0,     0,   275,     0,   218,   294,
     206,   207,     0,   208,   263,   276,   209,     0,     0,   230,
     230,     0,     0,     0,   232,   275,   204,   203,   294,     0,
       0,     0,     0,     0,     0,   277,     0,   294,   202,   210,
     211,   212,   294,   213,   214,   215,   216,     0,   230,   275,
       0,     0,     0,     0,   275,   203,     0,   294,   217,     0,
       0,     0,   294,     0,    45,     0,     0,     0,     0,   230,
     306,     0,     0,     0,     0,   275,   -58,   -58,     0,    96,
       0,    97,    98,    99,     0,     0,   308,     0,   294,   306,
       0,   308,     0,   294,     0,     0,   -58,     0,   306,   232,
     203,     0,   308,   306,     0,     0,     0,     0,     0,   294,
       0,     0,     0,   -58,   294,     0,     0,   307,   306,   100,
     101,     0,     0,   306,     0,     0,     0,     0,   277,   326,
       0,   203,     0,     0,     0,     0,     0,     0,   -69,   -69,
     204,   -69,     0,   -69,   -69,   -69,     0,     0,   294,   306,
       0,     0,   231,   203,   306,     0,     0,   345,   276,     0,
       0,     0,     0,   -43,   -43,     0,   -43,     0,   204,   -43,
     306,   231,   231,   -69,    73,   306,     0,   276,     0,    74,
       0,   -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,
     203,     0,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,
     231,   276,   374,     0,     0,     0,   276,     0,     0,   306,
       0,   -43,     0,   204,     0,     0,     0,   -43,     0,     0,
       0,   231,   307,     0,     0,     0,     0,   276,   -42,   -42,
     308,   -42,     0,   395,   -42,     0,     0,     0,     0,     0,
       0,   307,     0,     0,   204,     0,     0,     0,     0,     0,
     307,     0,     0,     0,     0,   307,     0,   -42,   -42,   -42,
       0,   -42,   -42,   -42,   -42,   232,   204,     0,   326,     0,
     307,   277,     0,     0,     0,   307,   -42,     0,     0,     0,
       0,     0,   -42,     0,   232,   232,     0,   345,   -56,   -56,
     277,    96,     0,    97,    98,    99,     0,     0,     0,     0,
       0,   307,     0,   204,   -58,   -58,   307,    96,     0,    97,
      98,    99,     0,   232,   277,     0,   374,     0,     0,   277,
       0,     0,   307,     0,     0,   -56,   -56,   307,     0,     0,
       0,   100,   101,     0,   232,   308,     0,   395,     0,     0,
     277,   -58,   -58,     0,     0,     0,     0,   100,   101,     0,
     -69,   -69,   326,   -69,   308,   -69,   -69,   -69,     0,   326,
       0,   307,     0,   308,     0,     0,     0,     0,   308,     0,
     -69,     0,   345,     0,     0,     0,     0,     0,     0,   345,
       0,     0,     0,   308,     0,     0,   362,     0,   308,     0,
       0,   363,     0,   -69,   -69,   -69,   -69,   -69,   -69,     0,
       0,     0,     0,   374,     0,     0,   -58,   -58,     0,    96,
     374,    97,    98,    99,   308,   -69,   -69,     0,   -69,   308,
     -69,   -69,   -69,     0,   395,     0,     0,     0,     0,     0,
       0,   395,     0,     0,     0,   308,     0,     0,     0,     0,
     308,   -58,   326,     0,     0,   326,     0,     0,     0,   100,
     101,   333,   -69,   -69,   345,     0,   334,   345,   -69,   -69,
     -69,   -69,   -69,   -69,   -29,   -29,     0,   -29,     0,   374,
     -29,     0,   374,     0,   308,     0,     0,     0,     0,     0,
       0,   395,     0,     0,   395,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,   -24,   -24,     0,   -24,     0,     0,   -24,     0,
       0,   -29,   -29,     0,     0,   -29,   -29,     0,   -29,     0,
       0,     0,     0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,
     -25,   -25,     0,   -25,     0,     0,   -25,     0,     0,   -24,
     -24,     0,     0,   -24,   -24,     0,   -24,     0,     0,     0,
       0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -26,   -26,
       0,   -26,     0,     0,   -26,     0,     0,   -25,   -25,     0,
       0,   -25,   -25,     0,   -25,     0,     0,     0,     0,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -30,   -30,     0,   -30,
       0,     0,   -30,     0,     0,   -26,   -26,     0,     0,   -26,
     -26,     0,   -26,     0,     0,     0,     0,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,   -27,   -27,     0,   -27,     0,     0,
     -27,     0,     0,   -30,   -30,     0,     0,   -30,   -30,     0,
     -30,     0,     0,     0,     0,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,
     -27,   -27,   -28,   -28,     0,   -28,     0,     0,   -28,     0,
       0,   -27,   -27,     0,     0,   -27,   -27,     0,   -27,     0,
       0,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
     -44,   -44,     0,   -44,     0,     0,   -44,     0,     0,   -28,
     -28,     0,     0,   -28,   -28,     0,   -28,     0,     0,     0,
       0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,    -7,    -7,
       0,    -7,     0,     0,    -7,     0,     0,   -44,   -44,     0,
       0,   -44,   -44,     0,   -44,     0,     0,     0,     0,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
       0,    -7,    -7,    -7,    -7,    -7,   -42,   -42,     0,   -42,
       0,     0,   -42,     0,     0,    -7,    -7,     0,     0,    -7,
      -7,     0,    -7,     0,     0,     0,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,
     -42,   -42,   -42,   -42,   -38,   -38,     0,   -38,     0,     0,
     -38,     0,     0,   -42,   -42,     0,     0,   -42,   -42,     0,
     -42,     0,     0,     0,     0,   -38,   -38,   -38,   -38,   -38,
     522,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,
     -38,   -38,   -45,   -45,     0,   -45,     0,     0,   -45,     0,
       0,   -38,   -38,     0,     0,   -38,   -38,     0,   -38,     0,
       0,     0,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,
     -31,   -31,     0,   -31,     0,     0,   -31,     0,     0,   -45,
     -45,     0,     0,   -45,   -45,     0,   -45,     0,     0,     0,
       0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -41,   -41,
       0,   -41,     0,     0,   -41,     0,     0,   -31,   -31,     0,
       0,   -31,   -31,     0,   -31,     0,     0,     0,     0,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
       0,   -41,   -41,   -41,   -41,   -41,   -32,   -32,     0,   -32,
       0,     0,   -32,     0,     0,   -41,   -41,     0,     0,   -41,
     -41,     0,   -41,     0,     0,     0,     0,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   -33,   -33,     0,   -33,     0,     0,
     -33,     0,     0,   -32,   -32,     0,     0,   -32,   -32,     0,
     -32,     0,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,
     -33,   -33,   -35,   -35,     0,   -35,     0,     0,   -35,     0,
       0,   -33,   -33,     0,     0,   -33,   -33,     0,   -33,     0,
       0,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,
     -34,   -34,     0,   -34,     0,     0,   -34,     0,     0,   -35,
     -35,     0,     0,   -35,   -35,     0,   -35,     0,     0,     0,
       0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -19,   -19,
       0,   -19,     0,     0,   -19,     0,     0,   -34,   -34,     0,
       0,   -34,   -34,     0,   -34,     0,     0,     0,     0,   -19,
     -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
       0,   -19,   -19,   -19,   -19,   -19,   -36,   -36,     0,   -36,
       0,     0,   -36,     0,     0,   -19,   -19,     0,     0,   -19,
     -19,     0,   -19,     0,     0,     0,     0,   -36,   -36,   -36,
     -36,   -36,   562,   -36,   -36,   -36,   -36,   -36,     0,   -36,
     -36,   -36,   -36,   -36,   -39,   -39,     0,   -39,     0,     0,
     -39,     0,     0,   -36,   -36,     0,     0,   -36,   -36,     0,
     -36,     0,     0,     0,     0,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,
     -39,   -39,   -37,   -37,     0,   -37,     0,     0,   -37,     0,
       0,   -39,   -39,     0,     0,   -39,   -39,     0,   -39,     0,
       0,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,
     -40,   -40,     0,   -40,     0,     0,   -40,     0,     0,   -37,
     -37,     0,     0,   -37,   -37,     0,   -37,     0,     0,     0,
       0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,    28,    29,
       0,    30,     0,     0,    31,     0,     0,   -40,   -40,     0,
       0,   -40,   -40,     0,   -40,     0,     0,     0,     0,     1,
       2,     3,     4,    32,     0,    33,    34,    35,    36,    37,
       0,    38,    39,    40,    41,    42,   -43,   -43,     0,   -43,
       0,     0,   -43,     0,     0,    43,    44,     0,     0,   174,
     -21,     0,    45,     0,     0,     0,     0,   -43,   -43,   -43,
     -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,   -29,   -29,     0,   -29,     0,     0,
     -29,     0,     0,   -43,   -43,     0,     0,   -43,   -43,     0,
     -43,     0,     0,     0,     0,   -29,   -29,   -29,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,   -24,   -24,     0,   -24,     0,     0,   -24,     0,
       0,   -29,   -29,     0,     0,   -29,   -29,     0,   -29,     0,
       0,     0,     0,   -24,   -24,   -24,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,
      28,    29,     0,    30,     0,     0,    31,     0,     0,   -24,
     -24,     0,     0,   -24,   -24,     0,   -24,     0,     0,     0,
       0,     1,     2,     3,     4,    32,     0,    33,    34,    35,
      36,    37,     0,    38,    39,    40,    41,    42,   -23,   -23,
       0,   -23,     0,     0,   -23,     0,     0,    43,    44,     0,
       0,   174,   -20,     0,    45,     0,     0,     0,     0,   -23,
     -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,
       0,   -23,   -23,   -23,   -23,   -23,   -25,   -25,     0,   -25,
       0,     0,   -25,     0,     0,   -23,   -23,     0,     0,   -23,
     -23,     0,   -23,     0,     0,     0,     0,   -25,   -25,   -25,
     -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,     0,   -25,
     -25,   -25,   -25,   -25,   -26,   -26,     0,   -26,     0,     0,
     -26,     0,     0,   -25,   -25,     0,     0,   -25,   -25,     0,
     -25,     0,     0,     0,     0,   -26,   -26,   -26,   -26,   -26,
       0,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,
     -26,   -26,   -30,   -30,     0,   -30,     0,     0,   -30,     0,
       0,   -26,   -26,     0,     0,   -26,   -26,     0,   -26,     0,
       0,     0,     0,   -30,   -30,   -30,   -30,   -30,     0,   -30,
     -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,
     -27,   -27,     0,   -27,     0,     0,   -27,     0,     0,   -30,
     -30,     0,     0,   -30,   -30,     0,   -30,     0,     0,     0,
       0,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,
     -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -28,   -28,
       0,   -28,     0,     0,   -28,     0,     0,   -27,   -27,     0,
       0,   -27,   -27,     0,   -27,     0,     0,     0,     0,   -28,
     -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,   -44,   -44,     0,   -44,
       0,     0,   -44,     0,     0,   -28,   -28,     0,     0,   -28,
     -28,     0,   -28,     0,     0,     0,     0,   -44,   -44,   -44,
     -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -44,   -44,   -44,   -44,   -22,   -22,     0,   -22,     0,     0,
     -22,     0,     0,   -44,   -44,     0,     0,   -44,   -44,     0,
     -44,     0,     0,     0,     0,   -22,   -22,   -22,   -22,   -22,
       0,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,   -22,
     -22,   -22,   -42,   -42,     0,   -42,     0,     0,   -42,     0,
       0,   -22,   -22,     0,     0,   -22,   -22,     0,   -22,     0,
       0,     0,     0,   -42,   -42,   -42,   -42,   -42,     0,   -42,
     -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,
     -45,   -45,     0,   -45,     0,     0,   -45,     0,     0,   -42,
     -42,     0,     0,   -42,   -42,     0,   -42,     0,     0,     0,
       0,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -31,   -31,
       0,   -31,     0,     0,   -31,     0,     0,   -45,   -45,     0,
       0,   -45,   -45,     0,   -45,     0,     0,     0,     0,   -31,
     -31,   -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -31,   -41,   -41,     0,   -41,
       0,     0,   -41,     0,     0,   -31,   -31,     0,     0,   -31,
     -31,     0,   -31,     0,     0,     0,     0,   -41,   -41,   -41,
     -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     -41,   -41,   -41,   -41,   -32,   -32,     0,   -32,     0,     0,
     -32,     0,     0,   -41,   -41,     0,     0,   -41,   -41,     0,
     -41,     0,     0,     0,     0,   -32,   -32,   -32,   -32,   -32,
       0,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,   -32,
     -32,   -32,   -33,   -33,     0,   -33,     0,     0,   -33,     0,
       0,   -32,   -32,     0,     0,   -32,   -32,     0,   -32,     0,
       0,     0,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,
     -35,   -35,     0,   -35,     0,     0,   -35,     0,     0,   -33,
     -33,     0,     0,   -33,   -33,     0,   -33,     0,     0,     0,
       0,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -35,
     -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -34,   -34,
       0,   -34,     0,     0,   -34,     0,     0,   -35,   -35,     0,
       0,   -35,   -35,     0,   -35,     0,     0,     0,     0,   -34,
     -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   -34,   -34,   -34,   -34,   -39,   -39,     0,   -39,
       0,     0,   -39,     0,     0,   -34,   -34,     0,     0,   -34,
     -34,     0,   -34,     0,     0,     0,     0,   -39,   -39,   -39,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,   -39,
     -39,   -39,   -39,   -39,   -37,   -37,     0,   -37,     0,     0,
     -37,     0,     0,   -39,   -39,     0,     0,   -39,   -39,     0,
     -39,     0,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,
     -37,   -37,   -40,   -40,     0,   -40,     0,     0,   -40,     0,
       0,   -37,   -37,     0,     0,   -37,   -37,     0,   -37,     0,
       0,     0,     0,   -40,   -40,   -40,   -40,   -40,     0,   -40,
     -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,
      -7,    -7,     0,    -7,     0,     0,    -7,     0,     0,   -40,
     -40,     0,     0,   -40,   -40,     0,   -40,     0,     0,     0,
       0,    -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,    -7,
      -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,   -19,   -19,
       0,   -19,     0,     0,   -19,     0,     0,    -7,    -7,     0,
       0,    -7,    -7,     0,    -7,     0,     0,     0,     0,   -19,
     -19,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,
       0,   -19,   -19,   -19,   -19,   -19,    28,    29,     0,    30,
       0,     0,    31,     0,     0,   -19,   -19,     0,     0,   -19,
     -19,     0,   -19,     0,     0,     0,     0,     1,     2,     3,
       4,    32,     0,    33,    34,    35,    36,    37,     0,    38,
      39,    40,    41,    42,   -91,   -91,     0,   -91,     0,     0,
     -91,     0,     0,    43,    44,     0,     0,   174,     0,     0,
      45,     0,     0,     0,     0,   -91,   -91,   -91,   -91,   -91,
       0,   -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,
     -91,   -91,   -69,   -69,     0,   -69,     0,   -69,   -69,   -69,
       0,   -91,   -91,     0,     0,   -91,   -69,   -69,   -91,   -69,
       0,   -69,   -69,   -69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -69,     0,   383,   -69,
       0,     0,     0,   384,     0,   -69,   -69,   -69,   -69,   -69,
     -69,     0,   314,   -69,     0,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,   -69,     0,
     -69,   -69,   -69,     0,     0,     0,     0,   -70,   -70,     0,
     -70,     0,   -70,   -70,   -70,     0,     0,     0,     0,     0,
       0,     0,     0,   -60,   -60,     0,    96,   -70,    97,    98,
      99,   333,   -69,   -69,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -70,     0,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -71,   -71,     0,   -71,
     -60,   -71,   -71,   -71,     0,     0,   100,   101,   -72,   -72,
       0,   -72,     0,   -72,   -72,   -72,   -71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -72,   -64,
     -64,     0,   -64,   -71,   -64,   -64,   -64,     0,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -72,     0,     0,     0,   -64,
       0,   -72,   -72,   -72,   -72,   -72,   -72,     0,   -66,   -66,
       0,   -66,     0,   -66,   -66,   -66,   -64,     0,     0,     0,
       0,     0,   -64,   -64,   -64,   -64,   106,   107,   -66,   -68,
     -68,     0,   -68,     0,   -68,   -68,   -68,     0,     0,     0,
       0,   -70,   -70,     0,   -70,   -66,   -70,   -70,   -70,   -68,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -71,   -71,     0,
     -71,     0,   -71,   -71,   -71,     0,   -68,     0,     0,     0,
       0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -70,   -70,
       0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,
       0,     0,     0,     0,   -71,   -71,     0,     0,     0,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -72,   -72,     0,   -72,
       0,   -72,   -72,   -72,     0,     0,     0,     0,   -64,   -64,
       0,   -64,     0,   -64,   -64,   -64,     0,     0,     0,     0,
     -66,   -66,     0,   -66,     0,   -66,   -66,   -66,     0,     0,
       0,     0,     0,   -72,   -72,     0,     0,     0,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -64,   -64,     0,     0,     0,
       0,   -64,   -64,   -64,   -64,   106,   107,   -66,   -66,     0,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -68,
     -68,     0,   -68,     0,   -68,   -68,   -68,     0,     0,     0,
       0,     0,   -69,   -69,     0,   -69,     0,   -69,   -69,   -69,
       0,     0,     0,     0,     0,     0,     0,     0,   -69,   -69,
       0,   -69,   -69,   -69,   -69,   -69,   -68,   -68,     0,     0,
       0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   362,     0,
       0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,     0,     0,     0,   383,   -69,     0,     0,     0,     0,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -67,   -67,     0,
     -67,     0,   -67,   -67,   -67,     0,     0,     0,     0,   -63,
     -63,     0,   -63,     0,   -63,   -63,   -63,   -67,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -63,
     -65,   -65,     0,   -65,   -67,   -65,   -65,   -65,     0,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -63,     0,     0,     0,
     -65,     0,   -63,   -63,   -63,   -63,   106,   107,   -67,   -67,
       0,   -67,     0,   -67,   -67,   -67,     0,   -65,     0,     0,
       0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -63,
     -63,     0,   -63,     0,   -63,   -63,   -63,     0,     0,     0,
       0,     0,     0,     0,     0,   -67,   -67,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -65,   -65,     0,
     -65,     0,   -65,   -65,   -65,     0,   -63,   -63,     0,     0,
       0,     0,   -63,   -63,   -63,   -63,   106,   107,  -103,  -103,
       0,  -103,     0,  -103,  -103,  -103,     0,     0,     0,     0,
       0,     0,     0,     0,   -65,   -65,     0,     0,  -103,     0,
     -65,   -65,   -65,   -65,   -65,   -65,  -103,  -103,     0,  -103,
       0,  -103,  -103,  -103,     0,  -103,     0,     0,     0,     0,
       0,  -103,  -103,  -103,  -103,  -103,  -103,   -70,   -70,     0,
     -70,     0,   -70,   -70,   -70,     0,     0,     0,     0,     0,
       0,     0,     0,  -103,  -103,     0,     0,     0,     0,  -103,
    -103,  -103,  -103,  -103,  -103,     0,     0,     0,   -71,   -71,
       0,   -71,   -70,   -71,   -71,   -71,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -72,   -72,     0,   -72,
       0,   -72,   -72,   -72,     0,     0,     0,     0,     0,     0,
       0,   -64,   -64,   -71,   -64,     0,   -64,   -64,   -64,     0,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -66,   -66,     0,
     -66,   -72,   -66,   -66,   -66,     0,     0,     0,     0,   -72,
     -72,   -72,   -72,   -72,   -72,     0,   -64,     0,     0,     0,
       0,     0,     0,     0,   -64,   -64,   -64,   -64,   106,   107,
     -68,   -68,   -66,   -68,     0,   -68,   -68,   -68,     0,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -67,   -67,     0,   -67,
       0,   -67,   -67,   -67,     0,     0,     0,     0,     0,     0,
       0,   -63,   -63,     0,   -63,   -68,   -63,   -63,   -63,     0,
       0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -65,
     -65,   -67,   -65,     0,   -65,   -65,   -65,     0,     0,   -67,
     -67,   -67,   -67,   -67,   -67,     0,   -63,     0,     0,     0,
       0,     0,     0,     0,   -63,   -63,   -63,   -63,   106,   107,
    -103,  -103,     0,  -103,   -65,  -103,  -103,  -103,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -70,   -70,
       0,   -70,     0,   -70,   -70,   -70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -103,     0,     0,   -70,     0,
       0,     0,     0,  -103,  -103,  -103,  -103,  -103,  -103,   -71,
     -71,     0,   -71,     0,   -71,   -71,   -71,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -72,   -72,   -71,
     -72,     0,   -72,   -72,   -72,     0,     0,     0,   -64,   -64,
       0,   -64,     0,   -64,   -64,   -64,     0,   -72,     0,     0,
       0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -64,   -66,
     -66,     0,   -66,     0,   -66,   -66,   -66,     0,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,     0,   -66,
       0,   -64,   -64,   -64,   -64,   106,   107,     0,   -68,   -68,
       0,   -68,     0,   -68,   -68,   -68,     0,     0,     0,     0,
       0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -68,   -70,
     -70,     0,   -70,     0,   -70,   -70,   -70,     0,     0,     0,
       0,   -71,   -71,     0,   -71,     0,   -71,   -71,   -71,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -72,   -72,     0,
     -72,     0,   -72,   -72,   -72,     0,   -70,     0,     0,     0,
       0,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -71,     0,
       0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -64,   -64,     0,   -64,   -72,   -64,   -64,   -64,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -66,   -66,     0,   -66,
       0,   -66,   -66,   -66,     0,     0,     0,     0,   -68,   -68,
       0,   -68,     0,   -68,   -68,   -68,     0,   -64,     0,     0,
       0,     0,     0,   -64,   -64,   -64,   -64,   106,   107,   -67,
     -67,     0,   -67,   -66,   -67,   -67,   -67,     0,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -68,     0,     0,     0,   -67,
       0,   -68,   -68,   -68,   -68,   -68,   -68,     0,   -63,   -63,
       0,   -63,     0,   -63,   -63,   -63,     0,     0,     0,     0,
       0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -63,   -65,
     -65,     0,   -65,     0,   -65,   -65,   -65,     0,     0,     0,
       0,   -67,   -67,     0,   -67,     0,   -67,   -67,   -67,   -65,
       0,   -63,   -63,   -63,   -63,   106,   107,   -63,   -63,     0,
     -63,     0,   -63,   -63,   -63,     0,     0,     0,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -67,     0,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -65,   -65,     0,   -65,   -63,   -65,   -65,   -65,     0,     0,
     -63,   -63,   -63,   -63,   106,   107,  -103,  -103,     0,  -103,
       0,  -103,  -103,  -103,     0,     0,     0,     0,  -103,  -103,
       0,  -103,     0,  -103,  -103,  -103,  -103,   -65,     0,     0,
       0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -50,
     -50,     0,    96,     0,    97,    98,    99,     0,     0,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,     0,     0,     0,   -50,
       0,  -103,  -103,  -103,  -103,  -103,  -103,   -50,   -50,     0,
      96,     0,    97,    98,    99,     0,     0,     0,     0,     0,
       0,     0,   100,   101,     0,   -52,   -52,     0,    96,     0,
      97,    98,    99,   -54,   -54,     0,    96,     0,    97,    98,
      99,     0,     0,     0,   -50,   -52,     0,     0,     0,     0,
     100,   101,     0,   -54,   -52,   -52,     0,    96,     0,    97,
      98,    99,     0,     0,     0,     0,     0,     0,   100,   101,
       0,     0,     0,     0,     0,     0,   100,   101,   -54,   -54,
       0,    96,     0,    97,    98,    99,     0,   -56,   -56,     0,
      96,   -52,    97,    98,    99,     0,     0,   100,   101,   -58,
     -58,     0,    96,     0,    97,    98,    99,   -56,     0,     0,
       0,   -56,   -56,     0,    96,   -54,    97,    98,    99,   -58,
       0,   100,   101,     0,     0,     0,     0,     0,     0,     0,
     100,   101,   -58,   -58,     0,    96,     0,    97,    98,    99,
       0,     0,   100,   101,     0,     0,     0,     0,   -56,     0,
       0,     0,     0,     0,   100,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -58,
       0,     0,     0,     0,     0,   100,   101
};

static const yytype_int16 yycheck[] =
{
       0,    23,     0,     7,   174,    36,     6,    76,     6,    34,
      16,    17,    49,    63,   314,   192,    16,    76,     0,    44,
      16,    17,    53,    76,    24,    76,    77,    16,    17,    88,
      36,    51,    52,   333,     7,    88,     7,    88,     7,    76,
      36,    76,    82,   220,    16,    17,    36,    53,    73,    74,
      75,    76,    77,    88,    76,     4,     5,    53,     7,    84,
      36,    10,   362,    53,    53,   193,    88,    51,   119,   239,
      16,    17,    16,    17,    16,    17,    76,    53,    76,    51,
     149,     4,     5,   383,     7,    16,    17,    10,   265,    36,
     149,     7,    36,   221,   119,     7,   149,    53,   149,     4,
       5,    36,     7,    52,    55,    10,    53,    53,    54,    53,
     135,    53,   149,   150,   149,   140,    16,    17,    53,   296,
      51,    16,    17,   148,   149,    52,   151,   149,    52,    52,
      16,    17,   169,   170,    16,    17,    36,    52,   266,    36,
     190,    52,    25,    26,    27,    28,   196,    52,    36,   149,
      36,   149,   177,    53,     4,     5,    53,     7,    53,    54,
      10,    52,    16,    17,   189,    53,    56,    53,   218,   297,
      53,    53,    54,    52,   224,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    52,    37,    38,    39,
      40,    41,   217,    36,    16,    17,    52,     4,     5,    53,
       7,    51,    52,    10,    36,    55,    56,    36,    58,    36,
      53,   236,    52,   263,     4,     5,    51,     7,    51,   269,
      10,    53,     4,     5,    53,     7,    53,    51,    10,    51,
      37,    38,    39,    40,    51,    16,    17,   262,    16,    17,
      51,   418,    16,    17,   294,    52,     7,    29,     7,    31,
     300,    33,    34,    35,   279,    37,    38,    39,    40,    41,
       7,   438,    52,    51,    16,    17,    53,    54,   293,    51,
      52,    36,    53,    55,    53,    53,    58,   317,   318,    53,
      54,    53,     4,     5,   353,     7,    16,    17,    10,   314,
     315,   419,   469,    36,   353,   320,   336,   337,   357,    53,
     353,    53,   353,   354,   357,    53,   357,    53,   333,   334,
      53,   439,    53,   490,   339,    53,   353,    36,   353,    16,
      17,    36,   357,    53,    54,   365,   366,   352,   353,   354,
      52,   353,   357,    36,    53,   357,     7,   362,   363,    16,
      17,    51,   470,   368,    16,    17,   386,   387,     4,     5,
      53,     7,    51,   353,    10,   353,    53,    54,   383,   384,
      53,    54,    51,   491,   389,    16,    17,     4,     5,    53,
       7,    53,    54,    10,     4,     5,    53,     7,   403,    51,
      10,    37,    38,    39,    40,    16,    17,   412,    16,    17,
      16,    17,   417,     0,    53,   446,    52,    51,    32,     6,
      51,    53,    58,    16,    17,    39,    40,   432,    42,    16,
      44,    53,   437,     4,     5,    52,     7,    24,     7,    10,
      51,   446,    52,    36,    51,    53,    54,    53,    54,    52,
      16,    17,    52,    19,    52,    21,    22,    23,   463,    73,
      53,    75,    52,   468,    16,    17,    37,    38,    39,    40,
      84,    52,   521,   522,     4,     5,    52,     7,    52,   484,
      10,    52,   521,   522,   489,    51,    52,    58,   521,   522,
     521,   522,    52,    59,    60,    61,    62,    63,    64,    16,
      17,    53,    54,    52,   521,   522,   521,   522,    52,    25,
      26,    27,    28,   562,   563,    52,   521,   522,   523,   521,
     522,   135,    52,   562,   563,    52,   140,    16,    17,   562,
     563,   562,   563,    52,   148,    36,    53,   151,    52,    16,
      17,   521,   522,   521,   522,   562,   563,   562,   563,    51,
       4,     5,    51,     7,    16,    17,    10,   562,   563,    52,
     562,   563,    51,   177,     4,     5,    52,     7,     4,     5,
      10,     7,   186,   187,    10,   189,    53,    54,    53,    54,
      52,   195,   562,   563,   562,   563,    16,    17,    16,    17,
      36,    53,    54,    16,    17,    44,     4,     5,    52,     7,
     214,   215,    10,   217,    36,    53,    54,     4,     5,   223,
       7,    52,    52,    10,    16,    17,    52,    52,    16,    17,
     234,    51,    51,   237,    73,    53,    75,    52,    51,    37,
      38,    39,    40,     4,     5,    84,     7,    16,    17,    10,
      37,    38,    39,    40,    52,   259,   260,    52,   262,    52,
      58,    53,    54,    51,   268,    52,    16,    17,    29,   108,
      31,    58,    33,    34,    35,   279,    37,    38,    39,    40,
      41,    16,    17,    53,    53,    54,   290,   291,    52,   293,
      51,    52,     8,     9,    55,   299,   135,    58,    53,    54,
      52,   140,    53,    53,    54,    16,    17,    53,    54,   148,
     314,   315,   151,    52,    16,    17,   320,    53,    53,     4,
       5,   325,     7,    16,    17,    10,    16,    17,   332,   333,
     334,    53,    54,     4,     5,   339,     7,    52,   177,    10,
     344,    51,    53,     4,     5,    36,     7,   351,   352,    10,
     189,    53,    37,    38,    39,    40,   195,    56,   362,   363,
      53,    54,     7,    53,   368,    53,    54,    52,     7,   373,
       7,     4,     5,    58,     7,    51,   380,    10,   217,   383,
     384,    52,     7,     7,   223,   389,     4,     5,     7,     7,
     394,    52,    10,    16,    17,    16,    17,   401,    56,   403,
      33,    34,    35,     7,    37,    38,    39,    40,   412,     4,
       5,   415,     7,   417,     7,    10,    16,    17,   422,    52,
      53,    53,    54,   262,     7,    58,    16,    17,   432,   268,
      53,   435,    53,   437,    52,     7,    36,    53,   442,     7,
     279,     7,    37,    38,    39,    40,    53,    16,    17,     4,
       5,    53,     7,    53,   293,    10,    53,    52,    36,   463,
     299,    51,   466,    58,   468,    53,    54,    16,    17,   473,
      19,    53,    21,    22,    23,   314,   315,    16,    17,    53,
     484,   320,    36,   487,    53,   489,   325,   326,   327,   328,
     494,    53,    54,   332,   333,   334,    53,    52,    16,    17,
     339,    53,    51,    53,    54,   344,   345,   346,   347,    44,
      59,    60,   351,   352,    53,    54,    16,    17,     7,   523,
      53,    54,    53,   362,   363,    16,    17,    53,    19,   368,
      21,    22,    23,    51,   373,   374,   375,   376,    73,    53,
      75,   380,    16,    17,   383,   384,    36,    16,    17,    84,
     389,    16,    17,    53,    54,   394,   395,   396,   397,    36,
      51,    53,   401,    36,   403,    16,    17,    36,    59,    60,
      61,    62,    53,   412,     4,     5,   415,     7,   417,    53,
      10,    16,    17,   422,    53,    36,    51,    53,    16,    17,
      16,    17,    53,   432,    16,    17,   435,    53,   437,    36,
     135,    36,    53,   442,    36,   140,    53,    37,    38,    39,
      40,    16,    17,   148,    36,    53,   151,    53,    53,    16,
      17,    36,    52,    51,   463,    51,    53,   466,    58,   468,
      53,    53,     4,     5,   473,     7,    53,    54,    10,    36,
      16,    17,   177,    53,    36,   484,    51,    53,   487,    53,
     489,    53,    16,    17,   189,   494,    53,    29,     7,    31,
     195,    33,    34,    35,    53,    37,    38,    39,    40,    41,
      16,    17,    36,    53,    44,    51,    36,    16,    17,    51,
      52,    36,   217,    55,   523,     0,    58,     7,   223,    53,
      36,    36,    53,     7,    53,     4,     5,    36,     7,    53,
      53,    10,    53,    73,     6,    75,    53,    53,    24,    53,
      25,    26,    27,    28,    84,    53,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,   262,    37,    38,
      39,    40,    41,   268,    53,   105,    53,    16,    17,    -1,
      16,    17,    51,    52,   279,    53,    55,    56,    53,    58,
      -1,    16,    17,     4,     5,    -1,     7,    36,   293,    10,
      36,   357,    16,    17,   299,   135,    -1,    -1,    -1,    -1,
     140,    36,    -1,    -1,    53,    16,    17,    53,   148,   314,
     315,   151,    36,    16,    17,   320,    37,    38,    39,    40,
     325,   326,   327,   328,    -1,    36,     0,   332,   333,   334,
      -1,    52,    -1,    36,   339,    -1,    -1,   177,    -1,   344,
     345,   346,   347,    -1,    16,    17,   351,   352,    -1,   189,
      53,    25,    26,    27,    28,   195,    -1,   362,   363,    -1,
       0,    16,    17,   368,    36,    -1,    -1,    -1,   373,   374,
     375,   376,    -1,    16,    17,   380,    -1,   217,   383,   384,
      -1,    36,    -1,   223,   389,    25,    26,    27,    28,   394,
     395,   396,   397,    36,    16,    17,   401,    -1,   403,    16,
      17,    -1,    19,    -1,    21,    22,    23,   412,    -1,    -1,
     415,    -1,   417,    -1,    36,    -1,    -1,   422,    -1,    36,
      -1,    -1,   262,     0,    -1,    -1,    -1,   432,   268,     0,
     435,    -1,   437,    -1,    -1,    52,    53,   442,    -1,   279,
      57,    -1,    59,    60,    61,    62,    63,    64,    25,    26,
      27,    28,    -1,   293,    25,    26,    27,    28,   463,   299,
      -1,   466,    -1,   468,    16,    17,    -1,    19,   473,    21,
      22,    23,    -1,    -1,   314,   315,    16,    17,    -1,   484,
     320,    -1,   487,    -1,   489,   325,   326,   327,     0,   494,
      -1,    -1,   332,   333,   334,    -1,    36,    16,    17,   339,
      -1,    53,    54,    -1,   344,   345,   346,    59,    60,    61,
      62,   351,   352,    25,    26,    27,    28,    36,   523,    16,
      17,    -1,   362,   363,    -1,    -1,    -1,    -1,   368,    -1,
      16,    17,     0,   373,   374,   375,    -1,    -1,    -1,    36,
     380,    -1,    -1,   383,   384,     4,     5,    -1,     7,   389,
      36,    10,    -1,    -1,   394,   395,   396,    25,    26,    27,
      28,   401,     0,   403,    16,    17,    -1,    44,    -1,    -1,
      -1,    -1,   412,    -1,    -1,   415,    -1,   417,    37,    38,
      39,    40,   422,    -1,    36,    62,    -1,    25,    26,    27,
      28,    -1,   432,    52,    -1,   435,    73,   437,    75,    16,
      17,    -1,   442,     4,     5,    -1,     7,    84,    -1,    10,
      16,    17,    16,    17,    16,    17,    -1,    -1,    95,    36,
      -1,    -1,    -1,   463,    -1,    -1,   466,    -1,   468,    -1,
      36,    -1,    36,   473,    36,   112,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,   484,    -1,    -1,   487,    -1,   489,
      -1,    52,    -1,    -1,   494,    -1,     4,     5,   135,     7,
      -1,   138,    10,   140,    -1,    -1,    -1,    -1,   145,    -1,
      -1,   148,    16,    17,   151,    19,    -1,    21,    22,    23,
      -1,    -1,    -1,   523,    -1,    33,    34,    35,    -1,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     177,    -1,    -1,    51,    52,    -1,    -1,    51,    -1,    -1,
      58,    -1,   189,    -1,    -1,    59,    60,    -1,   195,    -1,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     217,    25,    26,    27,    28,    29,   223,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    73,    -1,    75,    -1,    -1,    -1,    51,    52,    -1,
      -1,    55,    84,    -1,    58,    -1,    -1,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,   262,    -1,    -1,    -1,    -1,
     102,   268,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      -1,    19,   279,    21,    22,    23,    33,    34,    35,    -1,
      37,    38,    39,    40,    -1,    -1,   293,    -1,    36,    -1,
      -1,    -1,   299,   135,    51,    52,    -1,    -1,   140,    -1,
      -1,    58,    -1,    -1,    -1,    53,   148,   314,   315,   151,
      -1,    59,    60,   320,    -1,    -1,     4,     5,   325,     7,
      -1,    -1,    10,    -1,    -1,   332,   333,   334,    -1,    -1,
      -1,    -1,   339,    -1,    -1,   177,    -1,   344,    -1,    -1,
      -1,    -1,    -1,    -1,   351,   352,    -1,   189,    -1,    37,
      38,    39,    40,   195,    -1,   362,   363,    -1,    -1,    -1,
      -1,   368,    -1,    -1,    52,    -1,   373,    -1,     4,     5,
      -1,     7,    -1,   380,    10,   217,   383,   384,    -1,    -1,
      -1,   223,   389,    -1,    -1,    -1,    -1,   394,    -1,    -1,
      -1,    -1,    -1,    -1,   401,    -1,   403,    33,    34,    35,
      -1,    37,    38,    39,    40,   412,     4,     5,   415,     7,
     417,    -1,    10,    -1,    -1,   422,    52,    -1,    -1,    -1,
     262,    -1,    58,    -1,    -1,   432,   268,    -1,   435,    -1,
     437,    -1,    -1,    -1,    -1,   442,    -1,   279,    -1,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   293,    -1,    -1,    52,    -1,   463,   299,    -1,   466,
      -1,   468,    16,    17,    -1,    19,   473,    21,    22,    23,
      -1,    -1,   314,   315,    -1,    -1,    -1,   484,   320,    -1,
     487,    -1,   489,   325,   326,    -1,    -1,   494,    -1,    -1,
     332,   333,   334,    -1,    -1,    -1,    -1,   339,    -1,    53,
      54,    -1,   344,   345,    -1,    59,    60,    61,    62,   351,
     352,    -1,    -1,    -1,    -1,    44,   523,    -1,    -1,    -1,
     362,   363,    -1,    -1,    -1,    -1,   368,    -1,    -1,    -1,
      -1,   373,   374,    62,    -1,    -1,    -1,    -1,   380,    -1,
      -1,   383,   384,    -1,    73,    -1,    75,   389,    -1,    -1,
      -1,    -1,   394,   395,    -1,    84,    -1,    -1,    -1,   401,
      -1,   403,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,
     412,    -1,    -1,   415,    -1,   417,    -1,    -1,    -1,    -1,
     422,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,
     432,    16,    17,   435,    19,   437,    21,    22,    23,    -1,
     442,    -1,    -1,    -1,    -1,    -1,   135,    16,    17,   138,
      19,   140,    21,    22,    23,    -1,   145,    -1,    -1,   148,
      -1,   463,   151,    -1,   466,    -1,   468,    36,    53,    -1,
      -1,   473,    -1,    -1,    59,    60,    61,    62,     4,     5,
      -1,     7,   484,    -1,    10,   487,    -1,   489,   177,    -1,
      59,    60,   494,    -1,    -1,    -1,    16,    17,    -1,    19,
     189,    21,    22,    23,    -1,    -1,   195,    33,    34,    35,
      -1,    37,    38,    39,    40,    -1,    36,    -1,    -1,    -1,
      44,   523,    -1,    -1,    -1,    51,    52,    -1,   217,    -1,
      -1,    -1,    58,    53,   223,    -1,    -1,    -1,    -1,    59,
      60,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    73,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,   262,    37,    38,    39,    40,    41,   268,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
     279,    -1,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,    -1,    -1,
     299,   135,    -1,    -1,    16,    17,   140,    19,    -1,    21,
      22,    23,    -1,    -1,   148,   314,   315,   151,    -1,    -1,
      -1,   320,    16,    17,    36,    19,   325,    21,    22,    23,
      -1,    -1,    -1,   332,   333,   334,    -1,    -1,    -1,    -1,
     339,    53,    36,   177,    -1,   344,    -1,    59,    60,    61,
      62,    -1,   351,   352,    -1,   189,    -1,    -1,    -1,    53,
      -1,   195,    -1,   362,   363,    59,    60,    61,    62,   368,
      -1,    -1,    -1,    -1,   373,    -1,     4,     5,    -1,     7,
      -1,   380,    10,   217,   383,   384,    -1,    -1,    -1,   223,
     389,    -1,    -1,    -1,    -1,   394,    -1,    -1,    -1,    -1,
      -1,    -1,   401,    -1,   403,    33,    34,    35,    -1,    37,
      38,    39,    40,   412,    16,    17,   415,    19,   417,    21,
      22,    23,    -1,   422,    52,    -1,    -1,    -1,   262,    -1,
      58,    -1,    -1,   432,   268,    -1,   435,    -1,   437,    -1,
      -1,    -1,    -1,   442,    44,   279,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    -1,    -1,    59,    60,   293,
      -1,    -1,    -1,    -1,   463,   299,    -1,   466,    -1,   468,
      -1,    -1,    -1,    73,   473,    75,    -1,    -1,    -1,    -1,
     314,   315,    -1,    -1,    84,   484,   320,    -1,   487,    -1,
     489,   325,    -1,    -1,    -1,   494,    -1,    -1,   332,   333,
     334,    16,    17,    -1,    19,   339,    21,    22,    23,    -1,
     344,    -1,    -1,    -1,    -1,    -1,    -1,   351,   352,    -1,
      16,    17,    -1,    19,   523,    21,    22,    23,   362,   363,
      -1,    -1,    -1,    -1,   368,   135,    51,    -1,    -1,   373,
     140,    -1,    -1,    -1,    59,    60,   380,    -1,   148,   383,
     384,   151,    -1,    -1,    -1,   389,    -1,    53,    -1,    -1,
     394,    -1,    -1,    59,    60,    61,    62,   401,    -1,   403,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,   412,    -1,
      -1,   415,    -1,   417,    -1,    -1,    -1,    -1,   422,   189,
      -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,   432,    -1,
      -1,   435,    -1,   437,    -1,    -1,    -1,    -1,   442,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,
      -1,    16,    17,   223,    19,    -1,    21,    22,    23,   463,
      -1,    -1,   466,    -1,   468,    -1,    -1,    -1,    73,   473,
      75,    -1,     4,     5,    -1,     7,    -1,    -1,    10,    84,
     484,    -1,    -1,   487,    -1,   489,    51,    -1,    -1,    -1,
     494,    -1,   262,    -1,    59,    60,    61,    62,   268,    -1,
      -1,    33,    34,    35,    -1,    37,    38,    39,    40,   279,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   523,
      52,    -1,    -1,   293,    -1,    -1,    58,    -1,    -1,   299,
     135,    -1,    -1,    16,    17,   140,    19,    -1,    21,    22,
      23,    -1,    -1,   148,   314,   315,   151,    -1,    -1,    -1,
     320,    16,    17,    36,    19,   325,    21,    22,    23,    -1,
      -1,    -1,   332,   333,   334,    -1,    -1,    -1,    -1,   339,
      -1,    36,   177,    -1,   344,    -1,    59,    60,    61,    62,
      -1,   351,   352,    -1,   189,    -1,    -1,    -1,    -1,    -1,
     195,    -1,   362,   363,    59,    60,    61,    62,   368,    -1,
      -1,    -1,    -1,   373,    -1,     4,     5,    -1,     7,    -1,
     380,    10,   217,   383,   384,    -1,    -1,    -1,   223,   389,
      -1,    -1,    -1,    -1,   394,    -1,    -1,    -1,    -1,    -1,
      -1,   401,    -1,   403,    33,    34,    35,    -1,    37,    38,
      39,    40,   412,    16,    17,   415,    19,   417,    21,    22,
      23,    -1,   422,    52,    -1,    -1,    -1,   262,    -1,    58,
      -1,    -1,   432,   268,    -1,   435,    -1,   437,    -1,    -1,
      -1,    -1,   442,    44,   279,    -1,    -1,    -1,    -1,    -1,
      53,    54,    -1,    -1,    -1,    -1,    59,    60,   293,    -1,
      -1,    -1,    -1,   463,   299,    -1,   466,    -1,   468,    -1,
      -1,    -1,    73,   473,    75,    -1,    -1,    -1,    -1,   314,
     315,    -1,    -1,    84,   484,   320,    -1,   487,    -1,   489,
     325,    -1,    -1,    -1,   494,    -1,    -1,   332,   333,   334,
      16,    17,    -1,    19,   339,    21,    22,    23,    -1,   344,
      -1,    -1,    -1,    -1,    -1,    -1,   351,   352,    -1,    -1,
      36,    -1,    -1,   523,    -1,    -1,    -1,   362,   363,    -1,
      -1,    -1,    -1,   368,   135,    -1,    -1,    53,   373,   140,
      -1,    -1,    -1,    59,    60,   380,    -1,   148,   383,   384,
     151,    -1,    -1,    -1,   389,    16,    17,    -1,    19,   394,
      21,    22,    23,    -1,    -1,    -1,   401,    -1,   403,    -1,
      -1,    -1,    -1,    -1,    -1,    36,   177,   412,    -1,    -1,
     415,    -1,   417,    -1,    -1,    -1,    -1,   422,   189,    -1,
      44,    -1,    53,    -1,   195,    -1,    -1,   432,    59,    60,
     435,    -1,   437,    16,    17,    -1,    19,   442,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,    73,
      -1,    75,   223,    36,    -1,    -1,    -1,    -1,   463,    -1,
      84,   466,    -1,   468,    -1,    -1,    -1,    -1,   473,    -1,
      53,    95,    -1,    -1,    -1,    -1,    59,    60,    -1,   484,
      -1,    -1,   487,    -1,   489,    -1,    -1,    -1,   112,   494,
      -1,   262,    -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,
      -1,    -1,    -1,     4,     5,    -1,     7,    -1,   279,    10,
      -1,   135,    -1,    -1,    -1,    -1,   140,    -1,   523,    -1,
      -1,    -1,   293,    -1,   148,    -1,    -1,   151,   299,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39,    40,
      -1,    -1,    -1,   314,   315,    -1,    -1,    -1,    -1,   320,
      51,    52,    -1,   177,   325,    -1,    -1,    58,    -1,    -1,
      -1,   332,   333,   334,    -1,   189,    -1,    -1,   339,    -1,
      -1,    16,    17,   344,    19,    -1,    21,    22,    23,    -1,
     351,   352,    16,    17,    -1,    19,    -1,    21,    22,    23,
      -1,   362,   363,   217,    -1,    -1,    -1,   368,    -1,    -1,
      -1,    -1,   373,    -1,    -1,    -1,    51,    -1,    -1,   380,
      -1,    -1,   383,   384,    59,    60,    -1,    -1,   389,    53,
      54,    -1,    -1,   394,    -1,    59,    60,    -1,    -1,    -1,
     401,    -1,   403,    -1,    -1,    -1,    -1,    -1,   262,    44,
      -1,   412,    16,    17,   415,    19,   417,    21,    22,    23,
      -1,   422,    -1,    -1,    -1,   279,    -1,    -1,    -1,    -1,
      -1,   432,    -1,    -1,   435,    -1,   437,    -1,    73,   293,
      75,   442,    -1,    -1,    -1,    -1,    -1,    51,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
     314,   315,   463,    -1,    -1,   466,   320,   468,    -1,    -1,
      44,   325,   473,    -1,    -1,    -1,    -1,    -1,   332,   333,
     334,    -1,    -1,   484,    -1,   339,   487,    -1,   489,    -1,
     344,    -1,    -1,   494,    -1,    -1,    -1,   351,   352,    73,
     135,    75,    -1,    -1,    -1,   140,    -1,    -1,   362,   363,
      84,    -1,    -1,   148,   368,    -1,   151,    -1,    -1,   373,
      -1,    -1,   523,    -1,    -1,    -1,   380,    -1,    -1,   383,
     384,    -1,    -1,    -1,    -1,   389,    -1,    -1,    -1,    -1,
     394,    -1,   177,    -1,    -1,    -1,    -1,   401,    -1,   403,
      -1,    -1,    -1,    -1,   189,    -1,    -1,    -1,   412,     4,
       5,   135,     7,   417,    -1,    10,   140,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   148,    -1,    -1,   151,   432,    -1,
      -1,    -1,   217,   437,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   177,    -1,    -1,    51,    52,    -1,   463,
      -1,    -1,    -1,    58,   468,   189,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,   262,    -1,    -1,
     484,    -1,    -1,    16,    17,   489,    19,    -1,    21,    22,
      23,    -1,    -1,   217,   279,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    75,    -1,    -1,    -1,    -1,   293,    -1,
       4,     5,    84,     7,    -1,    -1,    10,    -1,    -1,   523,
      53,    54,    -1,    -1,    -1,    -1,    59,    60,    -1,   314,
     315,    -1,    -1,    -1,    -1,   320,    -1,    -1,   262,    33,
      34,    35,    -1,    37,    38,    39,    40,    -1,   333,   334,
      -1,    -1,    -1,    -1,   339,   279,    -1,    51,    52,    -1,
      -1,    -1,    -1,   135,    58,    -1,    -1,   352,   140,   293,
      -1,    -1,    -1,    -1,    -1,    -1,   148,   362,   363,   151,
      -1,    -1,    -1,   368,    -1,    44,    -1,    -1,    -1,    -1,
     314,   315,    -1,    -1,    -1,    -1,   320,    -1,   383,   384,
       4,     5,    -1,     7,   389,   177,    10,    -1,    -1,   333,
     334,    -1,    -1,    -1,    73,   339,    75,   189,   403,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,   412,   352,    33,
      34,    35,   417,    37,    38,    39,    40,    -1,   362,   363,
      -1,    -1,    -1,    -1,   368,   217,    -1,   432,    52,    -1,
      -1,    -1,   437,    -1,    58,    -1,    -1,    -1,    -1,   383,
     384,    -1,    -1,    -1,    -1,   389,    16,    17,    -1,    19,
      -1,    21,    22,    23,    -1,    -1,   135,    -1,   463,   403,
      -1,   140,    -1,   468,    -1,    -1,    36,    -1,   412,   148,
     262,    -1,   151,   417,    -1,    -1,    -1,    -1,    -1,   484,
      -1,    -1,    -1,    53,   489,    -1,    -1,   279,   432,    59,
      60,    -1,    -1,   437,    -1,    -1,    -1,    -1,   177,   191,
      -1,   293,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
     189,    19,    -1,    21,    22,    23,    -1,    -1,   523,   463,
      -1,    -1,   314,   315,   468,    -1,    -1,   219,   320,    -1,
      -1,    -1,    -1,     4,     5,    -1,     7,    -1,   217,    10,
     484,   333,   334,    51,    52,   489,    -1,   339,    -1,    57,
      -1,    59,    60,    61,    62,    63,    64,    -1,    -1,    -1,
     352,    -1,    33,    34,    35,    -1,    37,    38,    39,    40,
     362,   363,   264,    -1,    -1,    -1,   368,    -1,    -1,   523,
      -1,    52,    -1,   262,    -1,    -1,    -1,    58,    -1,    -1,
      -1,   383,   384,    -1,    -1,    -1,    -1,   389,     4,     5,
     279,     7,    -1,   295,    10,    -1,    -1,    -1,    -1,    -1,
      -1,   403,    -1,    -1,   293,    -1,    -1,    -1,    -1,    -1,
     412,    -1,    -1,    -1,    -1,   417,    -1,    33,    34,    35,
      -1,    37,    38,    39,    40,   314,   315,    -1,   330,    -1,
     432,   320,    -1,    -1,    -1,   437,    52,    -1,    -1,    -1,
      -1,    -1,    58,    -1,   333,   334,    -1,   349,    16,    17,
     339,    19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,   463,    -1,   352,    16,    17,   468,    19,    -1,    21,
      22,    23,    -1,   362,   363,    -1,   378,    -1,    -1,   368,
      -1,    -1,   484,    -1,    -1,    53,    54,   489,    -1,    -1,
      -1,    59,    60,    -1,   383,   384,    -1,   399,    -1,    -1,
     389,    53,    54,    -1,    -1,    -1,    -1,    59,    60,    -1,
      16,    17,   414,    19,   403,    21,    22,    23,    -1,   421,
      -1,   523,    -1,   412,    -1,    -1,    -1,    -1,   417,    -1,
      36,    -1,   434,    -1,    -1,    -1,    -1,    -1,    -1,   441,
      -1,    -1,    -1,   432,    -1,    -1,    52,    -1,   437,    -1,
      -1,    57,    -1,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,   465,    -1,    -1,    16,    17,    -1,    19,
     472,    21,    22,    23,   463,    16,    17,    -1,    19,   468,
      21,    22,    23,    -1,   486,    -1,    -1,    -1,    -1,    -1,
      -1,   493,    -1,    -1,    -1,   484,    -1,    -1,    -1,    -1,
     489,    51,   504,    -1,    -1,   507,    -1,    -1,    -1,    59,
      60,    52,    53,    54,   516,    -1,    57,   519,    59,    60,
      61,    62,    63,    64,     4,     5,    -1,     7,    -1,   531,
      10,    -1,   534,    -1,   523,    -1,    -1,    -1,    -1,    -1,
      -1,   543,    -1,    -1,   546,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    51,    52,    -1,    -1,    55,    56,    -1,    58,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    51,
      52,    -1,    -1,    55,    56,    -1,    58,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    51,    52,    -1,
      -1,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    51,    52,    -1,    -1,    55,
      56,    -1,    58,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    51,    52,    -1,    -1,    55,    56,    -1,
      58,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    51,    52,    -1,    -1,    55,    56,    -1,    58,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    51,
      52,    -1,    -1,    55,    56,    -1,    58,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    51,    52,    -1,
      -1,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    51,    52,    -1,    -1,    55,
      56,    -1,    58,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    51,    52,    -1,    -1,    55,    56,    -1,
      58,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    51,    52,    -1,    -1,    55,    56,    -1,    58,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    51,
      52,    -1,    -1,    55,    56,    -1,    58,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    51,    52,    -1,
      -1,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    51,    52,    -1,    -1,    55,
      56,    -1,    58,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    51,    52,    -1,    -1,    55,    56,    -1,
      58,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    51,    52,    -1,    -1,    55,    56,    -1,    58,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    51,
      52,    -1,    -1,    55,    56,    -1,    58,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    51,    52,    -1,
      -1,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    51,    52,    -1,    -1,    55,
      56,    -1,    58,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    51,    52,    -1,    -1,    55,    56,    -1,
      58,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    51,    52,    -1,    -1,    55,    56,    -1,    58,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    51,
      52,    -1,    -1,    55,    56,    -1,    58,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    51,    52,    -1,
      -1,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    51,    52,    -1,    -1,    55,
      56,    -1,    58,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    51,    52,    -1,    -1,    55,    56,    -1,
      58,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    51,    52,    -1,    -1,    55,    56,    -1,    58,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    51,
      52,    -1,    -1,    55,    56,    -1,    58,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    51,    52,    -1,
      -1,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    51,    52,    -1,    -1,    55,
      56,    -1,    58,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    51,    52,    -1,    -1,    55,    56,    -1,
      58,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    51,    52,    -1,    -1,    55,    56,    -1,    58,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    51,
      52,    -1,    -1,    55,    56,    -1,    58,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    51,    52,    -1,
      -1,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    51,    52,    -1,    -1,    55,
      56,    -1,    58,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    51,    52,    -1,    -1,    55,    56,    -1,
      58,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    51,    52,    -1,    -1,    55,    56,    -1,    58,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    51,
      52,    -1,    -1,    55,    56,    -1,    58,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    51,    52,    -1,
      -1,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    51,    52,    -1,    -1,    55,
      56,    -1,    58,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    51,    52,    -1,    -1,    55,    56,    -1,
      58,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    51,    52,    -1,    -1,    55,    56,    -1,    58,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    51,
      52,    -1,    -1,    55,    56,    -1,    58,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    51,    52,    -1,
      -1,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    51,    52,    -1,    -1,    55,
      56,    -1,    58,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    51,    52,    -1,    -1,    55,    56,    -1,
      58,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      -1,    51,    52,    -1,    -1,    55,    56,    -1,    58,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    -1,    51,
      52,    -1,    -1,    55,    56,    -1,    58,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    -1,    51,    52,    -1,
      -1,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    -1,    51,    52,    -1,    -1,    55,
      56,    -1,    58,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    -1,    51,    52,    -1,    -1,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    16,    17,    -1,    19,    -1,    21,    22,    23,
      -1,    51,    52,    -1,    -1,    55,    16,    17,    58,    19,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    52,    53,
      -1,    -1,    -1,    57,    -1,    59,    60,    61,    62,    63,
      64,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    16,    17,    -1,    19,    -1,
      21,    22,    23,    -1,    -1,    -1,    -1,    16,    17,    -1,
      19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    17,    -1,    19,    36,    21,    22,
      23,    52,    53,    54,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    53,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    16,    17,    -1,    19,
      53,    21,    22,    23,    -1,    -1,    59,    60,    16,    17,
      -1,    19,    -1,    21,    22,    23,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    16,
      17,    -1,    19,    53,    21,    22,    23,    -1,    -1,    59,
      60,    61,    62,    63,    64,    53,    -1,    -1,    -1,    36,
      -1,    59,    60,    61,    62,    63,    64,    -1,    16,    17,
      -1,    19,    -1,    21,    22,    23,    53,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    36,    16,
      17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,
      -1,    16,    17,    -1,    19,    53,    21,    22,    23,    36,
      -1,    59,    60,    61,    62,    63,    64,    16,    17,    -1,
      19,    -1,    21,    22,    23,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    53,    54,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    16,    17,    -1,    19,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      16,    17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    53,    54,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    53,    54,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    16,
      17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    16,    17,    -1,    19,    -1,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      -1,    19,    36,    21,    22,    23,    53,    54,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    16,    17,    -1,
      19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,    16,
      17,    -1,    19,    -1,    21,    22,    23,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      16,    17,    -1,    19,    53,    21,    22,    23,    -1,    -1,
      59,    60,    61,    62,    63,    64,    53,    -1,    -1,    -1,
      36,    -1,    59,    60,    61,    62,    63,    64,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    16,
      17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    16,    17,    -1,
      19,    -1,    21,    22,    23,    -1,    53,    54,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    36,    -1,
      59,    60,    61,    62,    63,    64,    16,    17,    -1,    19,
      -1,    21,    22,    23,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    16,    17,    -1,
      19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    -1,    -1,    -1,    16,    17,
      -1,    19,    51,    21,    22,    23,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    16,    17,    -1,    19,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    51,    19,    -1,    21,    22,    23,    -1,
      -1,    59,    60,    61,    62,    63,    64,    16,    17,    -1,
      19,    51,    21,    22,    23,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      16,    17,    51,    19,    -1,    21,    22,    23,    -1,    -1,
      59,    60,    61,    62,    63,    64,    16,    17,    -1,    19,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    19,    51,    21,    22,    23,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    16,
      17,    51,    19,    -1,    21,    22,    23,    -1,    -1,    59,
      60,    61,    62,    63,    64,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      16,    17,    -1,    19,    51,    21,    22,    23,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    16,
      17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    16,    17,    36,
      19,    -1,    21,    22,    23,    -1,    -1,    -1,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    36,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    36,    16,
      17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    36,
      -1,    59,    60,    61,    62,    63,    64,    -1,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    36,    16,
      17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,
      -1,    16,    17,    -1,    19,    -1,    21,    22,    23,    -1,
      -1,    59,    60,    61,    62,    63,    64,    16,    17,    -1,
      19,    -1,    21,    22,    23,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      16,    17,    -1,    19,    53,    21,    22,    23,    -1,    -1,
      59,    60,    61,    62,    63,    64,    16,    17,    -1,    19,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    16,
      17,    -1,    19,    53,    21,    22,    23,    -1,    -1,    59,
      60,    61,    62,    63,    64,    53,    -1,    -1,    -1,    36,
      -1,    59,    60,    61,    62,    63,    64,    -1,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    36,    16,
      17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,
      -1,    16,    17,    -1,    19,    -1,    21,    22,    23,    36,
      -1,    59,    60,    61,    62,    63,    64,    16,    17,    -1,
      19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      16,    17,    -1,    19,    53,    21,    22,    23,    -1,    -1,
      59,    60,    61,    62,    63,    64,    16,    17,    -1,    19,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    16,    17,
      -1,    19,    -1,    21,    22,    23,    36,    53,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    16,
      17,    -1,    19,    -1,    21,    22,    23,    -1,    -1,    59,
      60,    61,    62,    63,    64,    53,    -1,    -1,    -1,    36,
      -1,    59,    60,    61,    62,    63,    64,    16,    17,    -1,
      19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    -1,    16,    17,    -1,    19,    -1,
      21,    22,    23,    16,    17,    -1,    19,    -1,    21,    22,
      23,    -1,    -1,    -1,    53,    36,    -1,    -1,    -1,    -1,
      59,    60,    -1,    36,    16,    17,    -1,    19,    -1,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    16,    17,
      -1,    19,    -1,    21,    22,    23,    -1,    16,    17,    -1,
      19,    53,    21,    22,    23,    -1,    -1,    59,    60,    16,
      17,    -1,    19,    -1,    21,    22,    23,    36,    -1,    -1,
      -1,    16,    17,    -1,    19,    53,    21,    22,    23,    36,
      -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    16,    17,    -1,    19,    -1,    21,    22,    23,
      -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    59,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    25,    26,    27,    28,    66,    67,    68,    69,    70,
      71,    72,     0,    68,    51,     7,    52,    70,    72,    73,
      74,    75,     7,    53,    54,    55,    76,    75,     4,     5,
       7,    10,    29,    31,    32,    33,    34,    35,    37,    38,
      39,    40,    41,    51,    52,    58,    69,    76,    77,    78,
      79,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   107,    52,    57,    52,    98,    52,    51,    86,
      52,    52,    52,    52,    52,    98,    98,    52,    98,    86,
      56,    79,    51,    16,    17,    93,    19,    21,    22,    23,
      59,    60,    94,    61,    62,    95,    63,    64,    96,     7,
      88,    97,    93,    86,   108,   109,    86,    86,    79,    84,
      51,     7,     8,     9,   106,   106,     7,    86,     7,    76,
      80,    81,    82,    83,    84,    36,    53,    88,    92,    97,
      52,    89,    90,    91,    88,    92,    97,    53,    54,    53,
      30,    84,    53,    53,    53,    53,    36,    86,    88,    97,
      86,    88,    97,    86,    79,    79,    86,     7,    53,    30,
      53,    53,    79,    79,    55,    70,    72,    52,     4,     5,
       7,    10,    33,    34,    35,    37,    38,    39,    40,    52,
      87,    88,    89,    90,    91,    92,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   107,     4,     5,     7,    10,
      33,    34,    35,    37,    38,    39,    40,    52,    87,    88,
      89,    90,    91,    92,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   107,    29,    31,    32,    41,    51,    55,
      69,    70,    76,    81,    82,    83,    84,    85,    86,    51,
      86,     4,     5,     7,    10,    33,    34,    35,    37,    38,
      39,    40,    52,    87,    88,    89,    90,    91,    92,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   107,    36,
      51,    86,     4,     5,     7,    10,    33,    34,    35,    37,
      38,    39,    40,    52,    87,    88,    89,    90,    91,    92,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   107,
      77,    51,     7,    86,    52,    57,    52,    52,    52,    52,
      52,    98,    98,    52,    86,    93,    94,    95,    96,     7,
      88,    97,    93,    52,    57,    52,    52,    52,    52,    52,
      98,    98,    52,    86,    93,    94,    95,    96,     7,    88,
      97,    93,    52,    98,    52,    51,    86,    98,    77,    51,
      51,    51,    52,    57,    52,    52,    52,    52,    52,    98,
      98,    52,    86,    93,    94,    95,    96,     7,    88,    97,
      93,    86,    51,    52,    57,    52,    52,    52,    52,    52,
      98,    98,    52,    86,    93,    94,    95,    96,     7,    88,
      97,    93,    56,    36,   108,    86,     7,   106,   106,     7,
      86,     7,    36,    53,    88,    92,    97,    52,    89,    90,
      91,    88,    92,    97,   108,    86,     7,   106,   106,     7,
      86,     7,    36,    53,    88,    92,    97,    52,    89,    90,
      91,    88,    92,    97,    86,    79,    84,    51,    76,    80,
      81,    82,    83,    84,    56,   108,    86,     7,   106,   106,
       7,    86,     7,    36,    53,    88,    92,    97,    52,    89,
      90,    91,    88,    92,    97,    53,   108,    86,     7,   106,
     106,     7,    86,     7,    36,    53,    88,    92,    97,    52,
      89,    90,    91,    88,    92,    97,    86,    53,    53,    53,
      53,    53,    36,    86,    88,    97,    86,    88,    97,    53,
      53,    53,    53,    53,    36,    86,    88,    97,    86,    88,
      97,    53,    30,    84,    53,    53,    53,    53,    53,    36,
      86,    88,    97,    86,    88,    97,    53,    53,    53,    53,
      53,    36,    86,    88,    97,    86,    88,    97,    53,     7,
      53,     7,    53,    79,    79,    86,     7,    53,     7,    53,
      53,    53,    30,    53,    53,    53,    79,    79
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    65,    66,    67,    67,    68,    68,    69,    70,    71,
      72,    72,    72,    72,    73,    73,    74,    74,    75,    76,
      77,    77,    78,    78,    79,    79,    79,    79,    79,    79,
      79,    80,    80,    80,    80,    80,    81,    81,    81,    81,
      82,    83,    84,    84,    85,    85,    86,    86,    86,    86,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    88,    88,    89,    89,    90,    90,    91,    91,    91,
      91,    91,    91,    92,    93,    93,    94,    94,    94,    94,
      94,    94,    95,    95,    96,    96,    97,    97,    97,    97,
      97,    98,    99,   100,   101,   102,   103,   103,   104,   105,
     105,   106,   106,   107,   108,   108,   109,   109
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
       1,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     4,     2,     2,     6,     1,     1,     4,     4,
       4,     1,     1,     4,     1,     0,     3,     1
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
#line 84 "anasin.y"
                          { printf("program\n"); }
#line 3203 "anasin.tab.c"
    break;

  case 3: /* declaration-list: declaration-list declaration  */
#line 86 "anasin.y"
                                               { printf("declaration-list  ->  declaration-list declaration\n"); }
#line 3209 "anasin.tab.c"
    break;

  case 4: /* declaration-list: declaration  */
#line 87 "anasin.y"
                              { printf("declaration-list  ->  declaration\n"); }
#line 3215 "anasin.tab.c"
    break;

  case 5: /* declaration: var-declaration  */
#line 89 "anasin.y"
                             { printf("declaration  ->  var-declaration\n"); }
#line 3221 "anasin.tab.c"
    break;

  case 6: /* declaration: func-declaration  */
#line 90 "anasin.y"
                              { printf("declaration  ->  func-declaration\n"); }
#line 3227 "anasin.tab.c"
    break;

  case 7: /* var-declaration: variable ';'  */
#line 92 "anasin.y"
                              { printf("var declaration  ->  variable ;\n"); }
#line 3233 "anasin.tab.c"
    break;

  case 8: /* variable: type-specifier ID  */
#line 94 "anasin.y"
                            { printf("variable  ->  type-specifier %s\n", (yyvsp[0].token_name)); }
#line 3239 "anasin.tab.c"
    break;

  case 9: /* func-declaration: type-specifier ID '(' parameters ')' compound-stmt  */
#line 96 "anasin.y"
                                                                     { printf("func-declaration  ->  type-specifier %s ( parameters ) compount-stmt\n", (yyvsp[-4].token_name)); }
#line 3245 "anasin.tab.c"
    break;

  case 10: /* type-specifier: TYPEINT  */
#line 98 "anasin.y"
                        { printf("type-specifier  ->  %s\n", (yyvsp[0].token_name)); }
#line 3251 "anasin.tab.c"
    break;

  case 11: /* type-specifier: TYPEFLOAT  */
#line 99 "anasin.y"
                          { printf("type-specifier  ->  %s\n", (yyvsp[0].token_name)); }
#line 3257 "anasin.tab.c"
    break;

  case 12: /* type-specifier: TYPEELEM  */
#line 100 "anasin.y"
                         { printf("type-specifier  ->  %s\n", (yyvsp[0].token_name)); }
#line 3263 "anasin.tab.c"
    break;

  case 13: /* type-specifier: TYPESET  */
#line 101 "anasin.y"
                        { printf("type-specifier  ->  %s\n", (yyvsp[0].token_name)); }
#line 3269 "anasin.tab.c"
    break;

  case 14: /* parameters: parameter-list  */
#line 103 "anasin.y"
                           { printf("parameters  ->  parameter-list\n"); }
#line 3275 "anasin.tab.c"
    break;

  case 15: /* parameters: %empty  */
#line 104 "anasin.y"
                   { printf("parameters  ->\n"); }
#line 3281 "anasin.tab.c"
    break;

  case 16: /* parameter-list: parameter-list ',' parameter  */
#line 106 "anasin.y"
                                             { printf("parameter-list  ->  parameter-list , parameter\n"); }
#line 3287 "anasin.tab.c"
    break;

  case 17: /* parameter-list: parameter  */
#line 107 "anasin.y"
                          { printf("parameter-list  ->  parameter\n"); }
#line 3293 "anasin.tab.c"
    break;

  case 18: /* parameter: variable  */
#line 109 "anasin.y"
                    { printf("parameter  ->  variable\n"); }
#line 3299 "anasin.tab.c"
    break;

  case 19: /* compound-stmt: '{' local-declarations '}'  */
#line 111 "anasin.y"
                                          { printf("compound-stmt  ->  { local-declarations }\n"); }
#line 3305 "anasin.tab.c"
    break;

  case 20: /* local-declarations: statement-list  */
#line 113 "anasin.y"
                                   { printf("local-declarations  ->  statement-list\n"); }
#line 3311 "anasin.tab.c"
    break;

  case 21: /* local-declarations: %empty  */
#line 114 "anasin.y"
                           { printf("local-declarations  ->\n"); }
#line 3317 "anasin.tab.c"
    break;

  case 22: /* statement-list: statement-list statement  */
#line 116 "anasin.y"
                                         { printf("statement-list  ->  statement-list statement\n"); }
#line 3323 "anasin.tab.c"
    break;

  case 23: /* statement-list: statement  */
#line 117 "anasin.y"
                          { printf("statement-list  ->  statement\n"); }
#line 3329 "anasin.tab.c"
    break;

  case 24: /* statement: compound-stmt  */
#line 119 "anasin.y"
                         { printf("statement  ->  compound-stmt \n"); }
#line 3335 "anasin.tab.c"
    break;

  case 25: /* statement: conditional-stmt  */
#line 120 "anasin.y"
                            { printf("statement  ->  conditional-stmt \n" ); }
#line 3341 "anasin.tab.c"
    break;

  case 26: /* statement: iteration-stmt  */
#line 121 "anasin.y"
                          { printf("statement  ->  iteration-stmt \n" ); }
#line 3347 "anasin.tab.c"
    break;

  case 27: /* statement: expression-stmt  */
#line 122 "anasin.y"
                           { printf("statement  ->  expression-stmt \n" ); }
#line 3353 "anasin.tab.c"
    break;

  case 28: /* statement: return-stmt  */
#line 123 "anasin.y"
                       { printf("statement  ->  return-stmt \n" ); }
#line 3359 "anasin.tab.c"
    break;

  case 29: /* statement: var-declaration  */
#line 124 "anasin.y"
                           { printf("statement  ->  var-declaration \n"); }
#line 3365 "anasin.tab.c"
    break;

  case 30: /* statement: forall-stmt  */
#line 125 "anasin.y"
                       { printf("statement  ->  forall-stmt \n"); }
#line 3371 "anasin.tab.c"
    break;

  case 31: /* forall-statement: compound-stmt  */
#line 127 "anasin.y"
                                { printf("statement  ->  compound-stmt \n"); }
#line 3377 "anasin.tab.c"
    break;

  case 32: /* forall-statement: conditional-stmt  */
#line 128 "anasin.y"
                                   { printf("statement  ->  conditional-stmt \n" ); }
#line 3383 "anasin.tab.c"
    break;

  case 33: /* forall-statement: iteration-stmt  */
#line 129 "anasin.y"
                                 { printf("statement  ->  iteration-stmt \n" ); }
#line 3389 "anasin.tab.c"
    break;

  case 34: /* forall-statement: expression-stmt  */
#line 130 "anasin.y"
                                  { printf("statement  ->  expression-stmt \n" ); }
#line 3395 "anasin.tab.c"
    break;

  case 35: /* forall-statement: forall-stmt  */
#line 131 "anasin.y"
                              { printf("statement  ->  forall-stmt \n"); }
#line 3401 "anasin.tab.c"
    break;

  case 36: /* conditional-stmt: IF '(' expression ')' statement  */
#line 134 "anasin.y"
                                                            { printf("conditional-stmt  ->  if ( expression ) statement \n"); }
#line 3407 "anasin.tab.c"
    break;

  case 37: /* conditional-stmt: IF '(' expression ')' statement ELSE statement  */
#line 135 "anasin.y"
                                                                 { printf("conditional-stmt  ->  if ( expression ) statement else statement\n"); }
#line 3413 "anasin.tab.c"
    break;

  case 38: /* conditional-stmt: IF setop-in statement  */
#line 136 "anasin.y"
                                                  { printf("conditional-stmt  ->  if ( expression ) statement \n"); }
#line 3419 "anasin.tab.c"
    break;

  case 39: /* conditional-stmt: IF setop-in statement ELSE statement  */
#line 137 "anasin.y"
                                                       { printf("conditional-stmt  ->  if ( expression ) statement else statement\n"); }
#line 3425 "anasin.tab.c"
    break;

  case 40: /* iteration-stmt: FOR '(' expression-stmt expression-stmt expression ')' statement  */
#line 139 "anasin.y"
                                                                                 { printf("iteration-stmt  ->  for ( expression ; expression ; expression ) statement\n"); }
#line 3431 "anasin.tab.c"
    break;

  case 41: /* forall-stmt: FORALL_OP setop-in forall-statement  */
#line 142 "anasin.y"
                                                 { printf("setop-forall  ->  setop-in forall-statement\n"); }
#line 3437 "anasin.tab.c"
    break;

  case 42: /* expression-stmt: expression ';'  */
#line 145 "anasin.y"
                                { printf("expression-stmt  ->  expression ;\n"); }
#line 3443 "anasin.tab.c"
    break;

  case 43: /* expression-stmt: ';'  */
#line 146 "anasin.y"
                     { printf("expression-stmt  ->  ; \n"); }
#line 3449 "anasin.tab.c"
    break;

  case 45: /* return-stmt: RETURN expression ';'  */
#line 149 "anasin.y"
                                   { printf("return-stmt  ->  return ; \n"); }
#line 3455 "anasin.tab.c"
    break;

  case 46: /* expression: ID '=' expression  */
#line 151 "anasin.y"
                              { printf("expression  ->  %s = expression ;\n", (yyvsp[-2].token_name)); }
#line 3461 "anasin.tab.c"
    break;

  case 47: /* expression: simple-expression  */
#line 152 "anasin.y"
                              { printf("expression  ->  simple-expression ;\n"); }
#line 3467 "anasin.tab.c"
    break;

  case 48: /* expression: set-expression  */
#line 153 "anasin.y"
                           { printf("expression  ->  set-expression ;\n"); }
#line 3473 "anasin.tab.c"
    break;

  case 49: /* expression: io-expression  */
#line 154 "anasin.y"
                          { printf("expression  ->  io-expression ;\n"); }
#line 3479 "anasin.tab.c"
    break;

  case 50: /* simple-expression: logop-una relational-exp  */
#line 156 "anasin.y"
                                            { printf("simple-expression  ->  logop-una relational-exp simple-expression\n"); }
#line 3485 "anasin.tab.c"
    break;

  case 51: /* simple-expression: logop-una set-expression  */
#line 157 "anasin.y"
                                            { printf("simple-expression  ->  logop-una relational-exp simple-expression\n"); }
#line 3491 "anasin.tab.c"
    break;

  case 52: /* simple-expression: simple-expression logop-bin relational-exp  */
#line 158 "anasin.y"
                                                              { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3497 "anasin.tab.c"
    break;

  case 53: /* simple-expression: simple-expression logop-bin set-expression  */
#line 159 "anasin.y"
                                                              { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3503 "anasin.tab.c"
    break;

  case 54: /* simple-expression: set-expression logop-bin relational-exp  */
#line 160 "anasin.y"
                                                           { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3509 "anasin.tab.c"
    break;

  case 55: /* simple-expression: set-expression logop-bin set-expression  */
#line 161 "anasin.y"
                                                           { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3515 "anasin.tab.c"
    break;

  case 56: /* simple-expression: simple-expression logop-bin logop-una relational-exp  */
#line 162 "anasin.y"
                                                                        { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3521 "anasin.tab.c"
    break;

  case 57: /* simple-expression: simple-expression logop-bin logop-una set-expression  */
#line 163 "anasin.y"
                                                                        { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3527 "anasin.tab.c"
    break;

  case 58: /* simple-expression: set-expression logop-bin logop-una relational-exp  */
#line 164 "anasin.y"
                                                                     { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3533 "anasin.tab.c"
    break;

  case 59: /* simple-expression: set-expression logop-bin logop-una set-expression  */
#line 165 "anasin.y"
                                                                     { printf("simple-expression  ->  simple-expression logop-bin relational-exp\n"); }
#line 3539 "anasin.tab.c"
    break;

  case 60: /* simple-expression: relational-exp  */
#line 166 "anasin.y"
                                  { printf("simple-expression  ->  relational-exp\n"); }
#line 3545 "anasin.tab.c"
    break;

  case 61: /* relational-exp: relational-exp relop arithm-add-exp  */
#line 168 "anasin.y"
                                                    { printf("relational-exp  ->  arithm-add-exp relop arithm-add-exp\n"); }
#line 3551 "anasin.tab.c"
    break;

  case 62: /* relational-exp: arithm-add-exp  */
#line 169 "anasin.y"
                               { printf("relational-exp  ->  arithm-add-exp\n"); }
#line 3557 "anasin.tab.c"
    break;

  case 63: /* arithm-add-exp: arithm-add-exp ariop-add arithm-mul-exp  */
#line 171 "anasin.y"
                                                        { printf("arithm-add-exp  ->  arithm-add-exp ariop-add arithm-mul-exp\n"); }
#line 3563 "anasin.tab.c"
    break;

  case 64: /* arithm-add-exp: arithm-mul-exp  */
#line 172 "anasin.y"
                               { printf("arithm-add-exp  ->  arithm-mul-exp\n"); }
#line 3569 "anasin.tab.c"
    break;

  case 65: /* arithm-mul-exp: arithm-mul-exp ariop-mul factor  */
#line 174 "anasin.y"
                                                { printf("arithm-mul-exp  ->  arithm-mul-exp ariop-mul factor\n"); }
#line 3575 "anasin.tab.c"
    break;

  case 66: /* arithm-mul-exp: factor  */
#line 175 "anasin.y"
                       { printf("arithm-mul-exp  ->  factor\n"); }
#line 3581 "anasin.tab.c"
    break;

  case 67: /* factor: '(' expression ')'  */
#line 177 "anasin.y"
                           { printf("factor  ->  ( expression )\n"); }
#line 3587 "anasin.tab.c"
    break;

  case 68: /* factor: func-call  */
#line 178 "anasin.y"
                  { printf("factor  ->  func-call\n"); }
#line 3593 "anasin.tab.c"
    break;

  case 69: /* factor: ID  */
#line 179 "anasin.y"
           { printf("factor  ->  %s\n", (yyvsp[0].token_name)); }
#line 3599 "anasin.tab.c"
    break;

  case 70: /* factor: INT  */
#line 180 "anasin.y"
            { printf("factor  ->  %s\n", (yyvsp[0].token_name)); }
#line 3605 "anasin.tab.c"
    break;

  case 71: /* factor: FLOAT  */
#line 181 "anasin.y"
              { printf("factor  ->  %s\n", (yyvsp[0].token_name)); }
#line 3611 "anasin.tab.c"
    break;

  case 72: /* factor: EMPTY  */
#line 182 "anasin.y"
              { printf("factor  ->  %s\n", (yyvsp[0].token_name)); }
#line 3617 "anasin.tab.c"
    break;

  case 73: /* logop-una: '!'  */
#line 184 "anasin.y"
                { printf("logop-una  ->  !\n"); }
#line 3623 "anasin.tab.c"
    break;

  case 74: /* logop-bin: AND  */
#line 186 "anasin.y"
               { printf("logop-bin  ->  &&\n"); }
#line 3629 "anasin.tab.c"
    break;

  case 75: /* logop-bin: OR  */
#line 187 "anasin.y"
              { printf("logop-bin  ->  ||\n"); }
#line 3635 "anasin.tab.c"
    break;

  case 76: /* relop: '<'  */
#line 189 "anasin.y"
           { printf("relop  ->  <\n"); }
#line 3641 "anasin.tab.c"
    break;

  case 77: /* relop: LTE  */
#line 190 "anasin.y"
           { printf("relop  ->  <=\n"); }
#line 3647 "anasin.tab.c"
    break;

  case 78: /* relop: '>'  */
#line 191 "anasin.y"
           { printf("relop  ->  >\n"); }
#line 3653 "anasin.tab.c"
    break;

  case 79: /* relop: GTE  */
#line 192 "anasin.y"
           { printf("relop  ->  >=\n"); }
#line 3659 "anasin.tab.c"
    break;

  case 80: /* relop: EQ  */
#line 193 "anasin.y"
          { printf("relop  ->  ==\n"); }
#line 3665 "anasin.tab.c"
    break;

  case 81: /* relop: NEQ  */
#line 194 "anasin.y"
           { printf("relop  ->  !=\n"); }
#line 3671 "anasin.tab.c"
    break;

  case 82: /* ariop-add: '+'  */
#line 196 "anasin.y"
               { printf("ariop-add  ->  +\n"); }
#line 3677 "anasin.tab.c"
    break;

  case 83: /* ariop-add: '-'  */
#line 197 "anasin.y"
                { printf("ariop-add  ->  -\n"); }
#line 3683 "anasin.tab.c"
    break;

  case 84: /* ariop-mul: '*'  */
#line 199 "anasin.y"
               { printf("ariop-mul  ->  *\n"); }
#line 3689 "anasin.tab.c"
    break;

  case 85: /* ariop-mul: '/'  */
#line 200 "anasin.y"
               { printf("ariop-mul  ->  /\n"); }
#line 3695 "anasin.tab.c"
    break;

  case 86: /* set-expression: setop-in  */
#line 202 "anasin.y"
                         { printf("set-expressions  ->  setop-in\n"); }
#line 3701 "anasin.tab.c"
    break;

  case 87: /* set-expression: setop-is-set  */
#line 203 "anasin.y"
                             { printf("set-expressions  ->  setop-is-set\n"); }
#line 3707 "anasin.tab.c"
    break;

  case 88: /* set-expression: setop-add  */
#line 204 "anasin.y"
                          { printf("set-expressions  ->  setop-add\n"); }
#line 3713 "anasin.tab.c"
    break;

  case 89: /* set-expression: setop-remove  */
#line 205 "anasin.y"
                             { printf("set-expressions  ->  setop-remove\n"); }
#line 3719 "anasin.tab.c"
    break;

  case 90: /* set-expression: setop-exists  */
#line 206 "anasin.y"
                             { printf("set-expressions  ->  setop-exists\n"); }
#line 3725 "anasin.tab.c"
    break;

  case 91: /* setop-in: '(' expression IN_OP expression ')'  */
#line 208 "anasin.y"
                                              { printf("setop-in  ->  ( expression IN_OP expression ) \n"); }
#line 3731 "anasin.tab.c"
    break;

  case 92: /* setop-is-set: IS_SET_OP '(' ID ')'  */
#line 210 "anasin.y"
                                   { printf("setop-is-set  ->  is_set ( %s )\n", (yyvsp[-1].token_name)); }
#line 3737 "anasin.tab.c"
    break;

  case 93: /* setop-add: ADD_OP setop-in  */
#line 212 "anasin.y"
                           { printf("setop-add  ->  add setop-in\n"); }
#line 3743 "anasin.tab.c"
    break;

  case 94: /* setop-remove: REMOVE_OP setop-in  */
#line 214 "anasin.y"
                                 { printf("setop-remove  ->  remove setop-in\n"); }
#line 3749 "anasin.tab.c"
    break;

  case 95: /* setop-exists: EXISTS_OP '(' ID IN_OP ID ')'  */
#line 216 "anasin.y"
                                            { printf("setop-exists  ->  exists ( %s in %s )\n", (yyvsp[-3].token_name), (yyvsp[-1].token_name)); }
#line 3755 "anasin.tab.c"
    break;

  case 96: /* io-expression: ioop-read  */
#line 218 "anasin.y"
                         { printf("io-expression  ->  ioop-read\n"); }
#line 3761 "anasin.tab.c"
    break;

  case 97: /* io-expression: ioop-write  */
#line 219 "anasin.y"
                          { printf("io-expression  ->  ioop-read\n"); }
#line 3767 "anasin.tab.c"
    break;

  case 98: /* ioop-read: READ '(' ID ')'  */
#line 221 "anasin.y"
                           { printf("ioop-read  ->  read ( %s ) \n", (yyvsp[-1].token_name)); }
#line 3773 "anasin.tab.c"
    break;

  case 99: /* ioop-write: WRITE '(' word ')'  */
#line 223 "anasin.y"
                               { printf("ioop-write  ->  write ( word ) \n"); }
#line 3779 "anasin.tab.c"
    break;

  case 100: /* ioop-write: WRITELN '(' word ')'  */
#line 224 "anasin.y"
                                 { printf("ioop-write  ->  writeln ( word ) \n"); }
#line 3785 "anasin.tab.c"
    break;

  case 101: /* word: CHAR  */
#line 226 "anasin.y"
           { printf("word  ->  %s\n", (yyvsp[0].token_name)); }
#line 3791 "anasin.tab.c"
    break;

  case 102: /* word: STRING  */
#line 227 "anasin.y"
             { printf("word  ->  %s\n", (yyvsp[0].token_name)); }
#line 3797 "anasin.tab.c"
    break;

  case 103: /* func-call: ID '(' arguments ')'  */
#line 229 "anasin.y"
                                { printf("func-call  ->  %s ( arguments )\n", (yyvsp[-3].token_name)); }
#line 3803 "anasin.tab.c"
    break;

  case 104: /* arguments: args-list  */
#line 231 "anasin.y"
                     { printf("arguments  ->  args-list\n"); }
#line 3809 "anasin.tab.c"
    break;

  case 105: /* arguments: %empty  */
#line 232 "anasin.y"
                  { printf("arguments  ->  empty-set\n"); }
#line 3815 "anasin.tab.c"
    break;

  case 106: /* args-list: args-list ',' expression  */
#line 234 "anasin.y"
                                    { printf("args-list  ->  args-list , expression\n"); }
#line 3821 "anasin.tab.c"
    break;

  case 107: /* args-list: expression  */
#line 235 "anasin.y"
                      { printf("args-list  ->  expression\n"); }
#line 3827 "anasin.tab.c"
    break;


#line 3831 "anasin.tab.c"

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

#line 238 "anasin.y"


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
