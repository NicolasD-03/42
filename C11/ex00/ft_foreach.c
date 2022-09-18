/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 22:26:03 by ndick             #+#    #+#             */
/*   Updated: 2022/09/18 22:40:23 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = -1;
	while (i < length)
	{
		(*f)(tab[i++]);
	}
}

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(48 + nb);
	}
}


int	main(void)
{
	int	tab[] = {5, 8, -58, 65, 54987, -4548946, -6989746, -14645};
	int	len;

	len = 8;
	ft_foreach(tab, len, &ft_putnbr);
	return (0);
}
*/