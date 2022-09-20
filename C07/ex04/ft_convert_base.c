/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 08:19:46 by ndick             #+#    #+#             */
/*   Updated: 2022/09/20 20:38:47 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);
int		nb_base(char c, char *base);
int		check_begin(char *str, int *sign);
int		check_base(char *base);
int		ft_atoi_base(char *str, char *base);
void	ft_putnbr_base(int nbr, char *base, char *buffer);

int	nbr_len(int nbr, int base_len)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		i++;
	}
	while (nbr != 0)
	{
		nbr = nbr / base_len;
		i++;
	}
	return (i);
}

void	put_nbr_base(int nbr, char *base, char *buffer)
{
	int		base_len;
	int		i;
	int		nb;

	base_len = ft_strlen(base);
	nb = nbr;
	i = nbr_len(nbr, base_len);
	buffer[i] = '\0';
	i--;
	if (nb < 0)
	{
		buffer[0] = '-';
		nb = -nb;
	}
	while (nb >= base_len)
	{
		buffer[i] = base[nb % base_len];
		nb = nb / base_len;
		i--;
	}
	buffer[i] = base[nb];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*buffer;
	int		nbr_base;
	int		base_len;

	if (check_base(base_from) > 0 && check_base(base_to) > 0)
	{
		nbr_base = ft_atoi_base(nbr, base_from);
		base_len = ft_strlen(base_to);
		buffer = (char *)malloc(sizeof(char) * nbr_len(nbr_base, base_len) + 1);
		if (!buffer)
			return (0);
		put_nbr_base(nbr_base, base_to, buffer);
		return (buffer);
	}
	return (0);
}

/*
int	main(void)
{
	char	*nbr = "      +---666424242";
	char	*base_from = "0123456789";
	char	*base_to = "0123456789abcdef";
	char	*result;

	result = ft_convert_base(nbr, base_from, base_to);
	printf("%s", result);
	return (0);
}
*/