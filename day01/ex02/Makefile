NAME = zombie

SRC_DIR = ./
OBJ_DIR = ./obj/
INC_DIR = .

CC = clang++
CC_FLAGS = -Wall -Wextra -Werror
DEBUG_FLAGS = -g3

SRC = main.cpp Zombie.cpp ZombieEvent.cpp

OBJCTS = $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJCTS)
	$(CC) $(CC_FLAGS) $(DEBUG_FLAGS) $(OBJCTS) -o $(NAME) -I$(INC_DIR)

$(OBJCTS): | $(OBJ_DIR)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	$(CC) $(CC_FLAGS) $(DEBUG_FLAGS) -c $< -o $@ -I$(INC_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

vpath %.c $(SRC_DIR)