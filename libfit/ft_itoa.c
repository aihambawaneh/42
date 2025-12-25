/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abawaneh <abawaneh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 10:50:03 by abawaneh          #+#    #+#             */
/*   Updated: 2025/12/18 10:50:15 by abawaneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*m;
	int		len;
	long	nb;

	nb = n;
	len = ft_intlen(n);
	m = (char *)malloc(sizeof(char) * (len + 1));
	if (!m)
		return (NULL);
	m[len] = '\0';
	if (nb < 0)
	{
		m[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		m[0] = '0';
	while (nb > 0)
	{
		len--;
		m[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (m);
}
