# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsteyn <gsteyn@student.wethinkcode.co.z    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/15 07:42:12 by gsteyn            #+#    #+#              #
#    Updated: 2018/08/26 16:22:02 by gsteyn           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME :=		libft.a
INCLUDES :=	-I includes
FLAGS :=	-Wall -Wextra -Werror

SRC :=		ft_memccpy.c ft_atoi.c ft_memalloc.c ft_memdel.c ft_itoa.c \
			ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c \
			ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c \
			ft_geti.c ft_intlen.c ft_insert.c ft_putnstr.c ft_putnstr_fd.c \
			ft_lstlen.c ft_atol.c ft_abs.c ft_2pow.c ft_error.c \
			ft_print_bits.c ft_lstappend.c ft_lstinsert.c \
			ft_itovect.c ft_putnbr_base.c
STR_SRC :=	ft_bzero.c ft_is_num.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_islower.c ft_isprint.c ft_isupper.c ft_memchr.c \
			ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strcat.c \
			ft_strchr.c ft_strclen.c ft_strclr.c ft_strcmp.c ft_strcpy.c \
			ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c \
			ft_strjoin.c ft_strlcat.c ft_strldel.c ft_strlen.c ft_strmap.c \
			ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c \
			ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c \
			ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c ft_word_count.c
ALL_SRC :=	$(SRC) $(STR_SRC)
SRC :=		$(addprefix src/, $(SRC))
STR_SRC :=	$(addprefix src/string/, $(STR_SRC))
ODIR :=		bin
OBJS :=		$(addprefix $(ODIR)/, $(patsubst %.c,%.o,$(ALL_SRC)))

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $^
	ranlib $(NAME)

$(ODIR)/%.o: src/%.c
	@mkdir -p $(ODIR)
	gcc $(FLAGS) $(INCLUDES) -c $< -o $@
$(ODIR)/%.o: src/string/%.c
	@mkdir -p $(ODIR)
	gcc $(FLAGS) $(INCLUDES) -c $< -o $@

so: $(NAME)
	gcc $(FLAGS) $(INCLUDES) -fpic $(SRC) $(STR_SRC)
	gcc -shared -o libft.so $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f libft.a libft.so

re: fclean all
