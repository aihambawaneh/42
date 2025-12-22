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

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	print_char(va_list args);
int	print_str(va_list args);
int	print_int(va_list args);
int	print_unsigned(va_list args);
int	print_hex(va_list args, char format);
int	print_ptr(va_list args);

#endif
