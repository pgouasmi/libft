/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:50:14 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/16 12:47:17 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	unsigned char *str;

	str = (unsigned char *) s;
	i = ft_strlen((char *) str) + 1;
	while (i > 0)
		{
			i--;
			if (str[i] == c)
				return ((char *) &str[i]);
		}
	return (0);
}

/*
#include <stdio.h>
int	main()
{
	const char	s[] = "456116618";
	char	c = 54;
	printf("%s\n", ft_strrchr(s, c));
}
*/
