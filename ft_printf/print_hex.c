/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sus <sus@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 00:00:00 by sus               #+#    #+#             */
/*   Updated: 2025/01/01 00:00:00 by sus              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	print_hex_number(unsigned int n, char *base)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 16)
		count += print_hex_number(n / 16, base);
	c = base[n % 16];
	write(1, &c, 1);
	count++;
	return (count);
}

int	print_hex(va_list args, char format)
{
	unsigned int	n;
	char			*base;

	n = va_arg(args, unsigned int);
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	return (print_hex_number(n, base));
}
