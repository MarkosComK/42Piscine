/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:56:44 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/16 16:09:11 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == 0)
	{
		return (1);
	}
	while (str[i] != 0)
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <unistd.h>
int     main(void)
{
        int     first;
        int     second;
        int     third;

        first = ft_str_is_printable("") + 48;
        second = ft_str_is_printable("\b") + 48;
        third = ft_str_is_printable("markos e top") + 48;

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
/*
#include <ctype.h>
#include <stdio.h>
int main(void)
{
	int c;
	int i = 0;
	char str[150];

	for (c = 1; c <= 127; ++c)
		if (isprint(c) != 0)
			str[i++] = c;

	printf("\"\": %i\n", ft_str_is_printable(""));
	printf("\"%s\": %i\n", str, ft_str_is_printable(str));
	printf("with a tab: %i\n", ft_str_is_printable("fs\ts"));

	str[0] = 31;
	str[10] = '\0';
	printf("With the character just before: %i\n", ft_str_is_printable(str));

	str[0] = 127;
	str[10] = '\0';
	printf("With the character just after: %i\n", ft_str_is_printable(str));
}
*/
