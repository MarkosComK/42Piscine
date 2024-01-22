/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:23:24 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/22 19:44:44 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	int	steps;
	int	temp;
	int	n1;
	int	n2;

	steps = 3;
	n1 = 1;
	n2 = 2;
	while (steps < index)
	{
		temp = n2;
		n2 = n2 + n1;
		n1 = temp;
		steps++;
	}
	return (n2);
}
*/
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	else
		return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_fibonacci(10));
}
*/
