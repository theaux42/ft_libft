/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:34:47 by tbabou            #+#    #+#             */
/*   Updated: 2024/01/20 23:47:04 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_all(t_m_free *m_free)
{
	t_free	*tmp;

	while (m_free->list)
	{
		tmp = m_free->list;
		m_free->list = m_free->list->next;
		free(tmp->ptr);
		free(tmp);
	}
}
