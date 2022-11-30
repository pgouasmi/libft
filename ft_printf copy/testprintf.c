/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgouasmi <pgouasmi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:08:48 by pgouasmi          #+#    #+#             */
/*   Updated: 2022/11/30 17:57:04 by pgouasmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	va_list parameterInfos;
	size_t	writtenChar;
	char	currentChar;
	char 	*str;

	writtenChar = 0;
	va_start(parameterInfos, format);
	while((currentChar = *format))
	{
		format++;
		if (currentChar != '%')
		{
			write(1, &currentChar, 1);
			writtenChar++;
			if (currentChar == 's')
			{
				str = va_arg(parameterInfos, char *);
				currentChar = *str;
				while(currentChar)
				{
					currentChar = *str;
					write(1, &currentChar, 1);
						str++;
				}
			}
		}
	}
	write(1, "\n", 1);
	printf("%zu\n", writtenChar);
}

int main()
{
	char prenom[] = "pascal";
	char nom[] = "gsm";
	const char format[] = "s";
	ft_printf("Je m'appelle %s %s", prenom, nom);
}