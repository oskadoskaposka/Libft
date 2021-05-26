/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 01:56:10 by apaduan-          #+#    #+#             */
/*   Updated: 2021/05/26 00:33:35 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *str, unsigned int len)
{
	unsigned int	i;
	unsigned char	*cstr;

	i = 0;
	cstr = str;
	while (i < len)
	{
		cstr[i] = '\0';
		i++;
	}
}
