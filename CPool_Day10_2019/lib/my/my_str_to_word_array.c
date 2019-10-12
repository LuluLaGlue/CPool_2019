/*
** EPITECH PROJECT, 2019
** CPool_Day08_2019
** File description:
** my_str_to_word_array
*/

#include "my.h"
#include <stdlib.h>

int char_isalpha(char c)
{
    if (!(( c >= 48 && c <= 57) || ( c >= 65 && c <= 90) ||
    ( c >= 97 && c <= 122)))
        return 0;
    return 1;
}

int count_word(char const *str)
{
    int count = 0;
    for (int i = 0; str[i]; i++){
        if (!char_isalpha(str[i]) && char_isalpha(str[i - 1]))
            count++;
    }
    if (char_isalpha(str[my_strlen(str)-1]))
        return (count + 1);
    return (count);
}

char **my_str_to_word_array(char const *str)
{
    char **array;
    int index = 0;
    int j = 0;
    array = malloc(sizeof(char *) * count_word(str) + 1);
    array[index] = malloc(sizeof(char) * 100 + 1);
    for (int i = 0; str[i]; i++){
        if (char_isalpha(str[i])){
            array[index][j] = str[i];
            j++;
        }
        if (!char_isalpha(str[i]) && char_isalpha(str[i - 1])){
            index++;
            j = 0;
            array[index] = malloc(sizeof(char) * 100);
        }
        array[index][j] = '\0';
    }
    return (array);
}