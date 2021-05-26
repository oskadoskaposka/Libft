/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:12:29 by apaduan-          #+#    #+#             */
/*   Updated: 2021/05/26 00:43:42 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *dest,	int c, unsigned int len)
{
	unsigned char	*cdest;
	unsigned int	i;

	cdest = dest;
	i = 0;
	while (i < len)
	{
		cdest[i] = (unsigned int)c;
		i++;
	}
	return (dest);
}
