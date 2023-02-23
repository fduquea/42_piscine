/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:03:34 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/15 09:47:52 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_str_is_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[j] >= ' ' && str[j] <= '~')
			j++;
		if (j == ft_strlen(str))
			return (1);
		else
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	um = ft_str_is_printable("TESTE");
	int	dois = ft_str_is_printable("\n");
	int	tres = ft_str_is_printable("12345 67890");
	int	quatro = ft_str_is_printable("");

	printf("%i \n", um);
	printf("%i \n", dois);
	printf("%i \n", tres);
	printf("%i \n", quatro);
}*/
