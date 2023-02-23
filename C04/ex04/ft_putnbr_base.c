/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:47:44 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/20 20:07:10 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	l;
	int	k;

	i = 0;
	l = ft_strlen(base);
	if (base[0] == '\0' || l == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		k = i + 1;
		while (base[i] != base[k] && base[k] != '\0')
			k++;
		if (base[i] == base[k])
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		lenght;
	int		i;
	long	n;

	i = 0;
	lenght = ft_strlen(base);
	if (ft_check_base(base) == 0)
		return ;
	if (nbr < 0)
	{
		n = nbr;
		n = n * -1;
		ft_putchar('-');
	}
	else
		n = nbr;
	if (n < lenght)
		ft_putchar(base[n]);
	if (n >= lenght)
	{
		ft_putnbr_base ((n / lenght), base);
		ft_putnbr_base ((n % lenght), base);
	}
}
/*
#include <stdio.h>

int		main(void)
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
	printf("\n");
	ft_putnbr_base(-1100, "0123456789");
	printf("\n");
	ft_putnbr_base(53, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(100, "321321321");

	return (0);
}*/
