/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:23:55 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/24 20:43:24 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	ft_strlen(char **argv)
{
	int	size;
	int	c;

	c = 0;
	size = 0;
	while (argv[c])
	{
		size++;
		c++;
	}
	return (size);
}

void	ft_sort_params(char **argv)
{
	int		c;
	int		j;
	int		size;
	char	*temp;

	size = ft_strlen(argv);
	c = 1;
	while (c < size - 1)
	{
		j = c + 1;
		while (j < size)
		{
			if (ft_strcmp(argv[c], argv[j]) > 0)
			{
				temp = argv[c];
				argv[c] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		c++;
	}
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	(void) argc;
	a = 1;
	ft_sort_params(argv);
	while (argv[a] != 0)
	{
		b = 0;
		while (argv[a][b] != 0)
		{
			write(1, &argv[a][b], 1);
			b++;
		}
		write (1, "\n", 1);
		a++;
	}
	return (0);
}
