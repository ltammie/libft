#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	size_t			len;
	size_t			i;

	str = (char *)s;
	len = ft_strlen(s);
	i = 0;
	while (i <= len)
	{
		if (*str == c)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}
