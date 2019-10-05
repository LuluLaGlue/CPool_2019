/*
** EPITECH PROJECT, 2019
** CPool_Day04_2019
** File description:
** my_getnbr
*/

int my_check_sign(char const *str, int i, int neg)
{
    if (str[i] == '-')
        neg++;
    return (neg);
}

int my_atoi(char const *str, int i, int res)
{
    res *= 10;
    res = res + str[i] - 48;
    return (res);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int neg = 0;
    long res = 0;

    while (str[i] == '-' || str[i] == '+'){
        neg = my_check_sign(str, i, neg);
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9' && str[i]){
        res = my_atoi(str, i, res);
        i++;
    }
    if ((neg % 2) && (-1 * res == -2147483647))
        return (-2147483647);
    if (res == 2147483648)
        return (2147483648);
    if (res > 2147483648 || res < -2147483648 ||
    res * -1 == -2147483648)
        return (0);
    return (neg % 2) ? -1 * res : res;
}