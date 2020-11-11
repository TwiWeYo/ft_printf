/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetis <mmetis@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:33:39 by mmetis            #+#    #+#             */
/*   Updated: 2020/11/11 20:33:41 by mmetis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	if (c == 0)
		return ((char *)(s + len));
	while (len--)
	{
		if (s[len] == (char)c)
			return ((char *)(s + len));
	}
	return (0);
}
