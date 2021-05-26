/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 00:18:36 by apaduan-          #+#    #+#             */
/*   Updated: 2021/05/26 00:35:50 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, unsigned int len)
{
	unsigned int	i;
	char			*cdest;
	const char		*csrc;

	i = 0;
	cdest = dest;
	csrc = src;
	while (i < len)
	{
		cdest[i] = csrc[i];
		if (csrc[i] == c)
			return (&cdest[i]);
		i++;
	}
	return (NULL);
}
