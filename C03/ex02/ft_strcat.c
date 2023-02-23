/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:55:30 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/14 15:24:57 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	d;

	i = 0;
	while (dest[i] != '\0')
		i++;
	d = 0;
	while (src[d] != '\0')
	{
		dest[i] = src[d];
		i++;
		d++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char s1[] = {"Hello"};
	char s2[] = {"World"};

	ft_strcat(s1,s2);
	printf("%s",s1);
}*/
