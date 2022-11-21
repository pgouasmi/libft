/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:44:18 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/21 12:32:55 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    bzero(void *s, size_t n)
{
    size_t  i;

    i = 0;
    if (n == 0)
        return;
    while (i < n)
    {
        ((char*) s)[i] = 0;
        i++;
    }
}