/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:20:43 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/21 13:22:48 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char *str;

	str = (char *) s;
	i = 0;
	while(str[i])
	{
		str[i] = f(5, str[i]);
		i++;
	}
	return (str);
}

char	f(unsigned int n, char	c)
{
	c += n;
	return(c);
}
