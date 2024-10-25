/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:08:46 by droura-s          #+#    #+#             */
/*   Updated: 2024/10/25 13:04:41 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static void	find_conversion(char c, va_list fts, unsigned int *len)
{
	if (c == 'c')
		*len += ft_printf_c(va_arg(fts, int), FD);
	else if (c == 's')
		*len += ft_printf_s(va_arg(fts, char *), FD);
	else if (c == 'p')
		*len += ft_printf_p(va_arg(fts, void *), FD);
	else if (c == 'd' || c == 'i')
		*len += ft_printf_d_i(va_arg(fts, int), FD);
	else if (c == 'u')
		*len += ft_printf_u(va_arg(fts, unsigned int), FD);
	else if (c == 'x' || c == 'X')
		*len += ft_printf_x_x(va_arg(fts, unsigned int), FD, c);
	else if (c == '%')
		*len += ft_printf_c('%', FD);
}

int	ft_printf(char const *str, ...)
{
	va_list			fts;
	size_t			idx;
	unsigned int	len;

	va_start(fts, str);
	idx = 0;
	len = 0;
	while (str[idx])
	{
		if (str[idx] != '%')
			len += ft_printf_c(str[idx], FD);
		else if (str[idx + 1] != '\0')
		{
			find_conversion(str[idx + 1], fts, &len);
			idx++;
		}
		idx++;
	}
	va_end(fts);
	return (len);
}
