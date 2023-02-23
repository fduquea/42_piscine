/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:18:01 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/14 10:14:09 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	strlenght(char *str)
{
	unsigned int	l;

	l = 0;
	while (*str != '\0')
	{
		l++;
		str++;
	}
	return (l);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l;
	unsigned int	i;

	if (size <= strlenght(dest))
		return (size + strlenght(src));
	l = strlenght(dest);
	i = 0;
	while (src[i] != '\0' && l + 1 < size)
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';
	return (strlenght(dest) + strlenght(&src[i]));
}
/*
#include <stdio.h>

int	main()
{
	char src[] = "World!";
	char dest[] = "Hello ";
	printf("%d | %s", ft_strlcat(dest, src, 10), dest);
}*/
