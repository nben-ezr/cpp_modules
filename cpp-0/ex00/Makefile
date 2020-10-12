# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nben-ezr <nben-ezr@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/05 16:47:20 by nben-ezr      #+#    #+#                  #
#    Updated: 2020/10/05 21:08:20 by nben-ezr      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

fclean: clean
	rm -f $(NAME)

clean: fclean

re: fclean all