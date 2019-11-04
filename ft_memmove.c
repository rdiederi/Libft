/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 17:36:08 by rdiederi          #+#    #+#             */
/*   Updated: 2018/06/05 21:27:17 by rdiederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int		index;
	char	*str1;
	char	*str2;

	str1 = (char *)src;
	str2 = (char *)dst;
	index = (int)n;
	if (str1 <= str2)
	{
		while (--index >= 0)
			str2[index] = str1[index];
	}
	else
		ft_memcpy(str2, str1, n);
	return (str2);
}
