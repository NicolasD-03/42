/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:15:24 by ndick             #+#    #+#             */
/*   Updated: 2022/09/20 01:04:12 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (check_charset(str[i], charset) == 0)
		{
			count++;
			while (check_charset(str[i], charset) == 0)
				i++;
		}
		else
			i++;
	}
	return (count);
}

int	word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && check_charset(str[i], charset) == 0)
		i++;
	return (i);
}

char	*word(char *str, char *charset)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc(sizeof(char) * (word_len(str, charset) + 1));
	while (i < word_len(str, charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	while (str[i])
	{
		if (check_charset(str[i], charset) == 0)
		{
			tab[j] = word(&str[i], charset);
			j++;
			i = i + word_len(&str[i], charset);
		}
		else
			i++;
	}
	tab[j] = 0;
	return (tab);
}

/*
int	main(void)
{
	char	**tab;
	char	*str = "    2656Hello      World 42 ";
	char	*charset = "+";
	int		i;

	tab = ft_split(str, charset);
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i++]);
	}
	printf("Len = %d", i);
	return (0);
}
*/