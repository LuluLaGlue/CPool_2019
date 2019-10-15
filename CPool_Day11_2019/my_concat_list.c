/*
** EPITECH PROJECT, 2019
** CPool_Day11_2019
** File description:
** my_concat_list
*/

#include "./include/my.h"
#include "./include/mylist.h"
#include <stdlib.h>

int my_list_size(linked_list_t const *begin);

void my_concat_list(linked_list_t **begin1, linked_list_t *begin2)
{
    int i = my_list_size(*begin1);
    begin1[i]->next = begin2;
}