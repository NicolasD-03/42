/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 21:57:03 by ndick             #+#    #+#             */
/*   Updated: 2022/09/15 01:47:01 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

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
	buffer = malloc((len + 1) * sizeof(char));
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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*buffer;
	int			i;

	buffer = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!buffer)
		return (0);
	i = 0;
	while (i < ac)
	{
		buffer[i].size = ft_len(av[i]);
		buffer[i].str = av[i];
		buffer[i].copy = ft_strdup(av[i]);
		i++;
	}
	buffer[i].str = 0;
	return (buffer);
}
