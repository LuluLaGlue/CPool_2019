/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** my_div
*/

#include "./include/my.h"
#include "./include/head.h"

int my_div(char *nb1, char *nb2)
{
    int inb1 = 0;
    int inb2 = 0;
    int res = 0;
    inb1 = char_to_int(nb1);
    inb2 = char_to_int(nb2);
    res = inb1 / inb2;
    return (res);
}

int mod(char *nb1, char *nb2)
{
    int inb1 = 0;
    int inb2 = 0;
    int res = 0;
    inb1 = char_to_int(nb1);
    inb2 = char_to_int(nb2);
    res = inb1 % inb2;
    return (res);
}

int mult(char *nb1, char *nb2)
{
    int inb1 = 0;
    int inb2 = 0;
    int res = 0;
    inb1 = char_to_int(nb1);
    inb2 = char_to_int(nb2);
    res = inb1 * inb2;
    return (res);
}

int add(char *nb1, char *nb2)
{
    int inb1 = 0;
    int inb2 = 0;
    int res = 0;
    inb1 = char_to_int(nb1);
    inb2 = char_to_int(nb2);
    res = inb1 + inb2;
    return (res);
}

int substract(char *nb1, char *nb2)
{
    int inb1 = 0;
    int inb2 = 0;
    int res = 0;
    inb1 = char_to_int(nb1);
    inb2 = char_to_int(nb2);
    res = inb1 - inb2;
    return (res);
}