/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgokkay <emgokkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:39:22 by emgokkay          #+#    #+#             */
/*   Updated: 2023/07/17 13:17:54 by emgokkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*e;
	size_t	i;

	e = (char *)b;
	i = 0;
	while (i < len)
	{
		e[i] = c;
		i++;
	}
	return (b);
}
