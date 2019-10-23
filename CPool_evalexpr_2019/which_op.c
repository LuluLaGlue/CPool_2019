/*
** EPITECH PROJECT, 2019
** CPool_evalexpr_2019
** File description:
** which_op
*/

#include "./include/my.h"
#include "./include/head.h"

int which_op(char op)
{
    int operand = 0;
    switch (op){
        case '+':
            operand = 1;
            break;
        case '-':
            operand = 2;
            break;
        case '*':
            operand = 3;
            break;
        case '/':
            operand = 4;
            break;
        case '%':
            operand = 5;
            break;
    }
    return (operand);
}

char *do_op(char *nb1, char *nb2, int op)
{
    char *resultat;
    switch (op){
        case 1:
            resultat = add(nb1, nb2);
            break;
        case 2:
            resultat = substract(nb1, nb2);
            break;
        case 3:
            resultat = mult(nb1, nb2);
            break;
        case 4:
            resultat = my_div(nb1, nb2);
            break;
        case 5:
            resultat = mod(nb1, nb2);
            break;
    }
    return (resultat);
}