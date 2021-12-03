# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeonhyun <jeonhyun@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 17:01:35 by jeonhyun          #+#    #+#              #
#    Updated: 2021/12/03 16:34:06 by jeonhyun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00
FLAGS = -Wall -Wextra -Werror
SRCS = main.cpp\
		Animal.cpp\
		Cat.cpp\
		WrongAnimal.cpp\
		WrongCat.cpp\
		Dog.cpp
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