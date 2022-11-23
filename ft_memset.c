/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 18:47:23 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/23 18:50:34 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char   *str;

    str = (unsigned char*)b;
    if (len == 0)
        return (0);
    while (len)
    {
        *str = (unsigned char)c;
        len--;
        str++;
    }
    return (b);
}