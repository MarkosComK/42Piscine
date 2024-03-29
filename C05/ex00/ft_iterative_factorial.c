/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:53:13 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/22 20:12:14 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	temp;

	temp = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (temp > 1)
	{
		nb = nb * (temp - 1);
		temp--;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i", ft_iterative_factorial(5));
}
*/
