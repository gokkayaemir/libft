/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgokkay <emgokkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:10:22 by emgokkay          #+#    #+#             */
/*   Updated: 2023/07/10 16:04:47 by emgokkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;
	size_t	i;

	dest = (char *)dst;
	source = (char *)src;
	i = 0;
	if (!dest && !source)
		return (NULL);
	if (dest == source)
		return (dest);
	if (dest > source)
	{
		i = len;
		while (i-- > 0)
			dest[i] = source[i];
	}
	else
	{
		i = 0;
		while (i++ < len)
			dest[i - 1] = source[i - 1];
	}
	return (dest);
}
