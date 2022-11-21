/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:22:40 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/16 14:32:10 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_total_length(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	return (i + j);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if(!s1 || !s2)
		return (0);
	str = malloc(sizeof(char) * ft_total_length(s1, s2) + 1);
	if (!str)
		return (0);
	while (s1[i])
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[j] = s2[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	const char	s1[] = "Salut les ";
	const char	s2[] = "ZOBS	t";
	printf("%s\n",  ft_strjoin(s1, s2));
}
*/
