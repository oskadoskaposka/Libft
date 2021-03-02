/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 16:52:13 by apaduan-          #+#    #+#             */
/*   Updated: 2021/03/01 20:51:02 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *lil, unsigned int len)
{
	unsigned int i;
	unsigned int n;

	i = 0;
	while (big[i] != '\0' || i < len)
	{
		n = 0;
		while (lil[n] != '\0' && i + n < len && lil[n] == big [i + n])
			n++;
		if (lil[n] == '\0')
			return (&big[i]);
		i++;	
	}
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
// 		char *grande = "Foo Bar Baz";
// 		char *pqna = "Bar";
// 		char	*ptr;

// 		ptr = ft_strnstr(grande, pqna, 5);

// 		printf("%s \n\n", ptr);
// }