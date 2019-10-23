/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** handle_str
*/

#include "./include/my.h"
#include "./include/head.h"

char **divide_str(char const *str, char **str2)
{
    int i = 0, j = 0, k = 0;
    while (str[i]){
        for (i, k; str[i] >= '0' && str[i] <= '9'; i++, k++)
            str2[j][k] = str[i];
        str2[j][k] = '\0';
        k = 0;
        if (which_op(str[i]) != 0){
            j++;
            str2[j][0] = str[i];
            i++;
            str2[j][1] = '\0';
            j++;
        }
        if (str[i] == '(' || str[i] == ')'){
            j++;
            str2[j][0] = str[i];
            i++;
            str2[j][1] = '\0';
            j++;
        }
        i++;
    }
    *str2[j] = '\0';
    return (str2);
}

char *check_whitespace(char const *str)
{
    int i = 0, j = 0;
    char *str2 = malloc(sizeof(char) * my_strlen(str) + 1);
    while (str[i]){
        if (str[i] != ' '){
            str2[j] = str[i];
            j++;
            i++;
        }
        else
            i++;
    }
    str2[j] = '\0';
    return (str2);
}