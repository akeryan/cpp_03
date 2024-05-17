# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/04 14:39:51 by akeryan           #+#    #+#              #
#    Updated: 2024/05/17 12:57:59 by akeryan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec 

CXFLAGS =  -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98
CXX = c++
RM = rm -rf

SRC_FILES = main.cpp	\
			ClapTrap.cpp	

INCLUDE_FILES = ClapTrap.hpp	

OBJ = $(patsubst %.cpp, %.o, $(SRC_FILES))

%.o: %.cpp $(INCLUDE_FILES) 
	$(CXX) $(CXXFLAGS) -o $@ -c $<  

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
