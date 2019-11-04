/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:00:54 by rdiederi          #+#    #+#             */
/*   Updated: 2018/06/06 12:26:28 by rdiederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char *str1_;
	unsigned char *str2_;

	str1_ = (unsigned char *)str1;
	str2_ = (unsigned char *)str2;
	if (str1_ == str2_ || n == 0)
		return (0);
	while (n--)
	{
		if (*str1_ != *str2_)
		{
			return (*str1_ - *str2_);
		}
		if (n)
		{
			str1_++;
			str2_++;
		}
	}
	return (0);
}
