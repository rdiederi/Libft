/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 16:12:27 by rdiederi          #+#    #+#             */
/*   Updated: 2018/06/06 12:27:20 by rdiederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				index;
	int				n1;
	unsigned char	*new;

	n1 = (int)n;
	new = (unsigned char *)s;
	index = 0;
	while (index < n1)
	{
		new[index] = 0;
		index++;
	}
}
