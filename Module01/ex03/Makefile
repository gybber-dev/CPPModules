NAME = ex03

SRCS =		main.cpp \
			HumanA.cpp \
			HumanB.cpp \
			Weapon.cpp \

INCLUDES = HumanA.hpp \
			HumanB.hpp \
			Weapon.hpp \

OBJ = $(patsubst %.cpp, %.o, $(SRCS))

CC = clang++

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME) $(INCLUDE)

$(NAME): $(INCLUDES)  $(OBJ)
			$(CC) $(FLAGS) $(OBJ) -std=c++98 -pedantic -o $(NAME)

%.o : %.cpp
			$(CC) $(FLAGS) -c $< -o $@

clean:
			${RM} ${OBJ}

fclean: clean
			$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re