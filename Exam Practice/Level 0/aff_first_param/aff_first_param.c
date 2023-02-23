/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:23:52 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/23 10:31:09 by fduque-a         ###   ########.fr       */
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
	if (argc < 2)
	{
		ft_putchar('\n');
		return (1);
	}
	while (argv[1][i] != '\0')
	{
		ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
}
