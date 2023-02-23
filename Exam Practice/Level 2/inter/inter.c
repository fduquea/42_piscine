/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:37:55 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/23 17:27:00 by fduque-a         ###   ########.fr       */
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
	int	l;
	int	array[100];
	int	k;
	int	t;

	k = 0;
	i = 0;
	l = 0;
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		l = 0;
		t = 0;
		k = 0;
		while (argv[2][l] != '\0')
		{
			if (argv[1][i] == argv[2][l])
			{
				ft_putchar(argv[1][i]);
				while (array[k] != '\0')
				{
					if (array[k] == argv[1][i])
						t = 1;
					k++;
				}
				if (t == 0)
					array[k] = argv[1][i];
			}
			l++;
		}
		i++;
	}
	k = 0;
	while (array[k] != '\0')
	{
		ft_putchar(array[k]);
		k++;
	}	
	ft_putchar ('\n');
	return (0);	
}
