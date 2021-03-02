/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 13:58:23 by apaduan-          #+#    #+#             */
/*   Updated: 2021/03/02 01:27:44 by apaduan-         ###   ########.fr       */
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

char *ft_strchr(char *s, int c);
char	*ft_strrchr(char *s, int c);
char	*ft_strnstr(char *big, char *lil, unsigned int len);

void	*ft_memcpy (void *dest, const void *src, unsigned int len);
void	*ft_memccpy(void *dest, const void *src, int c, unsigned int len);
const void	*ft_memchr (const void *b, int c, unsigned int len);

#endif
