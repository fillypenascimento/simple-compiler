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


  /* SYMBOL TABLE DECLARATIONS */
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

  // Cabeçalhos de funções de gerenciamento da tabela de símbolos
  symbol_table_entry* create_symbol_table_entry(char* hash_key, char* symbol_name, char* symbol_type, int symbol_scope, char* entry_type);
  symbol_table_entry* lookup_symbol_table(char* hash_key, symbol_table_entry* result_entry);
  char* build_hash_key(char* symbol_name, char* symbol_type, char* entry_type);
  void insert_into_symbol_table(char* symbol_name, char* symbol_type, char* entry_type);
  void print_symbol_table();
  void free_symbol_table();


  /* SYNTATIC TREE DECLARATIONS */
  // Enumeração dos tipos de nós da árvore sintática; cada nó representa uma regra da gramática
  enum rules {
    PROGRAM = 1,
    DECLARATION_LIST,
    DECLARATION,
    VAR_DECLARATION,
    VARIABLE,
    FUNC_DECLARATION,
    TYPE_SPECIFIER,
    PARAMETERS,
    PARAMETER_LIST,
    PARAMETER,
    COMPOUND_STMT,
    LOCAL_DECLARATIONS,
    STATEMENT_LIST,
    STATEMENT,
    FORALL_STATEMENT,
    CONDITIONAL_STMT,
    ITERATION_STMT,
    FORALL_STMT,
    EXPRESSION_STMT,
    RETURN_STMT,
    EXPRESSION,
    SIMPLE_EXPRESSION,
    RELATIONAL_EXP,
    ARITHM_ADD_EXP,
    ARITHM_MUL_EXP,
    UNARY_MINUS_EXP,
    FACTOR,
    LOGOP_UNA,
    LOGOP_BIN,
    RELOP,
    ARIOP_ADD,
    ARIOP_MUL,
    SET_EXPRESSION,
    SETOP_IN,
    SETOP_IS_SET,
    SETOP_ADD,
    SETOP_REMOVE,
    SETOP_EXISTS,
    IO_EXPRESSION,
    IOOP_READ,
    IOOP_WRITE,
    WORD,
    FUNC_CALL,
    ARGUMENTS,
    ARGS_LIST,
    VAR,
    DIGIT_T,
    INT_T,
    FLOAT_T,
    LETTER__T,
    ID_T,
    CHAR_T,
    STRING_T,
    EMPTY_T,
    PLUS_T,
    MINUS_T,
    MULT_T,
    DIV_T,
    NOT_T,
    OR_T,
    AND_T,
    LT_T,
    LTE_T,
    GT_T,
    GTE_T,
    EQ_T,
    NEQ_T,
    ASSIGN_T,
    TYPEINT_T,
    TYPEFLOAT_T,
    TYPEELEM_T,
    TYPESET_T,
    IF_T,
    ELSE_T,
    FOR_T,
    RETURN_T,
    READ_T,
    WRITE_T,
    WRITELN_T,
    IN_OP_T,
    IS_SET_OP_T,
    ADD_OP_T,
    REMOVE_OP_T,
    EXISTS_OP_T,
    FORALL_OP_T,
    LPAREN_T,
    RPAREN_T,
    LBRACK_T,
    RBRACK_T,
    LBRACE_T,
    RBRACE_T,
    COMMA_T,
    SEMICOLON_T
  };
  typedef enum rules rules_types;

  // Nó da árvore sintática abstrata
  typedef struct tree_node {
    rules_types rule;         // Regra da gramática que o nó representa
    char* type;               // Somente preenchido quando é uma regra do tipo VARIABLE ou FUNC_DECLARATION
    char* value;              // Somente preenchido quando é uma regra do tipo VARIABLE ou FUNC_DECLARATION
    struct tree_node* next;   // Somente preenchido quando o nó representa uma regra não-terminal, caso contrátio NULL
    struct tree_node* child;  // Somente preenchido quando o nó representa uma regra não-terminal, caso contrátio NULL
  } tree_node;

  // Cabeçalhos de funções de gerenciamento da Árvore Sintática Abstrata
  tree_node* create_ast_node(rules_types rule, char* type, char* value, struct tree_node* next, struct tree_node* child);

 





  /* INITIALIZATIONS */
  symbol_table_entry* symbol_table = NULL; // Tabela de símbolos definida como uma cadeia de entradas symbol_table_entry
  tree_node* abstract_tree = NULL; // Árvore abstrata definida como uma cadeia de entradas tree_node
  int current_scope = 0; // Inicializa escopo global - https://steemit.com/programming/@drifter1/writing-a-simple-compiler-on-my-own-using-symbol-tables-in-the-lexer - 13/04


#line 232 "anasin.tab.c"

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8192

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  599

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
       0,   291,   291,   300,   306,   313,   320,   326,   333,   340,
     348,   357,   363,   369,   375,   382,   395,   402,   409,   415,
     422,   421,   434,   440,   447,   454,   461,   467,   473,   479,
     485,   491,   497,   504,   510,   516,   522,   528,   536,   543,
     551,   558,   567,   578,   587,   593,   600,   606,   622,   629,
     635,   641,   648,   655,   662,   670,   679,   687,   695,   704,
     713,   722,   731,   738,   746,   753,   761,   768,   776,   783,
     789,   796,   802,   813,   819,   825,   831,   838,   845,   851,
     858,   864,   870,   876,   882,   888,   895,   901,   908,   914,
     921,   927,   933,   939,   945,   952,   969,   976,   983,  1007,
    1015,  1021,  1037,  1044,  1050,  1057,  1063,  1070,  1077,  1083,
    1090,  1097,  1104
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

