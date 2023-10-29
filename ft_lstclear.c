/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutzke <leafarbutzke@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:55:58 by rbutzke           #+#    #+#             */
/*   Updated: 2023/10/29 11:12:46 by rbutzke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*h;

	if (!del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		h = *lst;
		*lst = h->next;
		free(h);
	}
	*lst = NULL;
}
