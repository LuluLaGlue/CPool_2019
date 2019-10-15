/*
** EPITECH PROJECT, 2019
** CPool_Day11_2019
** File description:
** my_params_to_list
*/

#include "./include/my.h"
#include "./include/mylist.h"
#include <stdlib.h>

linked_list_t *add_to_list(void *data, linked_list_t *list)
{
    linked_list_t *res = malloc(sizeof(linked_list_t));

    res->data = data;
    res->next = list;
    return (res);
}

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *result = NULL;
    int i = 0;

    while (i < ac){
        result = add_to_list(av[i], result);
        i++;
    }
    return (result);
}