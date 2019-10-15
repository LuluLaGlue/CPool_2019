/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** display int
*/

#include <unistd.h>

void my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb == -2147483648){
        write(1, "-2147483648", 11);
        return (0);
    }
    if (nb < 0){
        nb *= -1;
        my_putchar('-');
    }
    if (nb >= 10){
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    else
        my_putchar(nb + 48);
    return (0);
}
