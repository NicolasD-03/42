/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:17:32 by ndick             #+#    #+#             */
/*   Updated: 2022/09/10 19:24:35 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (nb == 0 || nb == 1)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			j++;
		i++;
	}
	if (j != 2)
		return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_find_next_prime(14));
	return (0);
}
*/
