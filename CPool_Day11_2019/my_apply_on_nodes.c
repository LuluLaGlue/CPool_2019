/*
** EPITECH PROJECT, 2019
** CPool_Day11_2019
** File description:
** my_applay_on_nodes
*/

#include "./include/my.h"
#include "./include/mylist.h"
#include <stdlib.h>

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    while (begin){
        (*f)(begin->data);
        begin = begin->next;
    }
    return (0);
}