/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:58:20 by ndick             #+#    #+#             */
/*   Updated: 2022/09/06 19:36:23 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_begin(char *str, int *sign)
{
	int	i;
	int	nb_sign;

	i = 0;
	nb_sign = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			nb_sign++;
		i++;
	}
	if (nb_sign % 2 == 1)
		*sign = -1;
	else
		*sign = 1;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	nb = 0;
	i = check_begin(str, &sign);
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += str[i] - 48;
		i++;
	}
	return (nb * sign);
}
