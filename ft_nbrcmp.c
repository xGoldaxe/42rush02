/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 18:21:11 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/17 18:45:52 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_nbrcmp(char *nbr1, char *nbr2, char *base)
{
	int	i;

	i = 0;
	while (nbr1[i] != '\0' || nbr2[i] != '\0')
	{
		if (nbr1[i] != nbr2[i])
			return (pos_base(nbr1[i], base) - pos_base(nbr2[i], base));
		i++;
	}
	return (0);
}
