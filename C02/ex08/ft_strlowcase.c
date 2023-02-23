/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:58:17 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/12 17:01:12 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;
	char	x;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			x = str[i] + 32;
			str[i] = x;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	test[100] = {"HELLO, MY NAME IS FILIPE! HOW ARE YOU?"};

	printf("%s\n",test);
	ft_strlowcase(test);
	printf("%s",test);
}*/
