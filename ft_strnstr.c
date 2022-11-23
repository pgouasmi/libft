/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:14:00 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/16 17:24:15 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0' || len == 0)
		return ((char *) haystack);
	if (haystack[0] == 0)
		return(0);
	i = 0;
	j = 0;
	while (haystack[i] != 0 && i < len)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && i + j < len)
			{
				j++;
				if (needle [j] == '\0')
					return ((char *) &haystack[i]);
			}
		}
		else
		{
			i++;
			j = 0;
		}
	}
	return (0);
}

/*
#include <stdio.h>
int	main()
{
	const char	haystack[] = "Foo iBar Ba Baz";
	const char needle[] = "Bar";
	unsigned int	len = 12;
	printf("%s\n", ft_strnstr(haystack, needle, len));
}
*/
