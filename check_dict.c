/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 16:21:00 by lmery             #+#    #+#             */
/*   Updated: 2021/07/18 19:28:49 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "ft_h.h"

char *ft_strcat(char *dest, char *src)
{
	int    i;
	int    dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (src[i])
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}

int	dict_size(int fd)
{
	int		bytes_read;
	char	c[2];

	bytes_read = 0;
	while (read(fd, &c, 1)  != 0)
	{
		c[1] = '\0';
		bytes_read++;
	}
	close(fd);
	return (bytes_read);
}

char  **getter(void)
{
	int		fd;
	char    *stocker;
	char    buf[2];
	int		i;
	int		k;
	char 	**dico;

	fd = open("dict", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Dict Error\n");
			return (0);
	}
	stocker = (char *)malloc(sizeof(char) * (1 + dict_size(fd)));
	fd = open("dict", O_RDONLY);
	while (read(fd, buf, 1) != '\0')
	{
		buf[1] = '\0';
		ft_strcat(stocker, buf);
	}
	if (!(ft_parser(stocker)))
		ft_putstr("Dict Error\n");
	dico = ft_split(stocker, "\n");
	i = 0;
	k = 0;
	dico = ft_tri(dico, (*ft_sort));
	if (ft_tri(dico, (*ft_sort)) == 0)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	while (dico[i])
	{
		printf("%s\n", dico[i]);
		i++;
	}
	
	return (dico);
}
