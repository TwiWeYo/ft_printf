/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetis <mmetis@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:24:47 by mmetis            #+#    #+#             */
/*   Updated: 2020/11/11 20:24:53 by mmetis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*sd;
	unsigned char	*ss;
	size_t			i;

	sd = (unsigned char *)dst;
	ss = (unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		sd[i] = ss[i];
		i++;
	}
	return (dst);
}
