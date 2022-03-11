/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarita <aclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:07:01 by aclarita          #+#    #+#             */
/*   Updated: 2021/10/13 23:13:34 by aclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lnew;

	lnew = (t_list *) malloc(sizeof(t_list));
	if (!lnew)
		return (0);
	(*lnew).content = content;
	lnew->next = NULL;
	return (lnew);
}
