/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:28:55 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/18 19:33:17 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	main(int argc, char **argv)
{
	char	**dico;
	dico = getter();
	if (dico == NULL)
		return (0);
	print_number_litteral(argv[1], dico);
}
