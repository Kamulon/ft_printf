# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cperegri <cperegri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/30 06:32:36 by cperegri          #+#    #+#              #
#    Updated: 2022/01/07 22:16:41 by cperegri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
LIBFT	=	ft_printf.h
FLAGS	=	-Wall -Wextra -Werror
SRCS	=	ft_printf.c					\
			print_char.c				\
			print_string.c				\
			print_decimal.c				\
			print_unsigned_decimal.c	\
			print_lowcase_hex.c			\
			print_uppercase_hex.c		\
			print_pointer.c				\

OBJS	=	$(SRCS:.c=.o)
CC		=	gcc

all		:	
			@make $(NAME)

$(NAME)	:	$(OBJS) $(LIBFT)
			ar rcs $(NAME) $(OBJS)

%.o		: 	%.c
			$(CC) $(FLAGS) -c $< -o $@

clean	:
			/bin/rm -f $(OBJS) $(OBJSBS)

fclean	:	clean
			/bin/rm -f $(NAME)

re		:	fclean all

.PHONY	: 	all clean fclean re