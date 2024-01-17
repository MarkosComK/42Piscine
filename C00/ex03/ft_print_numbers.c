/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:43:49 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/11 17:59:04 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	number;

	number = 48;
	while (number <= 57)
	{
		write(1, &number, 1);
		number++;
	}
}
/*
int	main()
{
	ft_print_number();
}
*/
