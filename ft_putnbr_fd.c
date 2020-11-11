/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writenum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetis <mmetis@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 14:03:35 by mmetis            #+#    #+#             */
/*   Updated: 2020/11/08 15:45:17 by mmetis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		writenum(size_t num, int fd)
{
	char c;

	if (num > 9)
		writenum(num / 10, fd);
	c = num % 10 + '0';
	write(fd, &c, 1);
}

static size_t	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

void			ft_putnbr_fd(int n, int fd)
{
	size_t num;

	num = ft_abs(n);
	if (n < 0)
		write(fd, "-", 1);
	writenum(num, fd);
}
