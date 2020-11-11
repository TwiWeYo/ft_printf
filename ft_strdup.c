/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetis <mmetis@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:23:02 by mmetis            #+#    #+#             */
/*   Updated: 2020/11/11 20:23:05 by mmetis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		len;

	len = ft_strlen(s1) + 1;
	dup = malloc(len * sizeof(char));
	if (dup)
	{
		ft_memcpy(dup, s1, len);
		dup[len] = 0;
	}
	return (dup);
}
