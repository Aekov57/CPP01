# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: misimon <misimon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/04 15:19:15 by misimon           #+#    #+#              #
#    Updated: 2023/04/25 16:50:59 by misimon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main		\
		Harl		\

ALL_SRC += $(addsuffix .cpp, $(SRC))

OBJS = $(ALL_SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f ./Harl

re : fclean all