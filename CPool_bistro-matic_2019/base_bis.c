/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** base_bis
*/

#include "./include/my.h"
#include "./include/head.h"

char *base_num_bis(char const *av, char const *base, char *res, int i)
{
    if (av[i] == base[5])
        res[i] = '5';
    if (av[i] == base[6])
        res[i] = '6';
    if (av[i] == base[7])
        res[i] = '7';
    if (av[i] == base[8])
        res[i] = '8';
    if (av[i] == base[9])
        res[i] = '9';
    return (res);
}

char *rev_base_num_bis(char const *base, char *res, int i)
{
    if (res[i] == '5')
        res[i] = base[5];
    if (res[i] == '6')
        res[i] = base[6];
    if (res[i] == '7')
        res[i] = base[7];
    if (res[i] == '8')
        res[i] = base[8];
    if (res[i] == '9')
        res[i] = base[9];
    return (res);
}