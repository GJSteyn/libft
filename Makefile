# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/15 07:42:12 by gsteyn            #+#    #+#              #
#    Updated: 2018/05/16 17:37:45 by gsteyn           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS = ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.c
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
clean:
	rm $(OBJS)
