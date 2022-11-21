unsigned int	count_largest_string(const char *s, char c)
{
   	unsigned int	i;
	unsigned int	j;
	unsigned int	result;

	i = 0;
	j = 0;
	result = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			i++;
			j++;
		}
		else
		{
			if (j > result)
				result = j;
		}
		j = 0;
	}
	return (result);
}

unsigned int ft_count_row(const char *s, char c)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			j++;
		}
		else
			i++;
	}
	return (j);
}
#include <stdlib.h>
char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	char			**str;

	i = 0;
	j = 0;
	str = malloc(sizeof(char) * ft_count_row(s, c) * (count_largest_string(s, c) + 1));
}

int	main()
{
	char const s[] = "Salu les potos";
	char	c = ' ';
	ft_split(s, c);
}
