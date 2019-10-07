/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_strncpy
*/

int my_strlen(char const *str);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i <= n && src[i]){
        dest[i] = src[i];
        i++;
    }
    if (n > my_strlen(src))
        dest[i] = '\0';
    return (dest);
}