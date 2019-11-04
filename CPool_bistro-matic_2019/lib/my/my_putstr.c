/*
** EPITECH PROJECT, 2019
** CPool_Day04_2019
** File description:
** my_putstr
*/

#include <unistd.h>

int my_putstr(char *str)
{
    for (int i = 0; str[i]; i++)
        write(1, &str[i], 1);
    return (0);
}