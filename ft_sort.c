/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tri.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 16:25:52 by amarchan          #+#    #+#             */
/*   Updated: 2021/07/18 18:56:58 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

char **ft_sort(char **str, int (*test)(char *str1, char *str2))
{
	int		i;
	char	*tmp;
	i = 0;

	while (str[i + 1] != NULL)
	{
		if (test(str[i], str[i + 1]) < 0)
		{
			tmp = str[i];
			str[i] = str[i + 1];
			str[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
	return (str);
}
