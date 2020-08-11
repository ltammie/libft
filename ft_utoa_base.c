/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltammie <ltammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 17:40:34 by ltammie           #+#    #+#             */
/*   Updated: 2020/08/07 17:40:57 by ltammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(unsigned int value, int base)
{
	int		size;

	size = 0;
	while (value /= base)
		size++;
	return (size + 1);
}

char		*ft_utoa_base(unsigned int value, int base)
{
	char			*str;
	int				size;
	char			*tab;

	size = 0;
	tab = "0123456789ABCDEF";
	if (base < 2 || base > 16)
		return (0);
	size = get_size(value, base);
	if ((str = ft_strnew(size)) == NULL)
		return (NULL);
	while (size > 0)
	{
		str[size - 1] = tab[ft_abs(value % base)];
		size--;
		value /= base;
	}
	return (str);
}
