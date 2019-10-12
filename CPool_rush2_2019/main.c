/*
** EPITECH PROJECT, 2019
** CPool_rush2_2019
** File description:
** main
*/

#include "./include/my.h"
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i = 2;
    int count = 0;
    float perc, lang;
    float *dif = malloc(sizeof(float) * 5 + 1);
    if (argc < 3){
        write(2, "Not enough arguments\n", 21);
        return (84);
    }
    while (argv[i]){
        count = count_occ(argv[1], argv[i]);
        perc = percentage(count, my_strlen(argv[1]));
        dif = check_lang(argv[i], perc, dif);
        print_result(argv[i], count);
        disp_float(perc);
        i++;
    }
    lang = lang_min(dif);
    disp_lang(lang);
    free(dif);
    return (0);
}