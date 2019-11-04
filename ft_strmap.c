/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 12:57:07 by rdiederi          #+#    #+#             */
/*   Updated: 2018/06/05 21:05:42 by rdiederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*tmp;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s && f && tmp)
	{
		while (i < ft_strlen(s))
		{
			tmp[i] = f(s[i]);
			i++;
		}
		tmp[i] = '\0';
	}
	return (tmp);
}
