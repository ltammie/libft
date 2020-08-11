/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltammie <ltammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 17:38:22 by ltammie           #+#    #+#             */
/*   Updated: 2020/08/07 17:38:22 by ltammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char *p;
	unsigned char a;

	p = (unsigned char *)s;
	a = (unsigned char)c;
	while (len--)
	{
		*p = a;
		p++;
	}
	return (s);
}
