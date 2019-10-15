/*
** EPITECH PROJECT, 2019
** CPool_Day12_2019
** File description:
** main
*/

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include "../include/my.h"

int no_input(void)
{
    int r_error;
    char buffer[30000];

    while (1){
        r_error = read(0, buffer, 30000);
        buffer[r_error] = '\0';
        if (r_error == 0)
            return (0);
        my_putstr(buffer);
    }
}

void check_error(char **argv, int i, int err)
{
    if (argv[i][0] == '-')
        no_input();
    else if (err == EACCES){
        write(2, "cat: ", 5);
        write(2, argv[i], my_strlen(argv[i]));
        write(2, ": Permission Denied\n", 20);
    }
    if (err == ENOENT){
        write(2, "cat: ", 5);
        write(2, argv[i], my_strlen(argv[i]));
        write(2, ": No such file or directory\n", 28);
    }
    else if (err == EISDIR){
        write(2, "cat: ", 5);
        write(2, argv[i], my_strlen(argv[i]));
        write(2, ": Is a directory\n", 17);
    }
}

int main(int argc, char **argv)
{
    char buffer[30000];
    int error, o_error, r_error;
    int i = 1;
    if (argc == 1)
        no_input();
    while (i < argc){
        o_error = open(argv[i], O_RDONLY);
        if (o_error == -1)
            error = 1;
        r_error = read(o_error, buffer, 30000);
        buffer[r_error] = '\0';
        if (r_error == -1)
            error = 1;
        if (error == 1)
            check_error(argv, i, errno);
        else
            my_putstr(buffer);
        close(o_error);
        i++;
    }
}