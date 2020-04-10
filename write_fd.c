/*
** EPITECH PROJECT, 2019
** DuoStumper
** File description:
** Main funcs for project
*/

#include <unistd.h>
#include "main.h"

void write_file(int fd, char c)
{
  write (fd, &c, 1);

}

void write_infd(int fd, char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        write_file(fd, str[i]);
        i++;
    }
}
