/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 02:31:57 by tbabou            #+#    #+#             */
/*   Updated: 2024/01/21 05:29:30 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size, t_m_free *m_free)
{
	void	*ptr;
	int		result;

	ptr = NULL;
	result = nmemb * size;
	if (!nmemb || !size || nmemb == result / size)
		ptr = ft_malloc(result, m_free);
	if (ptr)
		ft_bzero(ptr, result);
	return (ptr);
}
