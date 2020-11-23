/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmetis <mmetis@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:14:14 by mmetis            #+#    #+#             */
/*   Updated: 2020/11/19 18:31:13 by mmetis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list *start;

	if (!lst)
		return (0);
	start = ft_lstnew(f(lst->content));
	if (!start)
		return (0);
	if (lst->next)
	{
		start->next = ft_lstmap(lst->next, f, del);
		if (start->next == 0)
			ft_lstdelone(start, del);
	}
	return (start);
}
