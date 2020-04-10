/*
** EPITECH PROJECT, 2019
** DuoStumper
** File description:
** Main funcs for project
*/

#include <unistd.h>
#include "main.h"

int my_intlen(int nb)
{
    int i = 0;
    while (nb > 0) {
        nb = nb / 10;
        i++;
    }
    return (i);
}

char int_to_str(int x)
{
    char *str;
    int i = my_intlen(x);
    int u = x;
    str = malloc(sizeof(char) *i);
    str[i -1] = '\0';
    while (i != 0) {
        if (u < 10) {
	    str[i -1] = u + 48;
            i--;
        }
        else {
            str[i -1] = u % 10 +48;
	    i--;
        }
        u = u / 10;
    }
    return (str);
}
