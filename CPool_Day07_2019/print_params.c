/*
** EPITECH PROJECT, 2019
** CPool_Day07_2019
** File description:
** print_params
*/

void my_putchar(char c);

int my_putstr(char *str);

int main(int argc, char *argv[])
{
    int i = 0;

    while (i < argc){
        my_putstr(argv[i]);
        my_putchar('\n');
        i++;
    }
    return (0);
}