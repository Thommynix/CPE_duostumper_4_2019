##
## EPITECH PROJECT, 2019
## Makefile
## File description:
##  makefile
##

SRC     =       *.c

OBJ     =       $(SRC:.c=.o)

NAME    =       fridge

all:    $(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(SRC)
		make clean 

clean:
	rm -f *.o $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all clean
