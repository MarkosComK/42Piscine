/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:13:26 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/18 14:48:08 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 3 && argc < 4)
	{
		write (1, "\n", 1);
		return (0);
	}
	else if (argc < 4 || argc > 4)
	{
		write (1, "\n", 1);
		return (0);
	}
	//write (1, argv[2], 1);
	//verify if second argument exists in first one
	int	j;
	int	yes;

	j = 0;
	while (argv[1][j] != 0)
	{
		if (argv[2][0] == argv[1][j])
		{
			yes = 1;
		}
		j++;
	}
	int 	z;

	z = 1;
	if (argv[2][z] != 0)
	{
		z++;
	}
	if (z > 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	// print first argv if second is not inside of it; then finish the program.
	if (!yes)
	{
		while (argv[1] != 0)
		{
			write(1, argv[1], 1);
		}
		return (0);
	}
	//execute search and replace
	int	i;

	i = 0;
	while (argv[1][i] != 0)
	{
		if (argv[1][i] == argv[2][0])
		{
			argv[1][i] = argv[3][0];
		}
		i++;
	}
	
	while (*argv[1])
	{
		write(1, argv[1], 1);
		argv[1]++;
	}
	write(1, "\n", 1);
}
