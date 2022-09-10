/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:49:48 by ndick             #+#    #+#             */
/*   Updated: 2022/09/10 18:10:44 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/*
int	main(void)
{
	printf("%d", ft_iterative_power(0, 0));
	return (0);
}
*/
