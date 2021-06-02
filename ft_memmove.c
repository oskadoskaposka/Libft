/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:47:32 by apaduan-          #+#    #+#             */
/*   Updated: 2021/06/02 17:41:41 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove (void *dest, const void *src, unsigned int len)
{
	char	*cdest;
	char	*csrc;

	cdest = (char *)dest;
	csrc = (char *)src;
	if ((!dest && !src) || !len)
		return (dest);
	if (cdest < csrc)
	{
		ft_memcpy(dest, src, len);
	}
	else
	{
		while (len > 0)
		{
			len--;
			cdest[len] = csrc[len];
		}
	}
	return (dest);
}
