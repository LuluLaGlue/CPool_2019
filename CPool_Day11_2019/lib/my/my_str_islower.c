/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_str_islower
*/

int my_str_islower(char const *str)
{
    int i = 0;

    while (str[i]){
        if (str[i] > 'z' && str[i] < 'a')
            return (0);
        i++;
    }
    return (1);
}