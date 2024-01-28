/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:19:49 by marsoare          #+#    #+#             */
/*   Updated: 2024/01/28 00:31:55 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	auto char *result = NULL;
	auto int i = 0, j = 0, k = 0, len = 0;
	if (size == 0 || sep == 0)
		return (malloc(1));
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += ft_strlen(sep) * size;
	result = malloc (sizeof(char) * len + 1);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && k < len - ft_strlen(sep))
			result[k++] = sep[j++];
		i++;
	}
	result[k] = 0;
	return (result);
}
/*
int	main(void)
{
	char	**strs;
	char	*sep = "-";
	char	*result;

	strs = (char **) malloc (sizeof(char *) * 3);

	strs[0] = "H";
	strs[1] = "H";
	strs[2] = "H";

	result = ft_strjoin(3, strs, sep);
	printf ("%s\n", result);
	free(strs);
	free(result);
}
*/
