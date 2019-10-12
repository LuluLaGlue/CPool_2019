/*
** EPITECH PROJECT, 2019
** CPool_Day08_2019
** File description:
** my_strdup
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    int i = 0;
    int size = my_strlen(src);
    char *dest;

    if (!(dest = malloc(sizeof(char) * (size + 1))))
        return (void *)0;
    while (src[i]){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}