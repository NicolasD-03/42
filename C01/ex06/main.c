/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:10:48 by ndick             #+#    #+#             */
/*   Updated: 2022/09/02 14:14:02 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*text;
	int		len;

	text = "Hello";
	len = ft_strlen(text);
	printf("Excepted length : 5 \nCurrent length : %d", len);
	return (0);
}
