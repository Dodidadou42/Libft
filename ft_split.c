/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddychus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:11:23 by ddychus           #+#    #+#             */
/*   Updated: 2022/11/15 16:04:03 by ddychus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c)
{
	int	n;

	n = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			n++;
			while (*s && *s != c)
				s++;
		}
	}
	return (n);
}

int	ft_wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	*get_word(char const *s, char c)
{
	int		i;
	int		len;
	char	*ret;

	i = 0;
	len = ft_wordlen(s, c);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	while (i < len)
	{
		ret[i] = s[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	ret = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!ret)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			ret[i] = get_word(s, c);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	ret[i] = 0;
	return (ret);
}
