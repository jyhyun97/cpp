NAME = ex00
FLAGS = -Wall -Wextra -Werror
SRCS = main.cpp\
		newZombie.cpp\
		randomChump.cpp\
		Zombie.cpp
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