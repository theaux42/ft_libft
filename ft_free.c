/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:14:49 by tbabou            #+#    #+#             */
/*   Updated: 2024/01/20 23:47:12 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(void *ptr, t_m_free *m_free)
{
	t_free	*current;
	t_free	*prev;

	current = m_free->list;
	prev = NULL;
	while (current != NULL)
	{
		if (current->ptr == ptr)
		{
			if (prev == NULL)
				m_free->list = current->next;
			else
				prev->next = current->next;
			free(current->ptr);
			free(current);
			return ;
		}
		prev = current;
		current = current->next;
	}
}
