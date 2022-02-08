/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trondani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:11:41 by trondani          #+#    #+#             */
/*   Updated: 2022/01/24 15:17:13 by trondani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_iterative(t_list *el, t_list *lst, t_list *new_lst,
		void *(*f)(void *), void (*del)(void *))
{
	while (lst)
	{
		el = ft_lstnew(f(lst->content));
		if (!el)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&new_lst, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&new_lst, el);
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*el;
	t_list	*new_lst;

	if (!lst)
		return (NULL);
	el = ft_lstnew(f(lst->content));
	if (!el)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	new_lst = el;
	lst = lst->next;
	ft_iterative(el, lst, new_lst, f, del);
	return (new_lst);
}
