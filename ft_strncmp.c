/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltammie <ltammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 17:39:52 by ltammie           #+#    #+#             */
/*   Updated: 2020/08/07 17:39:52 by ltammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	while ((a[i] != '\0' || b[i] != '\0') && i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}
