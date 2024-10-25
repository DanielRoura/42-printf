/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:53:43 by droura-s          #+#    #+#             */
/*   Updated: 2024/09/26 13:18:20 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define FD 1

# include <stdarg.h>
# include "../libft/libft.h"

int				ft_printf(char const *str, ...);
char			*ft_itoa_hexa(unsigned long n);
char			*ft_itoa_unsigned(unsigned int n);
void			ft_toupper_str(char *str);
void			ft_tolower_str(char *str);
unsigned int	ft_printf_c(int c, int fd);
unsigned int	ft_printf_s(char *str, int fd);
unsigned int	ft_printf_p(void *dir, int fd);
unsigned int	ft_printf_d_i(int num, int fd);
unsigned int	ft_printf_u(unsigned int num, int fd);
unsigned int	ft_printf_x_x(unsigned long dir, int fd, int c);

#endif