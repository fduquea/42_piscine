/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:22:21 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/12 15:51:25 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	um = ft_str_is_numeric("TeSTe123");
	int	dois = ft_str_is_numeric("Ola?");
	int	tres = ft_str_is_numeric("1234567890");
	int	quatro = ft_str_is_numeric("");

	printf("%i \n", um);
	printf("%i \n", dois);
	printf("%i \n", tres);
	printf("%i \n", quatro);
}*/
