
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);

int	ft_parsing(char c, va_list arg);

int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	in_charset(char c);
int	ft_putnbr(int n);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_puthex(unsigned long num, int uppercase);

int	ft_putptr(void *ptr);

#endif
