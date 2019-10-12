/*
** EPITECH PROJECT, 2019
** CPool_Day10_2019
** File description:
** my_advanced_sort_word_array
*/

#include "my.h"

int	my_advanced_sort_word_array(char **tab, int (*cmp)
(char const *, char const *))
{
    int smaller_str = 0;
    char *tmp;
    int i = 0;
    int j;

    while (tab[i]){
        j = i;
        while (tab[j]){
            if ((*cmp)(tab[j], tab[smaller_str]) < 0)
                smaller_str = j;
            j += 1;
        }
        tmp = tab[smaller_str];
        tab[smaller_str] = tab[i];
        tab[i] = tmp;
        i += 1;
        smaller_str = i;
    }
    return (0);
}