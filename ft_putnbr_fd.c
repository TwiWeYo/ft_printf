/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writenum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetis <mmetis@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 14:03:35 by mmetis            #+#    #+#             */
/*   Updated: 2020/11/14 14:49:40 by mmetis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			writenum(unsigned int num, int fd)
{
	char c;

	if (num > 9)
		writenum(num / 10, fd);
	c = num % 10 + '0';
	write(fd, &c, 1);
}

static unsigned int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

void				ft_putnbr_fd(int n, int fd)
{
	unsigned int num;

	if (n < 0)
		write(fd, "-", 1);
	num = ft_abs(n);
	writenum(num, fd);
}
