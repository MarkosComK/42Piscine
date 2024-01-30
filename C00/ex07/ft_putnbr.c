/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:08:30 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/30 22:23:33 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		print_char ('-');
		write(1, "2147483648", 10);
		return ;
	}
	if (nb < 0)
	{
		print_char ('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	else if (nb <= 9)
	{
		print_char (nb + 48);
	}
}
/*
int	main(void)
{
	int	i;

	i = 0;
	while (i < 999)
	{
		ft_putnbr (i);
		print_char ('\n');
		i++;
	}

}
*/
