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
    char buffer[31000];

    while (1){
        r_error = read(0, buffer, 31000);
        if (r_error == 0)
            return (0);
        write(1, &buffer, r_error);
    }
}

int check_error(char **argv, int i, int err)
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
    return (0);
}

int main(int argc, char **argv)
{
    char buffer[31000];
    int i, error, o_error, r_error;
    if (argc == 1)
        no_input();
    for (i = 1; i < argc; i++){
        o_error = open(argv[i], O_RDONLY);
        if (o_error == -1)
            error = 1;
        r_error = read(o_error, buffer, 31000);
        if (r_error == -1)
            error = 1;
        if (error == 1)
            check_error(argv, i, errno);
        else
            write(1, &buffer, r_error);
        close(o_error);
        i++;
    }
    return (0);
}