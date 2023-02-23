/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:12:43 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/11 17:38:40 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size)
	{
		aux = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = aux;
		size--;
		i++;
	}
}

//int	main(void)
//{
//	int	tab[] = {1,2,3,4,5,6,7,8,9};
//	int size = sizeof(tab)/sizeof(tab[0]);
//
//	ft_rev_int_tab(tab,size);
//	int	i = 0;
//	while(i < size)
//	{
//		printf("%d",tab[i]);
//		i++;
//	}
//}
