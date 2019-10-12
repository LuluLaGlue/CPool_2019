/*
** EPITECH PROJECT, 2019
** CPool_Day04_2019
** File description:
** my_putstr
*/

#include <unistd.h>

int my_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i]){
        write(1, &str[i], 1);
        i++;
    }
    return (0);
}