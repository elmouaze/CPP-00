# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-moua <ael-moua@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/16 00:33:22 by ael-moua          #+#    #+#              #
#    Updated: 2025/03/16 00:33:23 by ael-moua         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp
NAME = megaphone
CC = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all