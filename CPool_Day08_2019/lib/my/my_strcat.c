/*
** EPITECH PROJECT, 2019
** CPool_Day07_2019
** File description:
** my_strcat
*/

int my_strlen(char *str);

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int size = my_strlen(dest);

    while (src[i]){
        dest[size + i] = src[i];
        i++;
    }
    dest[size + i] = '\0';
    return (dest);
}