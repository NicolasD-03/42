/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 22:41:11 by ndick             #+#    #+#             */
/*   Updated: 2022/09/18 23:06:51 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*buffer;
	int	i;

	i = -1;
	buffer = (int *)malloc(length * sizeof(int));
	if (!buffer || length < 1)
		return (0);
	while (i++ < length)
		buffer[i] = (*f)(tab[i]);
	return (buffer);
}

// int	ft_abs(int nb)
// {
// 	if (nb < 0)
// 		return (-nb);
// 	return (nb);
// }

// int	main(void)
// {
// 	int	tab[] = {5, 8, -58, 65, 54987, -4548946, -6989746, -14645};
// 	int	*new_tab;
// 	int	len;
// 	int	i;

// 	len = 8;
// 	i = -1;
// 	new_tab = ft_map(tab, len, &ft_abs);

// 	while (i++ < len - 1)
// 		printf("%d\n", new_tab[i]);
// 	return (0);
// }