##
## EPITECH PROJECT, 2019
## CPool_Day10_2019
## File description:
## Makefile
##

SRC	=	main.c	\
		size.c	\
		op.c

LIB	=	-L ./lib/my -lmy

INC	=	-I ./include -I ./lib/my/include

OBJ	=	main.o	\
		size.o	\
		op.o

CFLAGS	=	-Wall -g $(INC)

NAME	=	infin_add

TEST = unit_tests

.PHONY: all clean fclean re run

all:
	@make -C ./lib/my
	@cd
	@gcc -c $(SRC) $(LIB) $(CFLAGS) $(INC)
	@gcc -o $(NAME) $(OBJ) $(LIB) $(CFLAGS) $(INC)

clean:
	@make -sC ./lib/my clean
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)
	@make -C ./lib/my fclean
	@cd

re:	fclean  all