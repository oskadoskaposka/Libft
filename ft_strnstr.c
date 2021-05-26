/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 16:52:13 by apaduan-          #+#    #+#             */
/*   Updated: 2021/05/26 00:45:06 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *lil, unsigned int len)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	while (big[i] != '\0' || i < len)
	{
		n = 0;
		while (lil[n] != '\0' && i + n < len && lil[n] == big [i + n])
			n++;
		if (lil[n] == '\0')
			return (&big[i]);
		i++;
	}
	return (NULL);
}
