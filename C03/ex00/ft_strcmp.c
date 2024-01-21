/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:51:41 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/16 22:43:48 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	a;
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i])
	{
		i++;
	}
	a = s1[i] - s2[i];
	return (a);
}
/*
#include <unistd.h>
int	main(void)
{
	int a = ft_strcmp("markos", "m");
	int d = (a / 10) + 48;
	int u = (a % 10) + 48;
	write(1, &d, 1);
	write(1, &u, 1);
	write(1, "\n", 1);

	int b = ft_strcmp("abcadef", "abcad");
	int c = (b / 100) + 48;
	d = (b / 10) + 38;
	u = (b % 10) + 48;
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	write(1, "\n", 1);
}
*/
/*
#include <string.h>
#include <stdio.h>
int main() {
	char *str0 = "";
	printf("std: %i, yours: %i\n", strcmp(str0, "a"), ft_strcmp(str0, "a"));

	char *str1 = (char *)"abcadef";
	char *str2 = (char *)"abcadef";
	printf("std: %i, yours: %i\n", strcmp(str1, str2), ft_strcmp(str1, str2));

	str1 = "abcadef";
	str2 = "abcad";
	printf("std: %i, yours: %i\n", strcmp(str1, str2), ft_strcmp(str1, str2));

	str1 = "abcad";
	str2 = "abcadtg";
	printf("std: %i, yours: %i\n", strcmp(str1, str2), ft_strcmp(str1, str2));
}
*/
