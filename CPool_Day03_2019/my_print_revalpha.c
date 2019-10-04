/*
** EPITECH PROJECT, 2019
** my_print_revalpha
** File description:
** Print Rev Alphabet
*/

#include <unistd.h>

void my_putchar(char c);

int my_print_revalpha(void)
{
    char c;

    c = 'z';
    while (c >= 'a'){
        my_putchar(c);
        c--;
    }
    return (0);
}