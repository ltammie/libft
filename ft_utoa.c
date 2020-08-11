/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltammie <ltammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 17:40:28 by ltammie           #+#    #+#             */
/*   Updated: 2020/08/07 17:40:28 by ltammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		nbr_length(unsigned int n)
{
	int size;

	size = 0;
	if (n == 0)
		return (size + 1);
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char			*ft_utoa(unsigned int n)
{
	int				len;
	char			*res;

	len = nbr_length(n);
	if (!(res = ft_strnew(len)))
		return (NULL);
	while (len)
	{
		res[--len] = n % 10 + '0';
		n = n / 10;
	}
	return (res);
}
