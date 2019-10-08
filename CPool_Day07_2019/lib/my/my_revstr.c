/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** my_revstr
*/

int my_strlen(char *str);

char *my_revstr(char *str)
{
    int size = my_strlen(str) - 1;
    int i = 0;
    char a;

    while (i < size){
        a = str[i];
        str[i] = str[size];
        str[size] = a;
        size--;
        i++;
    }
    return (str);
}