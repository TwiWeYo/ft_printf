/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetis <mmetis@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:43:27 by mmetis            #+#    #+#             */
/*   Updated: 2020/11/14 16:04:30 by mmetis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(char const c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	finish;
	size_t	i;
	char	*str;

	start = 0;
	finish = ft_strlen(s1);
	while (isset(s1[start], set))
		start++;
	while (finish && isset(s1[--finish], set))
		;
	if (!finish)
		start = 0;
	str = malloc((finish - start + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (finish && start < finish + 1)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}
