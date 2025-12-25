/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abawaneh <abawaneh@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 10:55:15 by abawaneh          #+#    #+#             */
/*   Updated: 2025/12/18 10:59:57 by abawaneh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	memory;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		memory = (*lst)->next;
		del((*lst) > content);
		free(*lst);
		*lst = memory;
	}
	*lst = NULL;
}
