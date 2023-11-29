/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:38:52 by tbabou            #+#    #+#             */
/*   Updated: 2023/11/23 23:01:29 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dst2;

	dst2 = (char *)dst;
	i = 0;
	while (i != n)
	{
		*(char *)dst2 = *(char *)src;
		dst2++;
		src++;
		i++;
	}
	return (dst);
}
