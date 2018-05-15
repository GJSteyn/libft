# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/15 07:42:12 by gsteyn            #+#    #+#              #
#    Updated: 2018/05/15 08:34:18 by gsteyn           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS = ft_memset.o ft_bzero.o ft_memcpy.o
FLAGS = -Wall -Wextra -Werror

test: $(OBJS)
	gcc $(FLAGS) -o test $(OBJS)
ft_memset.o: ft_memset.c libft.h
	gcc -c $(FLAGS) ft_memset.c
