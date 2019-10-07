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
    char s3[47] = "hey, how are you? 42WORds forty-two: fifty+one";

    my_strcapitalize(str);
    my_strcapitalize(s2);
    my_strcapitalize(s3);
    cr_assert_str_eq(str, "Bla 42bla Bla");
    cr_assert_str_eq(s2, "Bla");
    cr_assert_str_eq(s3, "Hey, How Are You? 42words Forty-Two: Fifty+One");
}