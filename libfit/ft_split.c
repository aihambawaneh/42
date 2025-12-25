/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abawaneh <abawaneh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 10:51:47 by abawaneh          #+#    #+#             */
/*   Updated: 2025/12/18 10:52:13 by abawaneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static int	ft_word_len(char const *s, char sep)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != sep)
		len++;
	return (len);
}

static void	*ft_free_all(char **arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
	return (NULL);
}

static int	ft_fill_split(char **tab, char const *s, char sep, int words)
{
	int	i;
	int	index;
	int	len;

	i = 0;
	index = 0;
	while (i < words)
	{
		while (s[index] && s[index] == sep)
			index++;
		len = ft_word_len(s + index, sep);
		tab[i] = ft_substr(s, index, len);
		if (!tab[i])
			return (ft_free_all(tab, i - 1), 0);
		index += len;
		i++;
	}
	tab[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		words;

	if (!s)
		return (NULL);
	words = ft_word_count(s, c);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	if (!ft_fill_split(tab, s, c, words))
		return (NULL);
	return (tab);
}
