# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/18 13:55:55 by mbel-bas          #+#    #+#              #
#    Updated: 2022/02/05 11:38:20 by mbel-bas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = read.c
NAME = read
# FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(SRCS)
	@gcc $(FLAGS) $(SRCS) -o $(NAME)
clean:
	@rm -rf $(NAME)
fclean: clean
re : fclean all
.PHONY: all clean fclean re