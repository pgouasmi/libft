/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:43:03 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/16 13:26:23 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = start;
	j = 0;
	str = malloc(sizeof(char) * len + 1);
	if(!str || !s)
		return(0);
	if (start >= ft_strlen(s))
		return (str);
	while(s[i] != '\0' && j < len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

/*
#include <stdio.h>
int	main()
{
	char const	s[] = "Salut les zozos";
	unsigned int	start = 3;
	unsigned int	len = 10;
	printf("%s\n", ft_substr(s, start, len));
}
*/