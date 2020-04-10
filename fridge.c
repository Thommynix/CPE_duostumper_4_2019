/*
** EPITECH PROJECT, 2019
** DuoStumper
** File description:
** Main funcs for project
*/

#include <unistd.h>
#include "main.h"

void addition(char *name, int nb, fridge_t *fridg)
{
    if (my_strcmp(name, "tomato") == 0)
        fridg->tomato = fridg->tomato + nb;
    if (my_strcmp(name, "dough") == 0)
        fridg->dough = fridg->dough + nb;
    if (my_strcmp(name, "onion") == 0)
        fridg->onion = fridg->onion + nb;
    if (my_strcmp(name, "pasta") == 0)
        fridg->pasta = fridg->pasta + nb;
    if (my_strcmp(name, "olive") == 0)
        fridg->olive = fridg->olive + nb;
    if (my_strcmp(name, "pepper") == 0)
        fridg->pepper = fridg->pepper + nb;
    if (my_strcmp(name, "ham") == 0)
        fridg->ham = fridg->ham + nb;
    if (my_strcmp(name, "cheese") == 0)
        fridg->cheese = fridg->cheese + nb;
}

int add_to_fridge(char *command, fridge_t *fridg)
{
    char  **tab;

    tab = my_str_to_wordtab(command);
    if (tab[1] == NULL || tab[2] == NULL) {
        my_puterr("Error : you must use valid number\n");
        return (-1);
    }
    if (check_elem(tab[1]) == 0 || check_char(tab[2]) == 0) {
        if (my_getnbr(tab[2]) <= 0) {
            my_puterr("Error : you must use valid number\n");
            return (-1);
    }
    addition(tab[1], my_getnbr(tab[2]), fridg);
  }
}

void disp_fridge(fridge_t *fridg)
{
    my_putstr("tomato = ");
    my_put_nbr(fridg->tomato);
    my_putstr("\ndough = ");
    my_put_nbr(fridg->dough);
    my_putstr("\nonion = ");
    my_put_nbr(fridg->onion);
    my_putstr("\npasta = ");
    my_put_nbr(fridg->pasta);
    my_putstr("\nolive = ");
    my_put_nbr(fridg->olive);
    my_putstr("pepper = ");
    my_put_nbr(fridg->pepper);
    my_putstr("ham = ");
    my_put_nbr(fridg->ham);
    my_putstr("cheese = ");
    my_put_nbr(fridg->cheese);
}
