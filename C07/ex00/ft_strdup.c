/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 00:09:59 by ndick             #+#    #+#             */
/*   Updated: 2022/09/20 20:21:11 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_len(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*buffer;

	i = 0;
	len = ft_len(src);
	buffer = (char *)malloc((len + 1) * sizeof(char));
	if (!buffer)
	{
		return (0);
	}
	while (src[i])
	{
		buffer[i] = src[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}

/*
int	main(void)
{
	char	str[] = "Hello World!";

	printf("%s", ft_strdup(str));
	printf("%s", strdup(str));
	return (0);
}
*/
