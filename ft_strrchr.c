/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:50:14 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/25 16:41:33 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*str;

	if (!s)
		return (0);
	str = (unsigned char *) s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
