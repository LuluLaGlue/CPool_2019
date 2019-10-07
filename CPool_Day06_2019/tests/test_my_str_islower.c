/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** test_my_str_islower
*/

#include <criterion/criterion.h>

int my_str_islower(char const *str);

Test(my_str_islower, test_if_str_is_alpha)
{
    cr_assert_eq(my_str_islower("alGJHYFINdfd"), 0);
    cr_assert_eq(my_str_islower("lkj4lkj"), 0);
    cr_assert_eq(my_str_islower("lkj4lk_kjh"), 0);
    cr_assert_eq(my_str_islower("DFGHJKLUYTFGHBJ"), 0);
    cr_assert_eq(my_str_islower("kjhkjhkj"), 1);
}