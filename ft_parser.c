/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 12:02:12 by amarchan          #+#    #+#             */
/*   Updated: 2021/07/18 18:37:27 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include"ft_h.h"

int	ft_parser(char *str)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == ':')
			c++;
		if (str[i] == '\n')
			c--;
//		printf("%d", c);
		if (c > 1)
			return (0);
		i++;
	}
//	if (c != 0)
//		return (0);
	return (1);
}
/*
int main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_parser(argv[1]));
	return (0);
}*/
