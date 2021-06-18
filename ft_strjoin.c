/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 13:51:38 by apaduan-          #+#    #+#             */
/*   Updated: 2021/06/18 01:10:15 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Concatenate the strings 's1' and 's2' in a new string with 
	allocated memory and returns a pointer to this new string.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	size_s1;
	unsigned int	size_s2;
	char			*dest;
	unsigned int	i;
	unsigned int	j;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	dest = malloc ((size_s1 + size_s2 + 1));
	if (!dest || !s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
