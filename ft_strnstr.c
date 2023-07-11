/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgokkay <emgokkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:18:02 by emgokkay          #+#    #+#             */
/*   Updated: 2023/07/10 16:28:51 by emgokkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*p;
	char	*p1;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	p = (char *)haystack;
	p1 = (char *)needle;
	if (p1[j] == '\0')
		return (p);
	while (p[i] != '\0')
	{	
		while ((p[i + j] == p1[j]) && p1[j] != '\0' && i < len)
		{
			j++;
		}
		if (p1[j] == '\0')
		{
			return ((char *)p + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
