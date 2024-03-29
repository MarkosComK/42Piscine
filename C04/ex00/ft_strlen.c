/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 12:12:05 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/20 16:29:33 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	string[6] = "Markos";
	int	i;

	i = ft_strlen(string);
	i += 48;
	write(1, &i, 1);
}
*/
