/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:42:53 by ndick             #+#    #+#             */
/*   Updated: 2022/08/31 20:22:59 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int *tab, int n)
{
	int	i;
	int	cond;

	i = 1;
	cond = 1;
	while (i < n)
	{
		if (tab[i - 1] >= tab[i])
		{
			cond = 0;
		}
		i++;
	}
	if (cond)
	{
		i = 0;
		while (i < n)
			ft_putchar(tab[i++] + 48);
		if (tab[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int			i;
	int			tab[10];

	i = 0;
	while (i < n)
	{
		tab[i++] = 0;
	}
	while (tab[0] <= (10 - n) && n >= 1 && n < 10)
	{
		ft_display(tab, n);
		tab[n - 1]++;
		i = n - 1;
		while (i && n > 1)
		{
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
			i--;
		}
	}
}
