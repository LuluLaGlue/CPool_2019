/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** main
*/

#include "./include/head.h"
#include "./include/my.h"

int  main(int ac , char **av)
{
    if (ac == 2) {
        my_put_nbr(eval_expr(av[1]));
        my_putchar('\n');
        return  (0);
    }
    return  (84);
}