#define YYPACT_NINF (-320)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-113)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     147,    14,    11,    13,    19,    55,    69,  1217,  1292,  1323,
      25,  1422,    59,  -320,  1466,  1488,   139,  1453,   198,    72,
      44,   353,   369,   419,    62,  1453,  1301,  1519,   434,  5309,
    7636,  7656,  7529,  7673,   382,   192,    58,    82,   974,   103,
     113,   117,   124,   150,   150,   166,   173,  5348,  4212,  5387,
    5426,    73,  5465,  5504,  5543,  5582,  5621,  5660,  5699,   131,
     130,  1218,  3439,  7693,  7710,  7730,   258,   300,   332,   357,
     411,   416,   450,   176,   191,   204,  7747,  7619,    66,  4318,
    7767,  7784,  4212,   605,  1176,  5738,   207,   257,    46,    46,
     257,  4718,   491,   553,   260,  2658,   -25,  1534,  5777,  5816,
     407,   749,   920,    27,   132,   148,   174,   237,   303,   365,
     465,   596,   365,   614,   661,   365,  1345,   573,   920,  6479,
     437,   224,   440,   247,   -12,   183,  2435,  5855,   249,   252,
     266,   274,   279,   287,   291,   276,   319,  5894,  5933,  5972,
    6011,  6050,  6089,  4318,  7804,  4322,   258,   643,  3687,  7821,
    7841,  4369,   258,   752,   306,  7858,  6496,   605,  6323,  4318,
     308,   328,   336,   939,   257,   345,  4425,   954,  6404,  1102,
     622,  1246,  6128,   349,   388,  1119,  6323,  6323,  1123,  6167,
    6206,  1301,   384,   441,  7576,  4718,  7010,  7036,  1364,  7057,
     386,   402,   408,   418,   425,   433,   433,   445,  4212,   346,
    2088,  1141,  7083,  7104,  7130,   475,   404,   557,   839,   885,
     892,   898,    -3,    32,    60,  7151,  6945,  6601,  6614,  2440,
    6659,   447,   448,   472,   480,   483,   485,   485,   495,  4212,
      77,  1733,  6855,  6672,  6685,  6730,   983,   110,   151,   217,
     221,   234,   275,   624,   638,   668,  6743,  2907,  7360,  7373,
    6966,  7386,   574,   498,   502,   505,   510,   522,   522,   524,
    4212,     5,  1842,  2602,  7399,  7412,  7425,  1764,    36,   100,
     264,   269,   310,   389,   422,   490,   526,  7438,  7177,   529,
     532,  2563,   173,  1566,  1301,  1814,   536,  2062,  2325,  2379,
    3254,  3502,  3750,   546,  2712,   550,  7904,  7925,  7555,  7946,
     832,   551,   560,   563,   569,   582,   582,   588,  4212,    29,
    2869,  6628,  7967,  7988,  8009,  2012,   241,   323,   612,   694,
     735,  1108,   617,   620,   636,  8030,  7878,   664,  4318,  6533,
     598,  5309,  6245,   663,   669,    66,  6989,  4318,  7196,  7222,
     257,    46,    46,   257,  4718,   928,   980,   260,    71,  1193,
     676,   676,   676,  2112,   988,  1193,  4212,    66,  6588,  4318,
    6756,  6801,   257,    46,    46,   257,  4718,   467,   507,   260,
      87,  1400,   801,   801,   801,  1981,   537,  1400,  6496,    66,
    7243,  4318,  7451,  7464,   257,    46,    46,   257,  4718,   399,
     635,   260,    97,  1421,   812,   812,   812,  3282,   647,  1421,
    4318,  4212,   605,  1176,  4654,   665,  6401,  5309,  4709,  4763,
    3998,    66,  7598,  4318,  8051,  8072,   257,    46,    46,   257,
    4718,  1115,  1132,   260,   107,  1516,   821,   821,   821,  3234,
    1149,  1516,  4718,   673,  6550,   675,  4318,   683,   685,   695,
     701,   703,   708,   729,   741,  4318,  7266,  2463,   475,  1002,
    2267,  7287,  7313,  2622,   475,  1012,   126,   731,   740,   753,
     760,   764,   769,   767,   791,  4318,  6814,  2719,   983,   653,
    6900,  6827,  6872,  3173,   983,   793,   736,   784,   786,   792,
     795,   799,   803,   826,   828,  4318,  7477,  3530,  1764,   728,
    3191,  7490,  7503,  3778,  1764,   780,   815,   135,  4802,  2435,
    4841,  4880,  4919,  4958,  4997,  5036,  5075,   814,   819,   830,
     837,   841,   845,   852,   850,   883,  4318,  8093,  3482,  2012,
    1156,  6699,  8114,  8135,  3730,  2012,  1231,   886,  6362,  6284,
     872,  7334,   230,   233,   278,  1024,   257,   875,  3917,  1028,
    4024,  1033,  6885,   745,   823,   849,   813,   257,   879,  3421,
     827,  3669,   834,  7516,   882,   894,   896,   895,   257,   897,
    4048,   926,  4131,   949,   605,   605,  4318,  5114,  8156,   901,
     904,   917,  1278,   257,   913,  4681,  1357,  6505,  1469,  6440,
     914,  1055,   921,   843,   922,  1016,  5153,  5192,   923,   938,
    1549,  1069,   863,  1072,   605,   605,  1551,  5231,  5270
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -320,  -320,  -320,   667,     2,     0,  -320,    57,  -320,  -320,
     969,   -23,  -171,  -319,  -320,   -48,   593,   -55,   -45,    -8,
     -68,   -60,   -35,  3948,  2163,  2448,  1808,  1560,   702,  2652,
     -61,   423,  -196,  -172,  2752,  1064,  3000,  3248,  3496,  3744,
    4038,  4152,  4211,   -81,  1312,  -316,  -320,   347
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,    49,   182,    11,   183,    20,    21,
      22,    50,    29,    51,    52,    53,   138,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
     102,   109,   112,   115,    67,    68,    69,    70,    71,    72,
      73,    74,    75,   132,    76,   121,   122,    77
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,    27,     9,    86,    98,   351,   118,    10,   133,     9,
     331,   143,   435,    96,    -3,   291,   126,    18,   -11,   437,
     -12,   100,   101,   292,   328,    18,   -13,   142,   288,   144,
     352,   -80,   -80,   -51,   -80,   125,   373,   -80,   289,   -80,
     139,   457,   157,   120,   123,   100,   101,   124,   293,   295,
     140,   -51,   100,   101,   130,   131,   135,    12,   159,   -49,
     287,   374,   -14,   477,    12,   -49,    16,   395,  -100,    13,
     217,   218,   137,   219,    19,   290,   220,    15,   221,    23,
     -80,    35,    19,   286,   154,   285,  -100,   141,   507,   291,
     -50,   330,   396,   100,   101,   508,  -101,   292,    24,   222,
     223,   224,   288,   225,   226,   227,   228,   445,   165,   171,
     172,    82,   289,   407,  -101,   427,   -90,   -90,    26,   229,
    -109,   170,   293,   465,   173,   446,   100,   101,   179,   180,
      97,   -49,   -49,   485,   287,    84,   -81,   -81,   349,   -81,
     428,   466,   -81,   516,   -81,   355,   100,   101,     1,   290,
     334,   486,   -82,   -82,   -90,   -82,    87,   286,   -82,   285,
     -82,   517,   -48,   348,   -50,   -50,    88,   -90,   -90,   371,
      89,   328,     2,     3,     4,     5,   377,    90,   -83,   -83,
     -48,   -83,   -49,    99,   -83,   -81,   -83,   -40,   -40,   564,
     -40,    -9,    17,   -40,   370,   -40,   -77,   -77,   -40,   -77,
     393,   -82,   -77,    91,   -77,   -90,   -90,   399,   -40,   -40,
     -40,   -40,   -40,   158,   -40,   -40,   -40,   -40,   -40,    94,
     -40,   -40,   -40,   -40,   -40,   392,   185,   -83,   -51,   -77,
     -77,   -77,   -77,   -91,   -91,   -40,   -40,   -92,   -92,   -40,
     -40,   -84,   -84,  -100,   -84,   -77,   405,   -84,   425,   -84,
     -93,   -93,   -18,   -18,   351,   431,  -101,   100,   101,   127,
     440,   441,    30,    31,   128,   184,  -102,   327,    33,  -103,
      34,   -91,   -91,   424,   373,   -92,   -92,   -50,   155,   352,
     -91,   -91,   460,   461,  -102,   -92,   -92,  -103,   -93,   -93,
     -84,   -94,   -94,   433,   395,    42,    43,    44,    45,   374,
     120,   144,   438,  -112,   480,   481,   160,   -85,   -85,   443,
     -85,    48,   143,   -85,  -104,   -85,   100,   101,   -91,   396,
    -105,   456,   120,   -92,   458,   427,   -93,   -93,  -106,   -94,
     -94,   463,  -104,   161,   291,   499,   511,   512,   506,   -90,
     -90,   162,   292,   476,   120,   163,   478,   288,   -90,   -90,
     428,   503,   -50,   483,   498,   164,   -85,   289,   -48,   -90,
    -102,   504,   100,   101,   -93,   496,   497,   293,   295,    30,
      31,   293,   184,   -91,   -91,    33,   120,    34,   509,   287,
    -103,    81,   -49,   501,   -90,   514,    30,    31,  -104,   184,
     186,   187,    33,   336,   290,   216,   189,   527,   505,   175,
     -49,   530,   286,   177,   285,   -94,   -94,   -15,    25,   -91,
     537,   -79,   -79,    81,   -79,   -97,   -97,   -79,    79,   -79,
     100,   101,   -79,   -17,   -17,   247,   278,   -92,   -92,   216,
     548,   566,   -93,   -93,   129,    79,   332,   134,   326,   337,
     -50,   136,   178,   -94,   -79,   -79,   -79,   -79,   333,    81,
     559,   217,   218,   -97,   358,   340,    81,   220,   -50,    81,
     -79,   341,    81,   -92,   330,    81,   -94,   -94,   -93,   -86,
     -86,   342,   -86,    -9,    -9,   -86,   -51,   -86,   343,   186,
     187,   574,   336,   -97,   -97,   189,   344,   190,   -16,   -16,
     278,  -111,  -111,    81,  -108,   156,   291,   291,   347,    81,
     359,   362,   -94,   247,   292,   292,   278,   -97,   -97,   288,
     288,   174,   194,   195,   196,   197,   586,   587,   -86,   289,
     289,   -97,   -97,   -98,   -98,   363,   291,   291,   198,   293,
     293,   588,   326,   364,   292,   292,   365,   339,   366,   288,
     288,   287,   287,   -97,  -100,   216,   597,   598,   369,   289,
     289,   384,   339,   -53,   -53,   385,   290,   290,   386,   293,
     293,   -98,   -98,   387,   286,   286,   285,   285,   361,   -98,
     -98,   287,   287,   -90,   -90,   388,   216,   391,   248,   249,
    -101,   380,   401,   361,   251,   403,   290,   290,   408,   -53,
     -53,   -53,   -53,   -90,   286,   286,   285,   285,   409,   383,
     -87,   -87,   410,   -87,   416,   -98,   -87,   216,   -87,    30,
      31,   -90,    32,   417,   383,    33,   418,    34,   -88,   -88,
      35,   -88,   419,   350,   -88,   -53,   -88,   381,   -91,   -91,
       2,     3,     4,     5,   279,   420,   280,   281,    39,    40,
      41,   423,    42,    43,    44,    45,   282,   415,   -91,   -87,
     434,   -98,   -98,   -51,   372,   216,  -100,   283,    48,   -55,
     -55,   284,   415,   -53,   -53,   -89,   -89,   -88,   -89,   -55,
     -55,   -89,  -101,   -89,    14,   278,  -110,  -110,   -51,   -51,
     186,   187,   247,   336,   278,   394,   189,   439,   190,   -98,
     442,   326,  -100,  -100,   444,   -55,   339,   339,   339,   339,
    -112,   -53,   339,   216,   247,   436,   278,   -55,   -55,   459,
     -92,   -92,   462,   326,   -89,    -9,   464,   500,   361,   361,
     361,   361,  -101,  -101,   361,   247,   247,   528,   278,   337,
     -92,   479,   529,   426,   482,   326,    80,   531,   484,   446,
     383,   383,   383,   383,   -55,   -55,   383,   278,   216,   532,
     204,   -93,   -93,   -78,   -78,   533,   -78,   534,   247,   -78,
     278,   -78,   535,   510,   -78,   445,   513,   326,   -57,   -57,
     515,   -93,   415,   415,   415,   415,   350,   536,   415,   326,
     235,   266,   -55,   278,   204,   542,   -78,   -78,   -78,   -78,
     -48,   -48,   278,   314,   466,   339,   -57,   -57,   372,  -102,
    -102,   339,   -78,   465,   -57,   217,   218,   543,   358,   -57,
     -57,   220,   278,   221,   544,   361,   248,   249,   545,   380,
     394,   361,   251,   546,   252,   296,   297,   547,   412,   -96,
     -96,   299,   278,   300,   -57,   383,   296,   297,   553,   412,
     486,   383,   299,   -59,   -59,   266,   554,   -57,   -57,   555,
     -61,   -61,   426,   556,   359,   -91,   -91,   557,   235,   -95,
     -95,   266,   485,   278,   558,   381,   415,   -96,   -96,   -48,
     350,   567,   415,   568,   413,   -91,   350,  -103,  -103,   -99,
     -99,   -59,   -59,   580,   517,   413,   516,   314,   -61,   -61,
     372,   569,   338,   -91,   582,   570,   372,   -95,   -95,   571,
     204,   -92,   -92,  -104,  -104,   584,   572,   204,   -93,   -93,
     394,   -96,   -96,   278,   -94,   -94,   394,   -99,   -99,   573,
     589,   -92,   -48,   360,    30,    31,   579,   184,   -93,   581,
      33,   204,    34,   583,   -94,    35,  -102,  -102,   235,   -92,
    -103,   426,   -59,   -59,   -97,   -97,   -93,   426,  -103,   -96,
    -104,   585,   -94,  -104,   382,   -96,   -96,    42,    43,    44,
      45,   350,   204,   350,   -97,   -61,   -61,   590,   591,   266,
     -59,   -59,   372,    48,   372,   592,   593,   595,    30,    31,
     -59,    32,   -97,   394,    33,   394,    34,   217,   218,    35,
     358,   -96,   596,   220,    28,   221,   -98,   -98,   426,   502,
     426,     0,   414,   -61,   -53,   -53,   -59,    39,    40,    41,
     204,    42,    43,    44,    45,     0,   -98,   314,   -55,   -55,
     225,   226,   227,   228,   -53,     0,    85,    48,   -57,   -57,
     266,     0,   -95,   -95,   -98,     0,   229,   235,   -55,   266,
     -96,   -96,   -53,     0,   -59,   -59,   314,     0,   -57,   -61,
     -61,   204,   204,   204,   204,     0,   -55,   204,   204,   235,
     -96,   266,     0,     0,   -59,     0,   -57,     0,   314,   -61,
     -95,   -95,   -95,   235,   235,   235,   235,     0,   -96,   235,
     235,   235,   -59,   266,     0,   -99,   -99,   -61,   -99,   -99,
     314,   -95,     0,     0,     0,   266,   266,   266,   266,     0,
      83,   266,   266,   204,     0,   -99,     0,    92,    93,   -95,
      95,     0,   207,   235,     0,   266,     0,     0,   -61,   -61,
       0,     0,   314,   -99,   -94,   -94,   -99,   314,   314,   314,
     314,   -97,   -97,   314,   314,   -95,   -95,     0,   266,   -99,
     -99,     0,   238,   269,   -94,     0,   207,   266,   -98,   -98,
     204,   -97,   110,   111,   -61,   317,   204,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -53,   -53,   266,   -98,     0,
     235,   -95,   -55,   -55,     0,   -99,   235,   -64,     0,     0,
      30,    31,     0,    32,     0,   -53,    33,   266,    34,     0,
     266,    35,   -55,     0,     0,   -64,   266,   186,   187,     0,
     336,     0,     0,   189,     0,   190,     0,   269,    35,    39,
      40,    41,     0,    42,    43,    44,    45,    -2,   266,     0,
     238,   314,     0,   269,     0,     0,     0,   314,   294,    48,
     194,   195,   196,   197,   -62,   -62,   103,   104,   105,   106,
     107,   108,     2,     3,     4,     5,   198,   -57,   -57,   317,
     -38,   -38,     0,   -38,     0,     0,   -38,     0,   -38,   345,
     346,   -38,   207,     0,     0,     0,     0,   -57,   266,   207,
     -62,   -38,   -38,   -38,   -38,   -38,   176,   -38,   -38,   -38,
     -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,     0,     0,
     367,   368,    -5,   207,   -96,   -96,     0,     0,   -38,   -38,
     238,     0,   -38,   -38,     0,   -20,   -20,     0,   -20,     0,
       0,   -20,     0,   -20,   -96,     0,   -20,    -5,    -5,    -5,
      -5,   389,   390,    -6,   207,     0,   -20,   -20,   -20,   -20,
     -20,   269,   -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,
     -20,   -20,   -20,   402,     0,     0,   406,     0,    -6,    -6,
      -6,    -6,     0,   -20,   -20,     0,     0,   -20,   -20,     0,
     215,   -52,   -52,   103,   104,   105,   106,   107,   108,   421,
     422,     0,   207,   -59,   -59,  -112,  -112,  -112,  -112,   317,
    -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,     0,
     246,   277,   269,   -59,   215,     0,     0,   -52,     0,   238,
    -112,   269,     0,   325,   217,   218,     0,   358,   317,     0,
     220,     0,   221,   207,     0,    35,     0,   335,  -112,   207,
     207,   238,    -7,   269,     0,   248,   249,     0,   380,     0,
     317,   251,     0,   252,     0,   238,    35,   225,   226,   227,
     228,   238,   238,   238,     0,   269,     0,    -7,    -7,    -7,
      -7,     0,   317,   229,     0,   277,     0,   269,   256,   257,
     258,   259,     0,   269,   269,   207,    -4,     0,   246,     0,
       0,   277,     0,     0,   260,   238,     0,   269,     2,     3,
       4,     5,     0,     0,   317,   -61,   -61,     0,    -8,   317,
       0,    -4,    -4,    -4,    -4,   317,   317,   325,     0,     0,
     269,     0,   215,     0,     0,   -61,     0,   -19,   -19,   269,
     215,     0,   207,    -8,    -8,    -8,    -8,   215,   207,   -10,
     296,   297,     0,   412,     0,     0,   299,     0,   300,   269,
       0,    35,   238,   246,   -21,     0,     0,     0,   238,     0,
       0,   215,     0,     0,   -10,   -10,   -10,   -10,   246,   269,
       0,     0,   269,   304,   305,   306,   307,     0,   269,   -21,
     -21,   -21,   -21,     0,   277,   -95,   -95,   -99,   -99,   308,
     -45,   -45,   215,   -45,     0,     0,   -45,     0,   -45,   277,
     269,   -45,     0,   317,     0,   -95,     0,   -99,     0,   317,
       0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,   203,     0,
       0,     0,   325,     0,     0,     0,     0,     0,   -45,   -45,
     215,     0,   -45,   -45,     0,     0,     0,   325,     0,     0,
     269,     0,     0,     0,     0,     0,     0,     0,   234,   265,
     277,     0,   203,     0,     0,     0,     0,   246,     0,   277,
       0,   313,     0,     0,     0,     0,   325,     0,     0,     0,
       0,   215,   215,   215,   215,     0,     0,   215,   215,   246,
       0,   277,     0,     0,     0,   150,     0,     0,   325,     0,
       0,     0,     0,   246,   246,   246,   246,     0,     0,   246,
     246,   246,     0,   277,     0,     0,     0,     0,     0,     0,
     325,     0,     0,   265,     0,   277,   277,   277,   277,     0,
       0,   277,   277,   215,     0,     0,   234,     0,     0,   265,
       0,     0,     0,   246,     0,   277,     0,     0,     0,     0,
       0,     0,   325,     0,     0,     0,     0,   325,   325,   325,
     325,     0,     0,   325,   325,   313,     0,     0,   277,   -62,
     -62,   103,   104,   105,   106,   107,   108,   277,   203,     0,
     215,     0,     0,     0,     0,   203,   215,     0,   248,   249,
       0,   380,     0,     0,   251,     0,   252,   277,     0,     0,
     246,     0,     0,     0,     0,     0,   246,   -62,   -62,   203,
       0,     0,     0,     0,     0,     0,   234,   277,     0,     0,
     277,   256,   257,   258,   259,     0,   277,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   260,   -31,   -31,
     203,   -31,     0,     0,   -31,     0,   -31,   265,   277,   -31,
       0,   325,     0,     0,     0,     0,     0,   325,     0,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -31,   202,     0,   -62,   -62,
     103,   104,   105,   106,   107,   108,   -31,   -31,   203,     0,
     -31,   -31,     0,     0,     0,   313,     0,     0,   277,     0,
       0,     0,     0,     0,     0,     0,   233,   264,   265,     0,
     202,     0,     0,     0,     0,   234,   -62,   265,     0,   312,
       0,     0,     0,     0,   313,     0,     0,     0,     0,   203,
     203,   203,   452,     0,     0,   203,   203,   234,     0,   265,
     149,     0,     0,     0,     0,     0,   313,     0,     0,     0,
       0,   234,   234,   234,   472,     0,     0,   234,   234,   234,
       0,   265,     0,     0,     0,     0,     0,     0,   313,     0,
       0,   264,     0,   265,   265,   265,   492,     0,     0,   265,
     265,   203,     0,     0,   233,     0,     0,   264,     0,     0,
       0,   234,     0,   265,     0,     0,     0,     0,     0,     0,
     313,     0,     0,     0,     0,   313,   313,   313,   523,     0,
       0,   313,   313,   312,     0,     0,   265,   -52,   -52,   103,
     104,   105,   106,   107,   108,   265,   202,     0,   203,     0,
       0,     0,     0,   202,   203,     0,   296,   297,     0,   412,
       0,     0,   299,     0,   300,   265,     0,     0,   234,     0,
       0,     0,     0,     0,   234,   -52,   -52,   202,     0,     0,
       0,     0,     0,     0,   233,   265,     0,     0,   265,   304,
     305,   306,   307,     0,   265,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   308,   -26,   -26,   202,   -26,
       0,     0,   -26,     0,   -26,   264,   265,   -26,     0,   313,
       0,     0,     0,     0,     0,   313,     0,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,
     -26,   -26,   -26,   -26,   -62,   -62,   103,   104,   105,   106,
     107,   108,     0,     0,   -26,   -26,   202,     0,   -26,   -26,
       0,     0,     0,   312,   -62,     0,   265,     0,   -52,   -52,
     103,   104,   105,   106,   107,   108,   264,     0,     0,     0,
       0,     0,   -62,   233,     0,   264,     0,     0,   -52,     0,
       0,     0,   312,     0,     0,     0,     0,   202,   202,   451,
       0,     0,     0,   202,   202,   233,   -52,   264,     0,     0,
       0,     0,     0,     0,   312,     0,     0,     0,     0,   233,
     233,   471,     0,     0,     0,   233,   233,   233,     0,   264,
       0,     0,     0,     0,     0,     0,   312,     0,     0,     0,
       0,   264,   264,   491,     0,     0,     0,   264,   264,   202,
       0,   200,     0,     0,     0,     0,     0,     0,     0,   233,
       0,   264,     0,     0,     0,     0,     0,     0,   312,   116,
       0,     0,     0,   312,   312,   522,     0,     0,     0,   312,
     312,   231,   262,     0,   264,   200,     0,     0,     0,     0,
       0,     0,     0,   264,   310,     0,   202,     0,     0,     0,
       0,     0,   202,     0,     0,   145,     0,     0,     0,     0,
       0,     0,     0,   264,     0,     0,   233,     0,   110,   111,
       0,   151,   233,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,     0,     0,   264,     0,     0,   264,     0,     0,     0,
       0,     0,   264,   -63,     0,     0,   262,     0,     0,   166,
       0,     0,     0,     0,     0,   168,     0,     0,     0,   231,
       0,   -63,   262,     0,   264,     0,     0,   312,     0,   -27,
     -27,     0,   -27,   312,     0,   -27,     0,   -27,     0,     0,
     -27,     0,     0,     0,     0,     0,     0,     0,   310,     0,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   200,   -27,   -27,   -27,   -27,   -27,     0,   353,     0,
       0,     0,     0,     0,   264,     0,     0,   -27,   -27,     0,
       0,   -27,   -27,   -28,   -28,     0,   -28,     0,     0,   -28,
       0,   -28,   200,     0,   -28,     0,     0,     0,     0,   375,
       0,     0,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,
     -28,     0,     0,   200,     0,     0,     0,     0,     0,     0,
     397,   -28,   -28,     0,     0,   -28,   -28,     0,     0,    30,
      31,     0,    32,     0,     0,    33,     0,    34,     0,     0,
      35,  -112,  -112,  -112,  -112,     0,  -112,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,  -112,     0,     0,     0,    39,    40,
      41,   200,    42,    43,    44,    45,     0,     0,   429,   -54,
     -54,   103,   104,   105,   106,   107,   108,   329,    48,     0,
       0,   262,     0,   357,  -112,  -112,   201,     0,   231,   -54,
     262,     0,     0,     0,     0,     0,     0,   310,     0,     0,
       0,     0,   447,     0,     0,     0,     0,   -54,   453,   200,
     231,     0,   262,     0,     0,     0,   232,   263,     0,   310,
     201,     0,     0,     0,   467,     0,     0,     0,     0,   311,
     473,   231,   231,     0,   262,     0,     0,     0,     0,     0,
       0,   310,     0,     0,     0,     0,   487,   148,     0,     0,
       0,     0,   493,   262,   200,     0,     0,    30,    31,     0,
      32,     0,     0,    33,   231,    34,   262,     0,    35,     0,
       0,     0,     0,   310,     0,     0,     0,     0,   518,     0,
       0,   263,     0,     0,   524,   310,    39,    40,    41,   262,
      42,    43,    44,    45,   232,     0,     0,   263,   262,     0,
       0,   538,     0,   110,   111,   404,    48,   540,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,     0,     0,   262,     0,
       0,   549,     0,   311,     0,     0,     0,   551,   -56,   -56,
     103,   104,   105,   106,   107,   108,   201,     0,   262,     0,
       0,   560,     0,   201,     0,     0,   -64,   562,   -56,     0,
       0,     0,    30,    31,     0,    32,     0,     0,    33,     0,
      34,     0,     0,    35,     0,     0,   -56,   201,     0,   262,
       0,     0,   575,     0,   232,     0,     0,    36,   577,    37,
       0,    39,    40,    41,     0,    42,    43,    44,    45,    46,
     205,     0,     0,     0,     0,     0,     0,     0,   201,     0,
      47,    48,     0,     0,   181,   263,   -45,   -45,     0,   -45,
       0,     0,   -45,     0,   -45,     0,     0,   -45,     0,   262,
     236,   267,     0,     0,   205,   -54,   -54,   103,   104,   105,
     106,   107,   108,   315,     0,   -45,   -45,   -45,     0,   -45,
     -45,   -45,   -45,     0,   146,     0,   201,     0,     0,     0,
       0,     0,     0,   311,   -45,   -45,     0,     0,     0,     0,
     152,     0,     0,   -54,   -54,     0,   263,     0,     0,     0,
       0,     0,     0,   232,     0,   263,     0,     0,     0,     0,
       0,     0,   311,     0,     0,   267,     0,   201,   450,     0,
     206,     0,     0,   201,   201,   232,     0,   263,   236,     0,
       0,   267,     0,     0,   311,     0,     0,     0,   117,   232,
     470,     0,     0,     0,     0,   232,   232,   232,     0,   263,
     237,   268,     0,     0,   206,     0,   311,   315,     0,     0,
       0,   263,   490,   316,     0,     0,     0,   263,   263,   201,
     205,     0,     0,     0,   147,     0,     0,     0,     0,   232,
       0,   263,     0,     0,     0,     0,     0,     0,   311,     0,
     153,     0,     0,   311,   521,     0,     0,     0,     0,   311,
     311,   205,     0,     0,   263,   -62,   -62,   103,   104,   105,
     106,   107,   108,   263,     0,   268,   201,     0,   167,     0,
       0,     0,   201,     0,   169,   -62,     0,     0,   237,     0,
       0,   268,   205,   263,     0,     0,   232,     0,   -73,   -73,
     -73,   -73,   232,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   378,     0,   263,     0,     0,   263,   316,     0,     0,
       0,     0,   263,     0,     0,     0,     0,     0,     0,     0,
     206,     0,     0,     0,     0,     0,     0,   354,     0,     0,
     205,   -73,   -73,     0,   263,     0,     0,   311,     0,     0,
       0,     0,     0,   311,     0,     0,     0,     0,     0,     0,
     267,   206,     0,     0,     0,     0,     0,   236,   376,   267,
       0,     0,     0,     0,     0,     0,   315,     0,     0,     0,
       0,   448,     0,     0,     0,     0,     0,   454,   205,   236,
       0,   267,   206,     0,   263,     0,     0,     0,   315,   398,
       0,     0,     0,   468,     0,     0,     0,     0,     0,   474,
     236,   236,     0,   267,     0,     0,     0,     0,     0,     0,
     315,     0,     0,     0,     0,   488,     0,     0,   208,     0,
       0,   494,   267,   205,     0,     0,     0,     0,     0,     0,
     206,     0,     0,   236,     0,   267,     0,   430,     0,     0,
       0,     0,   315,     0,     0,     0,     0,   519,   239,   270,
     268,     0,   208,   525,   315,     0,     0,   237,   267,   268,
       0,   318,     0,     0,     0,     0,   316,   267,     0,     0,
       0,   449,     0,     0,     0,     0,     0,   455,   206,   237,
       0,   268,     0,     0,     0,     0,     0,   267,   316,     0,
       0,     0,     0,   469,     0,     0,     0,     0,     0,   475,
     237,   237,     0,   268,     0,     0,     0,   267,     0,     0,
     316,     0,     0,   270,     0,   489,     0,     0,     0,     0,
       0,   495,   268,   206,     0,     0,   239,     0,     0,   270,
       0,     0,     0,   237,     0,   268,     0,     0,   267,     0,
       0,     0,   316,     0,     0,     0,     0,   520,     0,     0,
       0,     0,     0,   526,   316,   318,     0,     0,   268,   -56,
     -56,   103,   104,   105,   106,   107,   108,   268,   208,     0,
     539,     0,   110,   111,     0,   208,   541,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,     0,     0,   268,   267,     0,
     550,     0,     0,     0,     0,     0,   552,   -56,   -56,   208,
       0,     0,     0,     0,     0,     0,   239,   268,     0,     0,
     561,     0,     0,     0,     0,   -63,   563,     0,     0,     0,
     -52,   -52,   103,   104,   105,   106,   107,   108,   -32,   -32,
     208,   -32,     0,     0,   -32,     0,   -32,   270,   268,   -32,
     -52,   576,     0,     0,     0,     0,     0,   578,     0,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
       0,   -32,   -32,   -32,   -32,   -32,   209,     0,   -52,   -52,
     103,   104,   105,   106,   107,   108,   -32,   -32,   208,     0,
     -32,   -32,     0,     0,     0,   318,     0,     0,   268,     0,
       0,     0,     0,     0,     0,     0,   240,   271,   270,     0,
     209,     0,     0,     0,     0,   239,   -52,   270,     0,   319,
       0,     0,     0,     0,   318,     0,     0,     0,     0,   208,
       0,     0,     0,     0,     0,   208,   208,   239,     0,   270,
       0,     0,     0,     0,     0,     0,   318,     0,     0,     0,
       0,   239,     0,     0,     0,     0,     0,   239,   239,   239,
       0,   270,     0,     0,     0,     0,     0,     0,   318,     0,
       0,   271,     0,   270,     0,     0,     0,     0,     0,   270,
     270,   208,     0,     0,   240,     0,     0,   271,     0,     0,
       0,   239,     0,   270,     0,     0,     0,     0,     0,     0,
     318,     0,     0,     0,     0,   318,     0,     0,     0,     0,
       0,   318,   318,   319,     0,     0,   270,   -58,   -58,   103,
     104,   105,   106,   107,   108,   270,   209,     0,   208,     0,
     110,   111,     0,   209,   208,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,     0,   270,     0,     0,   239,     0,
       0,     0,     0,     0,   239,   -58,   -58,   209,     0,     0,
       0,     0,     0,     0,   240,   270,     0,     0,   270,     0,
       0,   -64,     0,     0,   270,     0,     0,     0,   -54,   -54,
     103,   104,   105,   106,   107,   108,   -29,   -29,   209,   -29,
       0,     0,   -29,     0,   -29,   271,   270,   -29,   -54,   318,
       0,     0,     0,     0,     0,   318,     0,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,
     -29,   -29,   -29,   -29,   210,     0,   -54,   -54,   103,   104,
     105,   106,   107,   108,   -29,   -29,   209,     0,   -29,   -29,
       0,     0,     0,   319,     0,     0,   270,     0,     0,     0,
       0,     0,     0,     0,   241,   272,   271,     0,   210,     0,
       0,     0,     0,   240,   -54,   271,     0,   320,     0,     0,
       0,     0,   319,     0,     0,     0,     0,   209,     0,     0,
       0,     0,     0,   209,   209,   240,     0,   271,     0,     0,
       0,     0,     0,     0,   319,     0,     0,     0,     0,   240,
       0,     0,     0,     0,     0,   240,   240,   240,     0,   271,
       0,     0,     0,     0,     0,     0,   319,     0,     0,   272,
       0,   271,     0,     0,     0,     0,     0,   271,   271,   209,
       0,     0,   241,     0,     0,   272,     0,     0,     0,   240,
       0,   271,     0,     0,     0,     0,     0,     0,   319,     0,
       0,     0,     0,   319,     0,     0,     0,     0,     0,   319,
     319,   320,     0,     0,   271,   -60,   -60,   103,   104,   105,
     106,   107,   108,   271,   210,     0,   209,     0,   110,   111,
       0,   210,   209,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,     0,     0,   271,     0,     0,   240,     0,     0,     0,
       0,     0,   240,   -60,   -60,   210,     0,     0,     0,     0,
       0,     0,   241,   271,     0,     0,   271,     0,     0,   -63,
       0,     0,   271,     0,     0,     0,   -56,   -56,   103,   104,
     105,   106,   107,   108,   -30,   -30,   210,   -30,     0,     0,
     -30,     0,   -30,   272,   271,   -30,   -56,   319,     0,     0,
       0,     0,     0,   319,     0,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   -30,   211,     0,   -56,   -56,   103,   104,   105,   106,
     107,   108,   -30,   -30,   210,     0,   -30,   -30,     0,     0,
       0,   320,     0,     0,   271,     0,     0,     0,     0,     0,
       0,     0,   242,   273,   272,     0,   211,     0,     0,     0,
       0,   241,   -56,   272,     0,   321,     0,     0,     0,     0,
     320,     0,     0,     0,     0,   210,     0,     0,     0,     0,
       0,   210,   210,   241,     0,   272,     0,     0,     0,     0,
       0,     0,   320,     0,     0,     0,     0,   241,     0,     0,
       0,     0,     0,   241,   241,   241,     0,   272,     0,     0,
       0,     0,     0,     0,   320,     0,     0,   273,     0,   272,
       0,     0,     0,     0,     0,   272,   272,   210,     0,     0,
     242,     0,     0,   273,     0,     0,     0,   241,     0,   272,
       0,     0,     0,     0,     0,     0,   320,     0,     0,     0,
       0,   320,     0,     0,     0,     0,     0,   320,   320,   321,
       0,     0,   272,   -58,   -58,   103,   104,   105,   106,   107,
     108,   272,   211,     0,   210,     0,     0,     0,     0,   211,
     210,     0,     0,   -58,     0,     0,     0,     0,     0,     0,
       0,   272,     0,     0,   241,     0,     0,     0,     0,     0,
     241,   -58,     0,   211,     0,     0,     0,     0,     0,     0,
     242,   272,     0,     0,   272,     0,     0,     0,     0,     0,
     272,     0,     0,     0,     0,     0,   199,     0,     0,     0,
       0,     0,   -44,   -44,   211,   -44,     0,     0,   -44,     0,
     -44,   273,   272,   -44,     0,   320,     0,     0,     0,     0,
       0,   320,     0,     0,     0,     0,   230,   261,     0,     0,
     199,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   309,
     -60,   -60,   103,   104,   105,   106,   107,   108,     0,     0,
     -44,   -44,   211,     0,     0,     0,     0,     0,     0,   321,
     -60,     0,   272,     0,   -58,   -58,   103,   104,   105,   106,
     107,   108,   273,     0,     0,     0,     0,     0,   -60,   242,
       0,   273,     0,     0,     0,     0,   212,     0,   321,     0,
       0,   261,     0,   211,     0,     0,     0,     0,     0,   211,
     211,   242,   -58,   273,   230,     0,     0,   261,     0,     0,
     321,     0,     0,     0,     0,   242,   243,   274,     0,     0,
     212,   242,   242,   242,     0,   273,     0,     0,     0,   322,
       0,     0,   321,   309,     0,     0,     0,   273,     0,     0,
       0,     0,     0,   273,   273,   211,   199,   -60,   -60,   103,
     104,   105,   106,   107,   108,   242,     0,   273,     0,     0,
       0,     0,     0,     0,   321,     0,     0,     0,     0,   321,
       0,     0,     0,     0,     0,   321,   321,   199,     0,     0,
     273,   274,     0,     0,     0,   -60,     0,     0,     0,   273,
       0,     0,   211,     0,   243,     0,     0,   274,   211,     0,
     213,     0,     0,     0,     0,     0,     0,     0,   199,   273,
       0,     0,   242,     0,     0,     0,   186,   187,   242,   188,
       0,     0,   189,   322,   190,     0,     0,    35,     0,   273,
     244,   275,   273,     0,   213,     0,   212,     0,   273,     0,
       0,     0,     0,   323,     0,   191,   192,   193,     0,   194,
     195,   196,   197,     0,     0,     0,   199,     0,     0,   214,
     273,     0,     0,   321,     0,   198,     0,   212,     0,   321,
       0,     0,     0,     0,     0,     0,   261,     0,     0,     0,
       0,     0,     0,   230,     0,   261,     0,     0,     0,   245,
     276,     0,   309,   214,     0,   275,     0,     0,   212,     0,
       0,     0,   324,     0,   199,   230,     0,   261,   244,     0,
     273,   275,     0,     0,   309,     0,     0,     0,     0,     0,
       0,     0,   248,   249,     0,   250,   230,   230,   251,   261,
     252,     0,     0,    35,     0,     0,   309,   323,   -54,   -54,
     103,   104,   105,   106,   107,   108,   212,     0,   261,   199,
     213,   253,   254,   255,   276,   256,   257,   258,   259,   230,
       0,   261,     0,     0,     0,     0,   274,   245,   309,     0,
     276,   260,     0,   243,   -54,   274,     0,     0,     0,     0,
     309,   213,   322,     0,   261,   -56,   -56,   103,   104,   105,
     106,   107,   108,   261,   212,   243,   324,   274,     0,     0,
       0,     0,     0,     0,   322,     0,     0,     0,     0,   214,
       0,     0,   213,   261,     0,     0,   243,   243,     0,   274,
       0,   -56,     0,     0,     0,     0,   322,     0,     0,     0,
       0,     0,     0,   261,     0,     0,     0,     0,   274,   212,
     214,   -58,   -58,   103,   104,   105,   106,   107,   108,   243,
       0,   274,     0,     0,     0,     0,     0,     0,   322,     0,
     213,     0,     0,     0,   261,     0,     0,     0,     0,     0,
     322,   214,     0,     0,   274,     0,     0,   -58,     0,     0,
     275,     0,     0,   274,     0,     0,     0,   244,     0,   275,
       0,     0,     0,     0,     0,     0,   323,     0,     0,     0,
       0,     0,     0,   274,     0,     0,     0,     0,   213,   244,
       0,   275,     0,     0,   261,     0,     0,     0,   323,   214,
       0,     0,     0,   274,     0,     0,     0,     0,     0,     0,
     244,   244,     0,   275,     0,     0,     0,     0,     0,   276,
     323,     0,     0,     0,     0,     0,   245,     0,   276,     0,
       0,     0,   275,   213,   274,   324,     0,     0,     0,     0,
       0,     0,     0,   244,     0,   275,     0,   214,   245,     0,
     276,     0,   323,     0,     0,     0,     0,   324,     0,     0,
       0,     0,     0,     0,   323,     0,     0,     0,   275,   245,
     245,     0,   276,     0,     0,     0,     0,   275,     0,   324,
       0,     0,     0,     0,   274,     0,     0,     0,     0,     0,
       0,   276,   214,     0,     0,     0,     0,   275,     0,     0,
       0,     0,   245,     0,   276,     0,     0,     0,     0,     0,
       0,   324,     0,     0,     0,     0,     0,   275,     0,     0,
       0,     0,     0,   324,     0,     0,     0,   276,     0,     0,
       0,     0,     0,     0,     0,     0,   276,     0,   -46,   -46,
       0,   -46,     0,     0,   -46,     0,   -46,     0,   275,   -46,
       0,     0,     0,     0,     0,     0,   276,     0,     0,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
       0,   -46,   -46,   -46,   -46,   -46,   276,   -58,   -58,   103,
     104,   105,   106,   107,   108,     0,   -46,   -46,     0,     0,
     -46,   -46,     0,    -8,    -8,     0,    -8,   -58,   275,    -8,
       0,    -8,   296,   297,    -8,   298,     0,   276,   299,     0,
     300,     0,     0,    35,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,    -8,    -8,
      -8,   301,   302,   303,     0,   304,   305,   306,   307,     0,
       0,    -8,    -8,     0,     0,    -8,    -8,   -44,   -44,     0,
     -44,   308,     0,   -44,     0,   -44,     0,   276,   -44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,
     -44,   -44,   -44,   -44,   -44,     0,   -40,   -40,     0,   -40,
       0,     0,   -40,     0,   -40,   -44,   -44,   -40,     0,   -44,
     -44,     0,     0,     0,     0,     0,     0,   -40,   -40,   -40,
     -40,   -40,   565,   -40,   -40,   -40,   -40,   -40,     0,   -40,
     -40,   -40,   -40,   -40,     0,   -47,   -47,     0,   -47,     0,
       0,   -47,     0,   -47,   -40,   -40,   -47,     0,   -40,   -40,
       0,     0,     0,     0,     0,     0,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,
     -47,   -47,   -47,     0,   -33,   -33,     0,   -33,     0,     0,
     -33,     0,   -33,   -47,   -47,   -33,     0,   -47,   -47,     0,
       0,     0,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,
     -33,   -33,     0,   -43,   -43,     0,   -43,     0,     0,   -43,
       0,   -43,   -33,   -33,   -43,     0,   -33,   -33,     0,     0,
       0,     0,     0,     0,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,
     -43,     0,   -34,   -34,     0,   -34,     0,     0,   -34,     0,
     -34,   -43,   -43,   -34,     0,   -43,   -43,     0,     0,     0,
       0,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,
       0,   -35,   -35,     0,   -35,     0,     0,   -35,     0,   -35,
     -34,   -34,   -35,     0,   -34,   -34,     0,     0,     0,     0,
       0,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,     0,   -35,   -35,   -35,   -35,   -35,     0,
     -37,   -37,     0,   -37,     0,     0,   -37,     0,   -37,   -35,
     -35,   -37,     0,   -35,   -35,     0,     0,     0,     0,     0,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,   -36,
     -36,     0,   -36,     0,     0,   -36,     0,   -36,   -37,   -37,
     -36,     0,   -37,   -37,     0,     0,     0,     0,     0,     0,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,     0,   -36,   -36,   -36,   -36,   -36,     0,   -21,   -21,
       0,   -21,     0,     0,   -21,     0,   -21,   -36,   -36,   -21,
       0,   -36,   -36,     0,     0,     0,     0,     0,     0,   -21,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,
       0,   -21,   -21,   -21,   -21,   -21,     0,   -38,   -38,     0,
     -38,     0,     0,   -38,     0,   -38,   -21,   -21,   -38,     0,
     -21,   -21,     0,     0,     0,     0,     0,     0,   -38,   -38,
     -38,   -38,   -38,   594,   -38,   -38,   -38,   -38,   -38,     0,
     -38,   -38,   -38,   -38,   -38,     0,   -41,   -41,     0,   -41,
       0,     0,   -41,     0,   -41,   -38,   -38,   -41,     0,   -38,
     -38,     0,     0,     0,     0,     0,     0,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     -41,   -41,   -41,   -41,     0,   -39,   -39,     0,   -39,     0,
       0,   -39,     0,   -39,   -41,   -41,   -39,     0,   -41,   -41,
       0,     0,     0,     0,     0,     0,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,
     -39,   -39,   -39,     0,   -42,   -42,     0,   -42,     0,     0,
     -42,     0,   -42,   -39,   -39,   -42,     0,   -39,   -39,     0,
       0,     0,     0,     0,     0,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,
     -42,   -42,     0,    30,    31,     0,    32,     0,     0,    33,
       0,    34,   -42,   -42,    35,     0,   -42,   -42,     0,     0,
       0,     0,     0,     0,     2,     3,     4,     5,    36,     0,
      37,    38,    39,    40,    41,     0,    42,    43,    44,    45,
      46,     0,   -45,   -45,     0,   -45,     0,     0,   -45,     0,
     -45,    47,    48,   -45,     0,   181,   -23,     0,     0,     0,
       0,     0,     0,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,
       0,   -31,   -31,     0,   -31,     0,     0,   -31,     0,   -31,
     -45,   -45,   -31,     0,   -45,   -45,     0,     0,     0,     0,
       0,     0,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,     0,
     -26,   -26,     0,   -26,     0,     0,   -26,     0,   -26,   -31,
     -31,   -26,     0,   -31,   -31,     0,     0,     0,     0,     0,
       0,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,     0,    30,
      31,     0,    32,     0,     0,    33,     0,    34,   -26,   -26,
      35,     0,   -26,   -26,     0,     0,     0,     0,     0,     0,
       2,     3,     4,     5,    36,     0,    37,    38,    39,    40,
      41,     0,    42,    43,    44,    45,    46,     0,   -25,   -25,
       0,   -25,     0,     0,   -25,     0,   -25,    47,    48,   -25,
       0,   181,   -22,     0,     0,     0,     0,     0,     0,   -25,
     -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,
       0,   -25,   -25,   -25,   -25,   -25,     0,   -27,   -27,     0,
     -27,     0,     0,   -27,     0,   -27,   -25,   -25,   -27,     0,
     -25,   -25,     0,     0,     0,     0,     0,     0,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,     0,
     -27,   -27,   -27,   -27,   -27,     0,   -28,   -28,     0,   -28,
       0,     0,   -28,     0,   -28,   -27,   -27,   -28,     0,   -27,
     -27,     0,     0,     0,     0,     0,     0,   -28,   -28,   -28,
     -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,   -28,
     -28,   -28,   -28,   -28,     0,   -32,   -32,     0,   -32,     0,
       0,   -32,     0,   -32,   -28,   -28,   -32,     0,   -28,   -28,
       0,     0,     0,     0,     0,     0,   -32,   -32,   -32,   -32,
     -32,     0,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,
     -32,   -32,   -32,     0,   -29,   -29,     0,   -29,     0,     0,
     -29,     0,   -29,   -32,   -32,   -29,     0,   -32,   -32,     0,
       0,     0,     0,     0,     0,   -29,   -29,   -29,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,   -29,     0,   -30,   -30,     0,   -30,     0,     0,   -30,
       0,   -30,   -29,   -29,   -30,     0,   -29,   -29,     0,     0,
       0,     0,     0,     0,   -30,   -30,   -30,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
     -30,     0,   -46,   -46,     0,   -46,     0,     0,   -46,     0,
     -46,   -30,   -30,   -46,     0,   -30,   -30,     0,     0,     0,
       0,     0,     0,   -46,   -46,   -46,   -46,   -46,     0,   -46,
     -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,
       0,   -24,   -24,     0,   -24,     0,     0,   -24,     0,   -24,
     -46,   -46,   -24,     0,   -46,   -46,     0,     0,     0,     0,
       0,     0,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
     -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   -24,     0,
     -44,   -44,     0,   -44,     0,     0,   -44,     0,   -44,   -24,
     -24,   -44,     0,   -24,   -24,     0,     0,     0,     0,     0,
       0,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,
     -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,     0,   -47,
     -47,     0,   -47,     0,     0,   -47,     0,   -47,   -44,   -44,
     -47,     0,   -44,   -44,     0,     0,     0,     0,     0,     0,
     -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,
     -47,     0,   -47,   -47,   -47,   -47,   -47,     0,   -33,   -33,
       0,   -33,     0,     0,   -33,     0,   -33,   -47,   -47,   -33,
       0,   -47,   -47,     0,     0,     0,     0,     0,     0,   -33,
     -33,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,
       0,   -33,   -33,   -33,   -33,   -33,     0,   -43,   -43,     0,
     -43,     0,     0,   -43,     0,   -43,   -33,   -33,   -43,     0,
     -33,   -33,     0,     0,     0,     0,     0,     0,   -43,   -43,
     -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -43,   -43,   -43,   -43,     0,   -34,   -34,     0,   -34,
       0,     0,   -34,     0,   -34,   -43,   -43,   -34,     0,   -43,
     -43,     0,     0,     0,     0,     0,     0,   -34,   -34,   -34,
     -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,     0,   -34,
     -34,   -34,   -34,   -34,     0,   -35,   -35,     0,   -35,     0,
       0,   -35,     0,   -35,   -34,   -34,   -35,     0,   -34,   -34,
       0,     0,     0,     0,     0,     0,   -35,   -35,   -35,   -35,
     -35,     0,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,
     -35,   -35,   -35,     0,   -37,   -37,     0,   -37,     0,     0,
     -37,     0,   -37,   -35,   -35,   -37,     0,   -35,   -35,     0,
       0,     0,     0,     0,     0,   -37,   -37,   -37,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,
     -37,   -37,     0,   -36,   -36,     0,   -36,     0,     0,   -36,
       0,   -36,   -37,   -37,   -36,     0,   -37,   -37,     0,     0,
       0,     0,     0,     0,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,
     -36,     0,   -41,   -41,     0,   -41,     0,     0,   -41,     0,
     -41,   -36,   -36,   -41,     0,   -36,   -36,     0,     0,     0,
       0,     0,     0,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,
       0,   -39,   -39,     0,   -39,     0,     0,   -39,     0,   -39,
     -41,   -41,   -39,     0,   -41,   -41,     0,     0,     0,     0,
       0,     0,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,
     -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,
     -42,   -42,     0,   -42,     0,     0,   -42,     0,   -42,   -39,
     -39,   -42,     0,   -39,   -39,     0,     0,     0,     0,     0,
       0,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,
     -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,     0,    -8,
      -8,     0,    -8,     0,     0,    -8,     0,    -8,   -42,   -42,
      -8,     0,   -42,   -42,     0,     0,     0,     0,     0,     0,
      -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,    -8,    -8,
      -8,     0,    -8,    -8,    -8,    -8,    -8,     0,   -21,   -21,
       0,   -21,     0,     0,   -21,     0,   -21,    -8,    -8,   -21,
       0,    -8,    -8,     0,     0,     0,     0,     0,     0,   -21,
     -21,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,   -21,
       0,   -21,   -21,   -21,   -21,   -21,     0,    30,    31,     0,
      32,     0,     0,    33,     0,    34,   -21,   -21,    35,     0,
     -21,   -21,     0,     0,     0,     0,     0,     0,     2,     3,
       4,     5,    36,     0,    37,    38,    39,    40,    41,     0,
      42,    43,    44,    45,    46,     0,   -95,   -95,     0,   -95,
       0,     0,   -95,     0,   -95,    47,    48,   -95,     0,   181,
       0,     0,     0,     0,     0,     0,     0,   -95,   -95,   -95,
     -95,   -95,     0,   -95,   -95,   -95,   -95,   -95,     0,   -95,
     -95,   -95,   -95,   -95,     0,    30,    31,     0,    32,     0,
       0,    33,     0,    34,   -95,   -95,    35,     0,   -95,     0,
     -60,   -60,   103,   104,   105,   106,   107,   108,     0,     0,
     279,     0,   280,     0,    39,    40,    41,     0,    42,    43,
      44,    45,   282,     0,   -95,   -95,     0,   -95,     0,     0,
     -95,     0,   -95,   283,    48,   -95,   -60,   284,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -95,
       0,   -95,     0,   -95,   -95,   -95,     0,   -95,   -95,   -95,
     -95,   -95,     0,    30,    31,     0,    32,     0,     0,    33,
       0,    34,   -95,   -95,    35,     0,   -95,     0,     0,     0,
     217,   218,     0,   219,     0,     0,   220,     0,   221,     0,
       0,    35,    39,    40,    41,     0,    42,    43,    44,    45,
       0,   -60,   -60,   103,   104,   105,   106,   107,   108,   222,
     223,   224,    48,   225,   226,   227,   228,   -45,   -45,     0,
     -45,   -60,     0,   -45,     0,   -45,     0,     0,   -45,   229,
       0,     0,     0,     0,   -44,   -44,     0,   -44,     0,     0,
     -44,     0,   -44,     0,     0,   -44,   -45,   -45,   -45,     0,
     -45,   -45,   -45,   -45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -44,   -44,   -44,   -45,   -44,   -44,   -44,
     -44,     0,     0,     0,     0,     0,     0,     0,     0,  -112,
    -112,  -112,  -112,   -44,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,  -112,   -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -75,   -75,   -75,   -75,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   110,
     111,   357,  -112,  -112,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,   -74,   -74,     0,     0,     0,
       0,     0,     0,     0,   -64,     0,     0,     0,   -75,   -75,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -66,   -66,   113,   114,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -68,   -68,   -68,   -68,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,
     110,   111,     0,   -76,   -76,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,     0,   -66,   -66,     0,     0,
       0,     0,     0,     0,     0,   -63,     0,     0,     0,   -68,
     -68,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -72,   -72,   -72,   -72,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -69,   -69,   -69,
     -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,   -70,   -70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -72,   -72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -69,   -69,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -71,   -71,   -71,   -71,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -65,   -65,
     113,   114,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,     0,     0,     0,   -73,   -73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,   111,   -71,   -71,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,
       0,   -65,   -65,   -67,   -67,   -67,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,  -107,  -107,  -107,  -107,
       0,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,   -64,
     -64,   110,   111,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,     0,   -67,   -67,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -107,
    -107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -63,   -63,   -73,   -73,   -73,   -73,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   356,
       0,     0,     0,     0,     0,     0,     0,  -112,  -112,  -112,
    -112,   -73,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,     0,     0,     0,     0,     0,     0,     0,     0,   -73,
    -112,  -112,  -112,  -112,     0,  -112,  -112,  -112,  -112,  -112,
    -112,  -112,  -112,     0,     0,     0,     0,     0,     0,   379,
    -112,   -74,   -74,   -74,   -74,  -112,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,     0,     0,     0,     0,     0,     0,
       0,     0,   335,  -112,     0,     0,   -74,   -75,   -75,   -75,
     -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,   -74,     0,     0,     0,   -76,   -76,
     -76,   -76,   -75,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -75,     0,     0,   -76,   -66,   -66,   113,   114,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
       0,   -76,     0,     0,     0,   -68,   -68,   -68,   -68,   -66,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -66,     0,     0,
     -68,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,     0,     0,     0,     0,   -68,     0,
       0,     0,   -72,   -72,   -72,   -72,   -70,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -70,     0,     0,   -72,   -73,   -73,
     -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   400,     0,     0,     0,   -72,     0,   -69,   -69,   -69,
     -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -73,   -69,   -73,   -73,   -73,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
     -69,     0,     0,     0,  -112,  -112,  -112,  -112,   -73,  -112,
    -112,  -112,  -112,  -112,  -112,  -112,  -112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -73,   -71,   -71,   -71,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,     0,     0,     0,     0,   379,  -112,   -65,   -65,
     113,   114,   -71,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -71,     0,     0,   -65,   -67,   -67,   -67,   -67,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,     0,     0,
       0,   -65,     0,     0,     0,  -107,  -107,  -107,  -107,   -67,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -67,     0,     0,
    -107,   -74,   -74,   -74,   -74,     0,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -75,   -75,   -75,   -75,  -107,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,   -76,   -76,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -66,   -66,   113,   114,   -74,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -68,   -68,   -68,   -68,   -75,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -70,   -70,   -70,   -70,
     -76,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -72,
     -72,   -72,   -72,   -66,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -69,   -69,   -69,   -69,   -68,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -73,   -73,   -73,   -73,   -70,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -71,   -71,
     -71,   -71,   -72,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -65,   -65,   113,   114,   -69,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -67,   -67,   -67,   -67,   -73,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,  -107,  -107,  -107,
    -107,   -71,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -112,  -112,  -112,  -112,   -65,  -112,  -112,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,     0,     0,     0,   -67,     0,     0,
       0,     0,     0,     0,     0,     0,  -112,  -112,  -112,  -112,
    -107,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
       0,  -112,    78,     0,     0,     0,     0,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
       0,     0,     0,     0,     0,     0,     0,     0,   411,  -112,
    -112,  -112,  -112,     0,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,  -112,     0,     0,     0,     0,     0,     0,  -112,    78,
     -73,   -73,   -73,   -73,  -112,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   119,     0,     0,     0,   -74,   -74,   -74,
     -74,   411,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
       0,     0,     0,     0,     0,     0,     0,   -75,   -75,   -75,
     -75,   -73,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -74,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,     0,     0,     0,   -66,   -66,   113,   114,   -75,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,     0,     0,
       0,   -68,   -68,   -68,   -68,   -76,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,     0,     0,     0,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,   -66,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,     0,     0,     0,     0,   -72,   -72,
     -72,   -72,   -68,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,   -70,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,     0,     0,     0,   -73,   -73,   -73,   -73,   -72,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,     0,
       0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   -69,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,
       0,     0,   -65,   -65,   113,   114,   -73,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,     0,     0,     0,     0,     0,
       0,     0,   -67,   -67,   -67,   -67,   -71,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,     0,     0,     0,  -107,
    -107,  -107,  -107,   -65,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,     0,     0,     0,     0,     0,     0,     0,   -73,
     -73,   -73,   -73,   -67,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   432,     0,     0,     0,     0,     0,     0,     0,
    -107,     0,     0,     0,   -73,   -74,   -74,   -74,   -74,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,     0,     0,
       0,     0,     0,     0,     0,     0,   -75,   -75,   -75,   -75,
     -74,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,
       0,     0,     0,     0,     0,     0,     0,   -76,   -76,   -76,
     -76,   -75,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
       0,     0,     0,     0,     0,     0,     0,     0,   -66,   -66,
     113,   114,   -76,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,     0,     0,     0,     0,     0,     0,     0,     0,   -68,
     -68,   -68,   -68,   -66,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,     0,     0,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,   -68,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,     0,
       0,   -72,   -72,   -72,   -72,   -70,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,     0,     0,     0,     0,     0,     0,
       0,     0,   -69,   -69,   -69,   -69,   -72,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,     0,
       0,     0,     0,   -73,   -73,   -73,   -73,   -69,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,     0,     0,     0,     0,
       0,     0,     0,     0,   -71,   -71,   -71,   -71,   -73,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,     0,
       0,     0,     0,     0,     0,   -65,   -65,   113,   114,   -71,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,
       0,     0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,
     -65,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,
       0,     0,     0,     0,     0,     0,     0,  -107,  -107,  -107,
    -107,   -67,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -107
};

