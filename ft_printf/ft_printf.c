#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
				count += print_char(args);
			else if (format[i + 1] == 's')
				count += print_str(args);
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			    count += print_int(args);
            else if (format[i + 1] == 'u')
                count += print_unsigned(args);
			else
			{
				write(1, "%", 1);
				count++;
				i++;
				continue;
			}
			i += 2;
			continue;
		}
		write(1, &format[i], 1);
		count++;
		i++;
	}
	va_end(args);
	return (count);
}
