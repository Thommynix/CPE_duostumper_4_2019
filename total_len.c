/*
** EPITECH PROJECT, 2019
** DuoStumper
** File description:
** Main funcs for project
*/

#include <unistd.h>
#include "main.h"

int total_len(char **tab)
{
    int len = 0;
    int i = 0;

    while (tab[i] != '\0') {
        len = len + my_strlen(tab[i]);
        i++;
    }
    return (len);
}
