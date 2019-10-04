/*
** EPITECH PROJECT, 2019
** my_print_digit
** File description:
** Print Digits
*/

#include <unistd.h>

void my_putchar(char c);

int my_print_digits(void)
{
    char c;

    c = 48;
    while (c <= 57){
        my_putchar(c);
        c++;
    }
    return (0);
}
