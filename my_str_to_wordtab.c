/*
** EPITECH PROJECT, 2019
** DuoStumper
** File description:
** Main funcs for project
*/

#include <unistd.h>
#include "main.h"
int is_alnum(char c)
{
    if (c > 33 && c < 126)
        return (1);
    return (0);
}

int word_count(char *str)
{
    int i;
     int word;

    word = 0;
    i = 0;
    while (str[i]) {
        if (is_alnum(str[i]) == 1 && is_alnum(str[i + 1]) == 0)
            word = word + 1;
            i = i + 1;
    }
    return (word);
}

char **my_str_to_wordtab(char *str)
{
    int j;
    int i;
    char **wordtab;
    int len;

    j = 0;
    len = 0;
    i = 0;
    wordtab = malloc((word_count(str) + 1) * sizeof(char *));
    while (str[i]) {
        if (is_alnum(str[i]))
            len = len + 1;
        if (is_alnum(str[i]) == 1 && is_alnum(str[i + 1]) == 0) {
            wordtab[j] = malloc(len + 1);
            my_strncpy(wordtab[j], &str[i - len + 1], len);
            len = 0;
            j = j + 1;
        }
        i = i + 1;
    }
    wordtab[j] = NULL;
    return (wordtab);
}