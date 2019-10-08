/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_strstr
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int size = 0;
    while (to_find[size] != '\0')
        size++;
    if (size == 0)
        return (&str[0]);
    while (str[i] != '\0'){
        int j = 0;
        while (to_find[j] == str[i + j]){
            if (to_find[j + 1] == '\0')
                return (str + i);
            j++;
        }
        j = 0;
        i++;
    }
    return (0);
}