/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_strlowcase
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i]){
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}