/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddychus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:31:33 by ddychus           #+#    #+#             */
/*   Updated: 2022/11/15 15:27:46 by ddychus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pt1, const void *pt2, size_t size)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned int	i;

	i = 0;
	str1 = (unsigned char *)pt1;
	str2 = (unsigned char *)pt2;
	while (i < size)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
