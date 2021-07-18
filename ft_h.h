/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 18:43:23 by amarchan          #+#    #+#             */
/*   Updated: 2021/07/18 19:50:42 by amarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define BASE "012345679"

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	**ft_split(char *str, char *charset);
char	**getter(void);
int		ft_parser(char *str);
int		ft_contrast(char *str1, char *str2);
char	*first_word(char *str, char *dest);
char	*last_word(char *str, char *dest);
int		ft_n_word(char *str, char *charset);
int		ft_strinclude(char c, char *charset);
char	**ft_sort(char **str, int (*tes)(char *str1, char *str2));
int		ft_nbrcmp(char *s1, char *s2);
int		check_double(char **str);
int		check_sub(char **str);
int		ft_strcmp (char *s1, char *s2);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
int		pos_base(char c, char *base);
int		ft_base_char_cmp(char nbr1, char nbr2, char *base);
void	ft_putstr(char *str);
int		special_number(char	*number);
char	**getter(void);
void	print_number_litteral(char *number, char **dict_list);

#endif
