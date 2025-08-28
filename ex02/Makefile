CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.CPP
OBJ = main.o 
NAME = ref

all: $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp 
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re : fclean all

.PHONY: clean