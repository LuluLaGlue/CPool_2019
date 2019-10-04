/*
** EPITECH PROJECT, 2019
** my_print_alpha
** File description:
** Print Alphabet
*/

#include <unistd.h>

void my_putchar(char c);

int my_print_alpha(void)
{
    char c;

    c = 'a';
    while (c <= 'z'){
        my_putchar(c);
        c++;
    }
    return (0);
}
