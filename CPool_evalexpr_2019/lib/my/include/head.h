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
    int parse_number(char const **expr);
    int parse_factors(char const **expr);
    int parse_sum(char const **expr);
    int my_tiny_atoi(char const **str);
#endif