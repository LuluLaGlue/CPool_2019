/*
** EPITECH PROJECT, 2019
** CPool_rush1_2019
** File description:
** rush1-2
*/

#include <unistd.h>

void rush(int x, int y);
void write_top_line(int x);
void write_body(int x, int y);
void write_bottom_line(int x);


void rush(int x, int y)
{
    if (x <= 0 || y <= 0)
        return ;
    write_top_line(x);
    if (y > 1)
        write_body(x, y);
    if (y > 2)
        write_bottom_line(x);
}

void write_top_line(int x)
{
    for (int i = 0; i < x; i++) {
        if (i == 0)
            write(1, "/", 1);
        else if (i == (x - 1))
            write(1, "\\", 1);
        else
            write(1, "*", 1);
    }
    write(1, "\n", 1);
}

void write_bottom_line(int x)
{
    for (int i = 0; i < x; i++) {
        if (i == 0)
            write(1, "\\", 1);
        else if (i == (x - 1))
            write(1, "/", 1);
        else
            write(1, "*", 1);
    }
    write(1, "\n", 1);
}

void write_body(int x, int y)
{
    for (int i_y = 2; i_y < y; i_y++) {
        for (int i_x = 0; i_x < x; i_x++) {
            if (i_x == 0 || i_x == (x - 1))
                write(1, "*", 1);
            else
               write(1, " ", 1);
        }
        write(1, "\n", 1);
    }
}
