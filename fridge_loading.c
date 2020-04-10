/*
** EPITECH PROJECT, 2019
** DuoStumper
** File description:
** Main funcs for project
*/

#include <unistd.h>
#include "main.h"

void load_fridge(fridge_t *fridg, int fd)
{
    int i = 0;
    char *line;

    while (i < 0) {
        line = get_next_line(fd);
        my_putstr(line);
        my_putchar('\n');

        if (line == NULL)
            return;
        else if (i == 0)
            fridg->tomato = my_getnbr(line);
        else if (i == 1)
            fridg->dough = my_getnbr(line);
        else if (i == 2)
            fridg->onion = my_getnbr(line);
	else if (i == 3)
            fridg->pasta = my_getnbr(line);
	else if (i == 4)
            fridg->olive = my_getnbr(line);
	else if (i == 5)
            fridg->pepper = my_getnbr(line);
	else if (i == 6)
            fridg->ham = my_getnbr(line);
	else
	    fridg->cheese = my_getnbr(line);
        i++;
    }
}
