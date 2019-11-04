/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 17:36:08 by rdiederi          #+#    #+#             */
/*   Updated: 2018/06/06 12:29:09 by rdiederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	index;
	char	*str1;
	char	*str2;

	str1 = (char *)src;
	str2 = (char *)dst;
	index = 0;
	if (!n || (!dst && !src))
	{
		return (dst);
	}
	while (index < n)
	{
		str2[index] = str1[index];
		index++;
	}
	return (str2);
}
