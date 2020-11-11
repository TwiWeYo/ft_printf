/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetis <mmetis@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 20:00:18 by mmetis            #+#    #+#             */
/*   Updated: 2020/11/11 20:23:21 by mmetis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*cal;

	cal = malloc(count * size);
	if (cal)
		ft_bzero(cal, count * size);
	return (cal);
}
