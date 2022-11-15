/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddychus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:05:43 by ddychus           #+#    #+#             */
/*   Updated: 2022/11/15 13:20:04 by ddychus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int searchedChar)
{
	unsigned int	len;

	len = ft_strlen(str);
	if ((char)searchedChar == '\0')
		return ((char *)(str + len));
	str += len - 1;
	while (len > 0)
	{
		if (*str == (char)searchedChar)
			return ((char *)str);
		str--;
		len--;
	}
	return (0);
}
