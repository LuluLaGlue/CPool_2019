/*
** EPITECH PROJECT, 2019
** CPool_Day13_2019
** File description:
** btree_apply_suffix
*/

#include "./include/btree.h"
#include <stdlib.h>

void btree_apply_suffix(btree_t *root, int (*applyf)(void *))
{
    if (root){
        if (root->left)
            btree_apply_suffix(root->left, (*applyf));
        if (root->right)
            btree_apply_suffix(root->right, (*applyf));
        (*applyf)(root->item);
    }
}