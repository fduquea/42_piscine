/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:08:59 by fduque-a          #+#    #+#             */
/*   Updated: 2023/04/12 15:22:13 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *str1, const void *str2, int n)
{
	int i;
	char *char_str1;
	char *char_str2;

	i = 0;
	char_str1 = (char *) str1;
	char_str2 = (char *) str2;
	while(char_str2[i] != '\0' && i < n)
	{
		char_str1[i] = char_str2[i];
		i++;
	}
	return str1;
}