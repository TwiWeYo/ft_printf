/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memsrch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetis <mmetis@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:12:48 by mmetis            #+#    #+#             */
/*   Updated: 2020/11/08 15:36:48 by mmetis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = -1;
	while (++i < n)
		if (str[i] == (unsigned char)c)
			return (str + i);
	return (0);
}
