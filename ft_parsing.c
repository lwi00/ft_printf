/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoidy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:26:53 by ldoidy            #+#    #+#             */
/*   Updated: 2024/11/25 13:26:53 by ldoidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parsing(char c, va_list arg)
{
	char	*str;

	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(arg, unsigned int)));
	else if (c == 's')
	{
		str = va_arg(arg, char *);
		if (!str)
			return (ft_putstr("(null)"));
		return (ft_putstr(str));
	}
	else if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (c == 'p')
		return (ft_putptr(va_arg(arg, void *)));
	else if (c == 'x')
		return (ft_puthex(va_arg(arg, unsigned int), 0));
	else if (c == 'X')
		return (ft_puthex(va_arg(arg, unsigned int), 1));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}
