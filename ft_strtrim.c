/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddychus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:39:33 by ddychus           #+#    #+#             */
/*   Updated: 2022/11/15 15:46:13 by ddychus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_inset(char c, char const *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_trimend(char *s1, char *ret, unsigned int i, size_t lens1)
{
	while (++i < lens1)
		ret[i] = s1[i];
	ret[i] = '\0';
	return (ret);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			lens1;
	char			*ret;
	unsigned int	i;

	if (!s1)
		return (NULL);
	while (is_inset(*s1, set) && *s1)
		s1++;
	if (!(*s1))
	{
		ret = malloc(sizeof(char));
		if (!ret)
			return (0);
		ret[0] = '\0';
		return (ret);
	}
	lens1 = ft_strlen(s1);
	while (is_inset(s1[lens1 - 1], set))
		lens1--;
	ret = malloc(sizeof(char) * (lens1 + 1));
	if (!ret)
		return (0);
	i = -1;
	return (ft_trimend((char *)s1, ret, i, lens1));
}
