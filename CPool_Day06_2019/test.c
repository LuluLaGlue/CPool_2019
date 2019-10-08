int my_strlen(char *str);

int my_strncmp(char *s1, char *s2, int n);

char *my_strchr(const char *s, int c)
{
    do {
        if (*s == c){
            return (char *)s;
        }
    } while (*s++);
    return (0);
}

char *my_strstr(char *str, const char *to_find)
{
    char *p = str;
    int size = my_strlen(to_find);

    for (; (p = my_strchr(p, *to_find)) != 0; p++){
        if (my_strncmp(p, to_find, size) == 0)
            return (char *)p;
    }
    return (0);
}