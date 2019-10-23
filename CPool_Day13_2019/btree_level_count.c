/*
** EPITECH PROJECT, 2019
** CPool_Day13_2019
** File description:
** btree_level_count
*/

#include "./include/btree.h"
#include <stdlib.h>

int max(int a, int b)
{
    return (a > b ? a : b);
}

size_t btree_level_count(btree_t const *root)
{
    int count;

    count = 0;
    if (!root)
        return (0);
    if (root->left)
        count = max(count, btree_level_count(root->left));
    if (root->right)
        count = max(count, btree_level_count(root->right));
    return (count + 1);
}