/*
** EPITECH PROJECT, 2019
** DuoStumper
** File description:
** Main funcs for project
*/

#include <unistd.h>
#include "main.h"

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  int	j;

  i = 0;
  if (s1 == NULL || s2 == NULL)
    return (1);
  while (s1[i] == s2[i] && s1[i] && s2[i])
    i++;
  if (n - 1 >= i)
    j = s1[i] - s2[i];
  else
    return (0);
  return (j);
}