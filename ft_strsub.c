/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltammie <ltammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 17:40:15 by ltammie           #+#    #+#             */
/*   Updated: 2020/08/07 17:40:15 by ltammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (s)
	{
		i = 0;
		if ((sub = ft_strnew(len)))
		{
			while (i < len)
			{
				sub[i] = s[start];
				i++;
				start++;
			}
		}
		else
			return (NULL);
		return (sub);
	}
	else
		return (NULL);
}
