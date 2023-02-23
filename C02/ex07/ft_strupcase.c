/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:18:03 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/12 16:56:15 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;
	char	x;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			x = str[i] - 32;
			str[i] = x;
		}
		i++;
	}
	return (str);
}
/*
#nclude <stdio.h>

int	main(void)
{
	char	test[100] = {"hello, my name is filipe! how are you?"};

	printf("%s\n",test);
	ft_strupcase(test);
	printf("%s",test);
}*/
