/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:01:47 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/23 18:51:10 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    unsigned char   *str;
    str = (unsigned char*)dst;
    if (n == 0)
    while (n)
    {
        *(unsigned char*)dst = *(unsigned char*)src;
        n--;
        str++;
        src++;
    }
    return (dst);
}