/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:52:40 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/23 19:54:15 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		res;
	int		i;
	int		*buf;
	int		*d;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	res = max - min;
	d = (buf = malloc(res * sizeof(int)));
	if (d == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = buf;
	i = 0;
	while (i < res)
	{
		buf[i] = min + i;
		i++;
	}
	return (res);
}
/*
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}*/
