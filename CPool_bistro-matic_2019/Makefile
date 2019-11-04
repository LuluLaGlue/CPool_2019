##
## EPITECH PROJECT, 2019
## CPool_Day10_2019
## File description:
## Makefile
##

SRC	=	main.c	\
		eval_expr.c	\
		convert.c	\
		base.c	\
		base_bis.c	\
		error.c

LIB	=	-L ./lib/my -lmy

INC	=	-I ./include -I ./lib/my/include

OBJ	=	main.o	\
		eval_expr.o	\
		convert.o	\
		base.o	\
		base_bis.o	\
		error.o

CFLAGS	=	-Wall $(INC)

NAME	=	calc

.PHONY: all clean fclean re

all:
	@make -C ./lib/my
	@cd
	@gcc -c $(SRC) $(LIB) $(CFLAGS) $(INC)
	@gcc -o $(NAME) $(OBJ) $(LIB) $(CFLAGS) $(INC)

g3:
	@make -C ./lib/my
	@cd
	@gcc -g3 -c $(SRC) $(LIB) $(CFLAGS) $(INC)
	@gcc -o $(NAME) $(OBJ) $(LIB) $(CFLAGS) $(INC)
clean:
	@make -sC ./lib/my clean
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)
	@make -C ./lib/my fclean
	@cd

re:	fclean  all

reg3: fclean g3
