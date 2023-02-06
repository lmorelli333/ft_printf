/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:52:45 by lmorelli          #+#    #+#             */
/*   Updated: 2023/02/06 18:50:11 by lmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_type(const char *s, int i, va_list args)
{
	int	x;

	x = 0;
	if (s[i] == 'c')
		x += ft_putchar((char)va_arg(args, int));
	else if (s[i] == 's')
		x += ft_putstr(va_arg(args, char *));
	else if (s[i] == 'd' || s[i] == 'i')
		x += ft_putnbr(va_arg(args, int));
	else if (s[i] == 'p')
		x += ft_putaddress(va_arg(args, unsigned long), "0123456789abcdef");
	else if (s[i] == 'u')
		x += ft_unsigned_putnbr(va_arg(args, unsigned int));
	else if (s[i] == 'x')
		x += ft_hex_putnbr(va_arg(args, unsigned int), "0123456789abcdef");
	else if (s[i] == 'X')
		x += ft_hex_putnbr(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (s[i] == '%')
		x += ft_putchar('%');
	return (x);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		x;
	va_list	args;

	i = 0;
	x = 0;
	va_start(args, s);
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == '%')
		{
			x += ft_check_type(s, i + 1, args);
			i ++;
		}
		else
			x += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (x);
}
