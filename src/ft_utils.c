/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:25:52 by droura-s          #+#    #+#             */
/*   Updated: 2024/10/25 13:04:44 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_toupper_str(char *str)
{
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
}

void	ft_tolower_str(char *str)
{
	while (*str)
	{
		*str = ft_tolower(*str);
		str++;
	}
}
