# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/29 08:43:35 by afeuerst          #+#    #+#              #
#    Updated: 2019/11/03 09:59:35 by afeuerst         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft_printf.a
MAIN = main

FLAGS = -Wno-initializer-overrides -c -O0 -g

SRC = $(shell find . -type f -name "*.c")
INC = ./includes
OBJ = $(notdir $(SRC:.c=.o))

all: $(NAME) $(MAIN)

$(NAME): $(SRC) $(INC) Makefile clean main.c
	clang $(FLAGS) $(SRC) -I $(INC)
	ar -rc $(NAME) $(OBJ)
	clang $(NAME) -I $(INC) -g -O0 main.c -o main

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
