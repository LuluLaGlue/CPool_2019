/*
** EPITECH PROJECT, 2019
** CPool_Day09_2019
** File description:
** my_params_to_array
*/

#include "my.h"
#include <stdlib.h>

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *result;
    int i = 0;

    if (!(result = malloc(sizeof(struct info_param) * ac + 1)))
        return (NULL);
    for (i = 0; i < ac - 1; i++){
        result[i].lenght = my_strlen(av[i]);
        result[i].str = av[i];
        result[i].copy = my_strcpy(result[i].copy, av[i]);
        result[i].word_array = my_str_to_word_array(av[i]);
    }
    result[i].str = 0;
    return (result);
}