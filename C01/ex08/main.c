/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:22:39 by ndick             #+#    #+#             */
/*   Updated: 2022/09/02 14:55:05 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[5] = {5, 2, 4, 1, 3};
	int	len = 5;

	printf("Base tab : %d, %d , %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	ft_sort_int_tab(tab, len);
	printf("\nSorted tab : %d, %d , %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
