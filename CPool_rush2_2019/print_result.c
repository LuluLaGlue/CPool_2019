/*
** EPITECH PROJECT, 2019
** print_result.c
** File description:
** print result of step
*/

#include "./include/my.h"

void print_result(char *letter, int occ)
{
    my_putstr(letter);
    my_putchar(':');
    my_put_nbr(occ);
    my_putchar(' ');
}

void disp_float(float perc)
{
    int ipart = (int)perc;
    float fp = perc - (float)ipart;
    int fpart = fp * 100;
    my_putchar('(');
    my_put_nbr(ipart);
    my_putchar('.');
    my_put_nbr(fpart);
    my_putchar('%');
    my_putchar(')');
    my_putchar('\n');
}

void disp_lang(int lang)
{
    my_putstr("=> ");
    switch (lang){
        case 0:
            my_putstr("English\n");
            break;
        case 1:
            my_putstr("French\n");
            break;
        case 2:
            my_putstr("German\n");
            break;
        case 3:
            my_putstr("Spanish\n");
            break;
    }
}