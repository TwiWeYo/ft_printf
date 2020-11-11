/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strl.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetis <mmetis@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:46:25 by mmetis            #+#    #+#             */
/*   Updated: 2020/11/11 20:30:55 by mmetis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t len;

	len = ft_strlen(dst);
	if (!src)
		*src = 0;
	if (dstsize >= ft_strlen(dst))
		ft_strlcpy(dst + len, src, dstsize - len);
	if (len > dstsize)
		return (dstsize + ft_strlen(src));
	return (len + ft_strlen(src));
}
