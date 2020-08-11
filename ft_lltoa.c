/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltammie <ltammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 17:37:13 by ltammie           #+#    #+#             */
/*   Updated: 2020/08/07 17:38:17 by ltammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		get_len(long long n)
{
	int	len;

	len = (n < 0) ? 2 : 1;
	while (n /= 10)
		++len;
	return (len);
}

char			*ft_lltoa(long long n)
{
	char	*str;
	int		i;
	int		flag;

	flag = (n < 0) ? 1 : 0;
	i = get_len(n);
	if ((str = ft_strnew(i)) == NULL)
		return (NULL);
	while (i > 0)
	{
		str[--i] = ft_abs((int)(n % 10)) + 48;
		n /= 10;
	}
	str[0] = (flag ? '-' : str[0]);
	return (str);
}
