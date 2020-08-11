/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltammie <ltammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 17:40:03 by ltammie           #+#    #+#             */
/*   Updated: 2020/08/07 17:40:03 by ltammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*new_str;

	if (size + 1 == 0)
		return (NULL);
	i = 0;
	new_str = (char *)malloc(sizeof(char) * (size + 1));
	if (!new_str)
		return (NULL);
	while (i < (size))
	{
		new_str[i] = '\0';
		i++;
	}
	new_str[size] = '\0';
	return (new_str);
}
