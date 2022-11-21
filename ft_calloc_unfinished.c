/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:30:27 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/10 13:47:12 by pgouasmi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(unsigned int count, unsigned int size)
{
	void	*qqch;
	//unsigned int	i;

	qqch = malloc(sizeof(size) * count);
	//i = 0;
	//&qqch = '\0';
	return (&qqch);
}

int	main()
{
	unsigned int	count = 16;
	unsigned int	size = 4;
	ft_calloc(count, size);
}
