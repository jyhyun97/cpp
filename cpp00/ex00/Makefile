# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 18:30:13 by jeonhyun          #+#    #+#              #
#    Updated: 2021/11/08 18:30:30 by jeonhyun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
FLAGS = -Wall -Wextra -Werror
SRCS = megaphone.cpp
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
