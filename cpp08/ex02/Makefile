# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 17:02:39 by jeonhyun          #+#    #+#              #
#    Updated: 2022/01/03 17:02:40 by jeonhyun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp\
		MutantStack.cpp
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