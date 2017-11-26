# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/20 12:36:48 by lmucassi          #+#    #+#              #
#    Updated: 2017/11/26 11:56:02 by lmucassi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= filler

SRC		= main.c\
		  find_player.c\
		  get_info.c\
		  check_piece.c\
		  save_map.c\
		  ft_player.c

OBJ		= $(SRC:.c=.o) 

CC		= gcc -Wall -Wextra -Werror

all:	  $(NAME)

$(NAME):
	@echo "\033[32mStarting...\033[00m"
	make -C libft/
	@echo "\033[33mCompiling Project...\033[00m"
	$(CC) -c $(SRC)
	@echo "\033[33mFinishing up...\033[00m"
	$(CC) $(OBJ) libft/libft.a -o $(NAME)
	@echo "\033[33mProject Compiled\033[00m"

clean:
	@echo "\033[31mCleaning Project...\033[00m"
	/bin/rm -f $(OBJ)
	@echo "\033[31mCleaning Lib...\033[00m"
	make -C libft/ clean
	@echo "\033[33mDone Cleaning...\033[00m"

fclean:
	@echo "\033[33mRemoving files...\033[00m"
	@echo "\033[31mRemoving Project...\033[00m"
	/bin/rm -f $(NAME)
	make -Clibft/ fclean

re: fclean all

.PHONY: clean fclean all re
