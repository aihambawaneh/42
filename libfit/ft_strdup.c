/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abawaneh <abawaneh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:23:40 by abawaneh          #+#    #+#             */
/*   Updated: 2025/12/01 13:26:50 by abawaneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	j;
	char	*m;

	i = ft_strlen(s1);
	m = (char *)malloc(i +1);
	if (!m)
		return (NULL);
	j = 0;
	while (j < i)
	{
		m[j] = s1[j];
		j++;
	}
	m[j] = '\0';
	return (m);
}
