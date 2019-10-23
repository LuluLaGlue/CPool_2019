/*
** EPITECH PROJECT, 2019
** CPool_Day13_2019
** File description:
** btree_search_item
*/

#include "./include/btree.h"
#include <stdlib.h>

void *btree_search_item(btree_t const *root, void const *data_ref
, int (*cmpf)())
{
    void *out;

    out = NULL;
    if (root){
        out = btree_search_item(root->left, data_ref, cmpf);
        if (!out && !((*cmpf)(root->item, data_ref)))
            out = root->item;
        if (!out)
            out = btree_search_item(root->right, data_ref, cmpf);
    }
    return (out);
}