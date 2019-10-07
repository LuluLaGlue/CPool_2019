/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** test_my_str_isprintable
*/

#include <criterion/criterion.h>

int my_str_isprintable(char const *str);

Test(my_str_isprintable, check_if_only_printable)
{
    cr_assert_eq(my_str_isprintable("ksdjfhvsiueyrvn\nsdf"), 0);
    cr_assert_eq(my_str_isprintable("sdfhkjh567_()"), 1);
}