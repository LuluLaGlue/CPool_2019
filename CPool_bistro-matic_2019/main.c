/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** main
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
    expr[size] = 0;
    return (expr);
}

void check_ops(char const *ops)
{
    if (my_strlen(ops) != 7){
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    }
}

void check_base(char const *b)
{
    if (my_strlen(b) < 2){
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_BASE);
    }
}

int check_expr(char *expr)
{
    int i = 0;
    int open = 0;
    int close = 0;
    for (i = 0; expr[i] > '9' || expr[i] < '0'; i++);
    if ((expr[i - 1] == '-' || expr[i - 1] == '+')
    && (expr[i - 2] == '-' || expr[i - 2] == '+'))
        return (0);
    for (i = 0; expr[i]; i++){
        if (expr[i] == '(')
            open++;
        if (expr[i] == ')')
            close++;
    }
    if (close != open)
        return (0);
    return (1);
}

int main(int ac, char **av)
{
    int size;
    char *expr;

    if (ac != 4){
        my_putstr("Usage: ");
        my_putstr(av[0]);
        my_putstr(" base ops\"()+_*/%\" exp_len\n");
        return (EXIT_USAGE);
    }
    check_base(av[1]);
    check_ops(av[2]);
    size = my_atoi(av[3]);
    expr = get_expr(size);
    if (expr == NULL || check_expr(expr) == 0){
        my_putstr(SYNTAX_ERROR_MSG);
        return (EXIT_EXPR);
    }
    my_putstr(eval_expr(av[1], av[2], expr, size));
    return (EXIT_SUCCESS);
}