/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_useless.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:47:58 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/15 13:43:07 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned int	ft_count_char(char *s, unsigned int length)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	j = length - 1;
	k = 0;

	while (s[i] <= 32)
		i++;
	while (s[j] <= 32)
	{
		j--;
		k++;
	}
	return (length - i - k);
}

char	*ft_string_duplicate(char *s, char *str, unsigned int usable_length)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] <= 32)
		i++;
	while (j < usable_length)
	{
		str[j] = s[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}
char	*ft_strtrim( char *s)
{
	char				*str;
	unsigned int		i;
	unsigned int		total_length;
	unsigned int		usable_length;

	i = 0;
	total_length = ft_strlen(s);
	str = malloc(sizeof(char) * ft_count_char(s, total_length) + 1);
	usable_length = ft_count_char(s, total_length);
	return(ft_string_duplicate(s, str, usable_length));
}

#include <stdio.h>
int	main()
{
	char s[] = "       	Alors les zozos ca     gazouille ?i     ";
	printf("%s\n", ft_strtrim(s));
}
