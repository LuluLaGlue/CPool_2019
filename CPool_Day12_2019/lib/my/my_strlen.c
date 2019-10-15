/*
** EPITECH PROJECT, 2019
** CPool_Day04_2019
** File description:
** my_strlen
*/

int my_str_isalpha(char *str);

int my_strlen(char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i]){
        if (my_str_isalpha(str[i]) == 0){
            count--;
        }
        count++;
        i++;
    }
    return (count);
}