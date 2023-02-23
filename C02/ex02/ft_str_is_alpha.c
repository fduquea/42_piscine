/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:01:05 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/11 20:24:51 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	int	um = ft_str_is_alpha("TeSTe");
	int	dois = ft_str_is_alpha("Ola?");
	int	tres = ft_str_is_alpha("1234567890");
	int	quatro = ft_str_is_alpha("");

	printf("%i \n", um);
	printf("%i \n", dois);
	printf("%i \n", tres);
	printf("%i \n", quatro);
}*/
