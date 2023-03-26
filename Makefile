# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ramoussa <ramoussa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/20 18:55:03 by ramoussa          #+#    #+#              #
#    Updated: 2023/03/25 19:22:37 by ramoussa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
SOURCE = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c  \
		ft_isprint.c ft_memset.c ft_strchr.c ft_strlen.c  \
		ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c  \
		ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SOURCE)
	ar rcs $(NAME) *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all