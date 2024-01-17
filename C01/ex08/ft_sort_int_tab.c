/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:24:51 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/13 22:02:40 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
void ft_swap(int *a, int *b)
{
	int	temp;
	temp = *a;
	*a = *b;
	*b = *a;
}
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	c;
	int	temp;

	i = 0;
	c = 0;
	while (i < size - 1)
	{
		c = i + 1;
		while (c < size)
		{
			if (tab[i] > tab[c])
			{
				temp = tab[i];
				tab[i] = tab[c];
				tab[c] = temp;
			}
			c++;
		}
		i++;
	}
}
