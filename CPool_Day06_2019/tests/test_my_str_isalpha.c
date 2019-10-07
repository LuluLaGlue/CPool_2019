/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** test_my_str_isalpha
*/

#include <criterion/criterion.h>

int my_str_isalpha(char const *str);

Test(my_str_isalpha, test_if_str_is_alpha)
{
    cr_assert_eq(my_str_isalpha("alGJHYFINdfd"), 1);
    cr_assert_eq(my_str_isalpha("lkj4lkj"), 1);
    cr_assert_eq(my_str_isalpha("lkj4lk_kjh"), 0);
}