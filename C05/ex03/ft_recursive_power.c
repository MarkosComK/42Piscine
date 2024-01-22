/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:16:06 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/22 20:41:07 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = ft_recursive_power(nb, power - 1);
	return (nb * result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_recursive_power(12, 2));
}
*/
