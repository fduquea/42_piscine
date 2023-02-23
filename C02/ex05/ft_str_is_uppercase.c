/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:01:00 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/12 16:02:45 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	um = ft_str_is_uppercase("TESTE");
	int	dois = ft_str_is_uppercase("Ola?");
	int	tres = ft_str_is_uppercase("1234567890");
	int	quatro = ft_str_is_uppercase("");

	printf("%i \n", um);
	printf("%i \n", dois);
	printf("%i \n", tres);
	printf("%i \n", quatro);
}*/
