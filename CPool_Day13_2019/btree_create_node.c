/*
** EPITECH PROJECT, 2019
** CPool_Day13_2019
** File description:
** btree_create_node
*/

#include "./include/btree.h"
#include <stdlib.h>

btree_t *btree_create_node(void *item)
{
    btree_t *btree = NULL;

    if ((btree = malloc(sizeof(btree_t)))){
        btree->left = 0;
        btree->right = 0;
        btree->item = item;
    }
    return (btree);
}