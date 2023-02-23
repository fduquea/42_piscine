/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:42:05 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/14 10:14:21 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	ii;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		ii = 0;
		while (str[i + ii] == to_find[ii] && str[i + ii] != '\0')
		{
			if (to_find[ii + 1] == '\0')
				return (&str[i]);
			ii++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = {"1234567890"};
	char	s2[] = {"456"};

	printf("%s",ft_strstr(s1,s2));
}*/
