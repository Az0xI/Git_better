##
## EPITECH PROJECT, 2024
## [project]
## File description:
## Makefile that compile the [project] project
## lib available : str, math, llist
##

SRC	=	main.c
TESTS	=
LIB_OBJ	=	lib/build/*.o
OBJ	=	$(SRC:.c=.o)
CC	=	gcc
CFLAGS	=	-Wall -Wextra -g
CPPFLAGS	=	-I./include/
LIB_GCC	=	-L. -lmy
LIB_PATH	=	lib
TEST_PATH	=	tests/
TEST_FLAGS	=	--coverage -lcriterion
NAME	=	[project]

.PHONY:	clean fclean re

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C $(LIB_PATH)
	$(CC) -o $(NAME) $(OBJ) $(LIB_GCC)

unit_tests:	$(TEST) all
	$(CC) -o unit_tests $(TESTS) $(LIB_GCC) $(TEST_FLAGS) $(CPPFLAGS)

tests_run:	unit_tests
	./unit_tests

lines:	unit_tests
	gcovr --exclude test/

branches:	unit_tests
	gcovr --exclude test/ --branches

clean:
	rm -f $(OBJ)
	rm -f *.gcda
	rm -f *.gcno
	$(MAKE) -C $(LIB_PATH) $@

fclean:	clean
	rm -f $(NAME)
	rm -f unit_tests
	$(MAKE) -C $(LIB_PATH) $@

re:	fclean all
