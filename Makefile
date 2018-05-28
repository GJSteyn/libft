# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/15 07:42:12 by gsteyn            #+#    #+#              #
#    Updated: 2018/05/28 18:43:21 by gsteyn           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJS = ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o \
	   ft_memchr.o ft_memcmp.o ft_strlen.o ft_strdup.o ft_strcpy.o \
	   ft_strncpy.o ft_strcat.o ft_strncat.o ft_strlcat.o ft_strchr.o \
	   ft_strrchr.o ft_strstr.o ft_strnstr.o ft_strcmp.o ft_strncmp.o \
	   ft_atoi.o ft_isupper.o ft_islower.o ft_isalpha.o ft_isdigit.o \
	   ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o \
	   ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o \
	   ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o \
	   ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o ft_strsplit.o \
	   ft_itoa.o ft_putchar.o ft_putstr.o ft_putendl.o ft_putnbr.o \
	   ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o \
	   ft_lstnew.o ft_lstdelone.o ft_lstdel.o ft_lstadd.o ft_lstiter.o \
	   ft_lstmap.o ft_strclen.o ft_word_count.o

FILES = $(patsubst %.o,%.c,$(OBJS))

FLAGS = -Wall -Wextra -Werror -I. -c

all: $(NAME)

so: $(NAME)
	gcc $(FLAGS) -fpic $(FILES)
	gcc -shared -o libft.so $(OBJS)

$(NAME): $(OBJS)
	ar rcs $@ $^

$(OBJS):
	gcc $(FLAGS) $(FILES)

clean:
	rm $(OBJS)

fclean: clean
	rm -f $(NAME) libft.so

re: fclean all
