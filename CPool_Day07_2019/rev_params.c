/*
** EPITECH PROJECT, 2019
** CPool_Day07_2019
** File description:
** rev_params
*/

void my_putchar(char c);

int my_putstr(char *str);

int main(int argc, char *argv[])
{
    while (argc-- > 0){
        my_putstr(argv[argc]);
        my_putchar('\n');
    }
    return (0);
}