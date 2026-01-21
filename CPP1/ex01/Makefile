.SILENT:

NAME = zombie

C++ = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Zombie.cpp newZombie.cpp randomChump.cpp zombieHorde.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(C++) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(C++) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re