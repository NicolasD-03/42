/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:19:55 by ndick             #+#    #+#             */
/*   Updated: 2022/09/05 19:58:06 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
#include "ex04/ft_strstr.c"

int	main(void)
{
	char	str[40] = "Hello";
	char	str2[40] = "1234";
	
	//char	str_base[] = "Bonjour, Hola, Hallo, Hello, Ciao, Hej";
	//char	str_find[] = "Hello";
	//ex00
	/*
	printf("%d\n", strcmp(str, str2));
	printf("%d\n", ft_strcmp(str, str2));
	*/

	//ex01
	/*
	printf("%d\n", strncmp(str, str2, 50));
	printf("%d\n", ft_strncmp(str, str2, 50));
	*/

	//e02
	/*
	strcat(str2, str);
	ft_strcat(str2, str);
	printf("%s", str2);
	*/

	//ex03
	/*
	strncat(str2, str, 39);
	ft_strncat(str2, str, 39);
	printf("%s", str2);
	*/

	//ex04
	/*
	printf("\n%s\n", strstr(str_base, str_find));
	printf("%s\n", ft_strstr(str_base, str_find));
	*/

	//ex05
	printf("\n%lu\n", strlcat(str2, str, 2));
	strlcat(str2, str, 2);
	printf("%s\n", str2);
}
