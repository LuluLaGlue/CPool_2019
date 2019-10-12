/*
** EPITECH PROJECT, 2019
** CPool_Day10_2019
** File description:
** op
*/

#include "my.h"

int which_op(char **argv)
{
    if (argv[2][0] == '+')
        return (1);
    if (argv[2][0] == '-')
        return (2);
    if (argv[2][0] == '*')
        return (3);
    if (argv[2][0] == '/')
        return (4);
    if (argv[2][0] == '%')
        return (5);
    return (0);
}

int do_op(char **argv)
{
    int op_type = which_op(argv);
    int result = 0;
    switch(op_type){
        case 1:
            result = my_getnbr(argv[1]) + my_getnbr(argv[3]);
            break;
        case 2:
            result = my_getnbr(argv[1]) - my_getnbr(argv[3]);
            break;
        case 3:
            result = my_getnbr(argv[1]) * my_getnbr(argv[3]);
            break;
        case 4:
            result = my_getnbr(argv[1]) / my_getnbr(argv[3]);
            break;
        case 5:
            result = my_getnbr(argv[1]) % my_getnbr(argv[3]);
            break;
    }
    return (result);
}