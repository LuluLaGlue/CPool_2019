/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** main
*/

#include "./include/my.h"
#include "./include/head.h"

int check_expr(char *expr)
{
    int i = 0;
    int open = 0;
    int close = 0;
    for (i = 0; (expr[i] > '9' || expr[i] < '0') && expr[i]; i++);
    if ((expr[i - 1] == ')' || expr[i + 1] == '('))
        return (0);
    for (int j = 0; expr[j] != '\0'; j++){
        if (expr[j] == '(')
            open++;
        if (expr[j] == ')')
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
    display_info(ac, av);
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
    eval_expr(av[1], av[2], expr, size);
    free(expr);
    return (EXIT_SUCCESS);
}