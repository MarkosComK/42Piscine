/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:34:03 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/16 00:46:22 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	if (str[0] == 0)
	{
		return (a);
	}
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			a = 1;
		}
		else
		{
			a = 0;
			return (a);
		}
		i++;
	}
	return (a);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("\"ABZ\": %i\n", ft_str_is_uppercase("ABZ"));
	printf("\"AB@\": %i\n", ft_str_is_uppercase("AB@"));
	printf("\"AB[\": %i\n", ft_str_is_uppercase("AB["));
	printf("\"\": %i\n", ft_str_is_uppercase(""));
	printf("\"DASFJET..\": %i\n", ft_str_is_uppercase("ADASFJET.."));
}
*/
