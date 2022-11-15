/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddychus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:34:30 by ddychus           #+#    #+#             */
/*   Updated: 2022/11/10 13:32:45 by ddychus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	char		*dest;
	const char	*src;

	if (!destination && !source)
		return (destination);
	dest = destination;
	src = source;
	if (src > dest)
		while (size--)
			*dest++ = *src++;
	else
		while (size--)
			dest[size] = src[size];
	return (destination);
}
