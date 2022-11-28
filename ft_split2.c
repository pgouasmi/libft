/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:11:19 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/28 09:31:37 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
splits a string by making man mallocing an array of strings 
*/

#include "libft.h"

char	**ft_split(char const *s, char c)
{
    char    **tab;
    size_t  i;

    if (!s)
        return (0);
    tab = (char **)malloc(sizeof(char *) * (word_count + 1);
}