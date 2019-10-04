/*
** EPITECH PROJECT, 2019
** CPool_Day04_2019
** File description:
** my_getnbr
*/

#include <unistd.h>

int my_getnbr(char const *str)
{
    int i = 0;
    int neg = 0;
    long res = 0;

    while (str[i] == '-' || str[i] == '+'){
        if (str[i] == '-')
            neg++;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9' && str[i]){
        res *= 10;
        res = res + str[i] - 48;
        i++;
    }
    if (res > 2147483647 || res < -2147483648 || i >= 11)
        return (0);
    return (neg % 2) ? -1 * res : res;
}