/*
** EPITECH PROJECT, 2019
** CPool_Day11_2019
** File description:
** mylist
*/

#ifndef MYLIST_H_
#define MYLIST_H_
    typedef struct linked_list
    {
        void *data;
        struct linked_list *next;
    } linked_list_t;
#endif