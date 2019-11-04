/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 14:05:26 by rdiederi          #+#    #+#             */
/*   Updated: 2018/06/06 12:35:02 by rdiederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*temp;
	size_t	len;

	len = ft_strlen(str);
	if (str[len] != '\0')
	{
		return (NULL);
	}
	if (!(temp = (char *)malloc(sizeof(*str) * (len + 1))))
	{
		return (NULL);
	}
	ft_strcpy(temp, str);
	return (temp);
}
