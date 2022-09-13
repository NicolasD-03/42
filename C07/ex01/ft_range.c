/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 02:24:07 by ndick             #+#    #+#             */
/*   Updated: 2022/09/12 06:58:39 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*buffer;

	if (min < max)
	{
		i = 0;
		size = max - min;
		buffer = malloc(size + 1 * sizeof(int));
		if (!buffer)
			return (0);
		while (i < size)
		{
			buffer[i] = min + i;
			i++;
		}
		return (buffer);
	}
	return (0);
}

/*
int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*range;

	min = 5;
	max = 10;
	i = 0;
	range = ft_range(min, max);
	while (min < max)
	{
		printf("%d ", range[i]);
		i++;
		min++;
	}
	return (0);
}
*/
