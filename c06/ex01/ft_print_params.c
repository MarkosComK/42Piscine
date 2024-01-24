/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:12:00 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/24 20:44:46 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	word;
	int	c;

	(void) argc;
	word = 1;
	while (argv[word] != 0)
	{
		c = 0;
		while (argv[word][c] != 0)
		{
			write(1, &argv[word][c], 1);
			c++;
		}
		word++;
		write(1, "\n", 1);
	}
}
