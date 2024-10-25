/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:03:21 by droura-s          #+#    #+#             */
/*   Updated: 2024/10/25 13:05:31 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "include/ft_printf.h"

void	main_part(void)
{
	char			*string;
	unsigned int	og_len;
	unsigned int	ft_len;

	string = "Soy un string";

	   printf("Parte obligatoria\n\n");
	   printf("og: Hola mundo\n");
	ft_printf("ft: Hola mundo\n");

	   printf("\nc\n");
	   printf("og: H%cla mund%c\n", '0', '0' - 100);
	ft_printf("ft: H%cla mund%c\n", '0', '0' - 100);

	   printf("\ns\n");
	   printf("og: %s %s\n", string, (char *)0);
	ft_printf("ft: %s %s\n", string, (char *)0);

	   printf("\np\n");
	   printf("og: %p %p\n", string, NULL);
	ft_printf("ft: %p %p\n", string, NULL);

	   printf("\nd\n");
	   printf("og: %d %d %d\n", 123, -918274, -2147483647);
	ft_printf("ft: %d %d %d\n", 123, -918274, -2147483647);

	   printf("\ni\n");
	   printf("og: %i\n", 456);
	ft_printf("ft: %i\n", 456);

	   printf("\nu\n");
	   printf("og: %u\n", -789);
	ft_printf("ft: %u\n", -789);

	   printf("\nx\n");
	   printf("og: %x %x\n", 10597059, -1);
	ft_printf("ft: %x %x\n", 10597059, -1);

	   printf("\nX\n");
	   printf("og: %X %X\n", 10597059, -1);
	ft_printf("ft: %X %X\n", 10597059, -1);

	   printf("\n%%\n");
	   printf("og: %%\n");
	ft_printf("ft: %%\n");
	
	   printf("\nGlobal\n");
	og_len = printf("og: %c %s %p %d %i %u %x %X %%\n", '0', string, string, -918274, 456, -789, 10597059, 10597059);
	ft_len = ft_printf("ft: %c %s %p %d %i %u %x %X %%\n", '0', string, string, -918274, 456, -789, 10597059, 10597059);
	
	   printf("\nReturn len\n");
	   printf("og: %d\n", og_len);
	ft_printf("ft: %d\n", ft_len);
}

int		main(void)
{
	main_part();
	printf("\n\n");
	return (0);
}