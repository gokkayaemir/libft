/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgokkay <emgokkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:14:41 by emgokkay          #+#    #+#             */
/*   Updated: 2023/07/17 14:23:44 by emgokkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*str1;
	size_t			i;

	str = (unsigned char *)s1;
	str1 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str[i] == str1[i])
		{
			i++;
		}
		else
			return (str[i] - str1[i]);
	}
	return (0);
}
