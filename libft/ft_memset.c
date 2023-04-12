/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:43:58 by fduque-a          #+#    #+#             */
/*   Updated: 2023/04/12 14:19:01 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copy the int c into a character on my void b pointer 

void *ft_memset(void *str, int c, int count)
{
	int i;
	char* p;

	p = str;
	i = 0;
	while (i < count)
	{
		p[i] = (char)c;
		i++;
	}
	return str;
}