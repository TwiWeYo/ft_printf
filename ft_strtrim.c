/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetis <mmetis@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:43:27 by mmetis            #+#    #+#             */
/*   Updated: 2020/11/23 20:51:25 by mmetis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	const char	*finish;
	char		*str;

	if (!s1 || !set)
		return (0);
	start = s1;
	while (*start && ft_strchr(set, *start))
		start++;
	if (!*start)
		return (ft_strdup(""));
	finish = start + ft_strlen(start) - 1;
	while (ft_strchr(set, *finish) && finish > start)
		finish--;
	str = ft_substr(start, 0, finish - start + 1);
	return (str);
}
