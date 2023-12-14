/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 02:31:57 by tbabou            #+#    #+#             */
/*   Updated: 2023/12/14 18:11:04 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int		result;

	ptr = NULL;
	result = nmemb * size;
	if (!nmemb || !size || nmemb == result / size)
		ptr = malloc(result);
	if (ptr)
		ft_bzero(ptr, result);
	return (ptr);
}
