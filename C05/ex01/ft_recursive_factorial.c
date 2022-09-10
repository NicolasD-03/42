/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:30:26 by ndick             #+#    #+#             */
/*   Updated: 2022/09/10 17:58:09 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 1)
		return (1);
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}

/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(10));
}
*/
