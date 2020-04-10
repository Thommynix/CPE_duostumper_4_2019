/*
** EPITECH PROJECT, 2019
** DuoStumper
** File description:
** Main of DuoStumper
*/

#include <unistd.h>
#include "main.h"

void  init_prog(fridge_t **fridg)
{
  *fridg = malloc(sizeof(**fridg));
  (*fridg)->kill = 0;
  (*fridg)->tomato = D_QTE;
  (*fridg)->dough = D_QTE;
  (*fridg)->onion = D_QTE;
  (*fridg)->pasta = D_QTE;
  (*fridg)->olive = D_QTE;
  (*fridg)->pepper = D_QTE;
  (*fridg)->ham = D_QTE;
  (*fridg)->cheese = D_QTE;
}