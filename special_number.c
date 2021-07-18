/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 18:15:00 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/18 18:25:32 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	special_number(char *number)
{
	int	nbr_len;
	int	i;

	i = 0;
	nb_len = ft_nbrlen(number);
	if (nb_len >= 3)
	{
		while (number[i] != '\0')
		{
			if (i == 0 && number[i] != '1')
				return (1);
			else if (number[i] != '0')
				return (1);
			i++;
		}
	}
	if ((nb_len == 2) && (number[1] != '0'))
		return (1);
	return (0);
}
