/*
** EPITECH PROJECT, 2019
** CPool_Day11_2019
** File description:
** my_rev_list
*/

#include "./include/my.h"
#include "./include/mylist.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *temp;
    linked_list_t *res;
    linked_list_t *t_next;

    res = *begin;
    temp = 0;
    while (res->next){
        t_next = res->next;
        res->next = temp;
        temp = res;
        res = t_next;
    }
    res->next = temp;
    *begin = res;
}