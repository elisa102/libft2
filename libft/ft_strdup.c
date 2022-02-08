/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 12:37:24 by ede-cres          #+#    #+#             */
/*   Updated: 2022/01/27 14:50:04 by ede-cres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;

	ptr = malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, (char *)s1, ft_strlen(s1) + 1);
	return (ptr);
}
