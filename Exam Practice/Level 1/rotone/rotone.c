/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:56:50 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/23 14:04:02 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{	
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			if (argv[1][i] >= 'a' && argv[1][i] < 'z')
				ft_putchar(argv[1][i] + 1);
			else if (argv[1][i] == 'z')
				ft_putchar('a');
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			if (argv[1][i] >= 'A' && argv[1][i] < 'Z')
				ft_putchar(argv[1][i] + 1);
			else if (argv[1][i] == 'Z')
				ft_putchar('A');
		}
		else
			ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
}
