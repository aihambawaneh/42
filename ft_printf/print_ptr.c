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

static int	print_ptr_hex(unsigned long n)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 16)
		count += print_ptr_hex(n / 16);
	c = "0123456789abcdef"[n % 16];
	write(1, &c, 1);
	count++;
	return (count);
}

int	print_ptr(va_list args)
{
	unsigned long	ptr;
	int				count;

	ptr = (unsigned long)va_arg(args, void *);
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	count = 0;
	write(1, "0x", 2);
	count += 2;
	count += print_ptr_hex(ptr);
	return (count);
}
