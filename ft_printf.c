/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoidy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 13:14:08 by ldoidy            #+#    #+#             */
/*   Updated: 2024/11/21 13:14:08 by ldoidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		index;
	int		count;

	index = 0;
	count = 0;
	va_start(args, format);
	while (format[index])
	{
		if (format[index] == '%' && format[index + 1])
		{
			index++;
			if (in_charset(format[index]))
			{
				count += ft_parsing(format[index], args);
			}
		}
		else
			count += ft_putchar(format[index]);
		index++;
	}
	va_end(args);
	return (count);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*b;
// 	int		a;
// 	int		c;

// 	b = "test";
// 	a = 45;
// 	c = 54;
// 	ft_printf("Test d: %d et %d \n", a, c);
// 	printf("Test d: %d et %d \n", a, c);
// 	ft_printf(" NULL %s NULL ", "");
// 	printf(" NULL %s NULL ", "");
// 	ft_printf("Test x: %x \n", 255);
// 	printf("Test x: %x \n", 255);
// 	ft_printf("Test p: %p \n", &a);
// 	printf("Test p: %p \n", &a);
// 	ft_printf("Test c: %c \n", 'A');
// 	printf("Test c: %c \n", 'A');
// 	return (0);
// }
