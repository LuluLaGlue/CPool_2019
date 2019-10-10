/*
** EPITECH PROJECT, 2019
** CPool_Day04_2019
** File description:
** my_swap
*/

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}