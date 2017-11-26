# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/06 15:16:59 by lmucassi          #+#    #+#              #
#    Updated: 2017/11/26 11:57:14 by lmucassi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INC_PATH =./inc/

INC = -I $(INC_PATH)

#---------------------------#
# 		ceating paths 		#
#---------------------------#
SRC_PATH_MEM 	= ./memory/
SRC_PATH_STR 	= ./strings/
SRC_PATH_DIS	= ./display/
SRC_PATH_AMEM	= ./addmemory/
SRC_PATH_NUM	= ./basicnum/
SRC_PATH_ASTR	= ./addstrings/
SRC_PATH_EXT	= ./extra/

#-----------------------------------#
#		creating function groups	#
#-----------------------------------#
SRC_MEM		= ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
			  ft_memmove.c ft_memset.c
SRC_STR		= ft_strcat.c ft_strcmp.c ft_strdup.c ft_strlen.c ft_strncmp.c\
			  ft_strnstr.c ft_strstr.c ft_strchr.c ft_strcpy.c ft_strlcat.c\
			  ft_strncat.c ft_strncpy.c ft_strrchr.c
SRC_DIS		= ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
			  ft_putstr_fd.c ft_putchar.c ft_putendl.c ft_putnbr.c ft_putstr.c\
			  get_next_line.c
SRC_AMEM	= ft_memalloc.c ft_memdel.c
SRC_NUM		= ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
			  ft_isprint.c ft_tolower.c ft_toupper.c
SRC_ASTR	= ft_strclr.c ft_strequ.c ft_striteri.c ft_strmap.c ft_strnequ.c\
			  ft_strsplit.c ft_strtrim.c ft_strdel.c ft_striter.c ft_strjoin.c\
			  ft_strmapi.c ft_strnew.c ft_strsub.c
SRC_EXT		= ft_size_base.c ft_isspace.c

#-----------------------------------------------#
#		compiling one source					#
#-----------------------------------------------#
SRC	 = 	$(addprefix $(SRC_PATH_MEM), $(SRC_MEM))
SRC	 += $(addprefix $(SRC_PATH_STR), $(SRC_STR))
SRC	 += $(addprefix $(SRC_PATH_DIS), $(SRC_DIS))
SRC	 += $(addprefix $(SRC_PATH_AMEM), $(SRC_AMEM))
SRC	 += $(addprefix $(SRC_PATH_NUM), $(SRC_NUM))
SRC	 += $(addprefix $(SRC_PATH_ASTR), $(SRC_ASTR))
SRC	 += $(addprefix $(SRC_PATH_EXT), $(SRC_EXT))

#-----------------------------------------------#
#		creating objects						#
#-----------------------------------------------#
OBJ  =  $(patsubst %.c,%.o,$(SRC_MEM))
OBJ  += $(patsubst %.c,%.o,$(SRC_STR))
OBJ  += $(patsubst %.c,%.o,$(SRC_DIS))
OBJ  += $(patsubst %.c,%.o,$(SRC_AMEM))
OBJ  += $(patsubst %.c,%.o,$(SRC_NUM))
OBJ  += $(patsubst %.c,%.o,$(SRC_ASTR))
OBJ  += $(patsubst %.c,%.o,$(SRC_EXT))

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@echo "\033[32mCompiling library...\033[00m"
	gcc -c $(CFLAGS) $(SRC) $(INC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[33mDone!!\033[00m"

clean:
	@echo "\033[31mRemoving objects\033[00m"
	@rm -f $(OBJ)

fclean: clean
	@echo "\033[31mRemoving libft.a\033[00m"
	@rm -f $(NAME)
	@rm -f libft.a
	@echo "\033[33mDone!!\033[00m"

re: fclean all

norm:
	@echo "\033[32mNorming Memory Functions...\033[00m"
	@norminette memory
	@echo "\n\033[32mNorming String Functions...\033[00m"
	@norminette strings/
	@echo "\n\033[32mNorming Basic Number Functions...\033[00m"
	@norminette basicnum/
	@echo "\n\033[32mNorming Additional Memory Functions...\033[00m"
	@norminette addmemory/
	@echo "\n\033[32mNorming Additional String Functions...\033[00m"
	@norminette addstrings/ 
	@echo "\n\033[32mNorming Display Functions...\033[00m"
	@norminette display/ 
	@echo "\n\033[32mNornimg Extra Functions\033[00m"
	@norminette extra
	@echo "\033[32mDone!!\033[00m"

.PHONY:	clean fclean all re
