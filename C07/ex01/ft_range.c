/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:49:42 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/23 19:52:09 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		r;
	int		i;
	int		*buf;
	int		*d;

	if (min >= max)
		return (0);
	r = max - min;
	d = (buf = malloc(r * sizeof(int)));
	if (d == NULL)
		return (0);
	i = 0;
	while (i < r)
	{
		buf[i] = min + i;
		i++;
	}
	return (buf);
}
/*
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}*/
