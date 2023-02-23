/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 09:58:16 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/08 11:56:28 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int asd)
{
	int	x;
	int	y;

	if (asd > 9)
	{
		x = asd / 10;
		y = asd % 10;
		ft_putchar(x + '0');
		ft_putchar(y + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(asd + 48);
	}
}

void	ft_result(int x, int y)
{
	if (x == 98)
	{
		ft_display(x);
		ft_putchar(' ');
		ft_display(y);
	}
	else
	{
		ft_display(x);
		ft_putchar(' ');
		ft_display(y);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_result(x, y);
		y++;
		}
	x++;
	}
}

//int	main(void)
//{
//	ft_print_comb2();
//}
