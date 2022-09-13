/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:28:04 by ndick             #+#    #+#             */
/*   Updated: 2022/09/13 19:21:31 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	sqrt;

	i = 1;
	sqrt = 0;
	if (nb > 2147395600)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb / 2)
	{
		sqrt = i * i;
		if (sqrt == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(25));
	return (0);
}
*/
