NAME = karenFilter

SRCS =		Karen.cpp\
			main.cpp

INCLUDES =	Karen.hpp \

OBJ = $(patsubst %.cpp, %.o, $(SRCS))

CC = clang++

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME) $(INCLUDES)

$(NAME): $(OBJ) $(INCLUDES)
			$(CC) $(FLAGS) $(OBJ) -std=c++98 -pedantic -o $(NAME)

%.o : %.cpp
			$(CC) $(FLAGS) -c $< -o $@

clean:
			${RM} ${OBJ}

fclean: clean
			$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re