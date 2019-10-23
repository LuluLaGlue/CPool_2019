/*
** EPITECH PROJECT, 2019
** CPool_Day13_2019
** File description:
** tree_apply_prefix
*/

#include "./include/btree.h"
#include <stdlib.h>

void btree_apply_prefix(btree_t *root, int (*applyf)(void *))
{
    if (root){
        (*applyf)(root->item);
        btree_apply_prefix(root->left, applyf);
        btree_apply_prefix(root->right, applyf);
    }
}