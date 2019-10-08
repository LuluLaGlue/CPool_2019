/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** test_my_strstr
*/

#include <criterion/criterion.h>

char *my_strstr(char *str, char const *to_find);

Test(my_strstr, find_str_in_str)
{
    char src[12] = "Hello World";
    char to_find[6] = "World";
    char find[3] = "lo";
    char not[3] = "po";


    cr_assert_str_eq(my_strstr(src, to_find), &src[6]);
    cr_assert_str_eq(my_strstr(src, find), &src[3]);
    cr_assert_eq(my_strstr(src, not), NULL);
}