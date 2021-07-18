/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 13:24:21 by amarchan          #+#    #+#             */
/*   Updated: 2021/07/18 18:39:16 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_h.h"

		
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

int	ft_strlen_comp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	return (i - j);
}

int	ft_nbrcmp(char *s1, char *s2)
{
	int	test;

	test = ft_strlen_comp(s1, s2);
	if (test != 0)
		return (test);
	return (ft_strcmp(s1, s2));
}

int	ft_sort(char *str1, char *str2)
{
	char	*dest1;
	char	*dest2;
	int		result;

	if (ft_nbrcmp(str1, str2) == 0)
		return (0);

	dest1 = NULL;
	dest2 = NULL;
	result = ft_nbrcmp(first_word(str1, dest1), first_word(str2, dest2));
	free(dest1);
	free(dest2);
	return (result);
}
