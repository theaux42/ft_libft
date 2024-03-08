/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:09:01 by tbabou            #+#    #+#             */
/*   Updated: 2024/03/08 01:15:48 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2,
	t_m_free *m_free)
{
	char	*tab;
	char	*p;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	tab = (char *)ft_malloc((ft_strlen(s1) + ft_strlen(s2))
			* sizeof(char) + 1, m_free);
	if (tab == NULL)
		return (NULL);
	p = tab;
	while (*s1 != '\0')
		*tab++ = *s1++;
	while (*s2 != '\0')
		*tab++ = *s2++;
	*tab = '\0';
	return (p);
}
