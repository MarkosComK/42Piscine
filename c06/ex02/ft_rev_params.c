/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:36:34 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/24 20:44:25 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	length;
	int	c;

	(void) argc;
	length = 0;
	while (argv[length] != 0)
	{
		length++;
	}
	while (length > 1)
	{
		c = 0;
		while (argv[length - 1][c] != 0)
		{
			write(1, &argv[length - 1][c], 1);
			c++;
		}
		length--;
		write(1, "\n", 1);
	}
	return (0);
}
