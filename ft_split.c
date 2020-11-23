/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetis <mmetis@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:47:59 by mmetis            #+#    #+#             */
/*   Updated: 2020/11/23 18:14:29 by mmetis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_wordlen(char *s, char c, size_t *len)
{
	*len = 0;
	while (*s == c)
		s++;
	while (s[*len] && s[*len] != c)
		(*len)++;
	return (s);
}

static size_t	ft_wordcnt(char *s, char c)
{
	size_t len;

	len = 0;
	s = ft_wordlen(s, c, &len);
	if (!(*s))
		return (0);
	return (1 + ft_wordcnt(s + len, c));
}

static char		**ft_clear(char **str)
{
	size_t i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	return (0);
}

char			**ft_split(char *str, char c)
{
	char	**split;
	size_t	len;
	size_t	i;
	size_t	cnt;

	cnt = ft_wordcnt(str, c);
	if (!(split = malloc((cnt + 1) * sizeof(char*))))
		return (0);
	i = 0;
	len = 0;
	while (i < cnt)
	{
		str = ft_wordlen(str, c, &len);
		split[i] = ft_substr(str, 0, len);
		if (!split[i++])
			return (ft_clear(split));
		str += len;
	}
	split[i] = 0;
	return (split);
}
