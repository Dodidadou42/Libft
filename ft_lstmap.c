/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddychus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:31:12 by ddychus           #+#    #+#             */
/*   Updated: 2022/11/15 18:19:44 by ddychus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*temp;

	if (!lst || !f || !del)
		return (0);
	temp = ft_lstnew(f(lst->content));
	if (!temp)
		return (0);
	ret = temp;
	lst = lst->next;
	while (lst)
	{
		temp->next = ft_lstnew(f(lst->content));
		if (!temp->next)
		{
			ft_lstclear(&ret, del);
			return (0);
		}
		temp = temp->next;
		lst = lst->next;
	}
	temp->next = NULL;
	return (ret);
}
