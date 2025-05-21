# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/07 22:03:41 by csimonne          #+#    #+#              #
#    Updated: 2025/05/07 22:06:50 by csimonne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#REPERTOIRES..........................................
HEADER = ft_printf.h

SRC =	ft_printf.c \
		ft_hexpal.c \
		ft_hexlow.c \
		ft_hexup.c \
		ft_putnbr_counter.c \
		ft_putnbr_unsigned_fd.c \
		ft_putstr_counter.c

OBJS = $(SRC:.c=.o)

#VARIABLES...........................................
#Nom du programme :
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g -s
LIB_PATH = ./libft
LIBFT = $(LIB_PATH)/libft.a

#TARGETS.............................................
# target / component /
# command /

all: $(LIBFT) $(NAME)

$(NAME): $(OBJS) 
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

$(LIBFT) :
	make -C $(LIB_PATH) all

%.o: %.c $(HEADER)
	$(CC) -c $(CFLAGS) -I ./ $< -o $@

clean:
	make -C $(LIB_PATH) clean
	rm -f $(OBJS)

fclean: clean
	make -C $(LIB_PATH) fclean
	rm -rf $(NAME)

re: fclean all

#toujours executer ces noms en tt que commande, pour eviter les conflits
.PHONY: all clean fclean re
