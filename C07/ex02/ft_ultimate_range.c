/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:11:08 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/27 17:16:49 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	arr = (int *) malloc(sizeof(int) * size);
	if (arr == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		arr[i] = min;
		min++;
		i++;
	}
	range[0] = arr;
	return (size);
}
/*
int	main(void)
{
	int	min = -2;
	int	max = 5;
	int	*range = NULL;
	int	i;
	

	i = 0;
	ft_ultimate_range(&range, min, max);
	while (i < 7)
	{
		printf("%i\n", range[i]);
		i++;
	}
	free(range);
}
*/
