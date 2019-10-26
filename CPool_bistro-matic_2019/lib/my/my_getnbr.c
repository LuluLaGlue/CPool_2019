/*
** EPITECH PROJECT, 2019
** CPool_Day04_2019
** File description:
** my_getnbr
*/

void my_putchar(char c);

int my_strlen(char const *str);

long long my_getnbr(char const *str)
{
    long long tobereturn = 0;
    int isnegative = 0;
    int i = 0;
    int compteur = 0;
    while (str[i] == '-' || str[i] == '+'){
        if (str[i] == '-')
            isnegative++;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9' && str[i]){
        tobereturn = tobereturn * 10;
        tobereturn = tobereturn + str[i] - 48;
        i++;
        compteur++;
    }
    if (isnegative % 2 != 0)
        tobereturn = tobereturn * -1;
    return (tobereturn);
}