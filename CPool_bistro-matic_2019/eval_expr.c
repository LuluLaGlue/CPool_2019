/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** test
*/

#include "./include/my.h"
#include "./include/head.h"

int parse_number(char **expr)
{
    int nbr;

    while (**expr == ' ')
        (*expr)++;
    if (**expr == '('){
        (*expr)++;
        nbr = my_atoi(parse_sum(expr));
        if (**expr == ')')
            (*expr)++;
        return (nbr);
    }
    return (my_tiny_atoi(expr));
}

int parse_factors(char **expr)
{
    int nbr, nbr2;
    char op;

    nbr = parse_number(expr);
    while (**expr){
        while (**expr == ' ')
            (*expr)++;
        op = **expr;
        if (op != '/' && op != '*' && op != '%')
            return (nbr);
        (*expr)++;
        nbr2 = parse_number(expr);
        if (op == '/')
            nbr /= nbr2;
        else if (op == '*')
            nbr *= nbr2;
        else
            nbr %= nbr2;
    }
    return (nbr);
}

char *parse_sum(char **expr)
{
    int nbr;
    int nbr2;
    char op;

    nbr = parse_factors(expr);
    while (**expr){
        while (**expr == ' ')
            (*expr)++;
        op = **expr;
        if (op != '+' && op != '-')
            return (my_itoa(nbr));
        (*expr)++;
        nbr2 = parse_factors(expr);
        if (op == '+')
            nbr += nbr2;
        else
            nbr -= nbr2;
    }
    return (my_itoa(nbr));
}

char *eval_expr(char const *base, char const *ops,
        char *expr, int size)
{
    char *res = malloc(sizeof(char) * size + 1);
    if (res == 0)
        return (NULL);
    res = base_num(expr, base, res, size);
    res = base_op(expr, ops, res, size);
    res = parse_sum(&res);
    res = reverse_base_num(res, base, size);
    res = reverse_base_op(res, ops, size);
    return (res);
}