# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdiederi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/17 14:07:00 by rdiederi          #+#    #+#              #
#    Updated: 2018/06/11 17:41:26 by rdiederi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
OBJ = ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o \
		ft_memcmp.o ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o \
		ft_strncat.o ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strstr.o \
		ft_strnstr.o ft_strcmp.o ft_strncmp.o ft_atoi.o ft_isalpha.o ft_isdigit.o \
		ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o \
		ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o \
		ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o \
		ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o ft_strsplit.o ft_itoa.o \
		ft_putchar.o ft_putstr.o ft_putendl.o ft_memccpy.o ft_putnbr.o \
		ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o \
		ft_islower.o ft_isupper.o ft_check_int_max.o ft_int_len.o \
		#ft_lstnew.o ft_lstdelone.o ft_lstdel.o ft_lstadd.o ft_lstiter.o \
		ft_lstmap.o ft_stpcpy.o ft_stralloc.o  \

all : $(NAME)

%.o : %.c
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME) : $(OBJ)
	 ar rc $(NAME) $(OBJ)
	 ranlib $(NAME)

clean :
	/bin/rm -f *.o

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all

.PHONY : clean fclean re
