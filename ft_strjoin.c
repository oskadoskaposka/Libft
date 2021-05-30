/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 13:51:38 by apaduan-          #+#    #+#             */
/*   Updated: 2021/05/30 14:23:54 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	size_s1;
	unsigned int	size_s2;
	char			*dest;
	unsigned int	i;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	dest = malloc (size_s1 + size_s2 + 1);
	i = 0;
	while (*s2 != '\0')
	{
		while (*s1 != '\0')
		{
			*dest = *s1;
			s1++;
		}
		*dest = *s2;
		s2++;
	}
	*dest = '\0';
	return (dest);
}
