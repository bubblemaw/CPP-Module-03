# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maw <maw@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/31 13:51:02 by maw               #+#    #+#              #
#    Updated: 2025/07/31 13:51:10 by maw              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

SRCS = ClapTrap.cpp \
	ScavTrap.cpp \
	main.cpp \


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