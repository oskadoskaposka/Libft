/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 00:35:14 by apaduan-          #+#    #+#             */
/*   Updated: 2021/02/10 01:16:38 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower (char *c)
{
	if (*c > 64 || *c < 133)
		c = c + 32;
	return *c;

}

int	main (void)
{
	printf("%d \n", ft_tolower("c"));
	return (0);
}