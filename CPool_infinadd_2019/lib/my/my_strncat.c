/*
** EPITECH PROJECT, 2019
** CPool_Day07_2019
** File description:
** my_strncat
*/

int my_strlen(char *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int size = my_strlen(dest);

    while (i < nb && src[i]){
        dest[size + i] = src[i];
        i++;
    }
    dest[size + i] = '\0';
    return (dest);
}