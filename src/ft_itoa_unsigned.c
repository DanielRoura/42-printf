/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:12:31 by droura-s          #+#    #+#             */
/*   Updated: 2024/10/25 13:04:27 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_itoa_num_len(unsigned int n)
{
	if (n <= 9)
		return (1);
	else
		return (1 + ft_itoa_num_len(n / 10));
}

static void	ft_itoa_gen_num(char *num, unsigned int n, int len)
{
	size_t	idx;

	idx = 0;
	while (n > 0)
	{
		num[len - idx - 1] = (n % 10) + '0';
		idx++;
		n /= 10;
	}
	num[idx] = '\0';
}

char	*ft_itoa_unsigned(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_itoa_num_len(n);
	num = ft_calloc(len + 1, sizeof(char));
	if (!num)
		return (0);
	if (n == 0)
	{
		num[0] = '0';
		num[1] = '\0';
	}
	else
		ft_itoa_gen_num(num, n, len);
	return (num);
}
