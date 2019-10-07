/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** test_my_revstr
*/

#include <criterion/criterion.h>

int my_strlen(char *str);

char *my_revstr(char *str);

Test(my_revstr, reverse_char_in_array)
{
    char dest[12] = "Hello World";
    char dest2[17] = "Test 2 Le Retour";
    char dest3[2] = " ";

    my_revstr(dest);
    my_revstr(dest2);
    my_revstr(dest3);
    cr_assert_str_eq(dest, "dlroW olleH");
    cr_assert_str_eq(dest2, "ruoteR eL 2 tseT");
    cr_assert_str_eq(dest3, " ");
}