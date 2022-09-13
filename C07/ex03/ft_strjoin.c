/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 06:59:50 by ndick             #+#    #+#             */
/*   Updated: 2022/09/12 08:19:30 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

int	malloc_size(int size, char **strs, char *sep)
{
	int	i;
	int	total_size;

	if (total_size == 0)
		return (1);
	i = 0;
	size = 0;
	while (i < size)
	{
		total_size += ft_strlen(strs[i]);
		i++;
	}
	total_size += ft_strlen(sep) * (size - 1);
	return (size + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*buffer;
	int		i;

	i = 0;
	buffer = malloc(malloc_size(size, strs, sep) * sizeof(char));
	if (!buffer)
		return (0);
	buffer[0] = 0;
	if (size == 0)
		return (buffer);
	while (i < size)
	{
		ft_strcat(buffer, strs[i]);
		if (i != size - 1)
			ft_strcat(buffer, sep);
		i++;
	}
	buffer[ft_strlen(buffer)] = 0;
	return (buffer);
}
