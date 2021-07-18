#ifndef FT_H
# define FT_H

# define BASE "012345679"
# include "dict_struct.h"

# include <stdlib.h>
# include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
int		ft_nbrcmp(char *nbr1, char *nbr2, char *base);
int		pos_base(char c, char *base);
int		ft_base_char_cmp(char nbr1, char nbr2, char *base);
void	ft_putstr(char *str);
int		special_number(char	*number);

#endif
