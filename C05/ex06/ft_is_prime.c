/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:11:52 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/22 18:51:23 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	if (nb == 1)
		return (0);
	if (nb == 2 || nb == 3)
	{
		return (1);
	}
	if (nb % 2 >= 1 && nb % 3 >= 1)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_is_prime(1319));
	printf("%i\n", 1319 % 3);
	printf("%i\n", 1319 % 2);
}
*/
