/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:08:52 by ndick             #+#    #+#             */
/*   Updated: 2022/09/10 19:16:10 by ndick            ###   ########.fr       */
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

/*
int	main(void)
{
	printf("%d", ft_is_prime(7));
	return (0);
}
*/
