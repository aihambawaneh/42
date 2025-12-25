/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abawaneh <abawaneh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:27:04 by abawaneh          #+#    #+#             */
/*   Updated: 2025/12/01 13:27:13 by abawaneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	j;
	char	*m;

	i = count * size;
	m = (char *)malloc(i);
	if (!m)
		return (NULL);
	j = 0;
	while (j < i)
	{
		m[j] = 0;
		j++;
	}
	return (m);
}
