#include "../includes/libft.h"

int				ft_count_words_split(const char **s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
