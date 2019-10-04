/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** my_compute_factorial_it
*/

int my_compute_factorial_it(int nb)
{
    int i = nb;
    int res = 1;

    if (nb == 0  || nb == 1)
        return (1);
    else if (nb < 0 || nb >= 13)
        return (0);
    while (i > 1){
        res *= i;
        i--;
    }
    return (res);
}