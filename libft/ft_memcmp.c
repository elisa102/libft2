/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trondani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:13:10 by trondani          #+#    #+#             */
/*   Updated: 2022/01/24 12:30:20 by trondani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				a;
	unsigned const char	*us1;
	unsigned const char	*us2;

	us1 = (unsigned const char *)s1;
	us2 = (unsigned const char *)s2;
	a = 0;
	while (a < n && us1[a] == us2[a])
	{
		a++;
	}
	if (a == n)
		return (0);
	else
		return (us1[a] - us2[a]);
}
