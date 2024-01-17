/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 00:56:35 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/16 01:02:55 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
char    *str_cpy(char *dest, char *str)
{
        int     i;

        i = 0;
        while (str[i] != 0)
        {
                dest[i] = str[i];
                i++;
        }
        dest[i] = 0;
        return (dest);
}

int     main(void)
{
        char    str[10] = "MaRkOsCoMk";
        char    cpy[10];

        str_cpy(cpy, str);
        ft_strupcase(cpy);
        write (1, &cpy, 10);
        write (1, "\n", 1);
}
*/
