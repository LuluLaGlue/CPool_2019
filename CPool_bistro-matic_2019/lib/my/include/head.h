/*
** EPITECH PROJECT, 2019
** CPool_infinadd_2019
** File description:
** head
*/

#ifndef HEAD_H_
#define HEAD_H_
    #include <stdlib.h>
    #include <unistd.h>
    #include <string.h>

    #define OP_OPEN_PARENT      0
    #define OP_CLOSE_PARENT     1
    #define OP_PLUS             2
    #define OP_SUB              3
    #define OP_NEG              3
    #define OP_MULT             4
    #define OP_DIV              5
    #define OP_MOD              6

    #define EXIT_USAGE      84
    #define EXIT_BASE       84
    #define EXIT_SIZE_NEG   84
    #define EXIT_MALLOC     84
    #define EXIT_READ       84
    #define EXIT_OPS        84
    #define EXIT_EXPR       84

    #define SYNTAX_ERROR_MSG "syntax error"
    #define ERROR_MSG        "error"
    int parse_number(char **expr);
    int parse_factors(char **expr);
    char *parse_sum(char **expr);
    char *eval_expr(char const *base, char const *ops
    , char *expr, int size);
    char *get_expr(int size);
    void check_ops(char const *ops);
    void check_base(char const *b);
    int my_tiny_atoi(char **str);
    int my_atoi(char *str);
    char *my_itoa(int nb);
    int my_int_len(int nb);
    char *base_num(char const *av, char const *base, char *res
    , int size);
    char *base_op(char const *av, char const *base, char *res
    , int size);
    char *reverse_base_num(char *res, char const *base, int size);
    char *reverse_base_op(char *res, char const *base, int size);
    char rev_base_num_bis(char const *base, char res);
    char base_num_bis(char const *av, char const *base, char res, int i);
#endif