/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:54:37 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/16 22:47:15 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (i == n)
	{
		return (0);
	}
	while ((s1[i] == s2[i]) && s1[i] && s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	int	t1 = strncmp("mar", "mark", 4);
	//int	t2 = strncmp("mk", "mk", 1);
	int	t3 = ft_strncmp("mar", "mark", 4);
	//int	t4 = ft_strncmp("mk", "mk", 1);
	write(1, &t1, 1);
	write(1, "\n", 1);
	write(1, &t3, 1);
	write(1, "\n",1);
	printf("VERIFICANDO: %d", t1);
	printf("VERIFICANDO: %d", t3);
	//write(1, &t2, 1);
	//write(1, &t4, 1);
	//write(1, "\n", 1);
}
*/
