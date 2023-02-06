/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorelli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:11:06 by lmorelli          #+#    #+#             */
/*   Updated: 2023/02/06 17:45:33 by lmorelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_unsigned_putnbr(unsigned int nb);
int		ft_hex_putnbr(unsigned int nb, char *s);
int		ft_putaddress_last(unsigned long nb, char *s);
int		ft_putaddress(unsigned long nb, char *s);
int		ft_check_type(const char *s, int i, va_list args);
int		ft_printf(const char *s, ...);
#endif
