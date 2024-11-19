# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbenaali <bbenaali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/16 17:53:23 by bbenaali          #+#    #+#              #
#    Updated: 2024/11/16 17:53:25 by bbenaali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_atoi.c  ft_isdigit.c ft_putchar_fd.c ft_strjoin.c \
		ft_strtrim.c ft_isprint.c ft_putendl_fd.c ft_strlcat.c \
		ft_substr.c  ft_itoa.c ft_putnbr_fd.c ft_strlcpy.c \
		ft_bzero.c ft_memchr.c ft_putstr_fd.c ft_strlen.c \
		ft_toupper.c ft_calloc.c ft_memcmp.c ft_split.c \
		ft_strmapi.c ft_isalnum.c ft_memcpy.c ft_strchr.c \
		ft_isalpha.c ft_memmove.c ft_strdup.c ft_strnstr.c \
		ft_isascii.c ft_memset.c ft_striteri.c ft_strrchr.c \
		ft_tolower.c ft_strncmp.c

CC = cc

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

%.o: %.c libft.h
	${CC} ${FLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all