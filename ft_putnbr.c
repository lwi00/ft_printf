
#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	c;
	int		count;

	count = 0;
	if (n == INT32_MIN)
	{
		count += ft_putstr("-2147483648");
		return (count);
	}
	if (n < 0)
	{
		ft_putchar('-');
		count++;
		n = -n;
	}
	if (n >= 10)
		count += ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	return (count + 1);
}

int	ft_putnbr_unsigned(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	if (n >= 10)
		count += ft_putnbr_unsigned(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	return (count + 1);
}
