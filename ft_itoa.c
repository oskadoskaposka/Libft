/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 21:40:58 by apaduan-          #+#    #+#             */
/*   Updated: 2021/06/18 00:08:34 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Transforms a int number into a ASCII string
*/

#include "libft.h"

char	*ft_itoa(int n)
{
	unsigned int neg;
	long long int nbr;
	int digits;
	char *dest;
	
	// unsigned int apagar;

	neg = n < 0;
	// printf("o valor de neg é: %u \n", neg);
	nbr = n;
	// printf("o valor de nbr é: %lld \n", nbr);
	if (neg)
		nbr = nbr * -1;
	// printf("o valor att de nbr é: %lld \n", nbr);
	digits = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		digits++;
	}
	// printf("o valor de digits é: %d \n", digits);
	dest = malloc(neg + digits + 1);
	if (!dest)
	{
		return(NULL);
	}
	// apagar = (neg + digits + 1);
	// printf("a quantidade malocada foi de : %u \n", apagar);
	dest[neg + digits] = '\0';
	digits--;
	if (neg)
		dest[0] = '-';
	while (digits > -1)
	{
		dest[neg+digits] = nbr % 10 + '0';
		// printf("digit: %d --- valor: %lli \n", digits, (nbr % 10 + 48));
		nbr = nbr / 10;
		digits--;
	}
	// printf("o valor de dest é: %s \n", dest);
	return (dest);
}

// int main (void)
// {
// 	int positivo = 16031993;
// 	int negativo = INT_MIN;

// 	printf("\npositivo \n----------------------------------------------------------------------------- \n");
// 	ft_itoa(positivo);
// 	printf("----------------------------------------------------------------------------- \n\n");

// 	printf("\nnegativo \n----------------------------------------------------------------------------- \n");
// 	ft_itoa(negativo);
// 	printf("----------------------------------------------------------------------------- \n\n");
// 	return (0);
// }