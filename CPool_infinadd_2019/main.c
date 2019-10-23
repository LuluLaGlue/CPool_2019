/*
** EPITECH PROJECT, 2019
** infinadd_Simon
** File description:
** main
*/

#include "./include/my.h"
#include "./include/head.h"
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char *res;
    int comp;

    if (argc != 3)
        return (0);
    if (argv[1][0] != '-' && argv[2][0] != '-')
        res = add(argv[1], argv[2]);
    else if (argv[1][0] == '-' && argv[2][0] == '-'){
        write(1, "-", 1);
        res = add(argv[1] + 1, argv[2] + 1);
    }
    else
        res = sign_check(comp, argv, res);
    write(1, res, my_strlen(res));
    write(1, "\n", 1);
    return (0);
}