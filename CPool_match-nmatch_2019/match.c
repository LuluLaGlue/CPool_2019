/*
** EPITECH PROJECT, 2019
** CPool_match-nmatch_2019
** File description:
** match
*/

int match(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;

    while (s1[i]){
        while (s1[i] != s2[j] && s2[j] == '*'){
            while (s2[j] == '*')
                j++;
            i++;
        }
        if (s1[i] != s2[j] && s2[j] != '*')
            return (0);
        while (s1[i] == s2[j]){
            i++;
            j++;
        }
    }
    return (1);
}