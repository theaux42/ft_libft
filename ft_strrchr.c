/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:50:31 by tbabou            #+#    #+#             */
/*   Updated: 2023/11/17 19:31:40 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*cur;

	cur = (char *)s + ft_strlen((char *)s);
	while (*cur != c)
	{
		if (cur == s)
		{
			return (NULL);
		}
		cur--;
	}
	return (cur);
}
