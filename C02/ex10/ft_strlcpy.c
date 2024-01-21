/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:58:13 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/21 15:35:58 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		++j;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = 0;
	return (j);
}

/*
#include <stdio.h>
int main()
{
	char src[] = "Oh my God,";
	char dest[] = " help me and bless me, please! ";
	printf("%d | %s", ft_strlcpy(dest, src, 10), dest);
}
*/
/*
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void	set_str(char *src, char *dest)
{
	int	pos = 0;

	while (src[pos] != '\0')
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = '\0';
}

bool	same_str(char *expected, char *output, int len)
{
	int pos;
	int res;

	res = 1;
	pos = 0;
	while (pos < len)
	{
		char e = expected[pos];
		char o = output[pos];
		if (e != o)
		{
			printf("in pos %d, expected: %d and got: %d\n",
					pos, e, o);
			res = 0;
		}
		pos++;
	}
	if (!res)
		printf("'%s' : '%s' \n", expected, output);
	return res;
}

void reset_strs(char *a, char *b, char *c, char *d)
{
	set_str("aaaaaaaaaaaaaaaaaaa", a);
	set_str("aaaaaaaaaaaaaaaaaaa", b);
	set_str("bbbbbbbbbbbbbbbbbbb", c);
	set_str("bbbbbbbbbbbbbbbbbbb", d);
}

int	main(void)
{
	char src[20];
	char dest[20];
	char std_src[20];
	char std_dest[20];
	int cpy = 0;
	int std_cpy = 0;

	reset_strs(src, std_src, dest, std_dest);
	set_str("abcd", src);
	set_str("abcd", std_src);
	set_str("efgh", dest);
	set_str("efgh", std_dest);
	cpy = strlcpy(std_dest, std_src, 0);
	std_cpy = ft_strlcpy(dest, src, 0);
	printf("std: %i, yours: %i, same string: %d\n", cpy, std_cpy, same_str(std_dest, dest, 3));

	reset_strs(src, std_src, dest, std_dest);
	set_str("abcd", src);
	set_str("abcd", std_src);
	set_str("efgh", dest);
	set_str("efgh", std_dest);
	cpy = strlcpy(std_dest, std_src, 1);
	std_cpy = ft_strlcpy(dest, src, 1);
	printf("std: %i, yours: %i, same string: %d\n", cpy, std_cpy, same_str(std_dest, dest, 3));

	reset_strs(src, std_src, dest, std_dest);
	set_str("abcsssd", src);
	set_str("abcsssd", std_src);
	set_str("eh\0xxxxx", dest);
	set_str("eh\0xxxxx", std_dest);
	cpy = strlcpy(std_dest, std_src, 6);
	std_cpy = ft_strlcpy(dest, src, 6);
	printf("std: %i, yours: %i, same string: %d\n", cpy, std_cpy, same_str(std_dest, dest, 10));

	reset_strs(src, std_src, dest, std_dest);
	set_str("ab\0asdf", src);
	set_str("ab\0asdf", std_src);
	set_str("efghijklm", dest);
	set_str("efghijklm", std_dest);
	cpy = strlcpy(std_dest, std_src, 8);
	std_cpy = ft_strlcpy(dest, src, 8);
	printf("std: %i, yours: %i, same string: %d\n", cpy, std_cpy, same_str(std_dest, dest, 10));

	reset_strs(src, std_src, dest, std_dest);
	set_str("abasdf", src);
	set_str("abasdf", std_src);
	set_str("efghijklm", dest);
	set_str("efghijklm", std_dest);
	cpy = strlcpy(std_dest, std_src, 7);
	std_cpy = ft_strlcpy(dest, src, 7);
	printf("std: %i, yours: %i, same string: %d\n", cpy, std_cpy, same_str(std_dest, dest, 10));
}
*/
