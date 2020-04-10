/*
** EPITECH PROJECT, 2019
** DuoStumper
** File description:
** Main of DuoStumper
*/

#include <unistd.h>
#include "main.h"
int fridg(void)
{
    int fd;
    char *comand;
    fridge_t *fridg;

    fd = open(".save", O_RDONLY);
    if (fd == -1)
	init_prog(&fridg);
	else {
	  init_prog(&fridg);
	    load_fridge(fridg, fd);
	}
	close (fd);
	while (fridg->kill == 0) {
	  comand = get_next_line(0);
	  if (comand = NULL)
	    return (-1);
	  check_cmd(comand, fridg);
	}

}



  
int main(void)
{
  fridg();
  return (0);
}
