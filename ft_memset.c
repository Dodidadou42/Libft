/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddychus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:53:15 by ddychus           #+#    #+#             */
/*   Updated: 2022/11/09 13:29:53 by ddychus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pt, int c, size_t count)
{
	unsigned int	i;
	char			*pt_bis;

	pt_bis = pt;
	i = 0;
	while (i < count)
	{
		pt_bis[i] = c;
		i++;
	}
	return (pt);
}
