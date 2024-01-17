/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:08:28 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/16 00:53:43 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <unistd.h>

char	*str_cpy(char *dest, char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

int	main(void)
{
	char	str[10] = "MaRkOsCoMk";
	char	cpy[10];

	str_cpy(cpy, str);
	ft_strupcase(cpy);
	write (1, &cpy, 10);
	write (1, "\n", 1);
}
*/
