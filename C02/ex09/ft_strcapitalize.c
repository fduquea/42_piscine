/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduque-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:03:26 by fduque-a          #+#    #+#             */
/*   Updated: 2023/02/12 19:05:03 by fduque-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_chlowcase(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		ch = ch + 32;
	return (ch);
}

char	ft_chupcase(char ch)
{
	if (ch >= 'a' && ch <= 'z')
			ch = ch - 32;
	return (ch);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] < '0' || (str[i - 1] > '9' && str[i - 1] < 'A')
			|| (str[i - 1] > 'Z' && str[i - 1] < 'a') || str[i - 1] > 'z')
			str[i] = ft_chupcase(str[i]);
		else
			str[i] = ft_chlowcase(str[i]);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = " saLUt, comment tu vas ? 42mots quarent-deux; cinquante+et+un";
	int	i;

	i = 0;
	ft_strcapitalize(str);
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
}*/
