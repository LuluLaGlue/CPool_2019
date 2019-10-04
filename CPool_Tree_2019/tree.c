/*
** EPITECH PROJECT, 2019
** CPool_Tree_2019
** File description:
** tree
*/

#include <unistd.h>

int my_columns(int size);

void disp_bottom(int size, int total_columns, int max_line, int temp_line);

int disp_tree(int total_columns, int columns, int max_columns);

int check_error(int size);

void tree(int size)
{
    int max_lines;
    int total_lines = size + 3;
    int columns;
    int temp_lines;
    int temp_size = 1;

    if (size <= 0)
        return (check_error(size));
    while (temp_size <= size){
        columns = my_columns(temp_size);
        max_lines = temp_size + 3;
        temp_lines = 1;
        while (temp_lines <= max_lines){
            columns = disp_tree(my_columns(size) + total_lines * 2 - 2,
            columns, columns * max_lines * 2);
            temp_lines++;
        }
        temp_size++;
    }
    disp_bottom(size, my_columns(size) + total_lines * 2 -2, size, 1);
}

int my_columns(int size)
{
    int temp_size;
    int temp_line;
    int max_lines;
    int columns;

    columns = 1;
    temp_size = 1;
    while (temp_size < size){
        max_lines = temp_size + 3;
        temp_line = 1;
        while (temp_line < max_lines){
            columns += 2;
            temp_line++;
        }
        temp_size++;
        columns = columns - (temp_size/2)*2;
    }
    return (columns);
}

void disp_bottom(int size, int total_columns, int max_line, int temp_line)
{
    int columns;
    int temp_columns;

    columns = (size % 2 == 1) ? size : size + 1;
    while (temp_line <= max_line){
        temp_columns = 1;
        while (temp_columns < (total_columns - columns + 2) / 2){
            write(1, " ", 1);
            temp_columns++;
        }
        temp_columns = 1;
        while (temp_columns <= columns){
            write(1, "|", 1);
            temp_columns++;
        }
        write(1, "\n", 1);
        temp_line++;
    }
}

int disp_tree(int total_columns, int columns, int max_columns)
{
    int temp_columns = 1;

    while (temp_columns < (total_columns - columns + 2)/2){
        write(1, " ", 1);
        temp_columns++;
    }
    temp_columns = 1;
    while (temp_columns <= columns && columns <= max_columns){
        write(1, "*", 1);
        temp_columns++;
    }
    write(1, "\n", 1);
    return (columns + 2);
}

int check_error(int size)
{
    if (size == 0)
        return (0);
    else{
        write(2, "Size of tree must be positive.\n", 31);
        return (1);
    }
}