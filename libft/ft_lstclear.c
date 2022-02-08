/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trondani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:02:52 by trondani          #+#    #+#             */
/*   Updated: 2022/01/24 15:05:56 by trondani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*last;

	if (lst)
	{
		while (*lst)
		{
			last = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = last;
		}
	}
}
