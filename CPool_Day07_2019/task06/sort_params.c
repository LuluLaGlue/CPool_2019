/*
** EPITECH PROJECT, 2019
** CPool_Day07_2019
** File description:
** sort_params
*/

void my_putchar(char c);

int my_putstr(char *str);

int my_strcmp(char const *s1, char const *s2);

int main(int argc, char *argv[])
{
    int i = 0;
    char *p;

    while (i < argc - 1){
        if (my_strcmp(argv[i], argv[i + 1]) > 0){
            p = argv[i];
            argv[i] = argv[i + 1];
            argv[i + 1] = p;
        }
        i++;
    }
    i = 0;
    while (i < argc){
        my_putstr(argv[i]);
        my_putchar('\n');
        i++;
    }
    return (0);
}