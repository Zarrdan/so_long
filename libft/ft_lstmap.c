/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarita <aclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:01:06 by aclarita          #+#    #+#             */
/*   Updated: 2021/10/14 19:13:57 by aclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	t_list	*i;
	t_list	*j;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		j = ft_lstnew((*f)(lst->content));
		if (!j)
		{
			ft_lstclear(&j, del);
			return (0);
		}
		lst = lst->next;
		ft_lstadd_back(&i, j);
	}
	return (i);
}
