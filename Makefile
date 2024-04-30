# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/01 09:30:04 by erivero-          #+#    #+#              #
#    Updated: 2024/04/30 15:46:48 by erivero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FILES = ft_printf.c\
		chars.c\
		digits.c\

OBJECTS = $(FILES:.c=.o)
FLAGS = -Werror -Wall -Wextra

all: $(NAME)
$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)
%.o: %.c
	@gcc $(FLAGS) -c $< -o $@
clean:
	@rm -f $(OBJECTS)
fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: re all clean fclean

