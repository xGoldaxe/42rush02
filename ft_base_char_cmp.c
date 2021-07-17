/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_char_cmp.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 18:27:34 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/17 18:43:58 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_base_char_cmp(char nbr1, char nbr2, char *base)
{
	int	val_base1;
	int	val_base2;

	val_base1 = pos_base(nbr1, base);
	val_base2 = pos_base(nbr2, base);
	return (val_base1 - val_base2);
}
