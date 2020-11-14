/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetis <mmetis@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:30:20 by mmetis            #+#    #+#             */
/*   Updated: 2020/11/14 14:25:17 by mmetis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	if (!dstsize)
		return (ft_strlen(src));
	while (src[i] && dstsize - i - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	if (ft_strlen(src) >= dstsize)
		return (ft_strlen(src));
	return (i);
}
