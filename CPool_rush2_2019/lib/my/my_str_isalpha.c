/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_str_isalpha
*/

int my_str_isalpha(char str)
{
    int retour = 1;
    if ((str <= 'z' && str >= 97) || (str <= 90 && str >= 65))
        retour = 1;
    else
        return (0);
    return retour;
}