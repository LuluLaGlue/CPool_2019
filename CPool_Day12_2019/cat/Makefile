##
## EPITECH PROJECT, 2019
## CPool_Day10_2019
## File description:
## Makefile
##

SRC	=	main.c

LIB	=	-L ../lib/my -lmy

INC	=	-I ../include -I ../lib/my/include

OBJ	=	main.o

CFLAGS	=	-Wall -g $(INC)

NAME	=	cat

TEST = unit_tests

all:
	@make -C ../lib/my
	@cd
	@gcc -c $(SRC) $(LIB) $(CFLAGS) $(INC)
	@gcc -o $(NAME) $(OBJ) $(LIB) $(CFLAGS) $(INC)

tests_run:
	@gcc -o $(TEST) $(SRC) ../tests/test_cat.c --coverage -lcriterion
	./unit_tests

clean:
	@make -sC ../lib/my clean
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)
	@rm -f *.gcno
	@rm -f *.gcda
	@rm -f $(TEST)
	@make -C ../lib/my fclean
	@cd

re:	fclean  all

.PHONY: all clean fclean re