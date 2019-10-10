/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_str_isalpha
*/

int my_str_isalpha(char const *str)
{
    int i = 0;
    int retour = 1;
    while (str[i] != '\0'){
        if ((str[i] <= 'z' && str[i] >= 97) || (str[i] <= 90 && str[i] >= 65))
            retour = 1;
        else
            return (0);
        i++;
    }
    return retour;
}