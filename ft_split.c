/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:18:46 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/21 13:20:36 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
size_t	line_count(char const *s, char c)
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

char	**ft_split(char const *s, char c)
{
	//char			**tab;
	unsigned int	i;
	unsigned int	j;
	//unsigned int	k;
	size_t 			word_count;


	word_count = line_count(s, c);
	i = 0;
	j = 0;

	//if (!s)
		return(0);
}
/*
	tab = malloc(sizeof(char *) * line_count(s, c) + 1);
	if (!c || line_count(s, c) == 0)
		return ((char **) s);
	if (!tab)
		return (0);
	*tab[line_count(s, c) + 1] = 0;
	while (j < word_count)
	{
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			k++;
		}
		*tab[j] = malloc(sizeof(char) * k + 1);
		j++;
		i++;
		k = 0;
	}

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] != c)
		{
			tab[j][k] = s[i];
			i++;
			k++;
		}
		j++;
		i++;
		k = 0;
	}
	return (tab);
}
*/

/*
int	main()
{
		char const	s[] = "salut les zozos";
		char	c  = ' ';
		int j = 0;
		char **tab = ft_split(s, c);
		while (*tab[j])
		{
			printf("%s\n", tab[j]);
			j++;
		}
}
*/