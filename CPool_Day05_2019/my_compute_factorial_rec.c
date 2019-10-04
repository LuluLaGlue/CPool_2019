/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** my_compute_factorial_rec
*/

int my_compute_factorial_rec(int nb)
{
    int i = nb;
    int res;

    if (nb >= 13 || i < 0)
        return (0);
    if (i == 0 || i == 1)
        return (1);
    res = i * my_compute_factorial_rec(i - 1);
    return (res);
}