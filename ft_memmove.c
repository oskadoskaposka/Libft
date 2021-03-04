/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:47:32 by apaduan-          #+#    #+#             */
/*   Updated: 2021/03/03 17:16:18 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove (void *dest, const void *src, unsigned int len)
{
	unsigned int i;
	char *cdest;
	const char *csrc;

	i = 0;
	cdest = dest;
	csrc = src;
	if (cdest == csrc)
		return (dest);
	while (i < len)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}
