/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_str_isnum
*/

int my_str_isnum(char *str)
{
    int i = 0;

    while (str[i]){
        if (str[i] > '9' && str[i] < '0')
            return (0);
        i++;
    }
    return (1);
}