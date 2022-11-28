/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:11:19 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/28 14:50:20 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
splits a string by making man mallocing an array of strings 
*/


#include "libft.h"
/*
initialisation du compteur a 1
*/
static size_t	word_count(char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 1;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			j++;
		i++;
	}
	return (j);
}

 static size_t word_length(char *s, char c, size_t i)
{
	size_t	j;

	j = i;
	while (s[j] != c)
		j++;
	return (j - i);
}

char	**ft_split(char const *s, char c)
{
    char    **tab;
    size_t  i;
	size_t	nbr_words;
	size_t	j;
	size_t	word_len

	if (!s)
		return (0);
	nbr_words = word_count(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (nbr_words)))
		return (0);
	i = 0;
	j = 0;
	while (j < nbr_words)
	{
		while (s[i] == c)
			i++;
		word_len = word_length(s, c, i);
		tab[j] = ft_substr(s, i, word_len); //malloc  a l'interieur de substr + espace pour le \0
		i = i + word_len;
		while (s[i] == c)
			i++;
		j++;
	}
	tab[j] = 0;
	return (tab);
}