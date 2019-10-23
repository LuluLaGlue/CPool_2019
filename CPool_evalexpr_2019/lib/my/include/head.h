/*
** EPITECH PROJECT, 2019
** CPool_infinadd_2019
** File description:
** head
*/

#ifndef HEAD_H_
#define HEAD_H_
    #include <stdlib.h>
    #include <unistd.h>
    int eval_expr(char const *str);
    char **my_double_alloc(char const *str, char **str2);
    int char_to_int(char *nb);
    int longueur(int nb);
    char *int_to_char(char *resultat, int nb);
    char **divide_str(char const *str, char **str2);
    char *check_whitespace(char const *str);
    int my_div(char *nb1, char *nb2);
    int mod(char *nb1, char *nb2);
    int mult(char *nb1, char *nb2);
    int add(char *nb1, char *nb2);
    int substract(char *nb1, char *nb2);
    int which_op(char op);
    char *do_op(char *nb1, char *nb2, int op);
#endif