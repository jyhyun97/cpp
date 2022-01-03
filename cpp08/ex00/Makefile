# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 17:02:23 by jeonhyun          #+#    #+#              #
#    Updated: 2022/01/03 17:02:23 by jeonhyun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp
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