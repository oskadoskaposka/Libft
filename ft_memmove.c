/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:47:32 by apaduan-          #+#    #+#             */
/*   Updated: 2021/06/02 12:26:25 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove (void *dest, const void *src, unsigned int len)
{
	unsigned int	i;
	char			*cdest;
	const char		*csrc;

	i = 0;
	cdest = (char *)dest;
	csrc = (char *)src;
	if (cdest == csrc)
		return (dest);
	while (len > 0)
	{
		*cdest = *csrc;
		cdest++;
		csrc++;
		len--;
	}
	return (dest);
}
