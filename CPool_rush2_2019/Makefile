##
## EPITECH PROJECT, 2019
## CPool_Day10_2019
## File description:
## Makefile
##

SRC	=	count_occ.c	\
		main.c	\
		print_result.c	\
		dico.c \
		check_lang.c

LIB	=	-L ./lib/my -lmy

INC	=	-I ./include -I ./lib/my/include

OBJ	=	count_occ.o	\
		main.o	\
		print_result.o	\
		dico.o	\
		check_lang.o

CFLAGS	=	-Wall -g $(INC)

NAME	=	rush2

all:
	@make -C ./lib/my
	@cd ../..
	@gcc -c $(SRC) $(LIB) $(CFLAGS) $(INC)
	@gcc -o $(NAME) $(OBJ) $(LIB) $(CFLAGS) $(INC)

.PHONY: clean

clean:
	@make -sC ./lib/my clean
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:	fclean  all