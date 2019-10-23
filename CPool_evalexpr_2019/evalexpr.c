/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** evalexpr
*/

#include "./include/my.h"
#include "./include/head.h"

int eval_expr(char const *str)
{
    char **str2 = my_double_alloc(str, str2);
    char *res = malloc(sizeof(char) * my_strlen(str) + 1);
    int i = 0, op = 0;
    str = check_whitespace(str);
    if (str[0] == '\0')
        return (0);
    str2 = divide_str(str, str2);
    for (int j = 0; *str2[j]; j++){
        while ((which_op(str2[i][0]) == 0) && str2[i])
            i++;
        op = which_op(str2[i][0]);
        res = do_op(str2[i - 1], str2[i + 1], op);
        i = 0;
    }
    return (my_getnbr(res));
}

char **my_double_alloc(char const *str, char **str2)
{
    int i = 0;
    str2 = (char **)malloc(my_strlen(str) * sizeof(char *) + 1);
    while (str[i]){
        str2[i] = (char *)malloc(sizeof(char) * my_strlen(str) + 1);
        i++;
    }
    return (str2);
}