/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 13:44:43 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/20 18:41:19 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*del_spaces(int *str)
{
	while (*str >= 0 && *str <= 42)
	{
		str++;
	}
}

int	ft_isnumber(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'Z' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_isnegative(char c)
{
	if (c == '-')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	negative;

	result = 0;
	negative = 0;
	while (*str != 0)
	{
		del_spaces (*str);
		if (ft_isalpha(str[0])) 
			return (0);
		if (*str == '-' && *(str + 1) == '-')
			return (0);
		if (*str == '-')
			negative = 1;
		str += (*str == '-');
		if (ft_isnumber(*str))
			result = result * 10 + *str - 48;
		str++;
	}
	if (negative)
		result *= -1;
	return (result);
}
/*
int	main(int argc, char **argv)
{
	int	converted_value;
	int	atoi_value;
	
	converted_value = ft_atoi("   123");
	atoi_value = atoi(argv[2]);
	printf("Value of argv in int is: %i\n", converted_value);
	printf("Value of argv2 in int is: %i\n", atoi_value);
}
*/

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int main() {
	//printf("%i\n", ft_atoi("\t\n\v\f\r      23"));
	printf("%i\n", ft_atoi("     ------+++++---12341"));
	//printf("%i\n", ft_atoi("     ------+++++---123413"));
	//printf("%i\n", ft_atoi("00000000002147483647"));
	//printf("%i\n", ft_atoi("-2147483648"));
	printf("%i\n", ft_atoi("a"));
}

