/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascal <pascal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:44:33 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/23 16:49:32 by pascal           ###   ########.fr       */
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