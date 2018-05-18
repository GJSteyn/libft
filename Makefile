# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/15 07:42:12 by gsteyn            #+#    #+#              #
#    Updated: 2018/05/18 13:10:57 by gsteyn           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS = ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o \
	   ft_memchr.o ft_memcmp.o ft_strlen.o ft_strdup.o ft_strcpy.o \
	   ft_strncpy.o ft_strcat.o ft_strncat.o ft_strlcat.o ft_strchr.o \
	   ft_strrchr.o ft_strstr.o ft_strnstr.o ft_strcmp.o ft_strncmp.o \
	   ft_atoi.o ft_isupper.o ft_islower.o ft_isalpha.o ft_isdigit.o \
	   ft_isalnum.o
FLAGS = -Wall -Wextra -Werror

test: $(OBJS)
	gcc $(FLAGS) -o test $(OBJS)
ft_memset.o: ft_memset.c libft.h
	gcc -c $(FLAGS) ft_memset.c
ft_bzero.o: ft_bzero.c libft.h
	gcc -c $(FLAGS) ft_bzero.c
ft_memcpy.o: ft_memcpy.c libft.h
	gcc -c $(FLAGS) ft_memcpy.c
ft_memccpy.o: ft_memcpy.c libft.h
	gcc -c $(FLAGS) ft_memccpy.c
ft_memmove.o: ft_memmove.c libft.h
	gcc -c $(FLAGS) ft_memmove.c
ft_memchr.o: ft_memchr.c libft.h
	gcc -c $(FLAGS) ft_memchr.c
ft_memcmp.o: ft_memcmp.c libft.h
	gcc -c $(FLAGS) ft_memcmp.c
ft_strlen.o: ft_strlen.c libft.h
	gcc -c $(FLAGS) ft_strlen.c
ft_strdup.o: ft_strdup.c libft.h
	gcc -c $(FLAGS) ft_strdup.c
ft_strcpy.o: ft_strcpy.c libft.h
	gcc -c $(FLAGS) ft_strcpy.c
ft_strncpy.o: ft_strncpy.c libft.h
	gcc -c $(FLAGS) ft_strncpy.c
ft_strcat.o: ft_strcat.c libft.h
	gcc -c $(FLAGS) ft_strcat.c
ft_strncat.o: ft_strncat.c libft.h
	gcc -c $(FLAGS) ft_strncat.c
ft_strlcat.o: ft_strlcat.c libft.h
	gcc -c $(FLAGS) ft_strlcat.c
ft_strchr.o: ft_strchr.c libft.h
	gcc -c $(FLAGS) ft_strchr.c
ft_strrchr.o: ft_strrchr.c libft.h
	gcc -c $(FLAGS) ft_strrchr.c
ft_strstr.o: ft_strstr.c libft.h
	gcc -c $(FLAGS) ft_strstr.c
ft_strnstr.o: ft_strnstr.c libft.h
	gcc -c $(FLAGS) ft_strnstr.c
ft_strcmp.o: ft_strcmp.c libft.h
	gcc -c $(FLAGS) ft_strcmp.c
ft_strncmp.o: ft_strncmp.c libft.h
	gcc -c $(FLAGS) ft_strncmp.c
ft_atoi.o: ft_atoi.c libft.h
	gcc -c $(FLAGS) ft_atoi.c
ft_isupper.o: ft_isupper.c libft.h
	gcc -c $(FLAGS) ft_isupper.c
ft_islower.o: ft_islower.c libft.h
	gcc -c $(FLAGS) ft_islower.c
ft_isalpha.o: ft_isalpha.c libft.h
	gcc -c $(FLAGS) ft_isalpha.c
ft_isdigit.o: ft_isdigit.c libft.h
	gcc -c $(FLAGS) ft_isdigit.c
ft_isalnum.o: ft_isdigit.c libft.h
	gcc -c $(FLAGS) ft_isalnum.c
clean:
	rm $(OBJS)
