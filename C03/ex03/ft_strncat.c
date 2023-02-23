/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:13:40 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/14 10:14:45 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	l;

	l = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (l < nb && src[l] != '\0')
	{
		dest[i + l] = src[l];
		l++;
	}
	dest[i + l] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char s1[] = {"Hello "};
	char s2[] = {"world!"};
	unsigned int	n;

	n = 2;
	ft_strncat(s1,s2,n);
	printf("%s",s1);
}*/
