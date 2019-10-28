/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** base_bis
*/

#include "./include/my.h"
#include "./include/head.h"

char base_num_bis(char const *av, char const *base, char res, int i)
{
    if (av[i] == base[5])
        res = '5';
    if (av[i] == base[6])
        res = '6';
    if (av[i] == base[7])
        res = '7';
    if (av[i] == base[8])
        res = '8';
    if (av[i] == base[9])
        res = '9';
    return (res);
}

char rev_base_num_bis(char const *base, char res)
{
    if (res == '5')
        res = base[5];
    if (res == '6')
        res = base[6];
    if (res == '7')
        res = base[7];
    if (res == '8')
        res = base[8];
    if (res == '9')
        res = base[9];
    return (res);
}