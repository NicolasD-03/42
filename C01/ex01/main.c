/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:48:07 by ndick             #+#    #+#             */
/*   Updated: 2022/09/02 13:54:26 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	n;
	int	*n9;
	int	**n8;
	int	***n7;
	int	****n6;
	int	*****n5;
	int	******n4;
	int	*******n3;
	int	********n2;
	int	*********n1;

	n = 5;
	n9 = &n;
	n8 = &n9;
	n7 = &n8;
	n6 = &n7;
	n5 = &n6;
	n4 = &n5;
	n3 = &n4;
	n2 = &n3;
	n1 = &n2;

	ft_ultimate_ft(n1);
	printf("%d", n);
	return (0);

}
