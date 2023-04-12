/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:59:55 by fduque-a          #+#    #+#             */
/*   Updated: 2023/04/12 17:24:39 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, const char *src, int n)
{
	char *s;
	int	i;
	int res;
	int dest_len;
	int src_len;

	s = (char *) src;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(s);
	res = 0;
	if (n > dest_len)
		res = (src_len) + (dest_len);
	else
		res = src_len + n;
	while (s[i] != '\0' && dest_len + 1 < n)
	{
		dest[dest_len] = s[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (res);
}