/*
** EPITECH PROJECT, 2019
** check_lang.c
** File description:
** check perc dict et letter
*/

#include "./include/my.h"
#include "./include/my_macro_abs.h"

float *check_lang(char *letter, int perc, float *dif)
{
    int index_letter = letter[0] - 65;
    float check[5];
    int i = 0;
    check[0] = check_english(index_letter);
    check[1] = check_french(index_letter);
    check[2] = check_german(index_letter);
    check[3] = check_spanish(index_letter);
    dif[0] += ABS(perc - check[0]);
    dif[1] += ABS(perc - check[1]);
    dif[2] += ABS(perc - check[2]);
    dif[3] += ABS(perc - check[2]);
    return (dif);
}

float lang_min(float *dif)
{
    int lang = 0;
    int i = 1;
    float min = dif[0];

    while (i < 4) {
        if (dif[i] < min) {
            lang = i - 1;
            min = dif[i];
        }
        i++;
    }
    return (lang);
}