/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 16:26:45 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/18 18:30:14 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_number_litteral(char *number, char **dict_list);

int	right_recu(int number_size, char *number, char **dict_list, int index)
{
	int		copy_size;
	char	*new_nbr;
	char	*test;

	if (special_number(number) == 1 
		&& ft_base_char_cmp(number, first_number(dict_list[index], test)) == 0)
	{
		free(test);
		ft_putchar(last_number(dict_list[index]), test);
		return (-1);
	}
	free(test);
	else if (number_size > 2)
	{
		copy_size = number_size - ft_strlen(first_number(dict_list[index], test)) + 1;
		free(test);
		new_nbr = malloc(sizeof(char) * (copy_size + 1));
		if (new_nbr == NULL)
			return (-1);
		ft_strncpy(number, new_nbr, copy_size);
		print_number_litteral(new_nbr, dict_list);
		free(new_nbr);
	}
	else
		copy_size = 1;
	return (copy_size);
}

int	left_recu(int copy_size, int i, char *dict_list, char *number)
{
	char	*new_nbr;
	int		nbr_cursor;
	char	*test;

	nbr_cursor = copy_size;
	while (ft_base_char_cmp(number[nbr_cursor], first_number(dict_list[i], test)[nbr_cursor - copy_size], BASE) == 0)
	{
		nbr_cursor++;
		free(test);
	}
	free(test);
	new_nbr = malloc(sizeof(char) * (number_size - nbr_cursor + 1));
	if (new_nbr == NULL)
		return (-1);
	ft_strcpy(new_nbr, &number[nbr_cursor]);
	print_number_litteral(new_nbr, dict_list);
	free(new_nbr);
	return (0);
}

void	print_number_litteral(char *number, char **dict_list)
{
	int		line_ref;
	int		number_size;
	int		copy_size;
	int		nbr_cursor;
	char	*new_nbr;
	char	*test;

	line_ref = 0;
	number_size = ft_strlen(number);
	while (ft_nbrcmp(number, first_number(dict_list[line_ref], test), BASE) < 0)
	{
		free(test)
		line_ref++;
	}
	free(test);
	if (ft_nbrcmp(number, first_number(dict_list[line_ref], test), BASE) == 0)
	{
		ft_putstr(last_number(dict_list[line_ref]));
		return ;
	}
	free(test);
	copy_size = right_recu(number_size, number, dict_list, line_ref);
	if (copy_size == -1)
		return ;
	ft_putstr(last_number(dict_list[line_ref], test));
	free(test);
	left_recu(copy_size, line_ref, dict_list, number);
}
