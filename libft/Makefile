# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 13:36:51 by stclemen          #+#    #+#              #
#    Updated: 2022/10/19 17:32:31 by stclemen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =   ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_isdigit.c \
		ft_atoi.c \
		ft_itoa.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strdup.c \
		ft_split.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
 
OBJS = $(SRC:.c=.o)

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
