/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltammie <ltammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 17:37:46 by ltammie           #+#    #+#             */
/*   Updated: 2020/08/07 17:37:46 by ltammie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *tmp;

	tmp = (t_list*)malloc(sizeof(t_list));
	if (tmp != NULL)
	{
		if (!content)
		{
			tmp->content = NULL;
			tmp->content_size = 0;
		}
		else
		{
			if (!(tmp->content = (void *)malloc(sizeof(size_t) * content_size)))
			{
				free(tmp);
				return (NULL);
			}
			tmp->content = ft_memcpy(tmp->content, content, content_size);
			tmp->content_size = content_size;
		}
		tmp->next = NULL;
	}
	return (tmp);
}
