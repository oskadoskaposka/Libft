/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 14:24:32 by apaduan-          #+#    #+#             */
/*   Updated: 2021/06/06 19:21:29 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	principle;
	unsigned int	culmination;

	principle = 0;
	culmination = 0;
	while ((unsigned char)s1[principle] && ft_strchr(set, (unsigned char)s1[principle]))
		principle++;
	culmination = ft_strlen (&s1[principle]);
	while ((unsigned char)s1[culmination] && ft_strchr(set, (unsigned char)s1[culmination]))
		culmination--;
	return (ft_substr(s1, principle, culmination));
}
