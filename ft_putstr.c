
#include "ft_printf.h"

int	ft_putstr(const char *s)
{
	int	len;

	len = 0;
	if (!s || s == NULL)
		s = "(null)";
	while (s[len])
		len++;
	write(1, s, len);
	return (len);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
