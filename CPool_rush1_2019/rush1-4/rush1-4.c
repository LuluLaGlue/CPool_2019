/*
** EPITECH PROJECT, 2019
** CPool_rush1_2019
** File description:
** rush1-4
*/

#include <unistd.h>

void rush(int x, int y);
void write_top_bottom_line(int x);
void write_body(int x, int y);
int check_exception(int x, int y);

void rush(int x, int y)
{
    if (check_exception(x, y))
        return ;
    write_top_bottom_line(x);
    if (y > 1)
        write_body(x, y);
    if (y > 2)
        write_top_bottom_line(x);
}

int check_exception(int x, int y)
{
    int i_x = 0;
    int i_y = 0;
    
    if (x <= 0 || y <= 0)
        return 1;
    if (x == 1){
        while (i_y < (y)){
            write(1, "B", 1);
            write(1, "\n", 1);
            i_y++;
        }
        return 1;
    }
    if (y == 1){
        while (i_x < x){
            write(1, "B", 1);
            i_x++;
        }
        return 1;
    }
    return 0;
}

void write_top_bottom_line(int x)
{
    for (int i = 0; i < x; i++) {
        if (i == 0)
            write(1, "A", 1);
        else if (i == (x - 1))
            write(1, "C", 1);
        else
            write(1, "B", 1);
    }
    write(1, "\n", 1);
}

void write_body(int x, int y)
{
    for (int i_y = 2; i_y < y; i_y++) {
        for (int i_x = 0; i_x < x; i_x++) {
            if (i_x == 0)
                write(1, "B", 1);
            else if (i_x == (x - 1))
                write(1, "B", 1);
            else
               write(1, " ", 1);
        }
        write(1, "\n", 1);
    }
}