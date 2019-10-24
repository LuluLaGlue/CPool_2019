##
## EPITECH PROJECT, 2019
## CPool_Day10_2019
## File description:
## Makefile
##

SRC	=	main.c	\
		eval_expr.c	\

LIB	=	-L ./lib/my -lmy

INC	=	-I ./include -I ./lib/my/include

OBJ	=	main.o	\
		eval_expr.o	\

CFLAGS	=	-Wall -g $(INC)

NAME	=	eval_expr

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
