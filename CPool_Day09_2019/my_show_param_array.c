/*
** EPITECH PROJECT, 2019
** CPool_Day09_2019
** File description:
** my_show_param_array
*/

#include "my.h"

int my_show_param_array(struct info_param const *par)
{
    for (int i = 0; par[i].str; i++){
        my_put_nbr(par[i].lenght);
        my_putchar('\n');
        my_putstr(par[i].str);
        my_putchar('\n');
        my_putstr(par[i].copy);
        my_putchar('\n');
        my_show_word_array(par[i].word_array);
        my_putchar('\n');
    }
    return (0);
}