/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltammie <ltammie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:03:58 by ltammie           #+#    #+#             */
/*   Updated: 2020/01/15 01:18:53 by sauron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list *head;

	if (*alst == NULL)
		return ;
	head = *alst;
	while (head)
	{
		tmp = head->next;
		ft_lstdelone(&head, del);
		head = tmp;
	}
	*alst = NULL;
}
