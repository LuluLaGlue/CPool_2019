/*
** EPITECH PROJECT, 2019
** CPool_Day11_2019
** File description:
** my_apply_on_matching_nodes
*/

#include "./include/my.h"
#include "./include/mylist.h"
#include <stdlib.h>

int my_apply_on_matching_nodes(linked_list_t *begin, int (*f)()
, void const *data_ref, int (*cmp)())
{
    while (begin != NULL){
        if ((*cmp)(begin->data, data_ref) == 0)
            (*f)(begin->data);
        begin = begin->next;
    }
    return (1);
}