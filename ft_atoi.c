/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:40:29 by apaduan-          #+#    #+#             */
/*   Updated: 2021/08/11 22:31:12 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Converts the initial portion of the ASCII string point to by 'str' 
	to int representation."
*/

#include "libft.h"

static int	ft_isspace2(char c)
{
	if (c == 32 || c == 12 || c == 10 || c == 13 || c == 9 || c == 11)
	{
		return (1);
	}
	return (0);
}

static int	ft_transform_sign2(int c)
{
	if (c == '-')
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	long int	i;
	int			sign;

	i = 0;
	sign = 1;
	while (ft_isspace2(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		sign *= (ft_transform_sign2(*str));
		str++;
	}
	while (ft_isdigit(*str))
	{
		i = i * 10;
		i = i + (*str - 48);
		str++;
	}
	return (i * sign);
}
