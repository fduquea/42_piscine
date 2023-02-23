/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:21:27 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/11 17:35:24 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		a = 0;
		while (a < size - i - 1)
		{
			if (tab[a] > tab[a + 1])
			{
				temp = tab[a];
				tab[a] = tab [a + 1];
				tab[a + 1] = temp;
			}
			a++;
		}
		i++;
	}
}

//int	main(void)
//{
//	int	array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//	int	size;
//
//	size = 10;
//	ft_sort_int_tab(array, size);
//	printf("%d %d %d %d %d",array[0],array[1],array[2],array[3],array[4]);
//}
