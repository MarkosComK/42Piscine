/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:56:15 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/16 00:04:49 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;
	int	a;

	a = 0;
	i = 0;
	if (str[0] == 0)
	{
		return (1);
	}
	while (str[i] != 0)
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
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
int main(void)
{
	printf("This is my string: %d", ft_str_is_alpha("DMASFKfmskd"));
	printf("This is my string: %d", ft_str_is_alpha("DMASFKfmskd413"));
	printf("This is my string: %d", ft_str_is_alpha("DMASFKfmskd4434_____--"));
}
*/
