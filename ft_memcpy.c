/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddychus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:00:36 by ddychus           #+#    #+#             */
/*   Updated: 2022/11/15 15:27:24 by ddychus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t size)
{
	char			*src;
	char			*desti;
	unsigned int	i;

	if (!dest && !source)
		return (dest);
	i = 0;
	src = (char *)source;
	desti = (char *)dest;
	while (i < size)
	{
		desti[i] = src[i];
		i++;
	}
	dest = (void *)desti;
	return (dest);
}
