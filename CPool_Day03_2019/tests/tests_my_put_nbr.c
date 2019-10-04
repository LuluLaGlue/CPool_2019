/*
** EPITECH PROJECT, 2019
** tests_my_put_nbr
** File description:
** Main for putnbr
*/

int my_put_nbr(int nb);

int main(void)
{
    my_put_nbr(-2147483648);
    my_putchar("\n");
    my_put_nbr(-123456);
    my_putchar("\n");
    my_put_nbr(0);
    my_putchar("\n");
    my_put_nbr(123456);
    my_putchar("\n");
    my_put_nbr(2147483647);
    my_putchar("\n");
    return (0);
}