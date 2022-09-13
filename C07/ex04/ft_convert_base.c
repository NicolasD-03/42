/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:19:46 by ndick             #+#    #+#             */
/*   Updated: 2022/09/13 20:04:36 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	nb_base(char c, char *base);
int	check_begin(char *str, int *sign);
int	check_base(char *base);
int	ft_atoi_base(char *str, char *base);

char	ft_putnbr_base(int nbr, char *base)
{
	int		checked;
	int		base_len;
	char	*buffer;
	long	nb;

	checked = check_base(base);
	base_len = ft_strlen(base);
	nb = nbr;
	if (checked == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb < base_len)
			ft_putchar(base[nb]);
		if (nb >= base_len)
		{
			ft_putnbr_base(nb / base_len, base);
			ft_putnbr_base(nb % base_len, base);
		}
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*buffer;
	int		nbr_base_a;

	if (check_base(base_from) > 0 && check_base(base_to) > 0)
	{
		nbr_base_a = ft_atoi_base(nbr, base_from);
	}
	return (0);
}
