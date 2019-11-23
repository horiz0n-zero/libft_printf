/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 08:50:48 by afeuerst          #+#    #+#             */
/*   Updated: 2019/11/23 10:05:38 by afeuerst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf_internal.h"

static const char	g_u_base[] = "0123456789";

size_t				precalculate_u(struct s_printformat *const printformat, struct s_percent *const percent)
{
	percent->r1 = ft_printf_unumber_length(percent->data, 10);
	if (percent->width && percent->width > percent->r1)
	{
		percent->r2 = percent->width - percent->r1;
		return (percent->width);
	}
	else
		percent->r2 = 0;
	return (percent->r1);
}

char				*transform_u(char *dst, struct s_percent *const percent)
{
	if (percent->r2 && !(percent->flags & (FLAGS_MINUS | FLAGS_ZERO)))
		while (percent->r2--)
			*dst++ = ' ';
	else if (percent->r2 && !(percent->flags & FLAGS_MINUS) && percent->flags & FLAGS_ZERO)
		while (percent->r2--)
			*dst++ = '0';
	dst += percent->r1;
	ft_printf_unumber_transform(percent->data, 10, g_u_base, dst);
	if (percent->r2 && percent->flags & FLAGS_MINUS)
		while (percent->r2--)
			*dst++ = ' ';
	return (dst);
}
