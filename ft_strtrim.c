/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetis <mmetis@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:43:27 by mmetis            #+#    #+#             */
/*   Updated: 2020/11/11 20:29:37 by mmetis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(char const *c, char const *set)
{
	while (*set)
		if (*c == *set++)
			return (1);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	size_t	j;
	size_t	cnt;
	char	*str;

	len = ft_strlen(s1);
	i = 0;
	cnt = 0;
	while (i < len)
		cnt += isset(s1 + i++, set);
	str = malloc((len -= cnt + 1) * sizeof(char));
	if (!str)
		return (0);
	i = -1;
	j = 0;
	while (++i < len)
		if (s1[i] != *set)
			str[j++] = s1[i];
	str[j] = 0;
	return (str);
}
