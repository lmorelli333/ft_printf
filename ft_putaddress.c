/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:41:21 by lmorelli          #+#    #+#             */
/*   Updated: 2023/02/06 17:47:07 by lmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddress_last(unsigned long nb, char *s)
{
	int	i;

	i = 0;
	if (nb >= 16)
		i += ft_putaddress_last(nb / 16, s);
	i += ft_putchar(s[nb % 16]);
	return (i);
}

int	ft_putaddress(unsigned long nb, char *s)
{
	int	i;

	i = 2;
	ft_putchar('0');
	ft_putchar('x');
	i += ft_putaddress_last(nb, s);
	return (i);
}
