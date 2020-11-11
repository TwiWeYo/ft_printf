/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetis <mmetis@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:27:45 by mmetis            #+#    #+#             */
/*   Updated: 2020/11/11 20:27:46 by mmetis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start,
	size_t len)
{
	char	*str;
	size_t	i;

	str = malloc((len + 1) * sizeof(char));
	if (!str || start > ft_strlen(s))
		return (0);
	s += start;
	i = -1;
	while (s && ++i < len)
		str[i] = s[i];
	str[i] = 0;
	return (str);
}
