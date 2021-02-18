/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 01:50:27 by apaduan-          #+#    #+#             */
/*   Updated: 2021/02/18 17:47:44 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int n;
	unsigned int i;

	n = ft_strlen(dest);
	i = 0;

	if (n < size)
	{
		while (src[i] != '\0' && ((n + i + 1) < size))
		{
			dest[n + i] = src[i];
			i++;
		}
		dest[n + i] = '\0'
	}
	return (ft_strlen(dest) + ft_strlen(src))
}



// 	while (i < size && src[n] != '\0')
// 	{
// 		dest[i] = src[n];
// 		i++;
// 		n++;
// 	}
// 	while (i < size)
// 	{
// 		dest[i] = '\0';
// 		i++;
// 	}
// 	return (i);
// }

// // #include <stdio.h>

// // int	main (void)
// // {
// // 	char destino[] = "1234567890123";
// // 	char fonte[] = "banana maior";

// 	printf("A STRING fonte original é: %s \n", fonte);
// 	printf("A STRING destino original é: %s \n", destino);
	
// 	printf("o tamanho retornado é: %d \n", ft_strlcat(destino, fonte, 26));

// 	printf("A STRING fonte modificada é: %s \n", fonte);
// 	printf("A STRING destino modificada é: %s \n", destino);
// 	return (0);
// }

