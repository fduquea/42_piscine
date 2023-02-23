/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:37:57 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/11 19:38:05 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 10;
	b = 3;
	ptra = &a;
	ptrb = &b;
	printf("The result of the division between %d and %d is:",a,b);
	ft_ultimate_div_mod(ptra,ptrb);
	printf(" %d and the rest is %d.",a,b);
}*/
