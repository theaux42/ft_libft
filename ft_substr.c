/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabou <tbabou@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:46:26 by tbabou            #+#    #+#             */
/*   Updated: 2024/01/21 05:30:09 by tbabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len, t_m_free *m_free)
{
	char	*tab;
	size_t	remmtab;

	if (s == NULL)
		return (NULL);
	remmtab = ft_strlen(s) - start;
	if (start < (unsigned int)ft_strlen(s))
	{
		if (remmtab > len)
			tab = (char *)ft_calloc(sizeof(char), len + 1, m_free);
		else
			tab = (char *)ft_calloc(sizeof(char), remmtab + 1, m_free);
		if (tab == NULL)
			return (NULL);
		ft_strlcpy(tab, &s[start], len + 1);
	}
	else
		tab = (char *)ft_calloc(1, 1, m_free);
	return (tab);
}
