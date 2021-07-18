/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_first_word.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 10:33:03 by amarchan          #+#    #+#             */
/*   Updated: 2021/07/18 17:34:05 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include "ft_h.h"

char *first_word(char *str, char *dest)
{
	int j;
	int i;
	int	k;

	dest = (char *)malloc(sizeof(char) * (ft_n_word(str, ": ") + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while  (str[i] && str[i] >= 32 && str[i] <= 126  && str[i + 1] != ':')
		i++;
	k = 0;
	j = 0;
	while (j <= i && str[j] >= 32 && str[j] <= 126)
	{
		dest[k] = str[j];
		j++;
		k++;
	}
	dest[k] = '\0';
	return (dest); 
}

char	*last_word(char *str, char *dest)
{
	int j;
	int i;
	int	k;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == ':' && str[i + 1] == ' ' && str[i + 2] >= 32 && str[i + 2] <= 126)
			j = i + 2;
		i++;
	}
	k = 0;
	dest = (char *)malloc(sizeof(char) * (ft_n_word(str, "\n") + 1));
	if (!dest)
		return (NULL);
	while (str[j] >= 32 && str[j] <= 126)
	{
		dest[k] = str[j];
		j++;
		k++;
	}
	dest[k] = '\0';
	return (dest); 
}

/*int	main(int argc, char **argv)
{
	char *str;

	str = (NULL);
	if (argc == 2)
		printf("%s\n", last_word(argv[1], str));
		printf("%s\n", first_word(argv[1], str));
	return (0);
}*/

