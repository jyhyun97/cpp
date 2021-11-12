# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 20:50:34 by jeonhyun          #+#    #+#              #
#    Updated: 2021/11/09 21:04:28 by jeonhyun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
FLAGS = -Wall -Wextra -Werror
SRCS = phonebook.cpp\
	   contact.cpp\
	   main.cpp
OBJS = $(SRCS:.cpp=.o)

.cpp.o :
	clang++ $(FLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	clang++ $(FLAGS) $(OBJS) -o $(NAME)	

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean :	clean
	rm -rf $(NAME)

re :	fclean all

.PHONY : all clean fclean re

