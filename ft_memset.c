/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:36:37 by rdiederi          #+#    #+#             */
/*   Updated: 2018/06/06 12:21:47 by rdiederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		index;
	int		len1;
	char	*a;

	index = 0;
	a = (char *)b;
	len1 = (int)len;
	while (index < len1)
	{
		a[index] = c;
		index++;
	}
	return (a);
}
