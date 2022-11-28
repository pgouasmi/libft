/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:19:03 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/28 18:00:02 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(unsigned int n, long int *div)
{
	int	i;

	i = 1;
	while (n / *div > 9)
	{
		*div *= 10;
		i++;
	}
	return (i);
}

static char	*put_number(char *str, long int nbr, long int diviseur)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (diviseur >= 1)
	{
		str[i] = '0' + nbr / diviseur;
		nbr = nbr - ((str[i] - '0') * diviseur);
		diviseur = diviseur / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	long int		div;
	long int		nbr;
	long int		*p_div;

	div = 1;
	nbr = n;
	p_div = &div;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		str = malloc(sizeof(char) * digit_count(nbr, p_div) + 2);
		if (!str)
			return (0);
		str[0] = '-';
	}
	else
	{
		str = malloc(sizeof(char) * digit_count(nbr, p_div) + 1);
		if (!str)
			return (0);
	}
	return (put_number(str, nbr, div));
}

#include <stdio.h>
int	main()
{
	int n = 42;
	printf("%s\n", ft_itoa(n));
}
