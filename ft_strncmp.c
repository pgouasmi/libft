/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:46:21 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/15 16:38:29 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	if (str1[0] == 0 && str2[0] != 0)
		return (-1);
	if (str1[0] == 0 && str2[0] == 0)
		return (0);
	if (str2[0] == 0 && str1[0] != 0)
		return (1);
	while (str1[i] != '\0' && i < n)
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
	}
	return (0);
}

/*
#include <stdio.h>
int	main()
{
	char	s1[] = "11125";
	char	s2[] = "11122";
	unsigned int n = 5;
	printf("%d\n", ft_strncmp(s1, s2, n));
}
*/
