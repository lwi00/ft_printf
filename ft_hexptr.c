/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utiles2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoidy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:30:25 by ldoidy            #+#    #+#             */
/*   Updated: 2024/11/25 18:30:25 by ldoidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long num, int uppercase)
{
	char	*base;
	int		count;

	if (uppercase == 1)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	count = 0;
	if (num >= 16)
		count += ft_puthex(num / 16, uppercase);
	write(1, &base[num % 16], 1);
	return (count + 1);
}

int	ft_putptr(void *ptr)
{
	uintptr_t	addr;
	int			count;

	count = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	addr = (uintptr_t)ptr;
	count += ft_putstr("0x");
	count += ft_puthex(addr, 0);
	return (count);
}

int	in_charset(char c)
{
	return (c == 'd' || c == 's' || c == 'p' || c == 'c' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%');
}
