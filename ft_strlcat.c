/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddychus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:25:06 by ddychus           #+#    #+#             */
/*   Updated: 2022/11/10 15:47:39 by ddychus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	if (!dest && size == 0)
		return (0);
	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	while (src[j] && size && (j + i) < size -1)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	j = 0;
	while (src[j])
		j++;
	return (i + j);
}
