# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhaquet <nhaquet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 16:52:52 by nhaquet           #+#    #+#              #
#    Updated: 2016/02/23 16:05:59 by nhaquet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_memset.c ft_putchar.c ft_putnbr.c ft_strlen.c ft_putstr.c ft_bzero.c \
	ft_strcpy.c ft_strncpy.c ft_strdup.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c \
	ft_strrchr.c ft_strstr.c ft_strcmp.c ft_strncmp.c ft_strnstr.c ft_atoi.c \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_tolower.c ft_toupper.c ft_memalloc.c ft_memdel.c ft_strjoin.c \
	ft_strnew.c ft_strsub.c ft_strsplit.c ft_sqrt.c \
	ft_realloc.c ft_strdup2.c get_next_line.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Werror -Wextra $(SRC)
	@ar rc libft.a $(OBJ) libft.h
	@ranlib libft.a
	@echo "libft ok"

clean:
	@rm -f $(OBJ)
	@echo "delete obj"

fclean: clean
	@rm -f libft.a
	@echo "delete libft.a"

re: fclean all

.PHONY: all clean fclean re
