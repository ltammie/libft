/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltammie <ltammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 17:40:24 by ltammie           #+#    #+#             */
/*   Updated: 2020/08/07 17:40:24 by ltammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(unsigned long long value, int base)
{
	int		size;

	size = 0;
	while (value /= base)
		size++;
	return (size + 1);
}

char		*ft_ulltoa_base(unsigned long long value, int base)
{
	char				*str;
	int					size;
	char				*tab;

	tab = "0123456789ABCDEF";
	if (base < 2 || base > 16)
		return (0);
	size = get_size(value, base);
	if (!(str = ft_strnew(size)))
		return (NULL);
	while (size > 0)
	{
		str[size - 1] = tab[ft_abs((int)(value % base))];
		size--;
		value /= base;
	}
	return (str);
}
