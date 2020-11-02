# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nben-ezr <nben-ezr@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/05 21:21:21 by nben-ezr      #+#    #+#                  #
#    Updated: 2020/11/02 23:22:37 by nben-ezr      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = 	main.cpp			\
		phonebook.cpp

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	g++ $(FLAGS) $(SRC) -o $(NAME)

fclean: clean
	rm -f $(NAME)

clean: fclean

re: fclean all