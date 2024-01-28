/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 23:12:46 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/26 23:51:50 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;
	int	temp;
	int	index;

	size = 0;
	temp = min;
	index = 0;
	if (min >= max)
		return (NULL);
	while (temp < max)
	{
		temp++;
		size++;
	}
	arr = (int *) malloc (sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	while (index < size)
	{
		arr[index] = min;
		min++;
		index++;
	}
	return (arr);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*result;
	int	index;

	index = 0;
	result = ft_range(-5, 5);
	while (index < 10)
	{
		printf("%d\n", result[index]);
		index++;
	}
	free (result);
}
*/
