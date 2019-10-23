/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    int i = 0;
    int res = 1;

    if (nb == 0 || nb == 1)
        return (nb);
    while (res < nb){
        i++;
        res = i * i;
    }
    if (nb == res)
        return (i);
    else
        return (0);
}