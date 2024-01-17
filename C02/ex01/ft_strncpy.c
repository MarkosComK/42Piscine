/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 13:15:27 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/16 14:59:39 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != 0 && i != n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	arr1[10] = "Markos";
	char	arr2[10] = "Hellor";

	ft_strncpy(arr2, arr1, 3);
	write(1, &arr2, 6);
	write(1, "\n", 1);
}
*/
