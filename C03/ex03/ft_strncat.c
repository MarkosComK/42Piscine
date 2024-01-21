/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 23:24:50 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/21 14:41:31 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
int	ft_strlen(char *string)
{
	int	cont;

	cont = 0;
	while (*string)
	{
		cont++;
		string++;
	}
	return (cont);
}
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != 0)
	{
		j++;
	}
	while (src[i] != 0 && i < nb)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = 0;
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str1[11] = "Hello";
	char	str2[6] = " World";

	ft_strncat(str1, str2, 6);
	write(1, &str1, 11);
}
*/
