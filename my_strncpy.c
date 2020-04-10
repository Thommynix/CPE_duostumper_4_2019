/*
** EPITECH PROJECT, 2019
** DuoStumper
** File description:
** Main funcs for project
*/

#include <unistd.h>
#include "main.h"

char *my_strncpy(char *dest, char *src, int n)
{
    int i;

    i = 0;
    while (n > 0 && *(src + i))
    {
        *(dest + i) = *(src + i);
        ++i;
        --n;
    }
    if (n > 0)
        *(dest + i) = '\0';
    return (dest);
}