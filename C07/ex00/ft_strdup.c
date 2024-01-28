/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:31:15 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/26 23:08:53 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char	*dup;
	int		i;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != 0)
		i++;
	dup = (char *) malloc (sizeof(char) * i + 1);
	i = 0;
	if (dup == NULL)
		return (NULL);
	while (str[i] != 0)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	char	*duplicated;
	duplicated = ft_strdup(av[1]);
	printf ("%s", duplicated);
}
*/
