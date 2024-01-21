/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_malloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:36:26 by tbabou            #+#    #+#             */
/*   Updated: 2024/01/20 23:47:24 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_add_malloc(void *ptr, t_m_free *m_free)
{
	t_free	*node;

	node = malloc(sizeof(t_free));
	if (!node)
		ft_free_all(m_free);
	node->ptr = ptr;
	node->next = m_free->list;
	m_free->list = node;
}
