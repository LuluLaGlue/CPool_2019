/*
** EPITECH PROJECT, 2019
** rush1
** File description:
** No file there, just an epitech header example
*/

#include <unistd.h>

void rush(int x, int y);

void write_top_bottom_line(int x);

void write_body(int x, int y);

int check_error(int x, int y)
{
    if (x <= 0 || y <= 0){
        write(2, "Invalid size\n", 13);
        return (1);
    }
    else
        return (0);
}

void rush(int x, int y)
{
    if (check_error(x, y))
        return ;
    write_top_bottom_line(x);
    if (y > 1)
        write_body(x, y);
    if (y > 2)
        write_top_bottom_line(x);
}

void write_top_bottom_line(int x)
{
    for (int i = 0; i < x; i++) {
        if (i == 0)
            write(1, "o", 1);
        else if (i == (x - 1))
            write(1, "o", 1);
        else
            write(1, "-", 1);
    }
    write(1, "\n", 1);
}

void write_body(int x, int y)
{
    for (int i_y = 2; i_y < y; i_y++) {
        for (int i_x = 0; i_x < x; i_x++) {
            if (i_x == 0)
                write(1, "|", 1);
            else if (i_x == (x - 1))
                write(1, "|", 1);
            else
                write(1, " ", 1);
        }
        write(1, "\n", 1);
    }
}