/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:18:46 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/24 12:50:18 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	line_count(char const *s, char c)
{
	size_t	i;	
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			j++;
			i++;
		}
		else
			i++;
	}
	return (j);
}

static size_t	ft_word_length(char const *s, char c, size_t i)
{
	size_t	j;

	j = 0;
	while (s[i] != c)
	{
		i++;
		j++;
	}
	return (j);
}

static void	ft_free(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
}

char	**ft_split(char const *s, char c)
{
	char			**tab;
	size_t			word_count;
	size_t			i;
	size_t			j;
	size_t			word_length;

	word_count = line_count(s, c);
	tab = (char **) malloc (sizeof(char *) * word_count + 1);
	if (!tab)
		return (0);
	i = 0;
	j = 0;
	while (j <= word_count)
	{
		while (s[i] == c)
			i++;
		word_length = ft_word_length(s, c, i);
		tab[j] = ft_substr(s, i, word_length);
		if (!tab[j])
		{
			ft_free(tab, j);
			return (0);
		}
		i = i + word_length;
		while (s[i] == c)
			i++;
		j++;
	}
	tab[j] = 0;
	return (tab);
}
