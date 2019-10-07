/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_str_isprintable
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i]){
        if (str[i] > 126 || str[i] < 31)
            return (0);
        i++;
    }
    return (1);
}