/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** my_find_prime_sup
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int i = nb;
    if (i <= 2)
        return (2);
    while (i != 0){
        if (my_is_prime(i) == 1)
            return (i);
        i++;
    }
    return (2);
}