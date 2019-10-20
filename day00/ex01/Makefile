C = phonebook.cpp Date.cpp Secrets.cpp Contact.cpp
OBJECTS = *.o
INCLUDES = ./includes
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