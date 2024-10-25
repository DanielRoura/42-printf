/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:00:07 by droura-s          #+#    #+#             */
/*   Updated: 2024/10/25 13:04:38 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

unsigned int	ft_printf_p(void *dir, int fd)
{
	char			*str;
	unsigned int	len;

	if (!dir)
	{
		ft_putstr_fd("(nil)", fd);
		return (5);
	}
	str = ft_itoa_hexa((unsigned long) dir);
	ft_putstr_fd("0x", fd);
	ft_putstr_fd(str, fd);
	len = ft_strlen(str) + 2;
	free(str);
	return (len);
}

unsigned int	ft_printf_x_x(unsigned long dir, int fd, int c)
{
	char			*str;
	unsigned int	len;

	str = ft_itoa_hexa(dir);
	if (c == 'x')
		ft_tolower_str(str);
	else
		ft_toupper_str(str);
	ft_putstr_fd(str, fd);
	len = ft_strlen(str);
	free(str);
	return (len);
}
