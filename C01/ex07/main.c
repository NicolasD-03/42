/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:16:50 by ndick             #+#    #+#             */
/*   Updated: 2022/09/02 14:21:57 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	len = 5;

	printf("Base tab : %d, %d , %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	ft_rev_int_tab(tab, len);
	printf("\nReversed tab : %d, %d , %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
