/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:03:31 by fduque-a          #+#    #+#             */
/*   Updated: 2023/04/12 17:40:26 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H /*#ifndef checks whether the given token has been #defined earlier in the file or in an included file; if */
#define LIBFT_H /*not, it includes the code between it and the closing #else or, if no #else is present, #endif statement. */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//is
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int ft_isprint(int c);

//str
int	ft_strlen (char *c);
int ft_strlcpy (char *dest, const char *src, int n);
int	ft_strlcat	(char *dest, const char *src, int n);

//memory
void	*ft_memset(void *dest, int c, int count);
void	ft_bzero(void *s, int n);
void	*ft_memcpy(void *dest, const void *src, int n);
void	*ft_memmove(void *str1, const void *str2, int n);

//convert to
int	ft_toupper(int c);
int ft_tolower(int c);

#endif // LIBFT_H;