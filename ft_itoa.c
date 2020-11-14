/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetis <mmetis@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:53:27 by mmetis            #+#    #+#             */
/*   Updated: 2020/11/14 14:35:51 by mmetis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			cntnum(long n)
{
	if (n < 10)
		return (1);
	return (cntnum(n / 10) + 1);
}

static unsigned int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

static void			recitoa(long n, char *str)
{
	*(str + 1) = 0;
	if (n >= 10)
		recitoa(n / 10, str - 1);
	*str = n % 10 + 48;
}

char				*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		len;
	int		sign;

	num = ft_abs(n);
	sign = n < 0;
	len = cntnum(num);
	str = ft_calloc(len + sign + 1, sizeof(char));
	if (!str)
		return (0);
	*str = '-' * sign;
	recitoa(num, str + len - (!sign));
	return (str);
}
