/*
** EPITECH PROJECT, 2019
** CPool_Day08_2019
** File description:
** concat_params
*/

#include <stdlib.h>

char *concat_params(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *dest;

    if (!(dest = malloc(sizeof(char) * (argc - 1))))
        return (void *)0;
    while (i < argc){
        while (argv[i][j]){
            dest[k] = argv[i][j];
            k++;
            j++;
        }
        dest[k] = '\n';
        k++;
        j = 0;
        i++;
    }
    dest[k - 1] = '\0';
    return (dest);
}