# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nben-ezr <nben-ezr@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/19 21:42:15 by nben-ezr      #+#    #+#                  #
#    Updated: 2020/10/19 21:43:12 by nben-ezr      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME: replace

SRC = 	main.cpp

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

fclean: clean
	rm -f $(NAME)

clean: fclean

re: fclean all