#include "../includes/libft.h"

void	ft_str_to_lower(char **str)
{
	int		i;

	i = 0;
	while ((*str)[i])
	{
		(*str)[i] = ft_tolower((*str)[i]);
		i++;
	}
}
