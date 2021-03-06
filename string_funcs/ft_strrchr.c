#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	size_t			len;
	size_t			i;

	str = (char *)s;
	len = ft_strlen(s);
	i = 0;
	while (len > i)
	{
		if (str[len] == c)
			return (&str[len]);
		len--;
	}
	if (str[0] == c)
		return (&str[0]);
	return (NULL);
}
