NAME = gnl

SRC = get_next_line.c main.c

HEADER = get_next_line.h libft.h

LIBS = libft.a -lsal

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	clang -Wall -Wextra -Werror -I libft/ -o get_next_line.o -c get_next_line.c
	clang -Wall -Wextra -Werror -I libft/ -o main.o -c main.c
	clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft

clean:
	/bin/rm -rf $(OBJECTS)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: fclean clean all re