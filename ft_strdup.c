/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 01:09:50 by apaduan-          #+#    #+#             */
/*   Updated: 2021/06/02 23:18:49 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		len;
	char	*dest;

	len = ft_strlen(str) + 1;
	dest = malloc(len);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, str, len);
	return (dest);
}
