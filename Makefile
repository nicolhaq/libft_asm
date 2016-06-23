# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhaquet <nhaquet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/26 16:10:55 by nhaquet           #+#    #+#              #
#    Updated: 2016/06/23 20:44:29 by nhaquet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
    NFLAGS = -f elf64 -p inc/syscall_linux.s
else
    NFLAGS = -f macho64 --prefix _ -p inc/syscall_macosx.s
endif

NAME = libfts.a

SRC =   ft_bzero.s			\
		ft_isalpha.s		\
		ft_isdigit.s		\
		ft_isascii.s		\
		ft_isprint.s		\
		ft_isalnum.s		\
		ft_tolower.s		\
		ft_toupper.s		\
		ft_strcat.s			\
		ft_strlen.s			\
		ft_puts.s

#FORMAT = macho64

OBJ = $(SRC:.s=.o)

test: all

	gcc -Wall -Wextra  -Werror test.c -L. -lfts
	./a.out

all: $(NAME)

$(NAME): $(OBJ)
	@echo $(UNAME)
	@echo "\033[1;34m[*] - Compiling Libfts ...\033[00m"
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	@echo "\033[1;32m[+] - Done.\033[00m"

%.o: %.s
	#@~/.brew/bin/
	nasm $(NFLAGS) $< -o $@
	#nasm $< -f $(FORMAT)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME) a.out

re: fclean all

.PHONY: all clean fclean re
