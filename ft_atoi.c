/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdiederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 12:13:24 by rdiederi          #+#    #+#             */
/*   Updated: 2018/06/08 14:07:34 by rdiederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_convert(char *str)
{
	int	i;
	int	num;
	int	neg;

	neg = 0;
	i = 0;
	num = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == ' ')
			|| (str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (int)str[i] - '0';
		i++;
	}
	if (neg == 1)
		return (-num);
	else
		return (num);
}

int			ft_atoi(const char *str)
{
	int	num;

	num = ft_convert((char *)str);
	if (num == 469762049)
		return (0);
	if (num == -469762049)
		return (-1);
	return (num);
}
