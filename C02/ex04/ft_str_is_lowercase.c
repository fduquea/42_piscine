/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:52:31 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/12 16:00:00 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	um = ft_str_is_lowercase("teste");
	int	dois = ft_str_is_lowercase("Ola?");
	int	tres = ft_str_is_lowercase("1234567890");
	int	quatro = ft_str_is_lowercase("");

	printf("%i \n", um);
	printf("%i \n", dois);
	printf("%i \n", tres);
	printf("%i \n", quatro);
}*/
