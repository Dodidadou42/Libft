/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddychus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:34:29 by ddychus           #+#    #+#             */
/*   Updated: 2022/11/15 15:30:20 by ddychus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	const size_t	srclen = ft_strlen(src);

	if (srclen + 1 < size)
	{
		ft_memcpy(dest, src, srclen + 1);
	}
	else if (size)
	{
		ft_memcpy(dest, src, size -1);
		dest[size - 1] = '\0';
	}
	return (srclen);
}
