# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 21:18:47 by stclemen          #+#    #+#              #
#    Updated: 2022/10/26 21:18:47 by stclemen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =   ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putvoid.c \
		ft_puthexa.c \
 
OBJS = $(SRC:.c=.o)

HEAD = includes

COMPILER_COMMAND = CC

AR = ar rcs

RM = rm -f

CFLAGS = -Wall -Werror -Wextra -g

.c.o = $(COMPILER_COMMAND) $(CFLAGS) -c $< -o $(<:.c=.o)

all:    $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all bonus clean fclean re
