/*
** EPITECH PROJECT, 2019
** DuoStumper
** File description:
** Main funcs for project
*/
#include "main.h"

void  disp_err(char *str)
{
  my_puterr(str);
  my_puterr("': Invalid operation\n");
}

void check_cmd(char *str, fridge_t *fridg)
{
  if (my_strncmp(str, "addToFridge", 11) == 0)
    add_to_fridge(str, fridg);
  else if (my_strcmp(str, "disp fridge") == 0)
    disp_fridge(fridg);
  else if (my_strncmp(str, "make", 4) == 0)
    do_meal(str, fridg);
  else if (my_strcmp(str, "exit") == 0)
  {
    save_fridge(fridg);
    fridg->kill = 1;
  }
  else
    disp_err(str);
}

int	check_char(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >57 || str[i] < 48)
	my_puterr("Error : only numbers are allowed\n");
    }
  return (0);
}

int	check_elem(char *str)
{
  if (my_strncmp(str, "tomato", 6) == 0 || my_strncmp(str, "dough", 5) == 0)
    return (0);
  else if (my_strncmp(str, "ognons", 6) == 0 || my_strncmp(str, "pasta", 5) == 0)
    return (0);
  else if (my_strncmp(str, "olive", 5) == 0 || my_strncmp(str, "pepper", 6) == 0)
    return (0);
  else if (my_strncmp(str, "ham", 3) == 0 || my_strncmp(str, "cheese", 6) == 0)
    return (0);
  my_puterr("Error : unknown components\n");
  return (-1);
}