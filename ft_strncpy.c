/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 18:16:32 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/17 18:18:24 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				src_over;

	i = 0;
	src_over = 1;
	while (i < n)
	{
		if (src[i] != '\0' && src_over == 1)
		{
			dest[i] = src[i];
		}
		else
		{
			src_over = 0;
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}
