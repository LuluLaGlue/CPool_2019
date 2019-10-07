/*
** EPITECH PROJECT, 2019
** CPool_Day06_2019
** File description:
** test_my_strncpy
*/

#include <criterion/criterion.h>

int my_strlen(char const *str);

char *my_strncpy(char *dest, char const *src, int n);

Test(my_strncpy, copy_five_characters_in_empty_array)
{
    char dest[10] = "aaaaaaaaa";
    char dest2[9] = {0};
    char dest3[15] = {0};

    my_strncpy(dest, "Hello", 5);
    my_strncpy(dest2, "Test 2 Le Retour", 4);
    my_strncpy(dest3, "Bla", 5);
    cr_assert_str_eq(dest, "Helloaaaa");
    cr_assert_str_eq(dest2, "Test");
    cr_assert_str_eq(dest3, "Bla");
}