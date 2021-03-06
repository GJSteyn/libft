/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 19:09:58 by gsteyn            #+#    #+#             */
/*   Updated: 2018/08/21 09:17:45 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		add_precision(t_flags *flags)
{
	char		*tmp;

	tmp = flags->out;
	if ((size_t)flags->precision_len < ft_strlen(flags->out))
	{
		flags->out = ft_strsub(flags->out, 0, flags->precision_len);
		ft_strdel(&tmp);
	}
}

static void		add_padding(t_flags *flags)
{
	int		pad_len;
	char	*pad;
	char	*tmp;
	char	cp;

	pad_len = 0;
	tmp = flags->out;
	cp = ' ';
	if (flags->zero && !flags->minus)
		cp = '0';
	if ((size_t)flags->width > ft_strlen(flags->out))
		pad_len = flags->width - ft_strlen(flags->out);
	if (pad_len && !flags->arg)
		pad_len--;
	if (pad_len)
	{
		pad = ft_strnew(pad_len);
		ft_strfill(pad, cp, pad_len);
		if (!flags->minus)
			flags->out = ft_strjoin(pad, tmp);
		else
			flags->out = ft_strjoin(tmp, pad);
		ft_strdel(&tmp);
		ft_strdel(&pad);
	}
}

void			format_char(t_flags *flags)
{
	if (flags->precision && !flags->precision_len && !flags->arg)
	{
		flags->out[0] = '\0';
		add_padding(flags);
		return ;
	}
	if (flags->precision)
		add_precision(flags);
	if (flags->width)
		add_padding(flags);
}
