/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** test_my_strcapitalize
*/

#include <criterion/criterion.h>

char *my_strcapitalize(char *str);

Test(my_strcapitalize, capitalize_first_letter)
{
    char str[14] = "bla 42bla bLa";
    char s2[4] = "Bla";

    my_strcapitalize(str);
    my_strcapitalize(s2);
    cr_assert_str_eq(str, "Bla 42bla Bla");
    cr_assert_str_eq(s2, "Bla");
}