/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgokkay <emgokkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:14:41 by emgokkay          #+#    #+#             */
/*   Updated: 2023/07/10 15:58:02 by emgokkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str;
	const unsigned char	*str1;
	size_t				i;

	str = (const unsigned char *)s1;
	str1 = (const unsigned char *)s2;
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
