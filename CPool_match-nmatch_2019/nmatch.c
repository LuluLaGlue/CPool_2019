/*
** EPITECH PROJECT, 2019
** CPool_match-nmatch_2019
** File description:
** nmatch
*/

int match(char const *s1, char const *s2);

int nmatch(char const *s1, char const *s2)
{
    int count;
    int i;
    char check_match;

    check_match = 0;
    count = 0;
    i = 0;
    while (s1[i] != '\0'){
        if (match(s1 + i++, s2) != check_match){
            check_match = !check_match;
            if (check_match == 1)
                ++count;
        }
    }
    return (count);
}