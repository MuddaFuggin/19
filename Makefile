# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/24 15:05:48 by csimonne          #+#    #+#              #
#    Updated: 2025/04/24 15:18:07 by csimonne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de la librairie
NAME = libft.a

# Tous tes fichiers source
SRC = ft_atoi.c  ft_bzero.c  ft_calloc.c  ft_isalnum.c  ft_isalpha.c	ft_isascii.c  ft_isdigit.c  ft_isprint.c  ft_itoa.c  ft_memchr.c  ft_memcmp.c  ft_memcpy.c  ft_memmove.c  ft_memset.c  ft_putchar_fd.c	ft_putendl_fd.c  ft_putnbr_fd.c  ft_putstr_fd.c  ft_split.c  ft_strchr.c  ft_strdup.c  ft_striteri.c  ft_strjoin.c  ft_strlcat.c  ft_strlcpy.c	ft_strlen.c  ft_strmapi.c  ft_strncmp.c  ft_strnstr.c  ft_strrchr.c  ft_strtrim.c  ft_substr.c	ft_tolower.c  ft_toupper.c


# Objets : transformation de chaque .c en objets compiles.
OBJ = $(SRC:.c=.o)

# Compilateur
CC = cc
CFLAGS = -Wall -Wextra -Werror

#definition de commqndes pour terminal. --->
# Règles -- make=all, name = libft.a, creation d archives : ar= archive, rcs = replace-add/create/index
# clean : supprime les fichiers .o compiles
# fclean : supprime aussi la librairie
# fclean all : supprime tout, recompile tout.

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
