/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:00:08 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/23 16:30:15 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
char	*ft_strdup(char *src)
{
	int	i;
	char	*array;

	i = 0;
	array = (char *)malloc(sizeof (char) * (ft_strlen(src) + 1));
	if (array == NULL)
		return (0);
	while (src[i] != '\0')
	{
		array[i] = src[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%s",ft_strdup(argv[1]));
}
