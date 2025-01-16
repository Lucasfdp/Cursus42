# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/16 14:25:09 by luferna3          #+#    #+#              #
#    Updated: 2025/01/16 16:37:24 by luferna3         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc = gcc

CFLAGS = -Wall -Wextra -Werror

LIBRARY = libft.a
TARGET = myprogram

OBJ_FILES = ft_strlen.o ft_atoi.o ft_isascii.o main.o

$(LIBRARY): $(OBJ_FILES)
	ar rcs $(LIBRARY) $(OBJ_FILES)

$(TARGET): $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ_FILES) -L. -lft

ft_strlen.o: ft_strlen.c libft.h
	$(CC)	$(CFLAGS)	-c	ft_strlen.c

ft_atoi.o: ft_atoi.c libft.h
	$(CC)	$(CFLAGS) -c ft_atoi.c

ft_isascii.o: ft_isascii.c libft.h
	$(CC) $(CFLAGS) -c ft_isascii.c

main.o: main.c libft.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f *.o $(TARGET)

fclean: clean
	rm -f $(TARGET)

re: fclean $(TARGET)

.PHONY: clean fclean re
