/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:40:29 by tbabou            #+#    #+#             */
/*   Updated: 2023/11/09 15:50:20 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	checked;

	i = 0;
	checked = (unsigned char)c;
	s1 = (unsigned char *)s;
	while (i != n)
	{
		if (s1[i] == checked)
			return ((void *)&s1[i]);
		i++;
	}
	return (NULL);
}
