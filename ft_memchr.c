/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddychus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:07:10 by ddychus           #+#    #+#             */
/*   Updated: 2022/11/15 09:50:53 by ddychus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *pt, int n, size_t size)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)pt;
	while (i < size)
	{
		if (str[i] == (char)n)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}
