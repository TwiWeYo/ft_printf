/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetis <mmetis@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:27:45 by mmetis            #+#    #+#             */
/*   Updated: 2020/11/23 20:58:46 by mmetis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start,
	size_t len)
{
	char	*str;
	size_t	size;

	size = ft_strlen(s);
	if (start > size)
		return (ft_strdup(""));
	if (len > size - start)
		len = size - start;
	if (!(str = malloc((len + 1) * sizeof(char))))
		return (0);
	s += start;
	ft_strlcpy(str, (char *)s, len + 1);
	return (str);
}
