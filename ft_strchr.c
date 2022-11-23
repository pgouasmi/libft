/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:16:51 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/22 14:52:54 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		else
			i++;
	}
	if (s[i] == c)
		return ((char *) &s[i]);
	return (0);
}

/*
#include <stdio.h>
int	main()
{
	const char s[] = "646156468";
	int	c = 53;
	printf("%s\n", ft_strchr(s, c));
}
*/