/*
** EPITECH PROJECT, 2019
** CPool_Day04_2019
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int size;

    size = 0;
    while (str[size]){
        size++;
    }
    return (size);
}