/*
** EPITECH PROJECT, 2019
** CPool_Day11_2019
** File description:
** my_find_node
*/

#include "./include/my.h"
#include "./include/mylist.h"
#include <stdlib.h>

linked_list_t *my_find_node(linked_list_t *begin, void const *data_ref
, int (*cmp)())
{
    while (begin){
        if ((*cmp)(begin->data, data_ref) == 0)
            return (begin);
        begin = begin->next;
    }
    return (NULL);
}