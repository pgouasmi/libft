/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascal <pascal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:01:47 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/23 17:19:57 by pascal           ###   ########.fr       */
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