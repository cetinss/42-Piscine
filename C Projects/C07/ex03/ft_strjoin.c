/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sencetin <sencetin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:24:43 by sencetin          #+#    #+#             */
/*   Updated: 2024/09/02 12:01:29 by sencetin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	total_length(int size, char **strs, char *sep)
{
	int	total;
	int	i;
	int	sep_len;

	total = 0;
	i = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
		total += ft_strlen(strs[i++]) + sep_len;
	return (total - sep_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		c;

	if (size == 0)
		return ((char *)malloc(1 * sizeof(char)));
	result = malloc(((total_length(size, strs, sep)) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			result[c++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			result[c++] = sep[j++];
		i++;
	}
	result[c] = '\0';
	return (result);
}
