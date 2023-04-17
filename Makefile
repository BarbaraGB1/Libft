# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/17 19:27:56 by bargarci          #+#    #+#              #
#    Updated: 2023/04/17 20:08:45 by bargarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

COMPILE = ${CC} ${CFLAGS}

SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strchr.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_memchr.c ft_strrchr.c ft_memcmp.c ft_strncmp.c ft_memcpy.c ft_strlcpy.c ft_strlcat.c ft_memmove.c ft_atoi.c ft_strnstr.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_itoa.c ft_split.c

SRCBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ = ${SRC:%.c=%.o} 
OBJ_BONUS = ${SRCBONUS:%.c=%.o}

all: ${NAME}

bonus : ${OBJ_BONUS} ${OBJ} 
	ar -rcs ${NAME} ${BONUS} ${OBJ_BONUS}

${NAME}: ${OBJ}
	ar -rcs ${NAME} ${OBJ}

${BONUS}: ${OBJ_BONUS}
	ar -rcs ${BONUS} ${OBJ_BONUS}

%.o: %.c
	$(COMPILE) -c $< -o $@

# Cleaning

clean:
	@echo Limpiando los .o ...
	@rm -f ${OBJ} ${OBJ_BONUS}
	@echo OK

fclean: clean
	@rm -f ${NAME}
re: fclean all

ra: fclean bonus

.PHONY: all bonus clean fclean re
