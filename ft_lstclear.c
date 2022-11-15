/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddychus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:33:16 by ddychus           #+#    #+#             */
/*   Updated: 2022/11/15 15:25:08 by ddychus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (del && lst)
	{
		while (lst[0] != NULL)
		{
			tmp = lst[0]->next;
			del(lst[0]->content);
			free(*lst);
			*lst = tmp;
		}
	}
}
