/*
** EPITECH PROJECT, 2019
** CPool_rush2_2019
** File description:
** check_lang
*/

#include "./include/my.h"

double check_english(int c)
{
    double perc_english[28] = {
        8.17, 1.49, 2.78, 4.25, 12.70
        , 2.23, 2.02, 6.09, 6.97, 0.15
        , 0.77, 4.03, 2.41, 6.75, 7.51
        , 1.93, 0.10, 5.99, 6.33, 9.06
        , 2.76, 0.98, 2.36, 0.15, 1.97, 0.07, 0
    };
    double res = perc_english[c];
    return (res);
}

double check_german(int c)
{
    double perc_german[28] = {
        6.52, 1.89, 2.73, 5.08, 16.40
        , 1.66, 3.01, 4.58, 6.55, 0.27
        , 1.42, 3.44, 2.53, 9.78, 2.59
        , 0.67, 0.02, 7.00, 7.27, 6.15
        , 4.17, 0.85, 1.92, 0.03, 0.04, 1.13, 0
    };
    double res = perc_german[c];
    return (res);
}

double check_french(int c)
{
    double perc_french[28] = {
        7.64, 0.90, 3.26, 3.67, 14.72
        , 1.07, 0.87, 0.74, 7.53, 0.61
        , 0.07, 5.46, 2.97, 7.10, 5.80
        , 2.52, 1.36, 6.69, 7.95, 7.24
        , 6.31, 1.84, 0.05, 0.43, 0.13, 0.33, 0
    };
    double res = perc_french[c];
    return (res);
}

double check_spanish(int c)
{
    double perc_spanish[28] = {
        11.53, 2.22, 4.02, 5.01, 12.18
        , 0.69, 1.77, 0.70, 6.25, 0.49
        , 0.01, 4.97, 3.16, 6.71, 8.68
        , 2.51, 0.88, 6.87, 7.98, 4.63
        , 2.93, 1.14, 0.02, 0.22, 1.01, 0.47, 0
    };
    double res = perc_spanish[c];
    return (res);
}