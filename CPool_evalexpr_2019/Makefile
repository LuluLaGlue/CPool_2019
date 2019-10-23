##
## EPITECH PROJECT, 2019
## CPool_Day10_2019
## File description:
## Makefile
##

SRC	=	main.c	\
		evalexpr.c	\
		add_sub.c	\
		do_op.c	\
		size.c	\
		handle_str.c

LIB	=	-L ./lib/my -lmy

INC	=	-I ./include -I ./lib/my/include

OBJ	=	main.o	\
		evalexpr.o	\
		add_sub.o	\
		do_op.o	\
		size.o	\
		handle_str.o

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