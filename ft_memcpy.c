/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 00:05:02 by apaduan-          #+#    #+#             */
/*   Updated: 2021/03/02 00:14:07 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy (void *dest, const char *src, unsigned int len)
{
	unsigned int 	i;
	char			*cdest;
	const char		*csrc;

	i = 0;
	cdest = dest;
	csrc = src;
	while (i < len)
	{
		*cdest = *csrc;
		cdest++;
		csrc++;
		i++;
	}
	return (dest);
}