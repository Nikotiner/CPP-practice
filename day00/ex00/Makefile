C = megaphone.cpp
OBJECTS = *.o
NAME = megaphone

all: $(NAME)

$(NAME):
	clang++ -Wextra -Wall -Werror -c $(C)
	clang++ -Wextra -Wall -Werror -o $(NAME) $(OBJECTS)
clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all