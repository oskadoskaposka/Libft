/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 21:01:15 by apaduan-          #+#    #+#             */
/*   Updated: 2021/05/24 19:00:45 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int i;

	i = ft_strlen(s) - 1;
	while (s[i] || s[i] == c)
	{
		if (s[i] == c)
			return (&s[i]);
		i--;
	}
	return (NULL);
}
