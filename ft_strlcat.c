/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 01:50:27 by apaduan-          #+#    #+#             */
/*   Updated: 2021/05/26 00:42:45 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	i;

	n = ft_strlen(dest);
	i = 0;
	if (n < size)
	{
		while (src[i] != '\0' && ((n + i + 1) < size))
		{
			dest[n + i] = src[i];
			i++;
		}
		dest[n + i] = '\0';
		return (ft_strlen(dest) + ft_strlen(src));
	}
	return (ft_strlen(src) + size);
}
