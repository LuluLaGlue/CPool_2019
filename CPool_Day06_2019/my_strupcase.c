/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_strupcase
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i]){
        if (str[i] >= 'a' || str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }
    return (str);
}