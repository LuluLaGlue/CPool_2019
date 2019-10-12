/*
** EPITECH PROJECT, 2019
** CPool_Day10_2019
** File description:
** error
*/

#include "my.h"

int is_operator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
        return (1);
    return (0);
}

int check_op(char **argv)
{
    if (my_getnbr(argv[3]) == 0 && argv[2][0] == '/'){
        write(2, "Stop: division by zero\n", 23);
        return (0);
    }
    else if (my_getnbr(argv[3]) == 0 && argv[2][0] == '%'){
        write(2, "Stop: modulo by zero\n", 21);
        return (0);
    }
    return (1);
}

int check_error(char **argv, int argc)
{
    if (argc != 4)
        return (0);
    if (!is_operator(argv[2][0])){
        my_put_nbr(0);
        return (0);
    }
    if (!check_op(argv))
        return (0);
    return (1);
}