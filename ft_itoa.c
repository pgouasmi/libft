/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:19:03 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/25 14:13:22 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	digit_count(unsigned int n, int *div)
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

static char	*put_number(char *str, unsigned int nbr, int diviseur)
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


/* A faire :
Factoriser au max (if !str)
renommer si besoin
*/

char	*ft_itoa(int n)
{
	char			*str;
	int				div;
	unsigned int	nbr;


	div = 1;
	nbr = n;
	if (n < 0)
	{
		nbr = n * -1;
		str = malloc(sizeof(char) * digit_count(nbr, &div) + 2);
		if (!str)
			return (0);
		str[0] = '-';
		
	}
	else
	{
		str = malloc(sizeof(char) * digit_count(nbr, &div) + 1);
		if (!str)
			return (0);
	}
	return (put_number(str, nbr, div));
}

/*
int	main()
{
	int n = -214748348;
	printf("%s\n", ft_itoa(n));
}
*/