static const yytype_int16 yycheck[] =
{
       0,    24,     0,    38,    52,   201,    67,     7,    89,     7,
     181,    36,   331,    48,     0,    83,    84,    17,     7,   335,
       7,    16,    17,    83,    36,    25,     7,    95,    83,    54,
     202,     4,     5,    36,     7,    83,   232,    10,    83,    12,
      95,   357,    54,    78,    79,    16,    17,    82,    83,    84,
      95,    54,    16,    17,     8,     9,    91,     0,   126,    54,
      83,   233,     7,   379,     7,    36,     7,   263,    36,     0,
       4,     5,    95,     7,    17,    83,    10,    52,    12,     7,
      53,    15,    25,    83,   119,    83,    54,    95,   407,   157,
      54,   126,   264,    16,    17,   411,    36,   157,    54,    33,
      34,    35,   157,    37,    38,    39,    40,    36,   143,   157,
     158,    53,   157,   284,    54,   311,    16,    17,    56,    53,
      54,   156,   157,    36,   159,    54,    16,    17,   176,   177,
      57,    54,    55,    36,   157,    53,     4,     5,   199,     7,
     312,    54,    10,    36,    12,   206,    16,    17,     1,   157,
     185,    54,     4,     5,    54,     7,    53,   157,    10,   157,
      12,    54,    36,   198,    54,    55,    53,    16,    17,   230,
      53,    36,    25,    26,    27,    28,   237,    53,     4,     5,
      54,     7,    52,    52,    10,    53,    12,     4,     5,    54,
       7,    52,    53,    10,   229,    12,     4,     5,    15,     7,
     261,    53,    10,    53,    12,    54,    55,   268,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    53,
      37,    38,    39,    40,    41,   260,    53,    53,    52,    37,
      38,    39,    40,    16,    17,    52,    53,    16,    17,    56,
      57,     4,     5,    52,     7,    53,   281,    10,   309,    12,
      16,    17,    54,    55,   450,   316,    52,    16,    17,    52,
     341,   342,     4,     5,     7,     7,    36,     7,    10,    36,
      12,    54,    55,   308,   470,    54,    55,    36,    54,   451,
      16,    17,   363,   364,    54,    16,    17,    54,    54,    55,
      53,    16,    17,   328,   490,    37,    38,    39,    40,   471,
     335,    54,   337,    54,   385,   386,    54,     4,     5,   344,
       7,    53,    36,    10,    36,    12,    16,    17,    54,   491,
      54,   356,   357,    54,   359,   521,    16,    17,    54,    54,
      55,   366,    54,    54,   402,   403,   417,   418,   406,    16,
      17,    54,   402,   378,   379,    54,   381,   402,    16,    17,
     522,   406,    52,   388,   402,    36,    53,   402,    52,    36,
      52,   406,    16,    17,    54,   400,   401,   402,   403,     4,
       5,   406,     7,    16,    17,    10,   411,    12,   413,   402,
      52,    34,    36,   406,    52,   420,     4,     5,    52,     7,
       4,     5,    10,     7,   402,    48,    10,   432,   406,    54,
      54,   436,   402,    54,   402,    16,    17,    54,    55,    52,
     445,     4,     5,    66,     7,    16,    17,    10,    53,    12,
      16,    17,    15,    54,    55,    78,    79,    16,    17,    82,
     465,   499,    16,    17,    87,    53,    52,    90,    91,    53,
      36,    94,    54,    54,    37,    38,    39,    40,     7,   102,
     485,     4,     5,    54,     7,    53,   109,    10,    54,   112,
      53,    53,   115,    52,   499,   118,    16,    17,    52,     4,
       5,    53,     7,    54,    55,    10,    54,    12,    53,     4,
       5,   516,     7,    16,    17,    10,    53,    12,    54,    55,
     143,    54,    55,   146,    54,    55,   564,   565,    53,   152,
      53,    53,    52,   156,   564,   565,   159,    16,    17,   564,
     565,   164,    37,    38,    39,    40,   564,   565,    53,   564,
     565,    54,    55,    16,    17,    53,   594,   595,    53,   564,
     565,   566,   185,    53,   594,   595,    53,   190,    53,   594,
     595,   564,   565,    52,    54,   198,   594,   595,    53,   594,
     595,    53,   205,    16,    17,    53,   564,   565,    53,   594,
     595,    54,    55,    53,   564,   565,   564,   565,   221,    16,
      17,   594,   595,    16,    17,    53,   229,    53,     4,     5,
      54,     7,    53,   236,    10,    53,   594,   595,    52,    16,
      17,    54,    55,    36,   594,   595,   594,   595,    52,   252,
       4,     5,    52,     7,    53,    52,    10,   260,    12,     4,
       5,    54,     7,    53,   267,    10,    53,    12,     4,     5,
      15,     7,    53,   200,    10,    52,    12,    53,    16,    17,
      25,    26,    27,    28,    29,    53,    31,    32,    33,    34,
      35,    53,    37,    38,    39,    40,    41,   300,    36,    53,
      52,    16,    17,    36,   231,   308,    36,    52,    53,    16,
      17,    56,   315,    16,    17,     4,     5,    53,     7,    16,
      17,    10,    36,    12,     7,   328,    54,    55,    54,    55,
       4,     5,   335,     7,   337,   262,    10,   340,    12,    54,
     343,   344,    54,    55,   347,    52,   349,   350,   351,   352,
      36,    54,   355,   356,   357,    36,   359,    54,    55,   362,
      16,    17,   365,   366,    53,    52,   369,    52,   371,   372,
     373,   374,    54,    55,   377,   378,   379,    54,   381,    53,
      36,   384,    57,   310,   387,   388,    34,    54,   391,    54,
     393,   394,   395,   396,    16,    17,   399,   400,   401,    54,
      48,    16,    17,     4,     5,    54,     7,    54,   411,    10,
     413,    12,    54,   416,    15,    36,   419,   420,    16,    17,
     423,    36,   425,   426,   427,   428,   353,    36,   431,   432,
      78,    79,    54,   436,    82,    54,    37,    38,    39,    40,
      54,    55,   445,    91,    54,   448,    16,    17,   375,    54,
      55,   454,    53,    36,    52,     4,     5,    54,     7,    16,
      17,    10,   465,    12,    54,   468,     4,     5,    54,     7,
     397,   474,    10,    54,    12,     4,     5,    36,     7,    16,
      17,    10,   485,    12,    54,   488,     4,     5,    54,     7,
      54,   494,    10,    16,    17,   143,    54,    54,    55,    54,
      16,    17,   429,    54,    53,    16,    17,    54,   156,    16,
      17,   159,    36,   516,    36,    53,   519,    54,    55,    54,
     447,    57,   525,    54,    53,    36,   453,    54,    55,    16,
      17,    54,    55,   536,    54,    53,    36,   185,    54,    55,
     467,    54,   190,    54,   547,    54,   473,    54,    55,    54,
     198,    16,    17,    54,    55,   558,    54,   205,    16,    17,
     487,    16,    17,   566,    16,    17,   493,    54,    55,    36,
     573,    36,    36,   221,     4,     5,    54,     7,    36,    54,
      10,   229,    12,    54,    36,    15,    54,    36,   236,    54,
      36,   518,    16,    17,    16,    17,    54,   524,    54,    54,
      54,    54,    54,    36,   252,    16,    17,    37,    38,    39,
      40,   538,   260,   540,    36,    16,    17,    54,    54,   267,
      16,    17,   549,    53,   551,    54,    54,    54,     4,     5,
      54,     7,    54,   560,    10,   562,    12,     4,     5,    15,
       7,    52,    54,    10,    25,    12,    16,    17,   575,   406,
     577,    -1,   300,    54,    16,    17,    52,    33,    34,    35,
     308,    37,    38,    39,    40,    -1,    36,   315,    16,    17,
      37,    38,    39,    40,    36,    -1,    52,    53,    16,    17,
     328,    -1,    16,    17,    54,    -1,    53,   335,    36,   337,
      16,    17,    54,    -1,    16,    17,   344,    -1,    36,    16,
      17,   349,   350,   351,   352,    -1,    54,   355,   356,   357,
      36,   359,    -1,    -1,    36,    -1,    54,    -1,   366,    36,
      54,    16,    17,   371,   372,   373,   374,    -1,    54,   377,
     378,   379,    54,   381,    -1,    16,    17,    54,    16,    17,
     388,    36,    -1,    -1,    -1,   393,   394,   395,   396,    -1,
      36,   399,   400,   401,    -1,    36,    -1,    43,    44,    54,
      46,    -1,    48,   411,    -1,   413,    -1,    -1,    16,    17,
      -1,    -1,   420,    54,    16,    17,    54,   425,   426,   427,
     428,    16,    17,   431,   432,    16,    17,    -1,   436,    16,
      17,    -1,    78,    79,    36,    -1,    82,   445,    16,    17,
     448,    36,    11,    12,    52,    91,   454,    16,    17,    18,
      19,    20,    21,    22,    23,    16,    17,   465,    36,    -1,
     468,    52,    16,    17,    -1,    52,   474,    36,    -1,    -1,
       4,     5,    -1,     7,    -1,    36,    10,   485,    12,    -1,
     488,    15,    36,    -1,    -1,    54,   494,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    12,    -1,   143,    15,    33,
      34,    35,    -1,    37,    38,    39,    40,     0,   516,    -1,
     156,   519,    -1,   159,    -1,    -1,    -1,   525,    52,    53,
      37,    38,    39,    40,    16,    17,    18,    19,    20,    21,
      22,    23,    25,    26,    27,    28,    53,    16,    17,   185,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,   195,
     196,    15,   198,    -1,    -1,    -1,    -1,    36,   566,   205,
      52,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,    -1,
     226,   227,     0,   229,    16,    17,    -1,    -1,    52,    53,
     236,    -1,    56,    57,    -1,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    12,    36,    -1,    15,    25,    26,    27,
      28,   257,   258,     0,   260,    -1,    25,    26,    27,    28,
      29,   267,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,   279,    -1,    -1,   282,    -1,    25,    26,
      27,    28,    -1,    52,    53,    -1,    -1,    56,    57,    -1,
      48,    16,    17,    18,    19,    20,    21,    22,    23,   305,
     306,    -1,   308,    16,    17,    11,    12,    13,    14,   315,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      78,    79,   328,    36,    82,    -1,    -1,    52,    -1,   335,
      36,   337,    -1,    91,     4,     5,    -1,     7,   344,    -1,
      10,    -1,    12,   349,    -1,    15,    -1,    53,    54,   355,
     356,   357,     0,   359,    -1,     4,     5,    -1,     7,    -1,
     366,    10,    -1,    12,    -1,   371,    15,    37,    38,    39,
      40,   377,   378,   379,    -1,   381,    -1,    25,    26,    27,
      28,    -1,   388,    53,    -1,   143,    -1,   393,    37,    38,
      39,    40,    -1,   399,   400,   401,     0,    -1,   156,    -1,
      -1,   159,    -1,    -1,    53,   411,    -1,   413,    25,    26,
      27,    28,    -1,    -1,   420,    16,    17,    -1,     0,   425,
      -1,    25,    26,    27,    28,   431,   432,   185,    -1,    -1,
     436,    -1,   190,    -1,    -1,    36,    -1,    54,    55,   445,
     198,    -1,   448,    25,    26,    27,    28,   205,   454,     0,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,   465,
      -1,    15,   468,   221,     0,    -1,    -1,    -1,   474,    -1,
      -1,   229,    -1,    -1,    25,    26,    27,    28,   236,   485,
      -1,    -1,   488,    37,    38,    39,    40,    -1,   494,    25,
      26,    27,    28,    -1,   252,    16,    17,    16,    17,    53,
       4,     5,   260,     7,    -1,    -1,    10,    -1,    12,   267,
     516,    15,    -1,   519,    -1,    36,    -1,    36,    -1,   525,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    48,    -1,
      -1,    -1,   300,    -1,    -1,    -1,    -1,    -1,    52,    53,
     308,    -1,    56,    57,    -1,    -1,    -1,   315,    -1,    -1,
     566,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
     328,    -1,    82,    -1,    -1,    -1,    -1,   335,    -1,   337,
      -1,    91,    -1,    -1,    -1,    -1,   344,    -1,    -1,    -1,
      -1,   349,   350,   351,   352,    -1,    -1,   355,   356,   357,
      -1,   359,    -1,    -1,    -1,   115,    -1,    -1,   366,    -1,
      -1,    -1,    -1,   371,   372,   373,   374,    -1,    -1,   377,
     378,   379,    -1,   381,    -1,    -1,    -1,    -1,    -1,    -1,
     388,    -1,    -1,   143,    -1,   393,   394,   395,   396,    -1,
      -1,   399,   400,   401,    -1,    -1,   156,    -1,    -1,   159,
      -1,    -1,    -1,   411,    -1,   413,    -1,    -1,    -1,    -1,
      -1,    -1,   420,    -1,    -1,    -1,    -1,   425,   426,   427,
     428,    -1,    -1,   431,   432,   185,    -1,    -1,   436,    16,
      17,    18,    19,    20,    21,    22,    23,   445,   198,    -1,
     448,    -1,    -1,    -1,    -1,   205,   454,    -1,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    12,   465,    -1,    -1,
     468,    -1,    -1,    -1,    -1,    -1,   474,    54,    55,   229,
      -1,    -1,    -1,    -1,    -1,    -1,   236,   485,    -1,    -1,
     488,    37,    38,    39,    40,    -1,   494,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,     4,     5,
     260,     7,    -1,    -1,    10,    -1,    12,   267,   516,    15,
      -1,   519,    -1,    -1,    -1,    -1,    -1,   525,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    48,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    52,    53,   308,    -1,
      56,    57,    -1,    -1,    -1,   315,    -1,    -1,   566,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,   328,    -1,
      82,    -1,    -1,    -1,    -1,   335,    54,   337,    -1,    91,
      -1,    -1,    -1,    -1,   344,    -1,    -1,    -1,    -1,   349,
     350,   351,   352,    -1,    -1,   355,   356,   357,    -1,   359,
     112,    -1,    -1,    -1,    -1,    -1,   366,    -1,    -1,    -1,
      -1,   371,   372,   373,   374,    -1,    -1,   377,   378,   379,
      -1,   381,    -1,    -1,    -1,    -1,    -1,    -1,   388,    -1,
      -1,   143,    -1,   393,   394,   395,   396,    -1,    -1,   399,
     400,   401,    -1,    -1,   156,    -1,    -1,   159,    -1,    -1,
      -1,   411,    -1,   413,    -1,    -1,    -1,    -1,    -1,    -1,
     420,    -1,    -1,    -1,    -1,   425,   426,   427,   428,    -1,
      -1,   431,   432,   185,    -1,    -1,   436,    16,    17,    18,
      19,    20,    21,    22,    23,   445,   198,    -1,   448,    -1,
      -1,    -1,    -1,   205,   454,    -1,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    12,   465,    -1,    -1,   468,    -1,
      -1,    -1,    -1,    -1,   474,    54,    55,   229,    -1,    -1,
      -1,    -1,    -1,    -1,   236,   485,    -1,    -1,   488,    37,
      38,    39,    40,    -1,   494,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,     4,     5,   260,     7,
      -1,    -1,    10,    -1,    12,   267,   516,    15,    -1,   519,
      -1,    -1,    -1,    -1,    -1,   525,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    52,    53,   308,    -1,    56,    57,
      -1,    -1,    -1,   315,    36,    -1,   566,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,   328,    -1,    -1,    -1,
      -1,    -1,    54,   335,    -1,   337,    -1,    -1,    36,    -1,
      -1,    -1,   344,    -1,    -1,    -1,    -1,   349,   350,   351,
      -1,    -1,    -1,   355,   356,   357,    54,   359,    -1,    -1,
      -1,    -1,    -1,    -1,   366,    -1,    -1,    -1,    -1,   371,
     372,   373,    -1,    -1,    -1,   377,   378,   379,    -1,   381,
      -1,    -1,    -1,    -1,    -1,    -1,   388,    -1,    -1,    -1,
      -1,   393,   394,   395,    -1,    -1,    -1,   399,   400,   401,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   411,
      -1,   413,    -1,    -1,    -1,    -1,    -1,    -1,   420,    66,
      -1,    -1,    -1,   425,   426,   427,    -1,    -1,    -1,   431,
     432,    78,    79,    -1,   436,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   445,    91,    -1,   448,    -1,    -1,    -1,
      -1,    -1,   454,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   465,    -1,    -1,   468,    -1,    11,    12,
      -1,   118,   474,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,   485,    -1,    -1,   488,    -1,    -1,    -1,
      -1,    -1,   494,    36,    -1,    -1,   143,    -1,    -1,   146,
      -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,    -1,   156,
      -1,    54,   159,    -1,   516,    -1,    -1,   519,    -1,     4,
       5,    -1,     7,   525,    -1,    10,    -1,    12,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,   198,    37,    38,    39,    40,    41,    -1,   205,    -1,
      -1,    -1,    -1,    -1,   566,    -1,    -1,    52,    53,    -1,
      -1,    56,    57,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    12,   229,    -1,    15,    -1,    -1,    -1,    -1,   236,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,    -1,
     267,    52,    53,    -1,    -1,    56,    57,    -1,    -1,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,    -1,
      15,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    33,    34,
      35,   308,    37,    38,    39,    40,    -1,    -1,   315,    16,
      17,    18,    19,    20,    21,    22,    23,    52,    53,    -1,
      -1,   328,    -1,    53,    54,    55,    48,    -1,   335,    36,
     337,    -1,    -1,    -1,    -1,    -1,    -1,   344,    -1,    -1,
      -1,    -1,   349,    -1,    -1,    -1,    -1,    54,   355,   356,
     357,    -1,   359,    -1,    -1,    -1,    78,    79,    -1,   366,
      82,    -1,    -1,    -1,   371,    -1,    -1,    -1,    -1,    91,
     377,   378,   379,    -1,   381,    -1,    -1,    -1,    -1,    -1,
      -1,   388,    -1,    -1,    -1,    -1,   393,   109,    -1,    -1,
      -1,    -1,   399,   400,   401,    -1,    -1,     4,     5,    -1,
       7,    -1,    -1,    10,   411,    12,   413,    -1,    15,    -1,
      -1,    -1,    -1,   420,    -1,    -1,    -1,    -1,   425,    -1,
      -1,   143,    -1,    -1,   431,   432,    33,    34,    35,   436,
      37,    38,    39,    40,   156,    -1,    -1,   159,   445,    -1,
      -1,   448,    -1,    11,    12,    52,    53,   454,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,   465,    -1,
      -1,   468,    -1,   185,    -1,    -1,    -1,   474,    16,    17,
      18,    19,    20,    21,    22,    23,   198,    -1,   485,    -1,
      -1,   488,    -1,   205,    -1,    -1,    54,   494,    36,    -1,
      -1,    -1,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      12,    -1,    -1,    15,    -1,    -1,    54,   229,    -1,   516,
      -1,    -1,   519,    -1,   236,    -1,    -1,    29,   525,    31,
      -1,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   260,    -1,
      52,    53,    -1,    -1,    56,   267,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,   566,
      78,    79,    -1,    -1,    82,    16,    17,    18,    19,    20,
      21,    22,    23,    91,    -1,    33,    34,    35,    -1,    37,
      38,    39,    40,    -1,   102,    -1,   308,    -1,    -1,    -1,
      -1,    -1,    -1,   315,    52,    53,    -1,    -1,    -1,    -1,
     118,    -1,    -1,    54,    55,    -1,   328,    -1,    -1,    -1,
      -1,    -1,    -1,   335,    -1,   337,    -1,    -1,    -1,    -1,
      -1,    -1,   344,    -1,    -1,   143,    -1,   349,   350,    -1,
      48,    -1,    -1,   355,   356,   357,    -1,   359,   156,    -1,
      -1,   159,    -1,    -1,   366,    -1,    -1,    -1,    66,   371,
     372,    -1,    -1,    -1,    -1,   377,   378,   379,    -1,   381,
      78,    79,    -1,    -1,    82,    -1,   388,   185,    -1,    -1,
      -1,   393,   394,    91,    -1,    -1,    -1,   399,   400,   401,
     198,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,   411,
      -1,   413,    -1,    -1,    -1,    -1,    -1,    -1,   420,    -1,
     118,    -1,    -1,   425,   426,    -1,    -1,    -1,    -1,   431,
     432,   229,    -1,    -1,   436,    16,    17,    18,    19,    20,
      21,    22,    23,   445,    -1,   143,   448,    -1,   146,    -1,
      -1,    -1,   454,    -1,   152,    36,    -1,    -1,   156,    -1,
      -1,   159,   260,   465,    -1,    -1,   468,    -1,    11,    12,
      13,    14,   474,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,   485,    -1,    -1,   488,   185,    -1,    -1,
      -1,    -1,   494,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     198,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
     308,    54,    55,    -1,   516,    -1,    -1,   519,    -1,    -1,
      -1,    -1,    -1,   525,    -1,    -1,    -1,    -1,    -1,    -1,
     328,   229,    -1,    -1,    -1,    -1,    -1,   335,   236,   337,
      -1,    -1,    -1,    -1,    -1,    -1,   344,    -1,    -1,    -1,
      -1,   349,    -1,    -1,    -1,    -1,    -1,   355,   356,   357,
      -1,   359,   260,    -1,   566,    -1,    -1,    -1,   366,   267,
      -1,    -1,    -1,   371,    -1,    -1,    -1,    -1,    -1,   377,
     378,   379,    -1,   381,    -1,    -1,    -1,    -1,    -1,    -1,
     388,    -1,    -1,    -1,    -1,   393,    -1,    -1,    48,    -1,
      -1,   399,   400,   401,    -1,    -1,    -1,    -1,    -1,    -1,
     308,    -1,    -1,   411,    -1,   413,    -1,   315,    -1,    -1,
      -1,    -1,   420,    -1,    -1,    -1,    -1,   425,    78,    79,
     328,    -1,    82,   431,   432,    -1,    -1,   335,   436,   337,
      -1,    91,    -1,    -1,    -1,    -1,   344,   445,    -1,    -1,
      -1,   349,    -1,    -1,    -1,    -1,    -1,   355,   356,   357,
      -1,   359,    -1,    -1,    -1,    -1,    -1,   465,   366,    -1,
      -1,    -1,    -1,   371,    -1,    -1,    -1,    -1,    -1,   377,
     378,   379,    -1,   381,    -1,    -1,    -1,   485,    -1,    -1,
     388,    -1,    -1,   143,    -1,   393,    -1,    -1,    -1,    -1,
      -1,   399,   400,   401,    -1,    -1,   156,    -1,    -1,   159,
      -1,    -1,    -1,   411,    -1,   413,    -1,    -1,   516,    -1,
      -1,    -1,   420,    -1,    -1,    -1,    -1,   425,    -1,    -1,
      -1,    -1,    -1,   431,   432,   185,    -1,    -1,   436,    16,
      17,    18,    19,    20,    21,    22,    23,   445,   198,    -1,
     448,    -1,    11,    12,    -1,   205,   454,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,   465,   566,    -1,
     468,    -1,    -1,    -1,    -1,    -1,   474,    54,    55,   229,
      -1,    -1,    -1,    -1,    -1,    -1,   236,   485,    -1,    -1,
     488,    -1,    -1,    -1,    -1,    54,   494,    -1,    -1,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,     4,     5,
     260,     7,    -1,    -1,    10,    -1,    12,   267,   516,    15,
      36,   519,    -1,    -1,    -1,    -1,    -1,   525,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    48,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    52,    53,   308,    -1,
      56,    57,    -1,    -1,    -1,   315,    -1,    -1,   566,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,   328,    -1,
      82,    -1,    -1,    -1,    -1,   335,    54,   337,    -1,    91,
      -1,    -1,    -1,    -1,   344,    -1,    -1,    -1,    -1,   349,
      -1,    -1,    -1,    -1,    -1,   355,   356,   357,    -1,   359,
      -1,    -1,    -1,    -1,    -1,    -1,   366,    -1,    -1,    -1,
      -1,   371,    -1,    -1,    -1,    -1,    -1,   377,   378,   379,
      -1,   381,    -1,    -1,    -1,    -1,    -1,    -1,   388,    -1,
      -1,   143,    -1,   393,    -1,    -1,    -1,    -1,    -1,   399,
     400,   401,    -1,    -1,   156,    -1,    -1,   159,    -1,    -1,
      -1,   411,    -1,   413,    -1,    -1,    -1,    -1,    -1,    -1,
     420,    -1,    -1,    -1,    -1,   425,    -1,    -1,    -1,    -1,
      -1,   431,   432,   185,    -1,    -1,   436,    16,    17,    18,
      19,    20,    21,    22,    23,   445,   198,    -1,   448,    -1,
      11,    12,    -1,   205,   454,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,   465,    -1,    -1,   468,    -1,
      -1,    -1,    -1,    -1,   474,    54,    55,   229,    -1,    -1,
      -1,    -1,    -1,    -1,   236,   485,    -1,    -1,   488,    -1,
      -1,    52,    -1,    -1,   494,    -1,    -1,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,     4,     5,   260,     7,
      -1,    -1,    10,    -1,    12,   267,   516,    15,    36,   519,
      -1,    -1,    -1,    -1,    -1,   525,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    48,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    52,    53,   308,    -1,    56,    57,
      -1,    -1,    -1,   315,    -1,    -1,   566,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,   328,    -1,    82,    -1,
      -1,    -1,    -1,   335,    54,   337,    -1,    91,    -1,    -1,
      -1,    -1,   344,    -1,    -1,    -1,    -1,   349,    -1,    -1,
      -1,    -1,    -1,   355,   356,   357,    -1,   359,    -1,    -1,
      -1,    -1,    -1,    -1,   366,    -1,    -1,    -1,    -1,   371,
      -1,    -1,    -1,    -1,    -1,   377,   378,   379,    -1,   381,
      -1,    -1,    -1,    -1,    -1,    -1,   388,    -1,    -1,   143,
      -1,   393,    -1,    -1,    -1,    -1,    -1,   399,   400,   401,
      -1,    -1,   156,    -1,    -1,   159,    -1,    -1,    -1,   411,
      -1,   413,    -1,    -1,    -1,    -1,    -1,    -1,   420,    -1,
      -1,    -1,    -1,   425,    -1,    -1,    -1,    -1,    -1,   431,
     432,   185,    -1,    -1,   436,    16,    17,    18,    19,    20,
      21,    22,    23,   445,   198,    -1,   448,    -1,    11,    12,
      -1,   205,   454,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,   465,    -1,    -1,   468,    -1,    -1,    -1,
      -1,    -1,   474,    54,    55,   229,    -1,    -1,    -1,    -1,
      -1,    -1,   236,   485,    -1,    -1,   488,    -1,    -1,    52,
      -1,    -1,   494,    -1,    -1,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,     4,     5,   260,     7,    -1,    -1,
      10,    -1,    12,   267,   516,    15,    36,   519,    -1,    -1,
      -1,    -1,    -1,   525,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    48,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    52,    53,   308,    -1,    56,    57,    -1,    -1,
      -1,   315,    -1,    -1,   566,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,   328,    -1,    82,    -1,    -1,    -1,
      -1,   335,    54,   337,    -1,    91,    -1,    -1,    -1,    -1,
     344,    -1,    -1,    -1,    -1,   349,    -1,    -1,    -1,    -1,
      -1,   355,   356,   357,    -1,   359,    -1,    -1,    -1,    -1,
      -1,    -1,   366,    -1,    -1,    -1,    -1,   371,    -1,    -1,
      -1,    -1,    -1,   377,   378,   379,    -1,   381,    -1,    -1,
      -1,    -1,    -1,    -1,   388,    -1,    -1,   143,    -1,   393,
      -1,    -1,    -1,    -1,    -1,   399,   400,   401,    -1,    -1,
     156,    -1,    -1,   159,    -1,    -1,    -1,   411,    -1,   413,
      -1,    -1,    -1,    -1,    -1,    -1,   420,    -1,    -1,    -1,
      -1,   425,    -1,    -1,    -1,    -1,    -1,   431,   432,   185,
      -1,    -1,   436,    16,    17,    18,    19,    20,    21,    22,
      23,   445,   198,    -1,   448,    -1,    -1,    -1,    -1,   205,
     454,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   465,    -1,    -1,   468,    -1,    -1,    -1,    -1,    -1,
     474,    54,    -1,   229,    -1,    -1,    -1,    -1,    -1,    -1,
     236,   485,    -1,    -1,   488,    -1,    -1,    -1,    -1,    -1,
     494,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,     4,     5,   260,     7,    -1,    -1,    10,    -1,
      12,   267,   516,    15,    -1,   519,    -1,    -1,    -1,    -1,
      -1,   525,    -1,    -1,    -1,    -1,    78,    79,    -1,    -1,
      82,    33,    34,    35,    -1,    37,    38,    39,    40,    91,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      52,    53,   308,    -1,    -1,    -1,    -1,    -1,    -1,   315,
      36,    -1,   566,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,   328,    -1,    -1,    -1,    -1,    -1,    54,   335,
      -1,   337,    -1,    -1,    -1,    -1,    48,    -1,   344,    -1,
      -1,   143,    -1,   349,    -1,    -1,    -1,    -1,    -1,   355,
     356,   357,    54,   359,   156,    -1,    -1,   159,    -1,    -1,
     366,    -1,    -1,    -1,    -1,   371,    78,    79,    -1,    -1,
      82,   377,   378,   379,    -1,   381,    -1,    -1,    -1,    91,
      -1,    -1,   388,   185,    -1,    -1,    -1,   393,    -1,    -1,
      -1,    -1,    -1,   399,   400,   401,   198,    16,    17,    18,
      19,    20,    21,    22,    23,   411,    -1,   413,    -1,    -1,
      -1,    -1,    -1,    -1,   420,    -1,    -1,    -1,    -1,   425,
      -1,    -1,    -1,    -1,    -1,   431,   432,   229,    -1,    -1,
     436,   143,    -1,    -1,    -1,    54,    -1,    -1,    -1,   445,
      -1,    -1,   448,    -1,   156,    -1,    -1,   159,   454,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   260,   465,
      -1,    -1,   468,    -1,    -1,    -1,     4,     5,   474,     7,
      -1,    -1,    10,   185,    12,    -1,    -1,    15,    -1,   485,
      78,    79,   488,    -1,    82,    -1,   198,    -1,   494,    -1,
      -1,    -1,    -1,    91,    -1,    33,    34,    35,    -1,    37,
      38,    39,    40,    -1,    -1,    -1,   308,    -1,    -1,    48,
     516,    -1,    -1,   519,    -1,    53,    -1,   229,    -1,   525,
      -1,    -1,    -1,    -1,    -1,    -1,   328,    -1,    -1,    -1,
      -1,    -1,    -1,   335,    -1,   337,    -1,    -1,    -1,    78,
      79,    -1,   344,    82,    -1,   143,    -1,    -1,   260,    -1,
      -1,    -1,    91,    -1,   356,   357,    -1,   359,   156,    -1,
     566,   159,    -1,    -1,   366,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,     5,    -1,     7,   378,   379,    10,   381,
      12,    -1,    -1,    15,    -1,    -1,   388,   185,    16,    17,
      18,    19,    20,    21,    22,    23,   308,    -1,   400,   401,
     198,    33,    34,    35,   143,    37,    38,    39,    40,   411,
      -1,   413,    -1,    -1,    -1,    -1,   328,   156,   420,    -1,
     159,    53,    -1,   335,    52,   337,    -1,    -1,    -1,    -1,
     432,   229,   344,    -1,   436,    16,    17,    18,    19,    20,
      21,    22,    23,   445,   356,   357,   185,   359,    -1,    -1,
      -1,    -1,    -1,    -1,   366,    -1,    -1,    -1,    -1,   198,
      -1,    -1,   260,   465,    -1,    -1,   378,   379,    -1,   381,
      -1,    52,    -1,    -1,    -1,    -1,   388,    -1,    -1,    -1,
      -1,    -1,    -1,   485,    -1,    -1,    -1,    -1,   400,   401,
     229,    16,    17,    18,    19,    20,    21,    22,    23,   411,
      -1,   413,    -1,    -1,    -1,    -1,    -1,    -1,   420,    -1,
     308,    -1,    -1,    -1,   516,    -1,    -1,    -1,    -1,    -1,
     432,   260,    -1,    -1,   436,    -1,    -1,    52,    -1,    -1,
     328,    -1,    -1,   445,    -1,    -1,    -1,   335,    -1,   337,
      -1,    -1,    -1,    -1,    -1,    -1,   344,    -1,    -1,    -1,
      -1,    -1,    -1,   465,    -1,    -1,    -1,    -1,   356,   357,
      -1,   359,    -1,    -1,   566,    -1,    -1,    -1,   366,   308,
      -1,    -1,    -1,   485,    -1,    -1,    -1,    -1,    -1,    -1,
     378,   379,    -1,   381,    -1,    -1,    -1,    -1,    -1,   328,
     388,    -1,    -1,    -1,    -1,    -1,   335,    -1,   337,    -1,
      -1,    -1,   400,   401,   516,   344,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   411,    -1,   413,    -1,   356,   357,    -1,
     359,    -1,   420,    -1,    -1,    -1,    -1,   366,    -1,    -1,
      -1,    -1,    -1,    -1,   432,    -1,    -1,    -1,   436,   378,
     379,    -1,   381,    -1,    -1,    -1,    -1,   445,    -1,   388,
      -1,    -1,    -1,    -1,   566,    -1,    -1,    -1,    -1,    -1,
      -1,   400,   401,    -1,    -1,    -1,    -1,   465,    -1,    -1,
      -1,    -1,   411,    -1,   413,    -1,    -1,    -1,    -1,    -1,
      -1,   420,    -1,    -1,    -1,    -1,    -1,   485,    -1,    -1,
      -1,    -1,    -1,   432,    -1,    -1,    -1,   436,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   445,    -1,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    12,    -1,   516,    15,
      -1,    -1,    -1,    -1,    -1,    -1,   465,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,   485,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    52,    53,    -1,    -1,
      56,    57,    -1,     4,     5,    -1,     7,    36,   566,    10,
      -1,    12,     4,     5,    15,     7,    -1,   516,    10,    -1,
      12,    -1,    -1,    15,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    33,    34,    35,    -1,    37,    38,    39,    40,    -1,
      -1,    52,    53,    -1,    -1,    56,    57,     4,     5,    -1,
       7,    53,    -1,    10,    -1,    12,    -1,   566,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    -1,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    12,    52,    53,    15,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    12,    52,    53,    15,    -1,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    -1,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    12,    52,    53,    15,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    12,    52,    53,    15,    -1,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    -1,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      12,    52,    53,    15,    -1,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,
      52,    53,    15,    -1,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    -1,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,    52,
      53,    15,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    12,    52,    53,
      15,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    -1,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    12,    52,    53,    15,
      -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    12,    52,    53,    15,    -1,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    -1,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    12,    52,    53,    15,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    12,    52,    53,    15,    -1,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    -1,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    12,    52,    53,    15,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    12,    52,    53,    15,    -1,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    -1,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      12,    52,    53,    15,    -1,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,
      52,    53,    15,    -1,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    -1,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,    52,
      53,    15,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    12,    52,    53,
      15,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    -1,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    12,    52,    53,    15,
      -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    12,    52,    53,    15,    -1,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    -1,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    12,    52,    53,    15,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    12,    52,    53,    15,    -1,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    -1,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    12,    52,    53,    15,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    12,    52,    53,    15,    -1,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    -1,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      12,    52,    53,    15,    -1,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,
      52,    53,    15,    -1,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    -1,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,    52,
      53,    15,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    12,    52,    53,
      15,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    -1,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    12,    52,    53,    15,
      -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    12,    52,    53,    15,    -1,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    -1,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    12,    52,    53,    15,    -1,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    12,    52,    53,    15,    -1,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    -1,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    12,    52,    53,    15,    -1,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    12,    52,    53,    15,    -1,    56,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    -1,     4,     5,    -1,     7,    -1,    -1,    10,    -1,
      12,    52,    53,    15,    -1,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      -1,     4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,
      52,    53,    15,    -1,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    -1,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,    52,
      53,    15,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,     4,
       5,    -1,     7,    -1,    -1,    10,    -1,    12,    52,    53,
      15,    -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    -1,     4,     5,
      -1,     7,    -1,    -1,    10,    -1,    12,    52,    53,    15,
      -1,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    -1,     4,     5,    -1,
       7,    -1,    -1,    10,    -1,    12,    52,    53,    15,    -1,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    -1,     4,     5,    -1,     7,
      -1,    -1,    10,    -1,    12,    52,    53,    15,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    -1,     4,     5,    -1,     7,    -1,
      -1,    10,    -1,    12,    52,    53,    15,    -1,    56,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      29,    -1,    31,    -1,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    -1,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    12,    52,    53,    15,    52,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    -1,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    -1,     4,     5,    -1,     7,    -1,    -1,    10,
      -1,    12,    52,    53,    15,    -1,    56,    -1,    -1,    -1,
       4,     5,    -1,     7,    -1,    -1,    10,    -1,    12,    -1,
      -1,    15,    33,    34,    35,    -1,    37,    38,    39,    40,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    33,
      34,    35,    53,    37,    38,    39,    40,     4,     5,    -1,
       7,    36,    -1,    10,    -1,    12,    -1,    -1,    15,    53,
      -1,    -1,    -1,    -1,     4,     5,    -1,     7,    -1,    -1,
      10,    -1,    12,    -1,    -1,    15,    33,    34,    35,    -1,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    53,    37,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,
      12,    13,    14,    53,    16,    17,    18,    19,    20,    21,
      22,    23,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    11,
      12,    53,    54,    55,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    54,    55,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      11,    12,    -1,    54,    55,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    54,
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
      23,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    54,    55,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    54,    55,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    54,
      55,    11,    12,    -1,    -1,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,
      14,    36,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    11,    12,    13,    14,    36,    16,    17,    18,    19,
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
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,
      12,    13,    14,    52,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    36,    11,    12,    13,    14,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,
      14,    36,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    25,    26,    27,    28,    59,    60,    61,    62,
      63,    64,    65,     0,    61,    52,     7,    53,    63,    65,
      66,    67,    68,     7,    54,    55,    56,    69,    68,    70,
       4,     5,     7,    10,    12,    15,    29,    31,    32,    33,
      34,    35,    37,    38,    39,    40,    41,    52,    53,    62,
      69,    71,    72,    73,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   102,   105,    53,    53,
      86,   105,    53,    93,    53,    52,    80,    53,    53,    53,
      53,    53,    93,    93,    53,    93,    80,    57,    73,    52,
      16,    17,    88,    18,    19,    20,    21,    22,    23,    89,
      11,    12,    90,    13,    14,    91,    82,    92,    88,    24,
      80,   103,   104,    80,    80,    73,    78,    52,     7,   105,
       8,     9,   101,   101,   105,    80,   105,    69,    74,    75,
      76,    77,    78,    36,    54,    82,    87,    92,    83,    84,
      85,    82,    87,    92,    80,    54,    55,    54,    30,    78,
      54,    54,    54,    54,    36,    80,    82,    92,    82,    92,
      80,    73,    73,    80,   105,    54,    30,    54,    54,    73,
      73,    56,    63,    65,     7,    53,     4,     5,     7,    10,
      12,    33,    34,    35,    37,    38,    39,    40,    53,    81,
      82,    83,    84,    85,    86,    87,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   102,   105,     4,     5,     7,
      10,    12,    33,    34,    35,    37,    38,    39,    40,    53,
      81,    82,    83,    84,    85,    86,    87,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   102,   105,     4,     5,
       7,    10,    12,    33,    34,    35,    37,    38,    39,    40,
      53,    81,    82,    83,    84,    85,    86,    87,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   102,   105,    29,
      31,    32,    41,    52,    56,    62,    63,    69,    75,    76,
      77,    78,    79,    80,    52,    80,     4,     5,     7,    10,
      12,    33,    34,    35,    37,    38,    39,    40,    53,    81,
      82,    83,    84,    85,    86,    87,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   102,   105,     7,    36,    52,
      80,    70,    52,     7,    80,    53,     7,    53,    86,   105,
      53,    53,    53,    53,    53,    93,    93,    53,    80,    88,
      89,    90,    91,    82,    92,    88,    24,    53,     7,    53,
      86,   105,    53,    53,    53,    53,    53,    93,    93,    53,
      80,    88,    89,    90,    91,    82,    92,    88,    24,    53,
       7,    53,    86,   105,    53,    53,    53,    53,    53,    93,
      93,    53,    80,    88,    89,    90,    91,    82,    92,    88,
      24,    53,    93,    53,    52,    80,    93,    70,    52,    52,
      52,    53,     7,    53,    86,   105,    53,    53,    53,    53,
      53,    93,    93,    53,    80,    88,    89,    90,    91,    82,
      92,    88,    24,    80,    52,    71,    36,   103,    80,   105,
     101,   101,   105,    80,   105,    36,    54,    82,    87,    92,
      83,    84,    85,    82,    87,    92,    80,   103,    80,   105,
     101,   101,   105,    80,   105,    36,    54,    82,    87,    92,
      83,    84,    85,    82,    87,    92,    80,   103,    80,   105,
     101,   101,   105,    80,   105,    36,    54,    82,    87,    92,
      83,    84,    85,    82,    87,    92,    80,    80,    73,    78,
      52,    69,    74,    75,    76,    77,    78,    71,   103,    80,
     105,   101,   101,   105,    80,   105,    36,    54,    82,    87,
      92,    83,    84,    85,    82,    87,    92,    80,    54,    57,
      80,    54,    54,    54,    54,    54,    36,    80,    82,    92,
      82,    92,    54,    54,    54,    54,    54,    36,    80,    82,
      92,    82,    92,    54,    54,    54,    54,    54,    36,    80,
      82,    92,    82,    92,    54,    30,    78,    57,    54,    54,
      54,    54,    54,    36,    80,    82,    92,    82,    92,    54,
     105,    54,   105,    54,   105,    54,    73,    73,    80,   105,
      54,    54,    54,    54,    30,    54,    54,    73,    73
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    59,    60,    60,    61,    61,    62,    63,
      64,    65,    65,    65,    65,    66,    67,    67,    68,    68,
      70,    69,    71,    71,    72,    72,    73,    73,    73,    73,
      73,    73,    73,    74,    74,    74,    74,    74,    75,    75,
      75,    75,    76,    77,    78,    78,    79,    79,    80,    80,
      80,    80,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    82,    82,    83,    83,    84,    84,    85,
      85,    86,    86,    86,    86,    86,    86,    87,    88,    88,
      89,    89,    89,    89,    89,    89,    90,    90,    91,    91,
      92,    92,    92,    92,    92,    93,    94,    95,    96,    97,
      98,    98,    99,   100,   100,   101,   101,   102,   103,   103,
     104,   104,   105
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     2,     2,
       6,     1,     1,     1,     1,     1,     3,     1,     1,     0,
       0,     4,     1,     0,     2,     1,     1,     1,     1,     1,
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
#line 292 "anasin.y"
    {
      printf("program\n");
      // abstract_tree = $1;
      // tree_node* create_ast_node(rules_types rule, char* type, char* value, struct tree_node* next, struct tree_node* child) 
      (yyval.nt_node) = create_ast_node(PROGRAM, NULL, NULL, NULL, (yyvsp[0].nt_node));
      abstract_tree = (yyval.nt_node);
    }
#line 3563 "anasin.tab.c"
    break;

  case 3: /* program: error  */
#line 301 "anasin.y"
    {
      yyerrok;
    }
#line 3571 "anasin.tab.c"
    break;

  case 4: /* declaration-list: declaration-list declaration  */
#line 307 "anasin.y"
    {
      printf("declaration-list  ->  declaration-list declaration\n");
      (yyval.nt_node) = create_ast_node(DECLARATION_LIST, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3581 "anasin.tab.c"
    break;

  case 5: /* declaration-list: declaration  */
#line 314 "anasin.y"
    {
      printf("declaration-list  ->  declaration\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3590 "anasin.tab.c"
    break;

  case 6: /* declaration: var-declaration  */
#line 321 "anasin.y"
    {
      printf("declaration  ->  var-declaration\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3599 "anasin.tab.c"
    break;

  case 7: /* declaration: func-declaration  */
#line 327 "anasin.y"
    {
      printf("declaration  ->  func-declaration\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3608 "anasin.tab.c"
    break;

  case 8: /* var-declaration: variable ';'  */
#line 334 "anasin.y"
    {
      printf("var declaration  ->  variable ;\n");
      (yyval.nt_node) = (yyvsp[-1].nt_node);
    }
#line 3617 "anasin.tab.c"
    break;

  case 9: /* variable: type-specifier ID  */
#line 341 "anasin.y"
    { 
      printf("variable  ->  type-specifier %s\n", (yyvsp[0].tt_name));
      (yyval.nt_node) = create_ast_node(VAR_DECLARATION, (yyvsp[-1].nt_node)->type, (yyvsp[0].tt_name), NULL, NULL);
      insert_into_symbol_table((yyvsp[0].tt_name), (yyvsp[-1].nt_node)->type, "variable");
    }
#line 3627 "anasin.tab.c"
    break;

  case 10: /* func-declaration: type-specifier ID '(' parameters ')' compound-stmt  */
#line 349 "anasin.y"
    {
      printf("func-declaration  ->  type-specifier %s ( parameters ) compount-stmt\n", (yyvsp[-4].tt_name));
      (yyval.nt_node) = create_ast_node(FUNC_DECLARATION, (yyvsp[-5].nt_node)->type, (yyvsp[-4].tt_name), NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
      insert_into_symbol_table((yyvsp[-4].tt_name), (yyvsp[-5].nt_node)->type, "function");
    }
#line 3638 "anasin.tab.c"
    break;

  case 11: /* type-specifier: TYPEINT  */
#line 358 "anasin.y"
    {
      printf("type-specifier  ->  %s\n", (yyvsp[0].tt_name));
      (yyval.nt_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].tt_name), NULL, NULL, NULL);
    }
#line 3647 "anasin.tab.c"
    break;

  case 12: /* type-specifier: TYPEFLOAT  */
#line 364 "anasin.y"
    {
      printf("type-specifier  ->  %s\n", (yyvsp[0].tt_name));
      (yyval.nt_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].tt_name), NULL, NULL, NULL);
    }
#line 3656 "anasin.tab.c"
    break;

  case 13: /* type-specifier: TYPEELEM  */
#line 370 "anasin.y"
    {
      printf("type-specifier  ->  %s\n", (yyvsp[0].tt_name));
      (yyval.nt_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].tt_name), NULL, NULL, NULL);
    }
#line 3665 "anasin.tab.c"
    break;

  case 14: /* type-specifier: TYPESET  */
#line 376 "anasin.y"
    {
      printf("type-specifier  ->  %s\n", (yyvsp[0].tt_name));
      (yyval.nt_node) = create_ast_node(TYPE_SPECIFIER, (yyvsp[0].tt_name), NULL, NULL, NULL);
    }
#line 3674 "anasin.tab.c"
    break;

  case 15: /* parameters: parameter-list  */
#line 383 "anasin.y"
    {
      printf("parameters  ->  parameter-list\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3683 "anasin.tab.c"
    break;

  case 16: /* parameter-list: parameter-list ',' parameter  */
#line 396 "anasin.y"
    {
      printf("parameter-list  ->  parameter-list , parameter\n");
      (yyval.nt_node) = create_ast_node(PARAMETER_LIST, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3693 "anasin.tab.c"
    break;

  case 17: /* parameter-list: parameter  */
#line 403 "anasin.y"
    {
      printf("parameter-list  ->  parameter\n");
      (yyval.nt_node) = create_ast_node(PARAMETER_LIST, NULL, NULL, NULL, (yyvsp[0].nt_node));
    }
#line 3702 "anasin.tab.c"
    break;

  case 18: /* parameter: variable  */
#line 410 "anasin.y"
    {
      printf("parameter  ->  variable\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3711 "anasin.tab.c"
    break;

  case 19: /* parameter: %empty  */
#line 416 "anasin.y"
    {
      (yyval.nt_node) = NULL;
    }
#line 3719 "anasin.tab.c"
    break;

  case 20: /* $@1: %empty  */
#line 422 "anasin.y"
    {
      current_scope+=1;
    }
#line 3727 "anasin.tab.c"
    break;

  case 21: /* compound-stmt: '{' $@1 local-declarations '}'  */
#line 426 "anasin.y"
    {
      printf("compound-stmt  ->  { local-declarations }\n");
      // $$ = create_ast_node(COMPOUND_STMT, NULL, NULL, NULL, $3);
      (yyval.nt_node) = (yyvsp[-1].nt_node);
      current_scope-=1;
    }
#line 3738 "anasin.tab.c"
    break;

  case 22: /* local-declarations: statement-list  */
#line 435 "anasin.y"
    {
      printf("local-declarations  ->  statement-list\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3747 "anasin.tab.c"
    break;

  case 23: /* local-declarations: %empty  */
#line 441 "anasin.y"
    {
      printf("local-declarations  ->\n");
      (yyval.nt_node) = NULL;
    }
#line 3756 "anasin.tab.c"
    break;

  case 24: /* statement-list: statement-list statement  */
#line 448 "anasin.y"
    {
      printf("statement-list  ->  statement-list statement\n");
      (yyval.nt_node) = create_ast_node(STATEMENT_LIST, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3766 "anasin.tab.c"
    break;

  case 25: /* statement-list: statement  */
#line 455 "anasin.y"
    {
      printf("statement-list  ->  statement\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3775 "anasin.tab.c"
    break;

  case 26: /* statement: compound-stmt  */
#line 462 "anasin.y"
    {
      printf("statement  ->  compound-stmt \n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3784 "anasin.tab.c"
    break;

  case 27: /* statement: conditional-stmt  */
#line 468 "anasin.y"
    {
      printf("statement  ->  conditional-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3793 "anasin.tab.c"
    break;

  case 28: /* statement: iteration-stmt  */
#line 474 "anasin.y"
    {
      printf("statement  ->  iteration-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3802 "anasin.tab.c"
    break;

  case 29: /* statement: expression-stmt  */
#line 480 "anasin.y"
    {
      printf("statement  ->  expression-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3811 "anasin.tab.c"
    break;

  case 30: /* statement: return-stmt  */
#line 486 "anasin.y"
    {
      printf("statement  ->  return-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3820 "anasin.tab.c"
    break;

  case 31: /* statement: var-declaration  */
#line 492 "anasin.y"
    {
      printf("statement  ->  var-declaration \n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3829 "anasin.tab.c"
    break;

  case 32: /* statement: forall-stmt  */
#line 498 "anasin.y"
    {
      printf("statement  ->  forall-stmt \n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3838 "anasin.tab.c"
    break;

  case 33: /* forall-statement: compound-stmt  */
#line 505 "anasin.y"
    {
      printf("statement  ->  compound-stmt \n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3847 "anasin.tab.c"
    break;

  case 34: /* forall-statement: conditional-stmt  */
#line 511 "anasin.y"
    {
      printf("statement  ->  conditional-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3856 "anasin.tab.c"
    break;

  case 35: /* forall-statement: iteration-stmt  */
#line 517 "anasin.y"
    {
      printf("statement  ->  iteration-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3865 "anasin.tab.c"
    break;

  case 36: /* forall-statement: expression-stmt  */
#line 523 "anasin.y"
    {
      printf("statement  ->  expression-stmt \n" );
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3874 "anasin.tab.c"
    break;

  case 37: /* forall-statement: forall-stmt  */
#line 529 "anasin.y"
    {
      printf("statement  ->  forall-stmt \n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 3883 "anasin.tab.c"
    break;

  case 38: /* conditional-stmt: IF '(' expression ')' statement  */
#line 537 "anasin.y"
    {
      printf("conditional-stmt  ->  if ( expression ) statement \n");
      (yyval.nt_node) = create_ast_node(CONDITIONAL_STMT, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3893 "anasin.tab.c"
    break;

  case 39: /* conditional-stmt: IF '(' expression ')' statement ELSE statement  */
#line 544 "anasin.y"
    {
      printf("conditional-stmt  ->  if ( expression ) statement else statement\n");
      (yyval.nt_node) = create_ast_node(CONDITIONAL_STMT, NULL, NULL, NULL, (yyvsp[-4].nt_node));
      (yyvsp[-4].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3904 "anasin.tab.c"
    break;

  case 40: /* conditional-stmt: IF setop-in statement  */
#line 552 "anasin.y"
    {
      printf("conditional-stmt  ->  if ( expression ) statement \n");
      (yyval.nt_node) = create_ast_node(CONDITIONAL_STMT, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3914 "anasin.tab.c"
    break;

  case 41: /* conditional-stmt: IF setop-in statement ELSE statement  */
#line 559 "anasin.y"
    {
      printf("conditional-stmt  ->  if ( expression ) statement else statement\n");
      (yyval.nt_node) = create_ast_node(CONDITIONAL_STMT, NULL, NULL, NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3925 "anasin.tab.c"
    break;

  case 42: /* iteration-stmt: FOR '(' expression-stmt expression-stmt expression ')' statement  */
#line 568 "anasin.y"
    {
      printf("iteration-stmt  ->  for ( expression ; expression ; expression ) statement\n");
      (yyval.nt_node) = create_ast_node(ITERATION_STMT, NULL, NULL, NULL, (yyvsp[-4].nt_node));
      (yyvsp[-4].nt_node)->next = (yyvsp[-3].nt_node);
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3937 "anasin.tab.c"
    break;

  case 43: /* forall-stmt: FORALL_OP setop-in forall-statement  */
#line 579 "anasin.y"
    {
      printf("setop-forall  ->  setop-in forall-statement\n");
      (yyval.nt_node) = create_ast_node(FORALL_STMT, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3947 "anasin.tab.c"
    break;

  case 44: /* expression-stmt: expression ';'  */
#line 588 "anasin.y"
    {
      printf("expression-stmt  ->  expression ;\n");
      (yyval.nt_node) = (yyvsp[-1].nt_node);
    }
#line 3956 "anasin.tab.c"
    break;

  case 45: /* expression-stmt: ';'  */
#line 594 "anasin.y"
    {
      printf("expression-stmt  ->  ; \n");
      (yyval.nt_node) = NULL;
    }
#line 3965 "anasin.tab.c"
    break;

  case 46: /* return-stmt: RETURN ';'  */
#line 601 "anasin.y"
    {
      printf("return-stmt  ->  return ; \n");
      (yyval.nt_node) = create_ast_node(RETURN_STMT, NULL, NULL, NULL, NULL);
    }
#line 3974 "anasin.tab.c"
    break;

  case 47: /* return-stmt: RETURN expression ';'  */
#line 607 "anasin.y"
    {
      printf("return-stmt  ->  return expression ; \n");
      (yyval.nt_node) = create_ast_node(RETURN_STMT, NULL, NULL, NULL, (yyvsp[-1].nt_node));
    }
#line 3983 "anasin.tab.c"
    break;

  case 48: /* expression: var ASSIGN expression  */
#line 623 "anasin.y"
    {
      printf("expression  ->  var = expression ;\n");
      (yyval.nt_node) = create_ast_node(EQ_T, NULL, (yyvsp[-1].tt_name), NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 3993 "anasin.tab.c"
    break;

  case 49: /* expression: simple-expression  */
#line 630 "anasin.y"
    {
      printf("expression  ->  simple-expression ;\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4002 "anasin.tab.c"
    break;

  case 50: /* expression: set-expression  */
#line 636 "anasin.y"
    {
      printf("expression  ->  set-expression ;\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4011 "anasin.tab.c"
    break;

  case 51: /* expression: io-expression  */
#line 642 "anasin.y"
    {
      printf("expression  ->  io-expression ;\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4020 "anasin.tab.c"
    break;

  case 52: /* simple-expression: logop-una relational-exp  */
#line 649 "anasin.y"
    {
      printf("simple-expression  ->  logop-una relational-exp simple-expression\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4030 "anasin.tab.c"
    break;

  case 53: /* simple-expression: logop-una set-expression  */
#line 656 "anasin.y"
    {
      printf("simple-expression  ->  logop-una relational-exp simple-expression\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-1].nt_node));
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4040 "anasin.tab.c"
    break;

  case 54: /* simple-expression: simple-expression logop-bin relational-exp  */
#line 663 "anasin.y"
    {
      printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4051 "anasin.tab.c"
    break;

  case 55: /* simple-expression: simple-expression logop-bin set-expression  */
#line 671 "anasin.y"
    {
      printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
      
    }
#line 4063 "anasin.tab.c"
    break;

  case 56: /* simple-expression: set-expression logop-bin relational-exp  */
#line 680 "anasin.y"
    {
      printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4074 "anasin.tab.c"
    break;

  case 57: /* simple-expression: set-expression logop-bin set-expression  */
#line 688 "anasin.y"
    {
      printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4085 "anasin.tab.c"
    break;

  case 58: /* simple-expression: simple-expression logop-bin logop-una relational-exp  */
#line 696 "anasin.y"
    {
      printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[0].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4097 "anasin.tab.c"
    break;

  case 59: /* simple-expression: simple-expression logop-bin logop-una set-expression  */
#line 705 "anasin.y"
    {
      printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[0].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4109 "anasin.tab.c"
    break;

  case 60: /* simple-expression: set-expression logop-bin logop-una relational-exp  */
#line 714 "anasin.y"
    {
      printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[0].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4121 "anasin.tab.c"
    break;

  case 61: /* simple-expression: set-expression logop-bin logop-una set-expression  */
#line 723 "anasin.y"
    {
      printf("simple-expression  ->  simple-expression logop-bin relational-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-2].nt_node);
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[0].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4133 "anasin.tab.c"
    break;

  case 62: /* simple-expression: relational-exp  */
#line 732 "anasin.y"
    {
      printf("simple-expression  ->  relational-exp\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4142 "anasin.tab.c"
    break;

  case 63: /* relational-exp: relational-exp relop arithm-add-exp  */
#line 739 "anasin.y"
    {
      printf("relational-exp  ->  arithm-add-exp relop arithm-add-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4153 "anasin.tab.c"
    break;

  case 64: /* relational-exp: arithm-add-exp  */
#line 747 "anasin.y"
    {
      printf("relational-exp  ->  arithm-add-exp\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4162 "anasin.tab.c"
    break;

  case 65: /* arithm-add-exp: arithm-add-exp ariop-add arithm-mul-exp  */
#line 754 "anasin.y"
    {
      printf("arithm-add-exp  ->  arithm-add-exp ariop-add arithm-mul-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4173 "anasin.tab.c"
    break;

  case 66: /* arithm-add-exp: arithm-mul-exp  */
#line 762 "anasin.y"
    {
      printf("arithm-add-exp  ->  arithm-mul-exp\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4182 "anasin.tab.c"
    break;

  case 67: /* arithm-mul-exp: arithm-mul-exp ariop-mul unary-minus-exp  */
#line 769 "anasin.y"
    {
      printf("arithm-mul-exp  ->  arithm-mul-exp ariop-mul unary-minus-exp\n");
      (yyval.nt_node) = create_ast_node(SIMPLE_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[-1].nt_node);
      (yyvsp[-1].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4193 "anasin.tab.c"
    break;

  case 68: /* arithm-mul-exp: unary-minus-exp  */
#line 777 "anasin.y"
    {
      printf("arithm-mul-exp  ->  unary-minus-exp\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4202 "anasin.tab.c"
    break;

  case 69: /* unary-minus-exp: MINUS factor  */
#line 784 "anasin.y"
    {
      printf("unary-minus-exp  ->  '-' factor\n");
      (yyval.nt_node) = (yyvsp[0].nt_node); //CORRIGIR NUMERO NEGATIVO
    }
#line 4211 "anasin.tab.c"
    break;

  case 70: /* unary-minus-exp: factor  */
#line 790 "anasin.y"
    {
      printf("unary-minus-exp  ->  factor\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4220 "anasin.tab.c"
    break;

  case 71: /* factor: '(' expression ')'  */
#line 797 "anasin.y"
    {
      printf("factor  ->  ( expression )\n");
      (yyval.nt_node) = (yyvsp[-1].nt_node);
    }
#line 4229 "anasin.tab.c"
    break;

  case 72: /* factor: func-call  */
#line 803 "anasin.y"
    {
      printf("factor  ->  func-call\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4238 "anasin.tab.c"
    break;

  case 73: /* factor: var  */
#line 814 "anasin.y"
    {
      printf("factor  ->  var\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4247 "anasin.tab.c"
    break;

  case 74: /* factor: INT  */
#line 820 "anasin.y"
    {
      printf("factor  ->  %s\n", (yyvsp[0].tt_name));
      (yyval.nt_node) = create_ast_node(FACTOR, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4256 "anasin.tab.c"
    break;

  case 75: /* factor: FLOAT  */
#line 826 "anasin.y"
    {
      printf("factor  ->  %s\n", (yyvsp[0].tt_name));
      (yyval.nt_node) = create_ast_node(FACTOR, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4265 "anasin.tab.c"
    break;

  case 76: /* factor: EMPTY  */
#line 832 "anasin.y"
    {
      printf("factor  ->  %s\n", (yyvsp[0].tt_name));
      (yyval.nt_node) = create_ast_node(FACTOR, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4274 "anasin.tab.c"
    break;

  case 77: /* logop-una: NOT  */
#line 839 "anasin.y"
    {
      printf("logop-una  ->  !\n");
      (yyval.nt_node) = create_ast_node(LOGOP_UNA, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4283 "anasin.tab.c"
    break;

  case 78: /* logop-bin: AND  */
#line 846 "anasin.y"
    {
      printf("logop-bin  ->  &&\n");
      (yyval.nt_node) = create_ast_node(LOGOP_BIN, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4292 "anasin.tab.c"
    break;

  case 79: /* logop-bin: OR  */
#line 852 "anasin.y"
    {
      printf("logop-bin  ->  ||\n");
      (yyval.nt_node) = create_ast_node(LOGOP_BIN, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4301 "anasin.tab.c"
    break;

  case 80: /* relop: LT  */
#line 859 "anasin.y"
    {
      printf("relop  ->  <\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4310 "anasin.tab.c"
    break;

  case 81: /* relop: LTE  */
#line 865 "anasin.y"
    {
      printf("relop  ->  <=\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4319 "anasin.tab.c"
    break;

  case 82: /* relop: GT  */
#line 871 "anasin.y"
    {
      printf("relop  ->  >\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4328 "anasin.tab.c"
    break;

  case 83: /* relop: GTE  */
#line 877 "anasin.y"
    {
      printf("relop  ->  >=\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4337 "anasin.tab.c"
    break;

  case 84: /* relop: EQ  */
#line 883 "anasin.y"
    {
      printf("relop  ->  ==\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4346 "anasin.tab.c"
    break;

  case 85: /* relop: NEQ  */
#line 889 "anasin.y"
    {
      printf("relop  ->  !=\n");
      (yyval.nt_node) = create_ast_node(RELOP, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4355 "anasin.tab.c"
    break;

  case 86: /* ariop-add: PLUS  */
#line 896 "anasin.y"
    {
      printf("ariop-add  ->  +\n");
      (yyval.nt_node) = create_ast_node(ARIOP_ADD, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4364 "anasin.tab.c"
    break;

  case 87: /* ariop-add: MINUS  */
#line 902 "anasin.y"
    {
      printf("ariop-add  ->  -\n");
      (yyval.nt_node) = create_ast_node(ARIOP_ADD, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4373 "anasin.tab.c"
    break;

  case 88: /* ariop-mul: MULT  */
#line 909 "anasin.y"
    {
      printf("ariop-mul  ->  *\n");
      (yyval.nt_node) = create_ast_node(ARIOP_MUL, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4382 "anasin.tab.c"
    break;

  case 89: /* ariop-mul: DIV  */
#line 915 "anasin.y"
    {
      printf("ariop-mul  ->  /\n");
      (yyval.nt_node) = create_ast_node(ARIOP_MUL, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4391 "anasin.tab.c"
    break;

  case 90: /* set-expression: setop-in  */
#line 922 "anasin.y"
    {
      printf("set-expressions  ->  setop-in\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4400 "anasin.tab.c"
    break;

  case 91: /* set-expression: setop-is-set  */
#line 928 "anasin.y"
    {
      printf("set-expressions  ->  setop-is-set\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4409 "anasin.tab.c"
    break;

  case 92: /* set-expression: setop-add  */
#line 934 "anasin.y"
    {
      printf("set-expressions  ->  setop-add\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4418 "anasin.tab.c"
    break;

  case 93: /* set-expression: setop-remove  */
#line 940 "anasin.y"
    {
      printf("set-expressions  ->  setop-remove\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4427 "anasin.tab.c"
    break;

  case 94: /* set-expression: setop-exists  */
#line 946 "anasin.y"
    {
      printf("set-expressions  ->  setop-exists\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4436 "anasin.tab.c"
    break;

  case 95: /* setop-in: '(' expression IN_OP expression ')'  */
#line 953 "anasin.y"
    {
      printf("setop-in  ->  ( expression IN_OP expression ) \n");
      (yyval.nt_node) = create_ast_node(SETOP_IN, NULL, (yyvsp[-2].tt_name), NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-1].nt_node);
    }
#line 4446 "anasin.tab.c"
    break;

  case 96: /* setop-is-set: IS_SET_OP '(' var ')'  */
#line 970 "anasin.y"
    {
      printf("setop-is-set  ->  is_set ( var )\n");
      (yyval.nt_node) = create_ast_node(SETOP_IS_SET, NULL, (yyvsp[-3].tt_name), NULL, (yyvsp[-1].nt_node));
    }
#line 4455 "anasin.tab.c"
    break;

  case 97: /* setop-add: ADD_OP setop-in  */
#line 977 "anasin.y"
    {
      printf("setop-add  ->  add setop-in\n");
      (yyval.nt_node) = create_ast_node(SETOP_ADD, NULL, (yyvsp[-1].tt_name), NULL, (yyvsp[0].nt_node));
    }
#line 4464 "anasin.tab.c"
    break;

  case 98: /* setop-remove: REMOVE_OP setop-in  */
#line 984 "anasin.y"
    {
      printf("setop-remove  ->  remove setop-in\n");
      (yyval.nt_node) = create_ast_node(SETOP_REMOVE, NULL, (yyvsp[-1].tt_name), NULL, (yyvsp[0].nt_node));
    }
#line 4473 "anasin.tab.c"
    break;

  case 99: /* setop-exists: EXISTS_OP '(' var IN_OP var ')'  */
#line 1008 "anasin.y"
    {
      printf("setop-exists  ->  exists ( var in var )\n");
      (yyval.nt_node) = create_ast_node(SETOP_EXISTS, NULL, (yyvsp[-5].tt_name), NULL, (yyvsp[-3].nt_node));
      (yyvsp[-3].nt_node)->next = (yyvsp[-1].nt_node);
    }
#line 4483 "anasin.tab.c"
    break;

  case 100: /* io-expression: ioop-read  */
#line 1016 "anasin.y"
    {
      printf("io-expression  ->  ioop-read\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4492 "anasin.tab.c"
    break;

  case 101: /* io-expression: ioop-write  */
#line 1022 "anasin.y"
    {
      printf("io-expression  ->  ioop-read\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4501 "anasin.tab.c"
    break;

  case 102: /* ioop-read: READ '(' var ')'  */
#line 1038 "anasin.y"
    {
      printf("ioop-read  ->  read ( var ) \n");
      (yyval.nt_node) = create_ast_node(READ_T, NULL, (yyvsp[-3].tt_name), NULL, (yyvsp[-1].nt_node));
    }
#line 4510 "anasin.tab.c"
    break;

  case 103: /* ioop-write: WRITE '(' word ')'  */
#line 1045 "anasin.y"
    {
      printf("ioop-write  ->  write ( word ) \n");
      (yyval.nt_node) = create_ast_node(WRITE, NULL, (yyvsp[-3].tt_name), NULL, (yyvsp[-1].nt_node));
    }
#line 4519 "anasin.tab.c"
    break;

  case 104: /* ioop-write: WRITELN '(' word ')'  */
#line 1051 "anasin.y"
    {
      printf("ioop-write  ->  writeln ( word ) \n");
      (yyval.nt_node) = create_ast_node(WRITELN, NULL, (yyvsp[-3].tt_name), NULL, (yyvsp[-1].nt_node));
    }
#line 4528 "anasin.tab.c"
    break;

  case 105: /* word: CHAR  */
#line 1058 "anasin.y"
    {
      printf("word  ->  %s\n", (yyvsp[0].tt_name));
      (yyval.nt_node) = create_ast_node(CHAR_T, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4537 "anasin.tab.c"
    break;

  case 106: /* word: STRING  */
#line 1064 "anasin.y"
    {
      printf("word  ->  %s\n", (yyvsp[0].tt_name));
      (yyval.nt_node) = create_ast_node(STRING_T, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4546 "anasin.tab.c"
    break;

  case 107: /* func-call: ID '(' arguments ')'  */
#line 1071 "anasin.y"
    {
      printf("func-call  ->  %s ( arguments )\n", (yyvsp[-3].tt_name));
      (yyval.nt_node) = create_ast_node(FUNC_CALL, NULL, (yyvsp[-3].tt_name), NULL, (yyvsp[-1].nt_node));
    }
#line 4555 "anasin.tab.c"
    break;

  case 108: /* arguments: args-list  */
#line 1078 "anasin.y"
    {
      printf("arguments  ->  args-list\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4564 "anasin.tab.c"
    break;

  case 109: /* arguments: %empty  */
#line 1084 "anasin.y"
    {
      printf("arguments  ->  empty-set\n");
      (yyval.nt_node) = NULL;
    }
#line 4573 "anasin.tab.c"
    break;

  case 110: /* args-list: args-list ',' expression  */
#line 1091 "anasin.y"
    {
      printf("args-list  ->  args-list , expression\n");
      (yyval.nt_node) = create_ast_node(ARGS_LIST, NULL, NULL, NULL, (yyvsp[-2].nt_node));
      (yyvsp[-2].nt_node)->next = (yyvsp[0].nt_node);
    }
#line 4583 "anasin.tab.c"
    break;

  case 111: /* args-list: expression  */
#line 1098 "anasin.y"
    {
      printf("args-list  ->  expression\n");
      (yyval.nt_node) = (yyvsp[0].nt_node);
    }
#line 4592 "anasin.tab.c"
    break;

  case 112: /* var: ID  */
#line 1105 "anasin.y"
    {
      printf("var  ->  %s\n", (yyvsp[0].tt_name));
      (yyval.nt_node) = create_ast_node(VAR, NULL, (yyvsp[0].tt_name), NULL, NULL);
    }
#line 4601 "anasin.tab.c"
    break;


#line 4605 "anasin.tab.c"

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

#line 1111 "anasin.y"



/* HANDLE SYMBOL TABLE */
symbol_table_entry* create_symbol_table_entry(char* hash_key, char* symbol_name, char* symbol_type, int symbol_scope, char* entry_type) {
  symbol_table_entry* new_entry = (symbol_table_entry*) malloc(sizeof (symbol_table_entry));

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

  new_entry = lookup_symbol_table(hash_key, new_entry);
  // HASH_FIND_STR(symbol_table, hash_key, new_entry);

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
  char* new_key = (char*) malloc(key_size);
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

symbol_table_entry* lookup_symbol_table(char* hash_key, symbol_table_entry* result_entry) {
  HASH_FIND_STR(symbol_table, hash_key, result_entry);

  return result_entry;
}

void print_symbol_table() {
  symbol_table_entry* entry;
  
  printf("\n\n________________ SYMBOL TABLE ________________\n\n");
  for(entry = symbol_table; entry != NULL; entry = entry->hh.next) {
    printf("Table Entry =>   < HASH_KEY:%s >     < SYMBOL_NAME:%s >     < SYMBOL_TYPE:%s >     < SYMBOL_SCOPE:%d >     < ENTRY_TYPE:%s >\n", entry->hash_key, entry->symbol_name, entry->symbol_type, entry->symbol_scope, entry->entry_type);
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


/* HANDLE ABSTRACT TREE */
tree_node* create_ast_node(rules_types rule, char* type, char* value, struct tree_node* next, struct tree_node* child) {
  tree_node* new_node = (tree_node*) malloc(sizeof(tree_node));

  new_node->rule = rule;
  new_node->type = type;
  new_node->value = value;
  new_node->next = next;
  new_node->child = child;

  return new_node;
}






// Printa informação da classe do Nó
void print_class(int node_type){
    switch(node_type){
    case PROGRAM:
      printf("PROGRAM");
      break;
    case DECLARATION_LIST:
      printf("DECLARATION_LIST");
      break;
    case DECLARATION:
      printf("DECLARATION");
      break;
    case VAR_DECLARATION:
      printf("VAR_DECLARATION");
      break;
    case VARIABLE:
      printf("VARIABLE");
      break;
    case FUNC_DECLARATION:
      printf("FUNC_DECLARATION");
      break;
    case TYPE_SPECIFIER:
      printf("TYPE_SPECIFIER");
      break;
    case PARAMETERS:
      printf("PARAMETERS");
      break;
    case PARAMETER_LIST:
      printf("PARAMETER_LIST");
      break;
    case PARAMETER:
      printf("PARAMETER");
      break;
    case COMPOUND_STMT:
      printf("COMPOUND_STMT");
      break;
    case LOCAL_DECLARATIONS:
      printf("LOCAL_DECLARATIONS");
      break;
    case STATEMENT_LIST:
      printf("STATEMENT_LIST");
      break;
    case STATEMENT:
      printf("STATEMENT");
      break;
    case FORALL_STATEMENT:
      printf("FORALL_STATEMENT");
      break;
    case CONDITIONAL_STMT:
      printf("CONDITIONAL_STMT");
      break;
    case ITERATION_STMT:
      printf("ITERATION_STMT");
      break;
    case FORALL_STMT:
      printf("FORALL_STMT");
      break;
    case EXPRESSION_STMT:
      printf("EXPRESSION_STMT");
      break;
    case RETURN_STMT:
      printf("RETURN_STMT");
      break;
    case EXPRESSION:
      printf("EXPRESSION");
      break;
    case SIMPLE_EXPRESSION:
      printf("SIMPLE_EXPRESSION");
      break;
    case RELATIONAL_EXP:
      printf("RELATIONAL_EXP");
      break;
    case ARITHM_ADD_EXP:
      printf("ARITHM_ADD_EXP");
      break;
    case ARITHM_MUL_EXP:
      printf("ARITHM_MUL_EXP");
      break;
    case UNARY_MINUS_EXP:
      printf("UNARY_MINUS_EXP");
      break;
    case FACTOR:
      printf("FACTOR");
      break;
    case LOGOP_UNA:
      printf("LOGOP_UNA");
      break;
    case LOGOP_BIN:
      printf("LOGOP_BIN");
      break;
    case RELOP:
      printf("RELOP");
      break;
    case ARIOP_ADD:
      printf("ARIOP_ADD");
      break;
    case ARIOP_MUL:
      printf("ARIOP_MUL");
      break;
    case SET_EXPRESSION:
      printf("SET_EXPRESSION");
      break;
    case SETOP_IN:
      printf("SETOP_IN");
      break;
    case SETOP_IS_SET:
      printf("SETOP_IS_SET");
      break;
    case SETOP_ADD:
      printf("SETOP_ADD");
      break;
    case SETOP_REMOVE:
      printf("SETOP_REMOVE");
      break;
    case SETOP_EXISTS:
      printf("SETOP_EXISTS");
      break;
    case IO_EXPRESSION:
      printf("IO_EXPRESSION");
      break;
    case IOOP_READ:
      printf("IOOP_READ");
      break;
    case IOOP_WRITE:
      printf("IOOP_WRITE");
      break;
    case WORD:
      printf("WORD");
      break;
    case FUNC_CALL:
      printf("FUNC_CALL");
      break;
    case ARGUMENTS:
      printf("ARGUMENTS");
      break;
    case ARGS_LIST:
      printf("ARGS_LIST");
      break;
    case VAR:
      printf("VAR");
      break;
    }
    printf(" | ");
}

// Printa identação
void print_depth(int depth) {
    int i = depth;
    while(i != 0){
        printf("-");
        i--;
    }
}

// Printa árvore
void print_tree(tree_node* tree, int depth) {
    if (tree) {
        print_depth(depth);
        print_class(tree->rule);
        if (tree->type != NULL){
            printf("type: %s | ", tree->type);
        }
        if (tree->value != NULL){
            printf("value: %s | ", tree->value);
        }
        printf("\n");
        print_tree(tree->next, depth);
        print_tree(tree->child, depth + 1);
    }
}

// Apaga a árvore
void free_tree(tree_node* node){
    if(node == NULL) return;
    if(node->next) free_tree(node->next);
    if(node->child) free_tree(node->child);
    free(node);
}











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

  print_tree(abstract_tree, 0);
  print_symbol_table();

  free_tree(abstract_tree);
  free_symbol_table();

  return 0;
}
