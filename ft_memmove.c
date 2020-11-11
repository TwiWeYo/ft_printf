/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetis <mmetis@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:25:17 by mmetis            #+#    #+#             */
/*   Updated: 2020/11/11 20:25:19 by mmetis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *sd;
	unsigned char *ss;

	if (!dst && !src)
		return (dst);
	sd = (unsigned char *)dst;
	ss = (unsigned char *)src;
	if (sd <= ss || sd >= ss + len)
		while (len--)
			*sd++ = *ss++;
	else
		while (len--)
			sd[len] = ss[len];
	return (dst);
}
