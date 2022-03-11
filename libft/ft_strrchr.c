/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarita <aclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 22:14:00 by aclarita          #+#    #+#             */
/*   Updated: 2021/10/09 22:45:59 by aclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*str_end;
	char	ch;

	str_end = ft_strchr(str, '\0');
	ch = (unsigned char) c;
	if (ch == '\0')
		return (str_end);
	str_end--;
	while (*str)
	{
		if (*str_end == ch)
			return (str_end);
		str++;
		str_end--;
	}
	return (NULL);
}
