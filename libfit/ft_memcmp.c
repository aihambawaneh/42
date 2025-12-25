/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abawaneh <abawaneh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:18:21 by abawaneh          #+#    #+#             */
/*   Updated: 2025/12/01 13:18:33 by abawaneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			c;

	c = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (c < n)
	{
		if (a[c] != b[c])
			return (a[c] - b[c]);
		c++;
	}
	return (0);
}
