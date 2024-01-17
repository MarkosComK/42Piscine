/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:21:43 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/16 00:28:59 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (str[0] == 0)
	{
		return (1);
	}
	while (str[i] != 0)
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			a = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (a);
}
/*
#include <unistd.h>
int	main(void)
{
	int	first;
	int	second;
	int	third;

	first = ft_str_is_numeric("MFarwko1239-43fkdafops") + 48;
	second = ft_str_is_numeric("2423540359434509350430") + 48;
	third = ft_str_is_numeric("M12M$3n!%M@$%N432M4124") + 48;
	write(1, "first: ", 6);
	write(1, &first, 1);
	write(1, "\n", 1);
	write(1, "second: ", 8);
	write(1, &second, 1);
	write(1, "\n", 1);
	write(1, "third: ", 7);
	write(1, &third, 1);
}
*/
