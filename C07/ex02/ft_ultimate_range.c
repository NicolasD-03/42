/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 04:08:08 by ndick             #+#    #+#             */
/*   Updated: 2022/09/17 20:30:34 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*buffer;

	if (min < max)
	{
		i = 0;
		buffer = malloc(max - min + 1 * sizeof(int));
		if (!buffer)
		{
			return (-1);
		}
		while (i < max - min)
		{
			buffer[i] = min + i;
			i++;
		}
		*range = buffer;
		return (i);
	}
	else
	{
		*range = 0;
		return (0);
	}
}

/*
int	main(void)
{
	int	*range;
	int	min;
	int	max;
	int	i;

	i = 0;
	min = 5;
	max = 10;
	printf("%d\n", ft_ultimate_range(&range, min, max));
	while (min < max)
	{
		printf("%d ", range[i]);
		min++;
		i++;
	}
	return (0);
}
*/