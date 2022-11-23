/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:55:23 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/22 16:20:38 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *result;
    size_t  i;

    i = 0;
    result = malloc(sizeof(size) * count);
    if (!result)
        return (0);
    while (((unsigned char *)result)[i])
    {
        ((unsigned char *)result)[i] = 0;
        i++;
    }
    return (result);
}