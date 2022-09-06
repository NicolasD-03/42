/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:50:10 by ndick             #+#    #+#             */
/*   Updated: 2022/09/06 21:17:11 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//#include "ex00/ft_strlen.c"
#include "ex01/ft_putstr.c"
//#include "ex02/ft_putnbr.c"
#include "ex03/ft_atoi.c"
#include "ex04/ft_putnbr_base.c"

int	main(void)
{
	char	str[] = "Hello World !";
	//int		nb = 123456789;
	//int		neg_nb = -123456789;
	char	str_to_int[] = " ---+--+1234ab567";
	int		nbr_to_base = -424242;
	char	base_bin[] = "01";
	char	base_octale[] = "01234567" ;
	char	base_hex[] = "0123456789ABCDEF";
	char	base_custom[] = "/*987qwerty!~";

	//printf("%d\n", ft_strlen(str));
	ft_putstr(str);
	printf("\n");
	//ft_putnbr(nb);
	//printf("\n");
	//ft_putnbr(neg_nb);
	//printf("\n");
	printf("Result : %d",  ft_atoi(str_to_int));
	printf("\n");
	printf("Bin base :\n");
	ft_putnbr_base(nbr_to_base, base_bin);
	printf("\nOctale base :\n");
	ft_putnbr_base(nbr_to_base, base_octale);
	printf("\nHexa base :\n");
	ft_putnbr_base(nbr_to_base, base_hex);
	printf("\nCustom base :\n");
	ft_putnbr_base(nbr_to_base, base_custom);
	return (0);
}
