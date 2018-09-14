/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 09:45:18 by gsteyn            #+#    #+#             */
/*   Updated: 2018/09/14 16:27:58 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define BASE_L "0123456789abcdef"
# define BASE_U "0123456789ABCDEF"

# include <string.h>
# include <inttypes.h>
# include <stdarg.h>
# include <wchar.h>
# include "stringft.h"
# include "libft.h"

typedef enum			e_len
{
	normal,
	h,
	hh,
	l,
	ll,
	j,
	z
}						t_len;

typedef enum			e_sign
{
	none,
	plus,
	minus,
	space
}						t_sign;

typedef struct			s_flags
{
	int					plus;
	int					minus;
	int					space;
	int					hash;
	int					zero;
	int					width;
	int					precision;
	int					precision_len;
	t_len				len;
	t_sign				sign;
	char				spec;
	long long			arg;
	double				darg;
	char				*out;
	size_t				ret;
}						t_flags;

int						ft_printf(const char *fmt, ...);

void					init_flags(t_flags *flags);
void					reset_flags(t_flags *flags);

int						is_valid(char c);
void					get_flag(char **fmt, t_flags *flags, va_list ap);
void					get_width(char **fmt, t_flags *flags);
void					get_precision(char **fmt, t_flags *flags, va_list ap);
void					get_len(char **fmt, t_flags *flags);
void					get_flags(char **fmt, t_flags *flags, va_list ap);

void					get_arg(t_flags *flags, va_list ap);
void					get_char(t_flags *flags, va_list ap);
void					get_int(t_flags *flags, va_list ap);
void					get_u_int(t_flags *flags, va_list ap);
void					get_string(t_flags *flags, va_list ap);
void					get_hex(t_flags *flags, va_list ap);
void					get_oct(t_flags *flags, va_list ap);
void					get_point(t_flags *flags, va_list ap);
void					get_percent(t_flags *flags);
void					get_wchar(t_flags *flags, va_list ap);
void					get_wstring(t_flags *flags, va_list ap);
void					get_float(t_flags *flags, va_list ap);
void					get_n(t_flags *flags, va_list ap);

void					normalize_arg(t_flags *flags);

void					format_arg(t_flags *flags);
void					format_int(t_flags *flags);
void					format_u_int(t_flags *flags);
void					format_string(t_flags *flags);
void					format_hex(t_flags *flags);
void					format_oct(t_flags *flags);
void					format_point(t_flags *flags);
void					format_percent(t_flags *flags);
void					format_char(t_flags *flags);
void					format_empty(t_flags *flags);
void					format_float(t_flags *flags);

char					*wchar_to_str(t_flags *flags);
char					*wstr_to_str(t_flags *flags);

char					*ft_ltoa(intmax_t c);
char					*ft_itoa_base(uintmax_t n, int b, int up);
void					ft_strfill(char *str, char f, int n);
void					ft_putwchar(wchar_t wc);
int						ft_wcharlen(wchar_t wc);
size_t					ft_wstrlen(wchar_t *wstr);
void					ft_putwstr(wchar_t *wstr);
int						ft_numlen_base(intmax_t n, int base);
char					*ft_ftoa(double f);

#endif
