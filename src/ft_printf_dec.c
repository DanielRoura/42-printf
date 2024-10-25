/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_dec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:04:58 by droura-s          #+#    #+#             */
/*   Updated: 2024/10/25 13:04:33 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

unsigned int	ft_printf_d_i(int num, int fd)
{
	char			*str;
	unsigned int	len;

	str = ft_itoa(num);
	ft_putstr_fd(str, fd);
	len = ft_strlen(str);
	free(str);
	return (len);
}

unsigned int	ft_printf_u(unsigned int num, int fd)
{
	char			*str;
	unsigned int	len;

	str = ft_itoa_unsigned((unsigned int)num);
	ft_putstr_fd(str, fd);
	len = ft_strlen(str);
	free(str);
	return (len);
}
