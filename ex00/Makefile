NAME = BraiiiiiiinnnzzzZ
SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
CPP = c++
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) -o $(NAME) $(OBJ)

%.o : %.cpp Zombie.hpp
	$(CPP) $(FLAGS) -c $< -o $@


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean