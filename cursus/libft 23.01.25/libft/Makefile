# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/16 14:25:09 by luferna3          #+#    #+#              #
#    Updated: 2025/01/20 14:41:05 by luferna3         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
TARGET = myprogram
SRC = ft_strlen.c ft_isdigit.c ft_atoi.c ft_isascii.c ft_memchr.c ft_memset.c ft_memcmp.c ft_memcpy.c ft_strncmp.c ft_isalnum.c ft_strlcat.c ft_isalpha.c ft_memmove.c ft_strlcpy.c ft_strnstr.c ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c ft_isprint.c ft_bzero.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c
OBJ_FILES = $(SRC:.c=.o)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

%.c: %.o
	$(CC) $(CFLAGS) -c $< -O $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

all: $(NAME)
