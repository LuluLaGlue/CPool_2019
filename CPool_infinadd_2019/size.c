/*
** EPITECH PROJECT, 2019
** infinadd_Simon
** File description:
** size
*/

#include "./include/my.h"
#include "./include/head.h"
#include <unistd.h>
#include <stdlib.h>

int size_check(int size1, int size2)
{
    int size = 0;
    if (size2 > size1)
        size = size2 + 1;
    else
        size = size1 + 1;
    return (size);
}

char *sign_check(int comp, char **argv, char *res)
{
    if (argv[1][0] == '-'){
        comp = compare(argv[1] + 1, argv[2]);
        if (comp > 0){
            write(1, "-", 1);
            res = substract(argv[1] + 1, argv[2]);
        }
        else if (comp < 0)
            res = substract(argv[2], argv[1] + 1);
        else
            res = "0";
    }
    else
        res = sign_check_bis(comp, argv, res);
    return (res);
}

char *sign_check_bis(int comp, char **argv, char *res)
{
    comp = compare(argv[1], argv[2] + 1);
    if (comp > 0)
        res = substract(argv[1], argv[2] + 1);
    else if (comp < 0){
        write(1, "-", 1);
        res = substract(argv[2] + 1, argv[1]);
    }
    else
        res = "0";
    return (res);
}

int compare(char *s1, char *s2)
{
    int i = 0, size1 = my_strlen(s1), size2 = my_strlen(s2);
    if (size1 > size2)
        return (1);
    else if (size2 > size1)
        return (-1);
    while (i < size1){
        if (s1[i] > s2[i])
            return (1);
        if (s2[i] > s1[i])
            return (-1);
        i++;
    }
    return (0);
}