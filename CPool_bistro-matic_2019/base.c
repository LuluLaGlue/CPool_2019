/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** base
*/

#include "./include/my.h"
#include "./include/head.h"

char *base_num(char const *av, char const *base, char *res, int size)
{
    int i = 0;
    for (i = 0; i <= size; i++){
        if (av[i] == base[0])
            res[i] = '0';
        if (av[i] == base[1])
            res[i] = '1';
        if (av[i] == base[2])
            res[i] = '2';
        if (av[i] == base[3])
            res[i] = '3';
        if (av[i] == base[4])
            res[i] = '4';
        res[i] = base_num_bis(av, base, res[i], i);
    }
    res[i] = '\0';
    return (res);
}

char *reverse_base_num(char *res, char const *base, int size)
{
    int i = 0;
    for (i = 0; i <= size; i++){
        if (res[i] == '0')
            res[i] = base[0];
        if (res[i] == '1')
            res[i] = base[1];
        if (res[i] == '2')
            res[i] = base[2];
        if (res[i] == '3')
            res[i] = base[3];
        if (res[i] == '4')
            res[i] = base[4];
        res[i] = rev_base_num_bis(base, res[i]);
    }
    res[i] = '\0';
    return (res);
}

char *base_op(char const *av, char const *base, char *res, int size)
{
    int i = 0;
    for (i = 0; i <= size; i++){
        if (av[i] == base[0])
            res[i] = '(';
        if (av[i] == base[1])
            res[i] = ')';
        if (av[i] == base[2])
            res[i] = '+';
        if (av[i] == base[3])
            res[i] = '-';
        if (av[i] == base[4])
            res[i] = '*';
        if (av[i] == base[5])
            res[i] = '/';
        if (av[i] == base[6])
            res[i] = '%';
    }
    res[i] = '\0';
    return (res);
}

char *reverse_base_op(char *res, char const *base, int size)
{
    int i = 0;
    for (i = 0; i <= size; i++){
        if (res[i] == '(')
            res[i] = base[0];
        if (res[i] == ')')
            res[i] = base[1];
        if (res[i] == '+')
            res[i] = base[2];
        if (res[i] == '-')
            res[i] = base[3];
        if (res[i] == '*')
            res[i] = base[4];
        if (res[i] == '/')
            res[i] = base[5];
        if (res[i] == '%')
            res[i] = base[6];
    }
    res[i] = '\0';
    return (res);
}