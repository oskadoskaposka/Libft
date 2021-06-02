/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:47:32 by apaduan-          #+#    #+#             */
/*   Updated: 2021/06/02 17:17:09 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove (void *dest, const void *src, unsigned int len)
{
	char	*cdest;
	char	*csrc;

	cdest = (char *)dest;
	csrc = (char *)src;
	if (cdest < csrc)
	{
		while (len > 0)
		{
			*cdest = *csrc;
			cdest++;
			csrc++;
			len--;
		}
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
