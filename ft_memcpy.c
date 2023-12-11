/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:38:52 by tbabou            #+#    #+#             */
/*   Updated: 2023/12/11 16:05:02 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;

	if (!dst && !src)
		return (0);
	t1 = (unsigned char *)dst;
	t2 = (unsigned char *)src;
	while (n > 0)
	{
		*t1++ = *t2++;
		n--;
	}
	return (dst);
}
