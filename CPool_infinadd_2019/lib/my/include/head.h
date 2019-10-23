/*
** EPITECH PROJECT, 2019
** CPool_infinadd_2019
** File description:
** head
*/

#ifndef HEAD_H_
#define HEAD_H_
    typedef struct len
    {
        int size1;
        int size2;
        int size;
        int i;
        int r;
    } len_t;
    char *sub2(len_t s, char *s1, char *s2, char *res);
    char *add2(len_t s, char *s1, char *s2, char *res);
    char *add(char *s1, char *s2);
    int compare(char *s1, char *s2);
    char *substract(char *s1, char *s2);
    int size_check(int size1, int size2);
    char *sign_check(int comp, char **argv, char *res);
    char *sign_check_bis(int comp, char **argv, char *res);
#endif