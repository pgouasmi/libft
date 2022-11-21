/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:44:33 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/21 13:11:16 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    *memset(void *b, int c, size_t len)
{
    size_t i;

    if (len == 0)
        return (0);
    i = 0;
    while (i < len)
    {
        ((unsigned char *)b)[i] = c;
        i++;
    }
    return (b);
}