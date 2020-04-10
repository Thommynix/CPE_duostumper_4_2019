/*
** EPITECH PROJECT, 2019
** DuoStumper
** File description:
** Main funcs for project
*/

#include <unistd.h>
#include "main.h"

void do_pizza(fridge_t *fridg)
{
  nb_compo_pizza(fridg);
}

void do_pasta(fridge_t *fridg)
{
  nb_compo_pasta(fridg);
}

void disp_no_meal(char *name)
{
  my_puterr(name);
  my_puterr("': meal unknown\n");
}

int do_meal(char *name, fridge_t *fridg)
{
    char **tab;
    tab = my_str_to_wordtab(name);
    if (tab[1] == NULL || my_strcmp(tab[0], "make") != 0 ||
        tab[2] != NULL) {
        my_puterr("Error : choose a meal\n");
        return (-1);
    }
    if (my_strcmp(tab[1], "pizza") == 0)
        do_pizza(fridg);
    else if (my_strcmp(tab[1], "pasta") == 0)
        do_pasta(fridg);
    else
        disp_no_meal(fridg);
    return (0);
}
