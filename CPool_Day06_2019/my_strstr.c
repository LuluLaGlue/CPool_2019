/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_strstr
*/

char *my_strstr(char *str, char const *to_find)
{
    int i, j , begin;

    i = 0;
    j = 0;
    begin = 0;
    while (str[i] && to_find[j]){
        if (str[i] == to_find[j] && j == 0){
            begin = i;
        }
        if (str[i] == to_find[j])
            j++;
        else
            j = 0;
        i++;
    }
    if (to_find[j] == '\0')
        return (&str[begin]);
    else
        return (0);
}