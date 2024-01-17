/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:56:08 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/13 17:28:09 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	element;

	i = 0;
	while (i < size / 2)
	{
		element = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = element;
		i++;
	}
}
/*
void	ft_rev_int_tab(int *tab, int size)
{
	int	last;
	int	i;
	int	reduce_size;
	int	rev[5];

	i = 0;
	reduce_size = size - 1;
	while (i < size)
	{
		last = tab[reduce_size];
		rev[i] = last;
		reduce_size--;
		i++;
	}
	return(rev[5])
}
*/

/*
int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(a, 5);
}
Add: int rev[5] = {}; to line 22
Add: printf("%d", rev[i]) to line 29
*/
