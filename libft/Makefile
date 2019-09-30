# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 16:56:59 by vdanilo           #+#    #+#              #
#    Updated: 2019/09/30 19:33:03 by vdanilo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_atoi.c ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putnbr.c \
			ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncat.c \
			ft_strncmp.c ft_strncpy.c ft_strrchr.c ft_strstr.c ft_tolower.c ft_toupper.c ft_putchar.c ft_putstr.c \
			ft_strclr.c ft_putendl.c ft_strequ.c ft_strnequ.c ft_striter.c ft_striteri.c ft_itoa.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strtrim.c ft_strsplit.c ft_memdel.c ft_memalloc.c \
			ft_strnew.c ft_strsub.c ft_strjoin.c ft_strmap.c ft_strmapi.c set_flag.c write_to_char.c \
			ft_count_chars.c ft_count_words.c ft_count_whitespaces.c ft_strdel.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c ft_strnstr.c count_num_size.c ft_freearr.c ft_check_symbol.c ft_lstnew.c \
			ft_lstadd.c ft_lstiter.c ft_lstdelone.c ft_lstdel.c ft_lstmap.c ft_lstlength.c

OBJECTS = ${SOURCES:.c=.o}

INCLUDES = libft.h

all: $(NAME) 

$(NAME): $(SRCS) $(OBJECTS) $(INCLUDES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(OBJECTS): %.o: %.c
	gcc -c -Wall -Wextra -Werror $< -I $(INCLUDES)

clean:
	/bin/rm -rf $(OBJECTS) 

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all 
