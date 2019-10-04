/*
** EPITECH PROJECT, 2019
** CPool_Day04_2019
** File description:
** my_evil_str
*/

int my_strlen(char *str);

char *my_evil_str(char *str)
{
    int a = 0;
    int size = 0;
    char temp;

    size = my_strlen(str) - 1;
    while (a < size){
        temp = str[a];
        str[a] = str[size];
        str[size] = temp;
        a++;
        size--;
    }
    return (str);
}