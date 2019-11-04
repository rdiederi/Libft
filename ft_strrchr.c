/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 22:28:07 by rdiederi          #+#    #+#             */
/*   Updated: 2018/06/05 22:30:50 by rdiederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if ((char)c == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			j = i;
		i++;
	}
	i = 0;
	while (s[i] != '\0')
	{
		if (s[j] == (unsigned char)c)
			return ((char *)s + j);
		i++;
	}
	return (0);
}
