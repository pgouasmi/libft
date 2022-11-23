/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:35:14 by pascal            #+#    #+#             */
/*   Updated: 2022/11/23 18:51:06 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     biggest_divider(nbr)
{
    int div;

    div = 1;
    while (nbr / div > 9)
    {
        div = div * 10;
    }
    return (div);
}

void    ft_putnbr_fd(int n, int fd)
{
    char                c;
    long                div;
    long long int   nbr;
    
    if (n == -2147483648)
    {
        write(fd, "-2147483648", 12);
        return;
    }
    if (n < 0)
    {
        write(fd, "-", 1);
        nbr = n * -1;
    }
    else
        nbr = n;
    div= biggest_divider(n);
    while (div >= 1)
    {
        c = (nbr / div) + 48;
        write(fd, &c, 1);
        nbr = nbr - (div * (c - 48));
        div = div / 10;
    }
}