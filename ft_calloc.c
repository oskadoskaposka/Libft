/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 00:22:31 by apaduan-          #+#    #+#             */
/*   Updated: 2021/05/26 00:34:43 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int number, unsigned int bytes)
{
	int	total;
	int	*dest;

	total = (number * bytes);
	dest = malloc(total);
	if (dest == NULL)
		return (NULL);
	ft_bzero(dest, total);
	return (dest);
}
