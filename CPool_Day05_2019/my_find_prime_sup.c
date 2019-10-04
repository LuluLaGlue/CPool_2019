/*
** EPITECH PROJECT, 2019
** CPool_Day05_2019
** File description:
** my_find_prime_sup
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int i;
    int j = 1;
    if (my_is_prime(nb))
        return (nb);
    i = nb;
    while (nb % (i+j) == 0){
        j++;
    }
    return (nb +j);
}