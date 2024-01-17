/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:08:01 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/15 23:28:55 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[10] = "Markos";
	char	copy[10];

	ft_strcpy(copy, str);
	write(1, &copy, 6);
	write(1, "\n", 1);
}
*/
