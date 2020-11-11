/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetis <mmetis@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:08:28 by mmetis            #+#    #+#             */
/*   Updated: 2020/11/11 20:33:59 by mmetis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t needlelen;

	if (!haystack)
		needlelen = *haystack;
	needlelen = ft_strlen(needle);
	if (!needlelen)
		return ((char *)haystack);
	while (needlelen <= len-- && *haystack)
	{
		if (ft_strncmp(haystack, needle, needlelen) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
