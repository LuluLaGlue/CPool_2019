/*
** EPITECH PROJECT, 2019
** CPool_Day11_2019
** File description:
** my_list_size
*/

#include "./include/my.h"
#include "./include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    int i = 0;
    linked_list_t *res;
    res = begin;
    for (i; res; i++)
        res = res->next;
    return (i);
}