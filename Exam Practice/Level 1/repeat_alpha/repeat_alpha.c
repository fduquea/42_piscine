/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 11:25:14 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/23 11:45:14 by fduque-a         ###   ########.fr       */
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
	int	t;

	i = 0;
	if (argc > 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		t = 0;
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			t = argv[1][i] - 64;
			while (t > 0)
			{
				ft_putchar(argv[1][i]);
				t--;
			}
				
		}
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			t = argv[1][i] - 96;
			while (t > 0)
			{
				ft_putchar(argv[1][i]);
				t--;
			}
		}
		else 
			ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
	
}
