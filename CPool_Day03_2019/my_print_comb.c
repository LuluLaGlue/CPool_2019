/*
** EPITECH PROJECT, 2019
** my_print_comb
** File description:
** Print three digits num
*/

#include <unistd.h>

void my_putchar(char c);

void my_biputchar(char a, char b)
{
    my_putchar(a);
    my_putchar(b);
}

void my_triputchar(char a, char b, char c)
{
    my_putchar(a);
    my_putchar(b);
    my_putchar(c);
}

int my_print_comb(void)
{
    char a;
    char b;
    char c;

    a = '0';
    while (a <= '7'){
        b = a + 1;
        while (b <= '8'){
            c = b + 1;
            while (c <= '9'){
                my_triputchar(a, b, c);
                if (a != '7' || b != '8' || c != '9')
                    my_biputchar(44, ' ');
                c++;
            }
            b++;
        }
        a++;
    }
    return (0);
}
