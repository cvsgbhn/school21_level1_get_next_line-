NAME = gnl

SRC = get_next_line.c main.c

HEADER = get_next_line.h libft.h

LIBS = libft.a -lsal

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc -Wall -Wextra -Werror a.-o $(OBJ) $(SRC) -I $(HEADER)
	gcc -Wall -Wextra -Werror *.out -L. $(LIBS)

clean:
	/bin/rm -rf $(OBJECTS)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: fclean clean all re