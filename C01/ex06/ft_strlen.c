/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:08:16 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/14 00:42:30 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ft str_#include <unistd.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != 0)
	{
		cont++;
	}
	return (cont);
}
