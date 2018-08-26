/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.wethinkcode.co.z    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 06:01:35 by gsteyn            #+#    #+#             */
/*   Updated: 2018/08/26 16:13:46 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "stringft.h"

# define BASE "0123456789abcdef"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_vect2
{
	int				x;
	int				y;
}					t_vect2;

int					ft_atoi(const char *nptr);
long				ft_atol(const char *str);

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
int					ft_geti(const char *str, int neg);
int					ft_intlen(long long c);
void				ft_insert(char **s, int index, long c);

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *newlst);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int					ft_lstlen(t_list *lst);
void				ft_lstappend(t_list **dst, t_list *ins);
void				ft_lstinsert(t_list *dst, t_list *ins);

void				ft_putnstr(char *str, size_t n);
void				ft_putnstr_fd(char *str, int fd, size_t n);
int					ft_abs(int in);
unsigned int		ft_2pow(int pow);

void				ft_error(char *str);
void				ft_print_bits(void *mem, size_t size);

void				ft_putnbr_base(long long n, int base);

t_vect2				ft_itovect(int x, int y);

#endif
