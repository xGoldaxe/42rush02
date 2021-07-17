/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 16:26:45 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/17 18:49:47 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_number_litteral(char *number, t_dict *dict_list)
{
	int		i;
	int		number_size;
	int		copy_size;
	int		nbr_cursor;
	char	*new_nbr;

	i = 0;
	number_size = ft_strlen(number);
	while (ft_nbrcmp(number, dict_list[i].value, BASE) < 0)
		i++;
	//exact => base case
	if (ft_nbrcmp(number, dict_list[i].value, BASE) == 0)
	{
		ft_putstr(dict_list[i].name);
		return ;
	}
	//right
	if (number_size > 2)
	{
		copy_size = number_size - ft_strlen(dict_list[i].value) + 1;
		new_nbr = malloc(sizeof(char) * (copy_size + 1));
		if (new_nbr == NULL)
			return ;
		ft_strncpy(number, new_nbr, copy_size);
		print_number_litteral(new_nbr, dict_list);
		free(new_nbr);
	}
	else
		copy_size = 1;
	//unit
	ft_putstr(dict_list[i].value);
	//left
	nbr_cursor = copy_size;
	while (ft_base_char_cmp(number[nbr_cursor], dict_list[i].value[nbr_cursor - copy_size], BASE) == 0)
		nbr_cursor++;
	new_nbr = malloc(sizeof(char) * (number_size - nbr_cursor + 1));
	ft_strcpy(new_nbr, &number[nbr_cursor]);
	print_number_litteral(new_nbr, dict_list);
	free(new_nbr);
}
