/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:29:12 by amarchan          #+#    #+#             */
/*   Updated: 2021/07/18 18:27:32 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_issep(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
	{
		if (charset[i] == c)
			return (1);
	}
	return (0);
}

int	ft_count(char *str, char *charset)
{
	int	i;
	int	in_sep;
	int	counter;

	counter = 0;
	in_sep = 1;
	i = -1;
	while (str[++i])
	{
		if (in_sep)
		{
			if (!ft_issep(str[i], charset))
			{
				in_sep = 0;
				counter++;
			}
		}
		else
			if (ft_issep(str[i], charset))
				in_sep = 1;
	}
	return (counter);
}

int	*ft_find_words(char *str, char *charset, int n_words)
{
	int	i;
	int	in_sep;
	int	*tab;
	int	j;

	i = -1;
	j = 0;
	tab = (int *)malloc(sizeof(*tab) * (2 * n_words));
	in_sep = 1;
	if (!tab)
		return (0);
	while (str[++i])
	{
		if (in_sep && !ft_issep(str[i], charset))
			tab[--in_sep + j++] = i;
		if (!in_sep && ft_issep(str[i], charset))
		{
			in_sep = 1;
			tab[j++] = i;
		}
	}
	if (j == 2 * n_words - 1)
		tab[j] = i;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		*words;
	char	**final_tab;
	int		size;

	words = ft_find_words(str, charset, ft_count(str, charset));
	i = 0;
	final_tab = (char **)malloc(sizeof(*final_tab)
			* (ft_count(str, charset) + 1));
	if (!final_tab)
		return (0);
	while (i < ft_count(str, charset))
	{
		size = sizeof(**final_tab) * (words[2 * i + 1] - words[2 * i] + 1);
		final_tab[i] = (char *)malloc(size);
		j = words[2 * i] - 1;
		while (++j < words[2 * i + 1])
			final_tab[i][j - words[2 * i]] = str[j];
		final_tab[i][j - words[2 * i]] = '\0';
		i++;
	}
	final_tab[i] = 0;
	return (final_tab);
}
/*
int	main(int ac, char **av)
{
	int		a;
	char	**res;

	if (ac)
		a = 0;
	(void)av;
	res = ft_split(av[1], av[2]);
	a = 0;
	while (res[a])
	{
		printf("%s\n", res[a]);
		a++;
	}
}*/
