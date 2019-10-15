/*
** EPITECH PROJECT, 2019
** CPool_Day11_2019
** File description:
** my_delete_nodes
*/

#include "./include/my.h"
#include "./include/mylist.h"
#include <stdlib.h>

int my_delete_nodes(linked_list_t **begin, void const *data_ref, int (*cmp)())
{
    linked_list_t *temp = *begin;
    while (temp->next != NULL){
        if (temp->next != NULL && (*cmp)(temp->data, data_ref) == 0)
            begin = temp->next;
        temp = temp->next;
    }
    return (0);
}