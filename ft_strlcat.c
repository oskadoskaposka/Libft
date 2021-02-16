/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 01:50:27 by apaduan-          #+#    #+#             */
/*   Updated: 2021/02/15 14:50:18 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
		i++;
	while (i < size && src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (i);
}

#include <stdio.h>

int	main (void)
{
	char destino[] = "1234567890123";
	char fonte[] = "banana maior";

	printf("A STRING fonte original é: %s \n", fonte);
	printf("A STRING destino original é: %s \n", destino);
	
	printf("o tamanho retornado é: %d \n", ft_strlcat(destino, fonte, 26));

	printf("A STRING fonte modificada é: %s \n", fonte);
	printf("A STRING destino modificada é: %s \n", destino);
	return (0);
}

