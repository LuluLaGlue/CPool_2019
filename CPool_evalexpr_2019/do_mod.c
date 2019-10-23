/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** do_mod
*/

#include "./include/my.h"
#include "./include/head.h"

int char_to_int(char *nb)
{
    int inb = 0;
    int cpt = 1;
    nb = my_revstr(nb);
    for (int i = 0; nb[i]; i++){
        inb += (nb[i] - 48) * cpt;
        cpt *= 10;
    }
    return (inb);
}

int longueur(int nb)
{
    int len = 0;
    if (nb < 0){
        nb *= -1;
        len++;
    }
    while (nb > 1){
        nb /= 10;
        len++;
    }
    return (len);
}

char *int_to_char(char *resultat, int nb)
{
    int len = longueur(nb);
    if (!(resultat = len * sizeof(char) + 1))
        return (0);
    resultat[len -1] = '\0';
    if (nb == 0)
        resultat[0] = '0';
    if (nb < 0){
        resultat[0] = '-';
        nb *= -1;
    }
    while (nb > 0){
        resultat[len] = 48 + (nb % 10);
        nb /= 10;
        len--;
    }
}