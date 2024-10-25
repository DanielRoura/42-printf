/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_chr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:48:15 by droura-s          #+#    #+#             */
/*   Updated: 2024/10/25 13:04:30 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

unsigned int	ft_printf_c(int c, int fd)
{
	unsigned int	len;

	len = 1;
	ft_putchar_fd(c, fd);
	return (len);
}

unsigned int	ft_printf_s(char *str, int fd)
{
	unsigned int	len;

	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	ft_putstr_fd(str, fd);
	return (len);
}
