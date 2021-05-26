/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaduan- <apaduan-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 13:58:23 by apaduan-          #+#    #+#             */
/*   Updated: 2021/05/26 20:24:04 by apaduan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);

int			ft_strlcat(char *dest, char *src, unsigned int size);
int			ft_strlcpy(char *dest, const char *src, unsigned int size);
int			ft_strlen(const char *str);
int			ft_strncmp(char *s1, char *s2, unsigned int n);

int			ft_tolower(int c);
int			ft_toupper(int c);

char		*ft_strchr(char *s, int c);
char		*ft_strrchr(char *s, int c);
char		*ft_strnstr(char *big, char *lil, unsigned int len);

void		*ft_memcpy (void *dest, const void *src, unsigned int len);
void		*ft_memccpy(void *dest, const void *src, int c, unsigned int len);
const void	*ft_memchr (const void *b, int c, unsigned int len);
int			ft_memcmp(const void *s1, const void *s2, unsigned int len);

void		*ft_memmove (void *dest, const void *src, unsigned int len);
void		*ft_memset(void *dest,	int c, unsigned int len);

void		ft_bzero(void	*str, unsigned int len);
int			ft_atoi (const char *p);


void		*ft_calloc(unsigned int number, unsigned int bytes);
char		*ft_strdup(const char *str);

void		ft_putchar_fd(char c, unsigned int fd);



// my personal functions
int			ft_isspace (char c);
int			ft_transform_sign (int c);

#endif
