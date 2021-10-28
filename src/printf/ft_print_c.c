/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 22:29:05 by apaduan-          #+#    #+#             */
/*   Updated: 2021/08/19 23:23:00 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//print c and returns the number of printed chars

#include "ft_printf.h"

int	ft_print_c(int c)
{
	ft_putchar_fd (c, 1);
	return (1);
}
