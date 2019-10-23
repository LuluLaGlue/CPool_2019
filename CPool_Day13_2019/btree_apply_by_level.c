/*
** EPITECH PROJECT, 2019
** CPool_Day13_2019
** File description:
** btree_apply_by_level
*/

#include "./include/btree.h"
#include <stdlib.h>

int max(int a, int b)
{
    return (a > b ? a : b);
}

int btree_level_count2(btree_t *root)
{
    int count;

    count = 0;
    if (!root)
        return (0);
    if (root->left)
        count = max(count, btree_level_count2(root->left));
    if (root->right)
        count = max(count, btree_level_count2(root->right));
    return (count + 1);
}

void call(btree_t *root, int current_level, int *levels,
        void (*applyf)(void *item, int current_level, int is_first_elem))
{
    int is_first_elem;

    is_first_elem = 1;
    if (levels[current_level] == 1)
        is_first_elem = 0;
    else
        levels[current_level] = 1;
    applyf(root->item, current_level, is_first_elem);
    if (root->left)
        call(root->left, current_level + 1, levels, applyf);
    if (root->right)
        call(root->right, current_level + 1, levels, applyf);
}

void btree_apply_by_level(btree_t *root, void (*applyf)(void *item,
        int current_level, int is_first_elem))
{
    int count;
    int *levels;
    int i;

    if (!root)
        return ;
    count = btree_level_count2(root);
    if (!(levels = (int *)malloc(sizeof(int) * count)))
        return ;
    i = 0;
    while (i < count)
        levels[i++] = 0;
    call(root, 0, levels, applyf);
}