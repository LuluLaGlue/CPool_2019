/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** test_my_strncmp
*/

#include <criterion/criterion.h>

int my_strncmp(char const *s1, char const *s2, int n);

Test(my_strncmp, copy_five_characters_in_empty_array)
{
    cr_assert_eq(my_strncmp("Hello1", "Hello", 4), 0);
    cr_assert_eq(my_strncmp("Hello1", "Hello2", 6), -1);
    cr_assert_eq(my_strncmp("Hello2", "Hello1", 6), 1);
}