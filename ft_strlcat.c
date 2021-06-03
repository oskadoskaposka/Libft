/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 01:50:27 by apaduan-          #+#    #+#             */
/*   Updated: 2021/06/03 00:43:48 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_dest;

	size_dest = ft_strlen(dest);
	if (size_dest >= size)
		return (size + ft_strlen(src));
	while (*src && ((size_dest + 1) < size))
	{
		*(dest + size_dest) = *src;
		size_dest++;
		src++;
	}
	*(dest + size_dest) = '\0';
	return (ft_strlen(src) + size_dest);
}
