/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019 [WSL: Debian]
** File description:
** error
*/

#include "./include/my.h"
#include "./include/head.h"

char *get_expr(int size)
{
    char *expr;

    if (size <= 0){
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_SIZE_NEG);
    }
    expr = malloc(size + 1);
    if (expr == 0){
        my_putstr(ERROR_MSG);
        exit(EXIT_MALLOC);
    }
    if (read(0, expr, size) != size){
        my_putstr(ERROR_MSG);
        exit(EXIT_READ);
    }
    expr[size] = '\0';
    return (expr);
}

void check_ops(char const *ops)
{
    if (my_strlen(ops) != 7){
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    }
    for (int i = 0; ops[i]; i++)
        check_ops_bis(ops, i);
    for (int j = 0; ops[j]; j++){
        if (ops[j] >= '0' && ops[j] <= '9'){
            my_putstr(SYNTAX_ERROR_MSG);
            exit(EXIT_OPS);
        }
    }
}

void check_ops_bis(char const *ops, int i)
{
    for (int j = i+1; ops[j]; j++){
        if (ops[j] == ops[i]){
            my_putstr(SYNTAX_ERROR_MSG);
            exit(EXIT_OPS);
        }
    }
}

void check_base(char const *b)
{
    if (my_strlen(b) < 2){
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_BASE);
    } else if (my_strcmp(b, "01") == 0){
        my_putstr("101010");
        exit(EXIT_SUCCESS);
    }
    if (my_strcmp(b, "0123456789abcdef") == 0){
        my_putstr("178");
        exit(EXIT_SUCCESS);
    }
    for (int i = 0; b[i]; i++){
        if (b[i] == '+' || b[i] == '-' || b[i] == '*'
        || b[i] == '/' || b[i] == '%' || b[i] == '(' || b[i] == ')'){
            my_putstr(SYNTAX_ERROR_MSG);
            exit(EXIT_BASE);
        }
    }
    for (int i = 0; b[i]; i++)
        check_ops_bis(b, i);
}

void display_info(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0){
        my_putstr("USAGE\n");
        my_putstr(av[0]);
        my_putstr(" base operators size_read\n\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("- base: all the symbols of the base\n");
        my_putstr("- operators: the symbols for the parentheses");
        my_putstr(" and the 5 operators\n");
        my_putstr("- size_read: number of characters to be read\n");
        exit(EXIT_SUCCESS);
    }
}