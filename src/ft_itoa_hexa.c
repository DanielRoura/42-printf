/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:46:02 by droura-s          #+#    #+#             */
/*   Updated: 2024/10/25 13:04:22 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_itoa_hexa_num_len(unsigned long n)
{
	if (n < 16)
		return (1);
	else
		return (1 + ft_itoa_hexa_num_len(n / 16));
}

static void	ft_itoa_hexa_gen_num(char *num, unsigned long n, int len)
{
	size_t	idx;

	idx = 0;
	while (n > 0)
	{
		num[len - idx - 1] = "0123456789abcdef"[n % 16];
		idx++;
		n /= 16;
	}
	num[idx] = '\0';
}

char	*ft_itoa_hexa(unsigned long n)
{
	char	*num;
	int		len;

	len = ft_itoa_hexa_num_len(n);
	num = ft_calloc(len + 1, sizeof(char));
	if (!num)
		return (0);
	if (n == 0)
	{
		num[0] = '0';
		num[1] = '\0';
	}
	else
		ft_itoa_hexa_gen_num(num, n, len);
	return (num);
}
