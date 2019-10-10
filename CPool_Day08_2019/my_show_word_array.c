/*
** EPITECH PROJECT, 2019
** CPool_Day08_2019
** File description:
** my_show_word_array
*/

#include <stdlib.h>

int my_putstr(char *str);

int my_str2len(char *const *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

int my_show_word_array(char * const *tab)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *dest;
    if (!(dest = malloc(sizeof(char) * (my_str2len(tab) - 1) + 1)))
        return (0);
    while (i < my_str2len(tab)){
        while (tab[i][j]){
            dest[k] = tab[i][j];
            k++;
            j++;
        }
        dest[k] = '\n';
        k++;
        j = 0;
        i++;
    }
    dest[k] = '\0';
    my_putstr(dest);
    return (1);
}