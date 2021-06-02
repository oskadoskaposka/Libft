/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 21:01:15 by apaduan-          #+#    #+#             */
/*   Updated: 2021/06/02 17:59:48 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	*end_s;

	end_s = ft_strchr(s, '\0');
	while (*end_s != c)
	{
		if (end_s == s)
			return (NULL);
		end_s--;
	}
	return ((char *)end_s);
}
