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
        while (s1[i] == s2[j] || s2[0] == '*'){
            i++;
            j++;
            if (s1[i] == '\0' && s2[i] == '\0')
                return (1);
        }
        if (s2[j] == '*' && s2[j + 1] == '\0')
            return (1);
        if (s2[j] == '*')
            while (s2[j + 1] != s1[i])
                i++;
        else
            return (0);
        j++;
    }
    return (1);
}