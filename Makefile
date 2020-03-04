# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seunkim <seunkim@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/05 01:12:41 by seunkim           #+#    #+#              #
#    Updated: 2020/03/05 01:24:46 by seunkim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c

CC	=	gcc
FLAGS	=	-Wall -Werror -Wextra

OBJS	=	$(SRCS:%.c=%.o)

all	:	$(NAME)

$(NAME)	:	$(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS)	:	$(SRCS)
	$(CC) $(FLAGS) -c $(SRCS)

clean	:	
	rm -rf $(OBJS)

fclean	:	clean
	rm -rf $(NAME)

re	:	fclean all

