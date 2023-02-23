/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:43:07 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/21 11:48:58 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	space_count(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nbr;
	int	nbrb;

	nbr = 0;
	nbrb = 0;
	sign = 1;
	i = space_count(str);
	while ((str[i] >= '0' && str[i] <= '9') || str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-' && nbrb == 0)
			sign = -sign;
		if ((str[i] < '0' || str[i] > '9') && nbrb == 1)
			return (nbr * sign);
		if (str[i] >= '0' && str[i] <= '9')
		{
			nbr = nbr * 10;
			nbr = nbr + (str[i] - '0');
			nbrb = 1;
		}
		i++;
	}
	return (nbr * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	char	asd[30] = "  \t\v\n  --+-+--1231a244721";

	printf("%d",ft_atoi(asd));
}*/
