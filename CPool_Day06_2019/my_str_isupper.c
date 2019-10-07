/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_str_isupper
*/

int my_str_isuuper(char const *str)
{
    int i = 0;

    while (str[i]){
        if (str[i] > 'Z' || str[i] < 'A')
            return (0);
        i++;
    }
    return (1);
}