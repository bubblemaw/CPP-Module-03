


NAME = Claptrap

SRCS = megaphone.cpp

OBJS = $(SRCS:%.cpp=%.o)

FLAGS = -Wall -Werror -Wextra -g -std=c++98

RM = rm -f

$(NAME): $(OBJS)
			c++ $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
		$(RM) $(OBJS)
		
fclean: clean
		$(RM) $(NAME)

re: fclean all