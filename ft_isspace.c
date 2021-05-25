/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 15:08:23 by apaduan-          #+#    #+#             */
/*   Updated: 2021/05/25 18:30:39 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace (char c)
{
	if (c == 20 || c == 12 || c == 10 || c == 13 || c == 9 || c == 11)
	{
		return (1);
	}
	return (0);
}
