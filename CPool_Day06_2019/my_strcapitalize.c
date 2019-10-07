/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_strcapitalize
*/

char *my_strcapitalize(char *str)
{
    int i = 1;

    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;
    while (str[i]){
        if (str[i] >= 'A' && str[i] <= 'Z' && str[i - 1] != ' ')
            str[i] = str[i] + 32;
        if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == ' ')
            str[i] = str[i] - 32;
        i++;
    }
    return (str);
}