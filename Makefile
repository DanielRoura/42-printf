# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 13:20:57 by droura-s          #+#    #+#              #
#    Updated: 2024/10/03 13:34:59 by droura-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC_DIR = src
OBJ_DIR = obj
LIBFT_DIR = libft

SRC = 	ft_printf.c		ft_printf_chr.c		ft_printf_dec.c		ft_printf_hexa.c \
		ft_itoa_hexa.c 	ft_itoa_unsigned.c 	ft_utils.c

OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

COMPILER = cc -Wall -Werror -Wextra -c
INCLUDES = -I./$(SRC_DIR)
LIB = ar rcs
LIBFT_A = libft.a

REMOVE = rm -f

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ) $(LIBFT_DIR)/$(LIBFT_A)
	@cp $(LIBFT_DIR)/$(LIBFT_A) $(NAME)
	@$(LIB) $(NAME) $(OBJ)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(COMPILER) $(INCLUDES) $< -o $@

$(LIBFT_DIR)/$(LIBFT_A):
	@$(MAKE) -s -C $(LIBFT_DIR) all

clean:
	@$(REMOVE) $(OBJ)
	@$(MAKE) -s -C $(LIBFT_DIR) clean

fclean: clean
	@$(REMOVE) $(NAME)
	@$(MAKE) -s -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
