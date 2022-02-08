/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:13:07 by ede-cres          #+#    #+#             */
/*   Updated: 2022/01/27 15:58:21 by ede-cres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ss;
	unsigned char	*sd;
	size_t			i;

	ss = (unsigned char *)src;
	sd = (unsigned char *)dst;
	i = 0;
	if (!dst && !src)
		return (0);
	if (sd > ss)
	{
		while (len-- > 0)
			sd[len] = ss[len];
	}
	else
	{
		while (i < len)
		{
			sd[i] = ss[i];
			i++;
		}
	}
	return (dst);
}
