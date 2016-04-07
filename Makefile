# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhaquet <nhaquet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/26 16:10:55 by nhaquet           #+#    #+#              #
#    Updated: 2016/04/07 19:30:08 by nhaquet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a

SRC =   ft_bzero.s			\
		ft_isalpha.s		\
		ft_isdigit.s		\
		ft_isascii.s		\
		ft_isprint.s		\
		ft_isalnum.s		\
		ft_tolower.s		\
		ft_toupper.s		\
		ft_strcat.s

FORMAT = macho64

OBJ = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[1;34m[*] - Compiling Libfts ...\033[00m"
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[1;32m[+] - Done.\033[00m"

%.o: %.s
	@~/.brew/bin/nasm $< -f $(FORMAT)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
