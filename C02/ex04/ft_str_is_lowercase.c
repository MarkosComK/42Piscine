/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:00:45 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/16 00:44:08 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	if (str[0] == 0)
	{
		return (a);
	}
	while (str[i] != 0)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			a = 1;
		}
		else
		{
			a = 0;
			return (a);
		}
		i++;
	}
	return (a);
}
/*
#include <unistd.h>
int	main(void)
{
	int	first;
	int	second;
	int	third;

	first = ft_str_is_lowercase("A,mfEwMFd,awqr<VM,XV") + 48;
	second = ft_str_is_lowercase("21348329401") + 48;
	third = ft_str_is_lowercase("markosetop") + 48;

	write(1, "first: ", 6);
	write (1, &first, 1);
	write (1, "\n", 1);
	write (1, "second: ", 7);
        write (1, &second, 1);
        write (1, "\n", 1);
	write (1, "third: ", 8);
        write (1, &third, 1);
        write (1, "\n", 1);

}
*/
