/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:40:29 by apaduan-          #+#    #+#             */
/*   Updated: 2021/05/26 00:07:31 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi (const char *p)
{
	int	i;
	int sign;

	i = 0;
	sign = 1;
	while (ft_isspace(*p))
		p++;
	if (*p == '-' || *p == '+')
	{
		sign *= (ft_transform_sign(*p));
		p++;
	}
	while (ft_isdigit(*p))
	{
		i = i * 10;
		i = i + (*p - 48);
		p++;
	}
	return (i * sign);
}
