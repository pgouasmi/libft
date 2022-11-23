/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pascal <pascal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:49:20 by pascal            #+#    #+#             */
/*   Updated: 2022/11/23 15:13:39 by pascal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr( const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char   *str;

    str = (unsigned char*) s;
    i = 0;
        while (i < n)
        {
            if (str[i] == (unsigned char) c)
                return ((void *)&str[i]);
            i++;
        }
    return (0);
}