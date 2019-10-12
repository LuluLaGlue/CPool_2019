/*
** EPITECH PROJECT, 2019
** CPool_Day10_2019
** File description:
** main
*/

#include "my.h"

int main(int argc, char **argv)
{
    int result = 0;
    if (!(check_error(argv, argc)))
        return (84);
    result = do_op(argv);
    my_put_nbr(result);
    if (!result)
        return (84);
    return (0);
}