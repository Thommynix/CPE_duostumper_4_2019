/*
** EPITECH PROJECT, 2020
** get_next_linec.c
** File description:
** get_next_line.c
*/
#include "main.h"

char	*get_next_line(const int fd)
{
  char	*res;
  char	buffer;
  int	a;

  a = read(fd, &buffer, 1);
  if (a == 0 || a == -1)
    return (NULL);
  a = 0;
  res = malloc(sizeof(char) * 10000);
  res[a] = buffer;
  a++;
  while (buffer != '\n' && a < 10000)
    {
      read(fd, &buffer, 1);
      res[a] = buffer;
      a++;
    }
  if (a >= 10000)
    {
      my_puterr("Error in line\n");
      return (NULL);
    }
  res[a - 1] = '\0';
  return (res);
}