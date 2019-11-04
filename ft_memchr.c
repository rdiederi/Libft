/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:41:41 by rdiederi          #+#    #+#             */
/*   Updated: 2018/06/06 12:22:46 by rdiederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *str_;

	str_ = (unsigned char *)str;
	while (n--)
	{
		if (*str_ == (unsigned char)c)
		{
			return (str_);
		}
		str_++;
	}
	return (NULL);
}
