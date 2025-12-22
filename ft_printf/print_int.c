#include "ft_printf.h"

static int	print_number(long n)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 10)
		count += print_number(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
	count++;
	return (count);
}

int	print_int(va_list args)
{
	long	n;
	int		count;

	n = (long)va_arg(args, int);
	count = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		n = -n;
	}
	count += print_number(n);
	return (count);
}
