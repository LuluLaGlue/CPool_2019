/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_strcpy
*/

char *my_strcpy(char *dest, char const *src)
{
    int i;

    i = 0;
    while (src[i]){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}