/*
** EPITECH PROJECT, 2019
** infinadd_Simon
** File description:
** sub
*/

#include "./include/my.h"
#include "./include/head.h"
#include <unistd.h>
#include <stdlib.h>

char *substract(char *s1, char *s2)
{
    len_t size;
    size.size1 = my_strlen(s1);
    size.size2 = my_strlen(s2);
    size.size = 0;
    char *res = (char *)malloc(size.size + 1);
    size.size = size_check(size.size1, size.size2);
    res[size.size] = 0;
    res = sub2(size, s1, s2, res);
    return (res);
}

char *sub2(len_t s, char *s1, char *s2, char *res)
{
    int r;
    for (s.i = 0, r = 0; s.i < s.size1 || s.i < s.size2; s.i++){
        if (s.i >= s.size1){
            res[s.size-s.i-1] = ((s2[s.size2-s.i-1] - '0') - r + 10) % 10 + '0';
            r = (s2[s.size2 - s.i - 1] - '0' - r) < 0;
        }
        else if (s.i >= s.size2){
            res[s.size-s.i-1] = ((s1[s.size1-s.i-1] - '0') - r + 10) % 10 + '0';
            r = (s1[s.size1 - s.i - 1] - '0' - r) < 0;
        }
        else{
            res[s.size-s.i-1] = ((s1[s.size1-s.i-1] - '0') -
            (s2[s.size2-s.i-1] - '0') - r + 10) % 10 + '0';
            r = ((s1[s.size1-s.i-1] - '0') - (s2[s.size2-s.i-1] - '0') - r) < 0;
        }
    }
    res = res + s.size - s.i;
    while (res[0] == '0')
        res++;
    return (res);
}

char *add(char *s1, char *s2)
{
    len_t size;
    size.size1 = my_strlen(s1);
    size.size2 = my_strlen(s2);
    size.size = 0;
    char *res = (char *)malloc(size.size + 1);
    size.size = size_check(size.size1, size.size2);
    res[size.size] = '\0';
    res = add2(size, s1, s2, res);
    return (res);
}

char *add2(len_t s, char *s1, char *s2, char *res)
{
    for (s.i = 0, s.r = 0; s.i < s.size1 || s.i < s.size2 || s.r; s.i++){
        if (s.i >= s.size1 && s.i >= s.size2){
            res[s.size - s.i - 1] = s.r % 10 + '0';
            s.r = s.r / 10;
        }
        else if (s.i >= s.size1){
            res[s.size-s.i-1] = (s.r + s2[s.size2-s.i-1] - '0') % 10 + '0';
            s.r = (s.r + s2[s.size2 - s.i - 1] - '0') / 10;
        }
        else if (s.i >= s.size2){
            res[s.size-s.i-1] = (s.r + s1[s.size1 - s.i - 1] - '0') % 10 + '0';
            s.r = (s.r + s1[s.size1 - s.i - 1] - '0') / 10;
        }
        else{
            res[s.size - s.i - 1] = (s.r + s1[s.size1 - s.i - 1]
            - '0' + s2[s.size2 - s.i - 1] - '0') % 10 + '0';
            s.r = (s.r + s1[s.size1-s.i-1] - '0' + s2[s.size2-s.i-1] - '0')/ 10;
        }
    }
    return (res + s.size - s.i);
}