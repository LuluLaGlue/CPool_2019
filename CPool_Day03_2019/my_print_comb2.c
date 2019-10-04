/*
** EPITECH PROJECT, 2019
** my_print_comb2
** File description:
** Print comb 2 digits
*/

#include <unistd.h>

void my_putchar(char c);

int my_print_comb2(void)
{
    int a = 0;
    int b = 0;

    while (b < 100){
        a = b + 1;
        while (a < 100){
            my_putchar(b / 10 + 48);
            my_putchar(b % 10 + 48);
            my_putchar(' ');
            my_putchar(a / 10 + 48);
            my_putchar(a % 10 + 48);
            if (b / 10 != 9 || b % 10 != 8){
                my_putchar(44);
                my_putchar(' ');
            }
            a++;
        }
        b++;
    }
    return (0);
}