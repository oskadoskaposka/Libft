/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 00:18:36 by apaduan-          #+#    #+#             */
/*   Updated: 2021/06/02 12:23:41 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, unsigned int len)
{
	char	*cdest;
	char	*csrc;

	cdest = (char *)dest;
	csrc = (char *)src;
	while (len > 0)
	{
		*cdest = *csrc;
		cdest++;
		if (*csrc == (char)c)
			return ((void *)cdest);
		csrc++;
		len--;
	}
	return (NULL);
}
