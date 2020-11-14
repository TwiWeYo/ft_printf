/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetis <mmetis@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:47:59 by mmetis            #+#    #+#             */
/*   Updated: 2020/11/14 16:19:03 by mmetis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	cnt_words(char *s, char c)
{
	size_t cnt;
	size_t is_cnt;

	is_cnt = 1;
	cnt = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			if (is_cnt)
			{
				cnt++;
				is_cnt = 0;
			}
		}
		else
			is_cnt = 1;
		s++;
	}
	return (cnt);
}

static char		*ft_strchrdup(char **s, char c)
{
	char	*dup;
	size_t	i;

	i = 0;
	while (*s && **s == c)
		(*s)++;
	while ((*s)[i] && (*s)[i] != c)
		i++;
	dup = malloc((i + 1) * sizeof(char));
	if (!dup)
		return (0);
	i = 0;
	while (*s && **s != c)
	{
		dup[i] = *((*s)++);
		i++;
	}
	dup[i] = 0;
	return (dup);
}

void			split_clear(char **s)
{
	size_t i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free(s);
}

char			**ft_split(char *s, char c)
{
	char	**split;
	size_t	len;
	size_t	i;

	len = cnt_words(s, c);
	i = 0;
	split = malloc((len + 1) * sizeof(char *));
	if (!split)
		return (0);
	while (i < len)
	{
		split[i] = ft_strchrdup(&s, c);
		if (!split[i])
		{
			split_clear(split);
			return (0);
		}
		i++;
	}
	split[i] = 0;
	return (split);
}
