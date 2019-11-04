/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 17:36:08 by rdiederi          #+#    #+#             */
/*   Updated: 2018/06/05 21:32:01 by rdiederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			index;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)src;
	str2 = (unsigned char *)dst;
	index = 0;
	if (!n || (!str1 && !str2))
	{
		return (NULL);
	}
	while (index < n)
	{
		str2[index] = str1[index];
		if (str2[index] == (unsigned char)c)
		{
			return (str2 + index + 1);
		}
		index++;
	}
	return (NULL);
}
