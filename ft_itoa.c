/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:19:03 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/23 18:51:07 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digit_count(unsigned int n, int *div)
{
	int	i;

	i = 1;
	while (n / *div > 9)
	{
		*div = *div * 10;
		i++;
	}
	return (i);
}

char	*ft_put_digit(char *str, unsigned int nbr, int i, int diviseur)
{
	while (diviseur >= 1)
	{
		str[i] = nbr / diviseur + 48;
		nbr = nbr - ((str[i] - 48) * diviseur);
		diviseur = diviseur / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char				*str;
	int					i;
	int					div;
	int					*p_div;
	unsigned int		nbr;

	i = 0;
	div = 1;
	p_div = &div;
	nbr = n;
	if (n < 0)
	{
		nbr = nbr * -1;
		str = malloc(sizeof(char) * ft_digit_count(nbr, p_div) + 2);
		if (!str)
			return (0);
		str[i] = '-';
		nbr = n * -1;
		i++;
	}
	else
		str = malloc(sizeof(char) * ft_digit_count(nbr, p_div) + 1);
	if (!str)
		return (0);
	return (ft_put_digit(str, nbr, i, div));
}
/*
#include <stdio.h>
int	main()
{
	int n = -2147483648;
	printf("%s\n", ft_itoa(n));
}
*/
