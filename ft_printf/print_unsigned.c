#include "ft_printf.h"

static int	print_unbr(unsigned long n)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 10)
		count += print_unbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	count++;
	return (count);
}

int	print_unsigned(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	return (print_unbr(n));
}
