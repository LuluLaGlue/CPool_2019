##
## EPITECH PROJECT, 2019
## temp
## File description:
## Makefile
##

SRC	=	btree_create_node.c	\
		btree_apply_prefix.c	\
		btree_apply_infix.c	\
		btree_apply_suffix.c	\
		btree_insert_data.c	\
		btree_search_item.c	\
		btree_level_count.c	\
		btree_apply_by_level.c


OBJ	=	btree_create_node.o	\
		btree_apply_prefix.o	\
		btree_apply_infix.o	\
		btree_apply_suffix.o	\
		btree_insert_data.o	\
		btree_search_item.o	\
		btree_level_count.o	\
		btree_apply_by_level.o

NAME	=	libbtree.a

all:		$(NAME)

$(NAME):	$(OBJ)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

.PHONY: clean

clean:
		@rm -f $(OBJ)

fclean:		clean
		@rm -f $(NAME)

re:		fclean all