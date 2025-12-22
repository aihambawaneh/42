/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sus <sus@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 00:00:00 by sus               #+#    #+#             */
/*   Updated: 2025/01/01 00:00:00 by sus              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format_two(const char *f, va_list a, int *i)
{
	int	count;

	count = 0;
	if (f[*i + 1] == 'p')
		count += print_ptr(a);
	else if (f[*i + 1] == '%')
	{
		write(1, "%", 1);
		count++;
	}
	else
	{
		write(1, "%", 1);
		count++;
		(*i)++;
	}
	*i += 2;
	return (count);
}

static int	handle_format_one(const char *f, va_list a, int *i)
{
	int	count;

	count = 0;
	if (f[*i + 1] == 'c')
		count += print_char(a);
	else if (f[*i + 1] == 's')
		count += print_str(a);
	else if (f[*i + 1] == 'd' || f[*i + 1] == 'i')
		count += print_int(a);
	else if (f[*i + 1] == 'u')
		count += print_unsigned(a);
	else if (f[*i + 1] == 'x' || f[*i + 1] == 'X')
		count += print_hex(a, f[*i + 1]);
	else
		return (handle_format_two(f, a, i));
	*i += 2;
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			count += handle_format_one(format, args, &i);
		else
		{
			write(1, &format[i], 1);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}
