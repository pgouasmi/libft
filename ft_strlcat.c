/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:12:17 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/22 13:04:24 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	
	if (size <= (ft_strlen(dst)))
		return (size + ft_strlen(src));
	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (src[j] && i + 1< size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
		dst[i] = '\0';
	return (i - j + (size_t)ft_strlen((const char *) dst));
}
/*
#include <stdio.h>
int	main()
{
	char	dst[16] = "Salut ";
	const char	src[] = "Les amis.";
	unsigned int	size = 16;
	printf("%d\n", ft_strlcat(dst, src, size)); 
}
*/