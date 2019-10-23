/*
** EPITECH PROJECT, 2019
** CPool_Day13_2019
** File description:
** btree_insert_data
*/

#include "./include/btree.h"
#include <stdlib.h>

void btree_insert_data(btree_t **root, void *item, int (*cmpf)())
{
    btree_t	*node;

    if (!*root){
        *root = btree_create_node(item);
        return ;
    }
    node = *root;
    if ((*cmpf)(item, node->item) < 0){
        if (node->left)
            btree_insert_data(&node->left, item, cmpf);
        else
            node->left = btree_create_node(item);
    }
    else{
        if (node->right)
            btree_insert_data(&node->right, item, cmpf);
        else
            node->right = btree_create_node(item);
    }
}