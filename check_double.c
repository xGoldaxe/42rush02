/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 18:48:47 by lmery             #+#    #+#             */
/*   Updated: 2021/07/18 19:12:39 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	check_double(char **str)
{
	int		i;
	int		a;
	char	*dest1;
	char	*dest2;

	dest1 = NULL;
	dest2 = NULL;
	a = 0;
	i = 0;
	while (str[a])
		a++;
	while (i < a - 1)
	{
		if (ft_strcmp(first_word(str[i], dest1), first_word(str[i + 1], dest2)) == 0)
			return (0);
		i++;
	}
	return (1);
}
