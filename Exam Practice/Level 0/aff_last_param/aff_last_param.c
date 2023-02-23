/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:33:11 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/23 10:37:29 by fduque-a         ###   ########.fr       */
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

	i = 0;
	l = argc - 1;
	if (argc < 2)
	{
		ft_putchar('\n');
		return (1);
	}
	while  (argv[l][i] != '\0')
	{
		ft_putchar(argv[l][i]);
		i++;
	}
	ft_putchar('\n');
	return (1);
}
