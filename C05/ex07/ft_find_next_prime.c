/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:27:31 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/22 19:47:04 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	if (nb <= 1 || nb == 2)
		return (2);
	while (nb)
	{
		if (nb % 2 >= 1 && nb % 3 >= 1)
			return (nb);
		nb++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%i\n", ft_find_next_prime(1));
	printf("%i\n", ft_find_next_prime(2));
	printf("%i\n", ft_find_next_prime(3));
	printf("%i\n", ft_find_next_prime(6));
	printf("%i\n", ft_find_next_prime(9));
}
*/
