/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 01:22:04 by apaduan-          #+#    #+#             */
/*   Updated: 2021/03/02 01:33:38 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const void	*ft_memchr (const void *b, int c, unsigned int len)
{
	unsigned int i;
	const char *cb;

	i = 0;
	cb = b;
	while (i < len)
	{
		if (cb[i] == (const char)c)
			return (&cb[i]);
		i++;
	}
	return (NULL);
}