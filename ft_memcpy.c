/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 00:05:02 by apaduan-          #+#    #+#             */
/*   Updated: 2021/06/02 12:53:09 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy (void *dest, const char *src, unsigned int len)
{
	char			*cdest;
	const char		*csrc;

	if (!dest || !src || !len)
		return (NULL);
	cdest = (char *)dest;
	csrc = (char *)src;
	while (len > 0)
	{
		*cdest = *csrc;
		cdest++;
		csrc++;
		len--;
	}
	return (dest);
}
