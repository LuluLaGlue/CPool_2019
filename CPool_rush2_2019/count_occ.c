/*
** EPITECH PROJECT, 2019
** count_occ.c
** File description:
** count the number of occ of a letter
*/

#include "./include/my.h"

char *check_case(char *str, char *letter)
{
    char *str_case;

    str_case = my_strupcase(str);
    return (str_case);
}

int count_occ(char *str, char *letter)
{
    int i = 0;
    int count = 0;
    char *checked_str;

    if (my_str_isalpha(letter) == 0){
        return (84);
    }
    checked_str = check_case(str, letter);
    letter = my_strupcase(letter);
    while (checked_str[i]){
        if (checked_str[i] == letter[0]){
            count++;
        }
        i++;
    }
    return (count);
}

float percentage(int occ, int size)
{
    float perc = 0;
    perc = (float)occ / (float)size * 100;
    return (perc);
}