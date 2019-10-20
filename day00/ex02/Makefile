C = tests.cpp Account.class.cpp
OBJECTS = *.o
INCLUDES = .
NAME = phonebook

all: $(NAME)

$(NAME):
	clang++ -Wextra -Wall -Werror -c $(C) -I $(INCLUDES) -g
	clang++ -Wextra -Wall -Werror -o $(NAME) $(OBJECTS)
clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all