# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erahimi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/08 18:41:46 by erahimi           #+#    #+#              #
#    Updated: 2019/04/08 18:46:33 by erahimi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
FLAGS= -Werror -Wextra -Wall
SRCS= *.c

all: $(NAME)

$(NAME):
	@gcc -c $(FLAGS) $(SRCS)
	@ar rc $(NAME) *.o
	@ranlib $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
