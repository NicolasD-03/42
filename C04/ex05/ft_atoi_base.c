/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:32:30 by ndick             #+#    #+#             */
/*   Updated: 2022/09/08 18:49:30 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' '
			|| base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	check_begin(char *str, int *sign)
{
	int	i;
	int	nb_sign;

	i = 0;
	nb_sign = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
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

int	nb_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	nb;
	int	sign;
	int	len;

	len = check_base(base);
	if (len < 2)
		return (0);
	i = check_begin(str, &sign);
	j = nb_base(str[i], base);
	nb = 0;
	while (j >= 0)
	{
		nb = nb * len + j;
		i++;
		j = nb_base(str[i], base);
	}
	return (nb * sign);
}
