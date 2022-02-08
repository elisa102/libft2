/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trondani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:59:56 by trondani          #+#    #+#             */
/*   Updated: 2022/01/24 15:57:38 by trondani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	cont;

	cont = ft_strlen(s);
	while (cont >= 0)
	{
		if (s[cont] == (char)c)
			return ((char *)&s[cont]);
		cont--;
	}
	return (NULL);
}
