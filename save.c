/*
** EPITECH PROJECT, 2019
** DuoStumper
** File description:
** Main funcs for project
*/

#include <unistd.h>
#include "main.h"

void write_inside(int fd, char **tab)
{
    int i = 1;
    char *buffer;

    buffer = my_strcat("", tab[0]);
    while (i < 8) {
        buffer = my_strcat(buffer, tab[i]);
	i++;
    }
    write_infd(fd, buffer);
}

void fill_tab(char **tab, fridge_t *fridg)
{
    tab[0] = "tomato = \n";
    tab[1] = "dough = \n";
    tab[2] = "oignion = \n";
    tab[3] = "pasta = \n";
    tab[4] = "olive = \n";
    tab[5] = "pepper = \n";
    tab[6] = "ham = \n";
    tab[7] = "cheese = \n";
}

char  **make_tab(void)
{
    int i;
    char **tab;

    i = 0;
    tab = malloc(sizeof(char *) * 8);
    while (i < 8) {
    tab[i] = malloc(sizeof(char) * 10000);
    i++;
    }
    return (tab);
}

void  save_fridge(fridge_t *fridg)
{
    int fd;
    char **tab;

    fd = open(".save", O_CREAT | O_WRONLY, 0644);
    if (fd == -1) {
    my_puterr("Error : can't open\n");
    return ;
    }
    tab = make_tab();
    fill_tab(tab, fridg);
    write_inside(fd, tab);
    close(fd);
}
