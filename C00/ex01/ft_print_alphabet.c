/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:44:21 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/08 11:32:31 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	counter;

	counter = 'a';
	while (counter <= 'z')
	{
		write(1, &counter, 1);
		counter++;
	}
}

//int	main(void)
//{
//	ft_print_alphabet();
//}
