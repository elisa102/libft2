/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trondani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:54:39 by trondani          #+#    #+#             */
/*   Updated: 2022/01/24 11:57:08 by trondani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*string;

	string = ((char *)s);
	while (*string)
	{
		if (*string == ((char)c))
			return (string);
		string++;
	}
	if (*string == ((char)c))
		return (string);
	return (NULL);
}
