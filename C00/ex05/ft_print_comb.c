/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:03:49 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/08 11:51:56 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(char x, char y, char z)
{
	if (x == '7' && y == '8' && z == '9')
	{
		write(1, &x, 1);
		write(1, &y, 1);
		write(1, &z, 1);
	}
	else
	{
		write(1, &x, 1);
		write(1, &y, 1);
		write(1, &z, 1);
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = '1';
		while (y <= '8')
		{
			z = '2';
			while (z <= '9')
			{
				if (x < y && y < z)
				{
					print_number(x, y, z);
				}
			z++;
			}
		y++;
		}
	x++;
	}
}

//int	main(void)
//{
//	ft_print_comb();
//}
