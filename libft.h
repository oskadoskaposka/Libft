/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 13:58:23 by apaduan-          #+#    #+#             */
/*   Updated: 2021/02/18 15:27:30 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);

int	ft_strlcat(char *dest, char *src, unsigned int size);
int	ft_strlcpy(char *dest, const char *src, unsigned int size);
int	ft_strlen(char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
