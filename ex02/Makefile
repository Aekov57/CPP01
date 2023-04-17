# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: misimon <misimon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/04 15:19:15 by misimon           #+#    #+#              #
#    Updated: 2023/04/17 16:30:10 by misimon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =	main		\

ALL_SRC += $(addsuffix .cpp, $(SRC))

OBJS = $(ALL_SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f ./brain

re : fclean all