/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uplow.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetis <mmetis@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:47:50 by mmetis            #+#    #+#             */
/*   Updated: 2020/11/11 20:35:50 by mmetis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	return (c - 32 * (c >= 'a' && c <= 'z'));
}