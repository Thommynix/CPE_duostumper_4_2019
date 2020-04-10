/*
** EPITECH PROJECT, 2019
** DuoStumper
** File description:
** Main funcs for project
*/

#include <unistd.h>
#include "main.h"

int nb_compo_pizza(fridge_t *fridg)
{
    if (fridg->tomato < 5 || fridg->dough < 1 || fridg->onion < 3 ||
        fridg->olive < 8 || fridg->pepper < 8 || fridg->ham < 4 ||
        fridg->cheese < 3) {
        my_puterr("Error : not enough components\n");
        return (-1);
    }
    else {
        fridg->tomato = fridg->tomato - 5;
        fridg->dough = fridg->dough - 1;
        fridg->onion = fridg->onion- 3;
        fridg->pepper = fridg->pepper - 8;
        fridg->olive = fridg->olive - 8;
        fridg->ham = fridg->ham - 4;
        fridg->cheese = fridg->cheese - 3;
    }
    return (0);
}

int nb_compo_pasta(fridge_t *fridg)
{
    if (fridg->tomato < 5 || fridg->pasta < 2 || fridg->olive < 6 ||
	fridg->ham < 4 ||fridg->cheese < 3) {
       	my_puterr("Error : not enough components\n");
       	return (-1);
    }
    else {
        fridg->tomato = fridg->tomato - 5;
       	fridg->pasta = fridg->pasta - 2;
       	fridg->olive = fridg->olive - 6;
       	fridg->ham = fridg->ham - 4;
       	fridg->cheese = fridg->cheese - 3;
    }
    return (0);
}
