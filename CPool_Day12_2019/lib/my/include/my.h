/*
** EPITECH PROJECT, 2019
** CPool_Day09_2019
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_
    void my_putchar(char c);
    int my_isneg(int nb);
    int my_put_nbr(int nb);
    void my_swap(int *a, int *b);
    int my_putstr(char const *str);
    int my_strlen(char *str);
    int my_getnbr(char const *str);
    void my_sort_int_array(int *tab, int size);
    int my_compute_power_rec(int nb, int power);
    int my_compute_square_root(int nb);
    int my_is_prime(int nb);
    int my_find_prime(int nb);
    int my_find_prime_sup(int nb);
    char *my_strcpy(char *dest, char const *src);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_revstr(char *str);
    char *my_strstr(char *str, char const *to_find);
    int my_stcmp(char const *s1, char const *s2);
    int my_strncmp(char const *s1, char const *s2, int n);
    char *my_strupcase(char *str);
    char *my_strlowcase(char *str);
    char *my_strcapitalize(char *str);
    int my_str_isalpha(char str);
    int my_str_isnum(char const *str);
    int my_str_islower(char const *str);
    int my_str_isupper(char const *str);
    int my_str_isprintable(char const *str);
    int my_showmem(char const *str, int size);
    char *my_strcat(char *dest, char const *src);
    char *my_strncat(char *dest, char const *src, int nb);
    char **my_str_to_word_array(const char *str);
    int my_show_word_array(char * const *tab);
    int my_showstr(char const *str);
    int my_str2len(char *const *str);
    int my_strcmp(char const *s1, char const *s2);
    int char_isalpha(char c);
    int count_word(char const *str);
    char *my_strdup(char const *src);
    int count_occ(char *str, char *letter);
    char *check_case(char *str, char *letter);
    float percentage(int occ, int size);
    float *check_lang(char *letter, int perc, float *dif);
    void print_result(char *letter, int occ);
    void disp_float(float perc);
    void disp_lang(int lang);
    double check_english(int c);
    double check_german(int c);
    double check_french(int c);
    double check_spanish(int c);
    float lang_min(float *dif);
    int check_error(char **argv, int i, int err);
#endif