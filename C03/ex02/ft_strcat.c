/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 22:48:30 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/21 14:36:15 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (*str)
	{
		cont++;
		str++;
	}
	return (cont);
}
*/
char	*ft_strcat(char *dest, char *src)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}
/*
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	char	str1[10] = "+mar";
	char	str2[10] = "kos";
	char	str3[10] = "+mar";
	char	str4[10] = "kos";

	printf("%s", ft_strcat(str1, str2));
	printf("%s", strcat(str3, str4));

}
*/
