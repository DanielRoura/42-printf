# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/15 15:52:22 by droura-s          #+#    #+#              #
#    Updated: 2024/09/23 10:16:28 by droura-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

SRC_BONUS =	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

OBJ_BONUS = $(SRC_BONUS:.c=.o)

LIB = ar rc $(NAME)

REMOVE = rm -f

COMPILER = cc -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME):
	@$(COMPILER) $(SRC)
	@$(LIB) $(OBJ)

bonus:
	@$(COMPILER) $(SRC_BONUS)
	@$(LIB) $(OBJ_BONUS)

clean:
	@$(REMOVE) $(OBJ)
	@$(REMOVE) $(OBJ_BONUS)

fclean: clean
	@$(REMOVE) $(NAME)
	@$(REMOVE) *.o

re: fclean all

.PHONY: all clean fclean re