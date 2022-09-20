/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 04:08:08 by ndick             #+#    #+#             */
/*   Updated: 2022/09/20 20:27:34 by ndick            ###   ########.fr       */
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
		buffer = (int *)malloc(max - min + 1 * sizeof(int));
		if (!buffer)
		{
			*range = 0;
			return (-1);
		}
		*range = buffer;
		while (i < max - min)
		{
			buffer[i] = min + i;
			i++;
		}
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