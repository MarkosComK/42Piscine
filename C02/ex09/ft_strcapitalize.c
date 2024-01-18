/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:07:40 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/18 13:26:02 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	if (str[0] >= 'a' || str[0] <= 'z')
		str[0] -= 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	lowercase (str);
	while (str[i] != 0)
	{
		if (str[i] >= ' ' && str[i] <= '/' || str[i] >= '{' && str[i] <= '~')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
/*
#include <unistd.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	//char	str1[100] = "oLA, {tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	if(argc == 2)
	{
		printf("String antes: %s\n", argv[1]);
		printf("String depois: %s\n", ft_strcapitalize(argv[1]));
	}
	else
	{
		printf("YOU DUMB OR WHAT? TYPE A STRING MTFKER");
	}
	//ft_strcapitalize (str1);
	//write (1, &str1, 100);
}
*/
