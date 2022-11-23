/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:09:28 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/22 15:53:17 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  i;

    if (len == 0)
        return (0);
    i = 0;
    while (i < len)
    {
        ((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
        i++;
    }
    return (dst);
}