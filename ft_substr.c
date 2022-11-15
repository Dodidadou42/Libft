/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddychus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:52:52 by ddychus           #+#    #+#             */
/*   Updated: 2022/11/15 16:11:14 by ddychus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	i;

	i = -1;
	if (!s)
		return (0);
	if (ft_strlen(s) == 0 || start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		ret = malloc(sizeof(char) * ((ft_strlen(s) - start) + 1));
	else
		ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	while (++i < len && s[i + start])
		ret[i] = s[i + start];
	ret[i] = '\0';
	return (ret);
}
