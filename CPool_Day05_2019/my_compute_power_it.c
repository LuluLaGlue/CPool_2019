/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** my_compute_power_it
*/

int my_compute_power_it(int nb, int p)
{
    int i = 1;
    int res = nb;

    if (p == 0)
        return (1);
    if (p < 0 || nb == 0)
        return (0);
    while (i < p){
        res *= nb;
        i++;
    }
    return (res);
}