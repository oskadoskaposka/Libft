/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 01:50:30 by apaduan-          #+#    #+#             */
/*   Updated: 2021/06/02 18:34:02 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	if (!dest || !src)
		return (0);
	if (size > 0)
	{
		while (*src && size > 1)
		{
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';
	}
	return (ft_strlen(src));
}
