/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:53:28 by droura-s          #+#    #+#             */
/*   Updated: 2024/09/24 12:57:25 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;
	size_t	check;

	check = nmemb * size;
	if ((check / nmemb) != size)
		return (0);
	array = malloc(check);
	if (array == NULL)
		return (array);
	ft_bzero(array, check);
	return (array);
}
