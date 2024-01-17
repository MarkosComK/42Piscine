/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:46:32 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/11 18:07:37 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char A, char B, char C)
{
	write(1, &A, 1);
	write(1, &B, 1);
	write(1, &C, 1);
	if (A != '7' || B != '8' || C != '9')
	{
		write(1, ", ", 1);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				print(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int	main()
{
	ft_print_comb();
}
*/
