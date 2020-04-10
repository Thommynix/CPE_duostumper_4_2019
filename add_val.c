/*
** EPITECH PROJECT, 2019
** DuoStumper
** File description:
** Main funcs for project
*/

#include <unistd.h>
#include "main.h"

void add_val(char *txt, int digits)
{
    my_strcat(txt, int_to_str(digits));
    my_strcat(txt, "\n");
}
