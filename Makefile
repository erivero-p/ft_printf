# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/01 09:30:04 by erivero-          #+#    #+#              #
#    Updated: 2023/05/05 15:44:23 by erivero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FILES = ft_printf.c\
		ft_puchero.c\
		ft_str_print.c\
		ft_unsign_print.c\
		ft_int_print.c\
		ft_hexa_print.c\
		ft_ptr_print.c

OBJECTS = $(FILES:.c=.o)
FLAGS = -Werror -Wall -Wextra

all: $(NAME)
$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)
$(OBJECTS): $(FILES)
	@gcc $(FLAGS) -c $(FILES)
clean:
	@rm -f $(OBJECTS)
fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: re all clean fclean

