/*
** EPITECH PROJECT, 2019
** CPool_bistro-matic_2019
** File description:
** convert
*/

#include "./include/my.h"
#include "./include/head.h"

int my_int_len(int nb)
{
    int div = 1;
    int size = 1;

    while (nb / div >= 1){
        div *= 10;
        size++;
    }
    return (size);
}

char *my_itoa(int nb)
{
    int i, sign;
    char *str;

    sign = nb;
    if (sign < 0)
        nb *= -1;
    i = 0;
    if (!(str = malloc(sizeof(char) * my_int_len(nb) + 1)))
        return (NULL);
    do {
        str[i++] = nb % 10 + 48;
    } while ((nb /= 10) > 0);
    if (sign < 0)
        str[i++] = '-';
    str = my_revstr(str);
    return (str);
}

int my_tiny_atoi(char **str)
{
    int nbr;

    nbr = 0;
    while (**str >= '0' && **str <= '9'){
        nbr = nbr * 10 + (**str - 48);
        (*str)++;
    }
    return (nbr);
}

int my_atoi(char *str)
{
    int res = 0;
    int i = 0;
    int neg = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
    || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'){
        i++;
    }
    while (str[i] == '-' || str[i] == '+'){
        if (str[i] == '-')
            neg++;
        i++;
    }
    while (str[i] && str[i] >= '0' && str[i] <= '9'){
        res = res * 10 + (str[i] - 48);
        i++;
    }
    if (neg % 2 == 0)
        return (res);
    else
        return (res * -1);
}