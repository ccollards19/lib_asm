# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccollard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/18 11:47:57 by ccollard          #+#    #+#              #
#    Updated: 2019/11/18 11:48:06 by ccollard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= gcc

AC	= nasm

ACFLAGS	= -g -f macho64

CCFLAGS	= -Wall -Wextra -Werror -g

NAME	= asm_test 

RESET	= \033[0m
BLACK	= \033[0;30m
RED	= \033[0;31m
GREEN	= \033[0;32m
YELLOW	= \033[0;33m
BLUE	= \033[0;34m
PURPLE	= \033[0;35m
CYAN	= \033[0;36m
WHITE 	= \033[0;37m

BOLDBLACK	= \033[1m\033[30m
BOLDRED		= \033[1m\033[31m
BOLDGREEN	= \033[1m\033[32m
BOLDYELLOW	= \033[1m\033[33m
BOLDBLUE	= \033[1m\033[34m
BOLDMAGENTA	= \033[1m\033[35m
BOLDCYAN	= \033[1m\033[36m
BOLDWHITE	= \033[1m\033[37m

#SRCDIR	= src/

SRC	= main.c
ASRC	= ft_read.asm\
	ft_strcmp.asm\
	ft_strcpy.asm\
	ft_strdup.asm\
	ft_strlen.asm\
	ft_write.asm

OBJ 	= $(SRC:%.c=%.o)
AOBJ 	= $(ASRC:%.asm=%.o)

#BOBJS	= $(BONUS:%.asm=%.o)

#end of variable definitions

all: $(NAME) 

$(NAME): $(OBJ) $(AOBJ)
	 @$(CC) $(CCFLAGS) $(OBJ) $(AOBJ) -o $@
	 @printf "\n[COMPILED]\n" 

%.o: %.c
	@printf "$(GREEN).$(RESET)"
	@$(CC) $(CCFLAGS) -c $< -o $@ 

%.o: %.asm
	@printf "$(YELLOW).$(RESET)"
	@$(AC) $(ACFLAGS) $<

clean: 
	@rm -f $(OBJ) $(AOBJ)
	@printf "$(RED)[CLEAN]\n$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@printf "[FCLEAN]\n"

re: fclean all

test:
	echo "test $(RED)test"

.PHONY: test clean fclean all re

