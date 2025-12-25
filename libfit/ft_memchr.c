/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abawaneh <abawaneh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:17:56 by abawaneh          #+#    #+#             */
/*   Updated: 2025/12/01 13:18:06 by abawaneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			a;
	unsigned char	*b;

	b = (unsigned char *)s;
	a = 0;
	while (a < n)
	{
		if (b[a] == (unsigned char)c)
			return ((void *)&b[a]);
		a++;
	}
	return (NULL);
}
