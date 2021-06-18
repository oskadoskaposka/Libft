/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 21:40:58 by apaduan-          #+#    #+#             */
/*   Updated: 2021/06/17 22:15:22 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Transforms a int number into a ASCII string
*/

#include "libft.h"

char	*ft_itoa(int n)
{
	int neg;
	long int nbr;
	unsigned int digits;
	char *dest;
	
	neg = n < 0;
	nbr = n;
	if (neg)
		nbr = -n;
	digits = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		digits++;
	}
	dest = malloc(neg + digits + 1);
	dest[neg + digits] = '\0';
	digits--;
	if (neg)
		dest[0] = '-';
	while (digits > 0)
	{
		dest[neg+digits] = nbr % 10 + 48;
		nbr = nbr / 10;
		digits--;
	}
	return (dest);
}
