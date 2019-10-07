/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_str_isalpha
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i]){
        if (str[i] > 122 || (str[i] > 90 && str[i] < 97) ||
        (str[i] < 65 && str[i] > 57) || str[i] < 48)
            return (0);
        i++;
    }
    return (1);
}