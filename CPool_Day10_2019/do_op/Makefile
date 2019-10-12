##
## EPITECH PROJECT, 2019
## CPool_Day10_2019
## File description:
## Makefile
##

SRC	=	error.c	\
		op.c		\
		main.c

LIB	=	-L ../lib/my -lmy

INC	=	-I ../include -I ../lib/my/include

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -g $(INC)

NAME	=	do-op

all:	$(OBJ)
	@make -sC ../lib/my
	@gcc -o $(NAME) $(OBJ) $(LIB) $(CFLAGS) $(INC)

clean:
	@make -sC ../lib/my clean
	@rm -f $(OBJ)

fclean:	clean
	@make -sC ../lib/my fclean
	@rm -f $(NAME)

re:	fclean all