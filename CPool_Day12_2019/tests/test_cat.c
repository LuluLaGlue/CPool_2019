/*
** EPITECH PROJECT, 2019
** CPool_Day12_2019
** File description:
** test_cat
*/

#include <criterion/criterion.h>
#include "../include/my.h"

int check_error(char **argv, int i, int err);

Test(my_cat, compare_cat)
{
    cr_assert_eq(check_error("../tests/test.txt", 0, 0), 0);
}